#line 1 "c:\\classcode\\81°à\\test.c\\test.c\\test.c"



#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"














#pragma once




#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"














 





#line 22 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 23 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


















#line 42 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 46 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"














#pragma once
































































































































#line 145 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"


#line 148 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"





#line 154 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"



#line 158 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"


#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"












#pragma once








#line 23 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"
#line 24 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"





typedef __w64 unsigned int   size_t;
#line 31 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"

#line 33 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"


typedef unsigned short wchar_t;

#line 38 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"











#line 50 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"






enum SA_YesNoMaybe
{
	
	SA_No = 0x0fff0001,
	SA_Maybe = 0x0fff0010,
	SA_Yes = 0x0fff0100
};

typedef enum SA_YesNoMaybe SA_YesNoMaybe;

enum SA_AccessType
{
	SA_NoAccess = 0,
	SA_Read = 1,
	SA_Write = 2,
	SA_ReadWrite = 3
};

typedef enum SA_AccessType SA_AccessType;




[source_annotation_attribute( SA_Parameter )]
struct PreAttribute
{




	unsigned int Deref;
	SA_YesNoMaybe Valid;
	SA_YesNoMaybe Null;
	SA_YesNoMaybe Tainted;
	SA_AccessType Access;
	size_t ValidElementsConst;
	size_t ValidBytesConst;
	const wchar_t* ValidElements;
	const wchar_t* ValidBytes;
	const wchar_t* ValidElementsLength;
	const wchar_t* ValidBytesLength;
	size_t WritableElementsConst;
	size_t WritableBytesConst;
	const wchar_t* WritableElements;
	const wchar_t* WritableBytes;
	const wchar_t* WritableElementsLength;
	const wchar_t* WritableBytesLength;
	size_t ElementSizeConst;
	const wchar_t* ElementSize;
	SA_YesNoMaybe NullTerminated;
	const wchar_t* Condition;
};


[source_annotation_attribute( SA_Parameter|SA_ReturnValue )]
struct PostAttribute
{




	unsigned int Deref;
	SA_YesNoMaybe Valid;
	SA_YesNoMaybe Null;
	SA_YesNoMaybe Tainted;
	SA_AccessType Access;
	size_t ValidElementsConst;
	size_t ValidBytesConst;
	const wchar_t* ValidElements;
	const wchar_t* ValidBytes;
	const wchar_t* ValidElementsLength;
	const wchar_t* ValidBytesLength;
	size_t WritableElementsConst;
	size_t WritableBytesConst;
	const wchar_t* WritableElements;
	const wchar_t* WritableBytes;
	const wchar_t* WritableElementsLength;
	const wchar_t* WritableBytesLength;
	size_t ElementSizeConst;
	const wchar_t* ElementSize;
	SA_YesNoMaybe NullTerminated;
	SA_YesNoMaybe MustCheck;
	const wchar_t* Condition;
};

[source_annotation_attribute( SA_Parameter )]
struct FormatStringAttribute
{




	const wchar_t* Style;
	const wchar_t* UnformattedAlternative;
};


[source_annotation_attribute( SA_ReturnValue )]
struct InvalidCheckAttribute
{




	long Value;
};

[source_annotation_attribute( SA_Method )]
struct SuccessAttribute
{




	const wchar_t* Condition;
};


[source_annotation_attribute( SA_Parameter )]
struct PreBoundAttribute
{



	unsigned int Deref;
};


[source_annotation_attribute( SA_Parameter|SA_ReturnValue )]
struct PostBoundAttribute
{



	unsigned int Deref;
};


[source_annotation_attribute( SA_Parameter )]
struct PreRangeAttribute
{



	unsigned int Deref;
	const char* MinVal;
	const char* MaxVal;
};


[source_annotation_attribute( SA_Parameter|SA_ReturnValue )]
struct PostRangeAttribute
{



	unsigned int Deref;
	const char* MinVal;
	const char* MaxVal;
};

#line 218 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"



















































typedef struct PreAttribute SA_Pre;
typedef struct PreAttribute PreAttribute;
typedef struct PostAttribute SA_Post;
typedef struct PostAttribute PostAttribute;
typedef struct FormatStringAttribute SA_FormatString;
typedef struct InvalidCheckAttribute SA_InvalidCheck; 
typedef struct SuccessAttribute      SA_Success;
typedef struct PreBoundAttribute     SA_PreBound;
typedef struct PostBoundAttribute    SA_PostBound;
typedef struct PreRangeAttribute     SA_PreRange;
typedef struct PostRangeAttribute    SA_PostRange;

