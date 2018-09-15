#define _CRT_SECURE_NO_WARNINGS 1

#include "CommentConvert.h"

void CommentConvert(FILE* pfRead, FILE*pfWrite)
{
	State state = NUL_STATE;
	while(state != END_STATE)
	{
		switch(state)
		{
		case NUL_STATE:
			DoNulState(pfRead, pfWrite, &state);
			break;
		case C_STATE:
			DoCState(pfRead, pfWrite, &state);
			break;
		case CPP_STATE:
			DoCppState(pfRead, pfWrite, &state);
			break;
		}
	}
}

void DoNulState(FILE* pfRead, FILE*pfWrite, State* ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '/':
		{
			int second = fgetc(pfRead);
			switch(second)
			{
			case '*':
				{
					*ps = C_STATE;
					fputc('/', pfWrite);
					fputc('/', pfWrite);
				}
				break;
			case '/':
				{
					*ps = CPP_STATE;
					fputc(first, pfWrite);
					fputc(second, pfWrite);
				}
				break;
			default:
				{
					fputc(first, pfWrite);
					fputc(second, pfWrite);
				}
				break;
			}
		}
		break;
	case EOF:
		*ps = END_STATE;
		break;
	default:
		fputc(first, pfWrite);
		break;
	}
}
void DoCState(FILE* pfRead, FILE*pfWrite, State* ps)
{
	int fisrt = fgetc(pfRead);
	switch(fisrt)
	{
	case '*':
		{
			int second = fgetc(pfRead);
			switch(second)
			{
			case '/':
				{
					fputc('\n', pfWrite);
					*ps = NUL_STATE;
				}
				break;
			case '*':
				//...
				break;
			default:
				fputc(fisrt, pfWrite);
				fputc(second, pfWrite);
				break;
			}
		}
		break;
	case '\n':
		{
			fputc(fisrt, pfWrite);
			fputc('/', pfWrite);
			fputc('/', pfWrite);
		}
		break;
	default:
		{
			fputc(fisrt, pfWrite);
		}
		break;
	}
}
void DoCppState(FILE* pfRead, FILE*pfWrite, State* ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '\n':
		{
			*ps = NUL_STATE;
			fputc(first, pfWrite);
		}
		break;
	case EOF:
		{
			*ps = END_STATE;
		}
		break;
	default:
		{
			fputc(first, pfWrite);
		}
		break;
	}
}

