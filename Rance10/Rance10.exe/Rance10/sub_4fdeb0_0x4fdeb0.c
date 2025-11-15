// 函数: sub_4fdeb0
// 地址: 0x4fdeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736c46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable**
     var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable**
     var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUILayoutBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUILayoutBoxView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
arg1[0x10] = &partsengine::CGUILayoutBoxModel::`vftable'
arg1[0x11] = 1
arg1[0x12].b = 0
arg1[0x13] = 0x43480000
arg1[0x14].b = 0
arg1[0x15] = 1
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a].b = 1
var_8_1.b = 1
void* i_1
void* i_2 = i_1
arg1[0x1b] = i_2
arg1[0x1c] = arg2
arg1[0x1d].b = 1
arg1[0x1e] = 0
arg1[0x1f] = 0
*(arg1 + 0x21) = 0x1010101
*(arg1 + 0x25) = 0x1010101
arg1[0xf].w = 0x101
*(arg1 + 0x3e) = 1
*(arg1 + 0x29) = 1
*(arg1 + 0x2b) = 0x1010101
*(arg1 + 0x2f) = 0x1010101
*(arg1 + 0x33) = 0x1010101
*(arg1 + 0x37) = 0x101
*(arg1 + 0x3a) = 1
void* i

if (i_2 == 0)
    i = nullptr
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_4 = arg1[5]
    int32_t* edx_1 = arg1[4]
    
    if (edx_1 == eax_4)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_1 != i)
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_4)
                break
        
        if (edx_1 == eax_4)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
