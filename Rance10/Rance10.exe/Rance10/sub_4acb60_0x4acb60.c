// 函数: sub_4acb60
// 地址: 0x4acb60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731a64
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIFormGroupView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIFormGroupView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_8
void* edx = arg_8
int32_t i_1
sub_4c2740(&arg1[0x10], arg2, edx, i_1)
arg1[0x28] = &partsengine::CGUIFormGroupModel::`vftable'
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
var_8_1.b = 2
arg1[0x2c] = i_1
arg1[0x2d] = edx
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
*(arg1 + 0x3a) = 1
*(arg1 + 0x36) = 0x101
arg1[0xe].b = 1
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_5 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_5)
        sub_42ccf0(&arg1[0x12], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_5)
                break
        
        if (edx_1 == eax_5)
            sub_42ccf0(&arg1[0x12], &arg_8)

int32_t i_2 = i_1
int32_t i

if (i_2 == 0)
    i = 0
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_6 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_6)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_6)
                break
        
        if (edx_2 == eax_6)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