#line 282 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"

#line 284 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"




















#line 305 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"


#line 308 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\codeanalysis\\sourceannotations.h"

#line 161 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"
#line 162 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"







































































































































































































































































































































































































































































































































































































































































                                                




                                                


























































































































































































































#line 1034 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"































































































#line 1130 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"



































































































#line 1230 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"



















































#line 1282 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"
























































































































































































































#line 1499 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"
#line 1500 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"




























































































































































































































#line 1721 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
#line 1755 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"



































































































































































































































    
    
#line 1985 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"






#line 1992 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"
#line 1993 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\sal.h"







#line 57 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#pragma pack(push,8)

#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"












#pragma once






#line 21 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"








#pragma pack(push,8)












#line 43 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"





typedef __w64 unsigned int   uintptr_t;
#line 50 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"

#line 52 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"





typedef char *  va_list;
#line 59 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"

#line 61 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"





#line 67 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"











#line 79 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"


#line 82 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"













#line 96 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"












































#line 141 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"





#pragma pack(pop)

#line 149 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\vadefs.h"
#line 64 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"









#line 74 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 79 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 84 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 92 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 99 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 101 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 102 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"








#line 111 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 112 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










#line 123 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


#line 126 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 127 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





#line 133 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"









#line 143 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 145 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 153 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 154 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 159 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 161 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 162 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 167 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 169 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 170 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


 

#line 175 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
  
 #line 177 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 178 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










#line 189 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 190 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 197 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 198 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

















#line 216 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 221 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"








#line 230 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 237 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 238 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





#line 244 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 251 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 252 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 259 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 260 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 265 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


#line 268 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 270 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 271 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 272 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





#line 278 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










#line 289 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 291 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 292 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 293 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










#line 304 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 311 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 312 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 320 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 322 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 323 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



 
  
 



#line 333 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 334 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


 
  
  
 



#line 344 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 345 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


 
  
   
  

#line 353 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
 



#line 358 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 359 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


 
  
 



#line 368 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 369 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


 
  
 



#line 378 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 379 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 383 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





#line 389 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 394 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 396 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 397 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"












typedef size_t rsize_t;

#line 412 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 413 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





typedef __w64 int            intptr_t;
#line 420 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 422 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"














typedef __w64 int            ptrdiff_t;
#line 438 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 440 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







typedef unsigned short wint_t;
typedef unsigned short wctype_t;

#line 451 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


















typedef int errno_t;
#line 471 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


typedef __w64 long __time32_t;   

#line 476 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


typedef __int64 __time64_t;     

#line 481 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





typedef __time64_t time_t;      
#line 488 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 490 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 498 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 499 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 504 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 506 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 507 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 512 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 514 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 515 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"





#line 521 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 525 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"




#line 530 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 532 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 533 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"










 __declspec(dllimport) void __cdecl _invalid_parameter(   const wchar_t *,    const wchar_t *,    const wchar_t *, unsigned int, uintptr_t);



#line 548 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

__declspec(dllimport) __declspec(noreturn)
void __cdecl _invoke_watson(   const wchar_t *,    const wchar_t *,    const wchar_t *, unsigned int, uintptr_t);


 
  
 #line 556 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"












#line 569 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 577 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



















































































































































#line 725 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"














#line 740 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 741 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"









































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1807 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"















































































































































#line 1951 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"
#line 1952 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;


typedef struct tagLC_ID {
        unsigned short wLanguage;
        unsigned short wCountry;
        unsigned short wCodePage;
} LC_ID, *LPLC_ID;

#line 1973 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"


typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned long lc_handle[6]; 
        LC_ID lc_id[6];
        struct {
            char *locale;
            wchar_t *wlocale;
            int *refcount;
            int *wrefcount;
        } lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
} threadlocinfo;

#line 2002 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"







#line 2010 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 2012 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 2016 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 2018 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 2022 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 2024 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"






#line 2031 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"



#line 2035 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#pragma pack(pop)

#line 2039 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\crtdefs.h"

#line 21 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"





#pragma pack(push,8)





























struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
        };
typedef struct _iobuf FILE;

#line 69 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"










#line 80 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"













#line 94 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"





















#line 116 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"







#line 124 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
#line 125 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"




