// 函数: sub_516f30
// 地址: 0x516f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73895f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPartsView::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPartsView::VTable** 
    var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIPartsView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIPartsView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_c
void* ecx = arg_c
arg1[0x10].b = 1
void* arg_8
arg1[0x13] = arg_8
arg1[0x14] = ecx
void* eax_5 = sub_6e810c(0x9c)
arg_8 = eax_5
var_8_1.b = 1
void* ecx_2 = arg_c
var_8_1.b = 0
arg1[0x11] = sub_555ba0(eax_5, *(ecx_2 + 0x40), ecx_2, *(arg2 + 4), *(arg2 + 8), arg2 + 0xc)
void* eax_7 = sub_6e810c(0x224)
arg_8 = eax_7
var_8_1.b = 2
int32_t* eax_8 = sub_525380(eax_7, arg1)
var_8_1.b = 0
arg1[0x12] = eax_8
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_9 = eax_8[0x7b]
    int32_t* edx_1 = eax_8[0x7a]
    
    if (edx_1 == eax_9)
        sub_42ccf0(&eax_8[0x7a], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_9)
                break
        
        if (edx_1 == eax_9)
            sub_42ccf0(&eax_8[0x7a], &arg_8)

void* ecx_7 = arg_c
arg_c = ecx_7 + 8

if (ecx_7 != 0xfffffff8)
    int32_t eax_10 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_10)
        sub_42ccf0(&arg1[4], &arg_c)
    else
        while (*edx_2 != ecx_7 + 8)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_10)
                break
        
        if (edx_2 == eax_10)
            sub_42ccf0(&arg1[4], &arg_c)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
