// 函数: sub_4b4540
// 地址: 0x4b4540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732094
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIPanelView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIPanelView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_8
int32_t i_1
sub_4c2740(&arg1[0x10], arg2, arg_8, i_1)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = &partsengine::CGUIPanelModel::`vftable'
__builtin_memcpy(&arg1[0x2a], 
    "\xc8\x00\x00\x00\xc8\x00\x00\x00\xdc\x00\x00\x00\xdc\x00\x00\x00\xdc\x00\x00\x00\xff\x00\x00\x00", 
    0x18)
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34].b = 1
var_8_1.b = 2
arg1[0x35] = i_1
*(arg1 + 0x3a) = 1
*(arg1 + 0x36) = 0x101
arg1[0xe].b = 1
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_6 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_6)
        sub_42ccf0(&arg1[0x12], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_6)
                break
        
        if (edx_1 == eax_6)
            sub_42ccf0(&arg1[0x12], &arg_8)

int32_t i_2 = i_1
int32_t i

if (i_2 == 0)
    i = 0
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_7 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_7)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_7)
                break
        
        if (edx_2 == eax_7)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