__declspec(dllimport) FILE * __cdecl __iob_func(void);
#line 131 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"










#line 142 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"



typedef __int64 fpos_t;




#line 151 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
#line 152 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


#line 155 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"






#line 162 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
























 __declspec(dllimport) int __cdecl _filbuf(   FILE * _File );
 __declspec(dllimport) int __cdecl _flsbuf(  int _Ch,    FILE * _File);




 __declspec(dllimport) FILE * __cdecl _fsopen(   const char * _Filename,    const char * _Mode,   int _ShFlag);
#line 194 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

__declspec(dllimport) void __cdecl clearerr(   FILE * _File);

 __declspec(dllimport) errno_t __cdecl clearerr_s(   FILE * _File );
#line 199 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl fclose(   FILE * _File);
 __declspec(dllimport) int __cdecl _fcloseall(void);




 __declspec(dllimport) FILE * __cdecl _fdopen(  int _FileHandle,    const char * _Mode);
#line 207 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) int __cdecl feof(  FILE * _File);
 __declspec(dllimport) int __cdecl ferror(  FILE * _File);
 __declspec(dllimport) int __cdecl fflush(   FILE * _File);
 __declspec(dllimport) int __cdecl fgetc(   FILE * _File);
 __declspec(dllimport) int __cdecl _fgetchar(void);
 __declspec(dllimport) int __cdecl fgetpos(   FILE * _File ,   fpos_t * _Pos);
 __declspec(dllimport) char * __cdecl fgets(    char * _Buf,   int _MaxCount,    FILE * _File);




 __declspec(dllimport) int __cdecl _fileno(  FILE * _File);
#line 221 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"




#line 226 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) char * __cdecl _tempnam(   const char * _DirName,    const char * _FilePrefix);



#line 232 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) int __cdecl _flushall(void);
  __declspec(dllimport) FILE * __cdecl fopen(   const char * _Filename,    const char * _Mode);

 __declspec(dllimport) errno_t __cdecl fopen_s(     FILE ** _File,    const char * _Filename,    const char * _Mode);
#line 238 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl fprintf(   FILE * _File,     const char * _Format, ...);

 __declspec(dllimport) int __cdecl fprintf_s(   FILE * _File,     const char * _Format, ...);
#line 242 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl fputc(  int _Ch,    FILE * _File);
 __declspec(dllimport) int __cdecl _fputchar(  int _Ch);
 __declspec(dllimport) int __cdecl fputs(   const char * _Str,    FILE * _File);
 __declspec(dllimport) size_t __cdecl fread(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,    FILE * _File);

 __declspec(dllimport) size_t __cdecl fread_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,    FILE * _File);
#line 249 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
  __declspec(dllimport) FILE * __cdecl freopen(   const char * _Filename,    const char * _Mode,    FILE * _File);

 __declspec(dllimport) errno_t __cdecl freopen_s(     FILE ** _File,    const char * _Filename,    const char * _Mode,    FILE * _OldFile);
#line 253 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
  __declspec(dllimport) int __cdecl fscanf(   FILE * _File,     const char * _Format, ...);
  __declspec(dllimport) int __cdecl _fscanf_l(   FILE * _File,     const char * _Format,    _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

 __declspec(dllimport) int __cdecl fscanf_s(   FILE * _File,     const char * _Format, ...);
#line 260 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _fscanf_s_l(   FILE * _File,     const char * _Format,    _locale_t _Locale, ...);
#pragma warning(pop)
 __declspec(dllimport) int __cdecl fsetpos(   FILE * _File,   const fpos_t * _Pos);
 __declspec(dllimport) int __cdecl fseek(   FILE * _File,   long _Offset,   int _Origin);
 __declspec(dllimport) long __cdecl ftell(   FILE * _File);

 __declspec(dllimport) int __cdecl _fseeki64(   FILE * _File,   __int64 _Offset,   int _Origin);
 __declspec(dllimport) __int64 __cdecl _ftelli64(   FILE * _File);

 __declspec(dllimport) size_t __cdecl fwrite(   const void * _Str,   size_t _Size,   size_t _Count,    FILE * _File);
 __declspec(dllimport) int __cdecl getc(   FILE * _File);
 __declspec(dllimport) int __cdecl getchar(void);
 __declspec(dllimport) int __cdecl _getmaxstdio(void);

__declspec(dllimport) char * __cdecl gets_s(    char * _Buf,   rsize_t _Size);
#line 276 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) char * __cdecl gets(  char *_Buffer);
 int __cdecl _getw(   FILE * _File);


__declspec(dllimport) void __cdecl perror(   const char * _ErrMsg);
#line 283 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _pclose(   FILE * _File);
 __declspec(dllimport) FILE * __cdecl _popen(   const char * _Command,    const char * _Mode);
 __declspec(dllimport) int __cdecl printf(    const char * _Format, ...);

 __declspec(dllimport) int __cdecl printf_s(    const char * _Format, ...);
#line 289 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl putc(  int _Ch,    FILE * _File);
 __declspec(dllimport) int __cdecl putchar(  int _Ch);
 __declspec(dllimport) int __cdecl puts(   const char * _Str);
 __declspec(dllimport) int __cdecl _putw(  int _Word,    FILE * _File);


__declspec(dllimport) int __cdecl remove(   const char * _Filename);
 __declspec(dllimport) int __cdecl rename(   const char * _OldFilename,    const char * _NewFilename);
__declspec(dllimport) int __cdecl _unlink(   const char * _Filename);

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_unlink" ". See online help for details.")) __declspec(dllimport) int __cdecl unlink(   const char * _Filename);
#line 301 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
#line 302 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
__declspec(dllimport) void __cdecl rewind(   FILE * _File);
 __declspec(dllimport) int __cdecl _rmtmp(void);
  __declspec(dllimport) int __cdecl scanf(    const char * _Format, ...);
  __declspec(dllimport) int __cdecl _scanf_l(    const char * _Format,    _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

 __declspec(dllimport) int __cdecl scanf_s(    const char * _Format, ...);
#line 311 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _scanf_s_l(    const char * _Format,    _locale_t _Locale, ...);
#pragma warning(pop)
 __declspec(dllimport) void __cdecl setbuf(   FILE * _File,      char * _Buffer);
 __declspec(dllimport) int __cdecl _setmaxstdio(  int _Max);
 __declspec(dllimport) unsigned int __cdecl _set_output_format(  unsigned int _Format);
 __declspec(dllimport) unsigned int __cdecl _get_output_format(void);
 __declspec(dllimport) int __cdecl setvbuf(   FILE * _File,     char * _Buf,   int _Mode,   size_t _Size);
 __declspec(dllimport) int __cdecl _snprintf_s(    char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, ...);


 __declspec(dllimport) int __cdecl sprintf_s(    char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, ...);
#line 323 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) int __cdecl _scprintf(    const char * _Format, ...);
  __declspec(dllimport) int __cdecl sscanf(   const char * _Src,     const char * _Format, ...);
  __declspec(dllimport) int __cdecl _sscanf_l(   const char * _Src,     const char * _Format,    _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

 __declspec(dllimport) int __cdecl sscanf_s(   const char * _Src,     const char * _Format, ...);
#line 332 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _sscanf_s_l(   const char * _Src,     const char * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _snscanf(     const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
  __declspec(dllimport) int __cdecl _snscanf_l(     const char * _Src,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snscanf_s(     const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _snscanf_s_l(     const char * _Src,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
#pragma warning(pop)
  __declspec(dllimport) FILE * __cdecl tmpfile(void);

 __declspec(dllimport) errno_t __cdecl tmpfile_s(    FILE ** _File);
 __declspec(dllimport) errno_t __cdecl tmpnam_s(    char * _Buf,   rsize_t _Size);
#line 343 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) char * __cdecl tmpnam(  char *_Buffer);
 __declspec(dllimport) int __cdecl ungetc(  int _Ch,    FILE * _File);
 __declspec(dllimport) int __cdecl vfprintf(   FILE * _File,     const char * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl vfprintf_s(   FILE * _File,     const char * _Format, va_list _ArgList);
#line 350 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl vprintf(    const char * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl vprintf_s(    const char * _Format, va_list _ArgList);
#line 354 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
  __declspec(dllimport) int __cdecl vsnprintf(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl vsnprintf_s(    char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

#line 359 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _vsnprintf_s(    char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

#pragma warning(push)
#pragma warning(disable:4793)
 __declspec(dllimport) int __cdecl _snprintf(   char *_Dest,   size_t _Count,     const char * _Format, ...);  __declspec(dllimport) int __cdecl _vsnprintf(   char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
#pragma warning(pop)

__declspec(dllimport) int __cdecl vsprintf_s(    char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);

#line 369 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4793)
 __declspec(dllimport) int __cdecl sprintf(  char *_Dest,  const char * _Format, ...);  __declspec(dllimport) int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
#pragma warning(pop)
 __declspec(dllimport) int __cdecl _vscprintf(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _snprintf_c(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _vsnprintf_c(  char *_DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl _fprintf_p(   FILE * _File,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _printf_p(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl _sprintf_p(    char * _Dst,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _vfprintf_p(   FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_p(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_p(    char * _Dst,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _scprintf_p(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl _vscprintf_p(    const char * _Format, va_list _ArgList);
__declspec(dllimport) int __cdecl _set_printf_count_output(  int _Value);
__declspec(dllimport) int __cdecl _get_printf_count_output(void);

 __declspec(dllimport) int __cdecl _printf_l(    const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _printf_p_l(    const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _printf_s_l(    const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vprintf_l(    const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_p_l(    const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_s_l(    const char * _Format,    _locale_t _Locale, va_list _ArgList);

 __declspec(dllimport) int __cdecl _fprintf_l(   FILE * _File,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fprintf_p_l(   FILE * _File,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fprintf_s_l(   FILE * _File,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vfprintf_l(   FILE * _File,    const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfprintf_p_l(   FILE * _File,    const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfprintf_s_l(   FILE * _File,    const char * _Format,    _locale_t _Locale, va_list _ArgList);

  __declspec(dllimport) int __cdecl _sprintf_l(   char * _DstBuf,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _sprintf_p_l(    char * _DstBuf,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _sprintf_s_l(    char * _DstBuf,   size_t _DstSize,     const char * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _vsprintf_l(   char * _DstBuf,    const char * _Format,    _locale_t, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_p_l(    char * _DstBuf,   size_t _MaxCount,     const char* _Format,    _locale_t _Locale,  va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_s_l(    char * _DstBuf,   size_t _DstSize,     const char * _Format,    _locale_t _Locale, va_list _ArgList);

 __declspec(dllimport) int __cdecl _scprintf_l(    const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _scprintf_p_l(    const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vscprintf_l(    const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vscprintf_p_l(    const char * _Format,    _locale_t _Locale, va_list _ArgList);

  __declspec(dllimport) int __cdecl _snprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snprintf_c_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snprintf_s_l(    char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _vsnprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnprintf_c_l(  char * _DstBuf,   size_t _MaxCount, const char *,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnprintf_s_l(    char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char* _Format,   _locale_t _Locale, va_list _ArgList);







#line 428 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"




 __declspec(dllimport) FILE * __cdecl _wfsopen(   const wchar_t * _Filename,    const wchar_t * _Mode,   int _ShFlag);
#line 434 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) wint_t __cdecl fgetwc(   FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fgetwchar(void);
 __declspec(dllimport) wint_t __cdecl fputwc(  wchar_t _Ch,    FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fputwchar(  wchar_t _Ch);
 __declspec(dllimport) wint_t __cdecl getwc(   FILE * _File);
 __declspec(dllimport) wint_t __cdecl getwchar(void);
 __declspec(dllimport) wint_t __cdecl putwc(  wchar_t _Ch,    FILE * _File);
 __declspec(dllimport) wint_t __cdecl putwchar(  wchar_t _Ch);
 __declspec(dllimport) wint_t __cdecl ungetwc(  wint_t _Ch,    FILE * _File);

 __declspec(dllimport) wchar_t * __cdecl fgetws(    wchar_t * _Dst,   int _SizeInWords,    FILE * _File);
 __declspec(dllimport) int __cdecl fputws(   const wchar_t * _Str,    FILE * _File);
 __declspec(dllimport) wchar_t * __cdecl _getws_s(    wchar_t * _Str,   size_t _SizeInWords);

 __declspec(dllimport) wchar_t * __cdecl _getws(  wchar_t *_String);
 __declspec(dllimport) int __cdecl _putws(   const wchar_t * _Str);

 __declspec(dllimport) int __cdecl fwprintf(   FILE * _File,     const wchar_t * _Format, ...);

 __declspec(dllimport) int __cdecl fwprintf_s(   FILE * _File,     const wchar_t * _Format, ...);
#line 456 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl wprintf(    const wchar_t * _Format, ...);

 __declspec(dllimport) int __cdecl wprintf_s(    const wchar_t * _Format, ...);
#line 460 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _scwprintf(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl vfwprintf(   FILE * _File,     const wchar_t * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl vfwprintf_s(   FILE * _File,     const wchar_t * _Format, va_list _ArgList);
#line 465 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl vwprintf(    const wchar_t * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl vwprintf_s(    const wchar_t * _Format, va_list _ArgList);
#line 469 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


__declspec(dllimport) int __cdecl swprintf_s(    wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, ...);
#line 473 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


__declspec(dllimport) int __cdecl vswprintf_s(    wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
#line 477 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


 __declspec(dllimport) int __cdecl _swprintf_c(    wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vswprintf_c(    wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl _snwprintf_s(    wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, ...);

 __declspec(dllimport) int __cdecl _vsnwprintf_s(    wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);

#pragma warning(push)
#pragma warning(disable:4793)
 __declspec(dllimport) int __cdecl _snwprintf(   wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...);  __declspec(dllimport) int __cdecl _vsnwprintf(   wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
#pragma warning(pop)

 __declspec(dllimport) int __cdecl _fwprintf_p(   FILE * _File,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _wprintf_p(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vfwprintf_p(   FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_p(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _swprintf_p(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vswprintf_p(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _scwprintf_p(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vscwprintf_p(    const wchar_t * _Format, va_list _ArgList);

 __declspec(dllimport) int __cdecl _wprintf_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _wprintf_p_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _wprintf_s_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vwprintf_l(    const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_p_l(    const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_s_l(    const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);

 __declspec(dllimport) int __cdecl _fwprintf_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fwprintf_p_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fwprintf_s_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vfwprintf_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfwprintf_p_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfwprintf_s_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);

 __declspec(dllimport) int __cdecl _swprintf_c_l(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _swprintf_p_l(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _swprintf_s_l(    wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vswprintf_c_l(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vswprintf_p_l(    wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vswprintf_s_l(    wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);

 __declspec(dllimport) int __cdecl _scwprintf_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _scwprintf_p_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vscwprintf_p_l(    const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);

  __declspec(dllimport) int __cdecl _snwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snwprintf_s_l(    wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _vsnwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnwprintf_s_l(    wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);










#line 540 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
 __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _swprintf(   wchar_t *_Dest,     const wchar_t * _Format, ...);  __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _vswprintf(   wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
 __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __swprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...);  __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __vswprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
#pragma warning(pop)


#line 1 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"












#pragma once







#line 22 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"










#line 33 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"

#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int swprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl vswprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Ap);
}
#pragma warning( pop )


#line 57 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"

#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int _swprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &(_Plocinfo) ) + ( (sizeof(_Plocinfo) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl _vswprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )

















































#line 128 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"
#line 129 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\swprintf.inl"

#line 550 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
#line 551 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"













#line 565 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) wchar_t * __cdecl _wtempnam(   const wchar_t * _Directory,    const wchar_t * _FilePrefix);



#line 571 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(dllimport) int __cdecl _vscwprintf(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vscwprintf_l(    const wchar_t * _Format,    _locale_t _Locale, va_list _ArgList);
  __declspec(dllimport) int __cdecl fwscanf(   FILE * _File,     const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _fwscanf_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

 __declspec(dllimport) int __cdecl fwscanf_s(   FILE * _File,     const wchar_t * _Format, ...);
#line 581 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _fwscanf_s_l(   FILE * _File,     const wchar_t * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl swscanf(   const wchar_t * _Src,     const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _swscanf_l(   const wchar_t * _Src,     const wchar_t * _Format,    _locale_t _Locale, ...);

 __declspec(dllimport) int __cdecl swscanf_s(   const wchar_t *_Src,     const wchar_t * _Format, ...);
#line 587 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _swscanf_s_l(   const wchar_t * _Src,     const wchar_t * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _snwscanf(     const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _snwscanf_l(     const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snwscanf_s(     const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _snwscanf_s_l(     const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,    _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl wscanf(    const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _wscanf_l(    const wchar_t * _Format,    _locale_t _Locale, ...);

 __declspec(dllimport) int __cdecl wscanf_s(    const wchar_t * _Format, ...);
#line 597 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) int __cdecl _wscanf_s_l(    const wchar_t * _Format,    _locale_t _Locale, ...);
#pragma warning(pop)

 __declspec(dllimport) FILE * __cdecl _wfdopen(  int _FileHandle ,    const wchar_t * _Mode);
  __declspec(dllimport) FILE * __cdecl _wfopen(   const wchar_t * _Filename,    const wchar_t * _Mode);
 __declspec(dllimport) errno_t __cdecl _wfopen_s(     FILE ** _File,    const wchar_t * _Filename,    const wchar_t * _Mode);
  __declspec(dllimport) FILE * __cdecl _wfreopen(   const wchar_t * _Filename,    const wchar_t * _Mode,    FILE * _OldFile);
 __declspec(dllimport) errno_t __cdecl _wfreopen_s(     FILE ** _File,    const wchar_t * _Filename,    const wchar_t * _Mode,    FILE * _OldFile);



__declspec(dllimport) void __cdecl _wperror(   const wchar_t * _ErrMsg);
#line 610 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"
 __declspec(dllimport) FILE * __cdecl _wpopen(   const wchar_t *_Command,    const wchar_t * _Mode);
__declspec(dllimport) int __cdecl _wremove(   const wchar_t * _Filename);
 __declspec(dllimport) errno_t __cdecl _wtmpnam_s(    wchar_t * _DstBuf,   size_t _SizeInWords);

 __declspec(dllimport) wchar_t * __cdecl _wtmpnam(  wchar_t *_Buffer);

 __declspec(dllimport) wint_t __cdecl _fgetwc_nolock(   FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fputwc_nolock(  wchar_t _Ch,    FILE * _File);
 __declspec(dllimport) wint_t __cdecl _ungetwc_nolock(  wint_t _Ch,    FILE * _File);











#line 631 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"










#line 642 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


#line 645 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"


#line 648 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"















#line 664 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"











__declspec(dllimport) void __cdecl _lock_file(   FILE * _File);
__declspec(dllimport) void __cdecl _unlock_file(   FILE * _File);

 __declspec(dllimport) int __cdecl _fclose_nolock(   FILE * _File);
 __declspec(dllimport) int __cdecl _fflush_nolock(   FILE * _File);
 __declspec(dllimport) size_t __cdecl _fread_nolock(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,    FILE * _File);
 __declspec(dllimport) size_t __cdecl _fread_nolock_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,    FILE * _File);
 __declspec(dllimport) int __cdecl _fseek_nolock(   FILE * _File,   long _Offset,   int _Origin);
 __declspec(dllimport) long __cdecl _ftell_nolock(   FILE * _File);
 __declspec(dllimport) int __cdecl _fseeki64_nolock(   FILE * _File,   __int64 _Offset,   int _Origin);
 __declspec(dllimport) __int64 __cdecl _ftelli64_nolock(   FILE * _File);
 __declspec(dllimport) size_t __cdecl _fwrite_nolock(   const void * _DstBuf,   size_t _Size,   size_t _Count,    FILE * _File);
 __declspec(dllimport) int __cdecl _ungetc_nolock(  int _Ch,    FILE * _File);












#line 701 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"











#line 713 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tempnam" ". See online help for details.")) __declspec(dllimport) char * __cdecl tempnam(   const char * _Directory,    const char * _FilePrefix);



#line 719 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcloseall" ". See online help for details.")) __declspec(dllimport) int __cdecl fcloseall(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fdopen" ". See online help for details.")) __declspec(dllimport) FILE * __cdecl fdopen(  int _FileHandle,    const char * _Format);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fgetchar" ". See online help for details.")) __declspec(dllimport) int __cdecl fgetchar(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fileno" ". See online help for details.")) __declspec(dllimport) int __cdecl fileno(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_flushall" ". See online help for details.")) __declspec(dllimport) int __cdecl flushall(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fputchar" ". See online help for details.")) __declspec(dllimport) int __cdecl fputchar(  int _Ch);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_getw" ". See online help for details.")) __declspec(dllimport) int __cdecl getw(   FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putw" ". See online help for details.")) __declspec(dllimport) int __cdecl putw(  int _Ch,    FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_rmtmp" ". See online help for details.")) __declspec(dllimport) int __cdecl rmtmp(void);

#line 731 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"





#pragma pack(pop)

#line 739 "c:\\program files (x86)\\microsoft visual studio 10.0\\vc\\include\\stdio.h"

#line 5 "c:\\classcode\\81°à\\test.c\\test.c\\test.c"


































































































































































int main()
{


#line 172 "c:\\classcode\\81°à\\test.c\\test.c\\test.c"
	return 0;
}
