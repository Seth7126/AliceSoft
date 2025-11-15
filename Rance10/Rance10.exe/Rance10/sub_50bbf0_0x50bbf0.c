// 函数: sub_50bbf0
// 地址: 0x50bbf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737b0e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMultiTextBoxView::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMultiTextBoxView::VTable
    ** var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIMultiTextBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* i_1
sub_4c2740(&arg1[0x10], arg2, arg3, i_1)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = sub_4c2920(&arg1[0x10])
arg1[0x2a] = sub_4c2920(&arg1[0x10])
arg1[0x2b] = sub_4c2920(&arg1[0x10])
arg1[0x2c] = sub_4c2920(&arg1[0x10])
arg1[0x2d] = 0x10
arg1[0x2e].w = 0
*(arg1 + 0xba) = 0
arg1[0x2f] = 0xffffffff
arg1[0x30] = 0xffffffff
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x38] = 0xf
arg1[0x37] = 0
void* eax_9

if (arg1[0x38] u< 0x10)
    eax_9 = &arg1[0x33]
else
    eax_9 = arg1[0x33]

*eax_9 = 0
sub_403490(&arg1[0x33], 0x75d28a, nullptr)
var_8_1.b = 2
arg1[0x3e] = 0xf
arg1[0x3d] = 0
void* eax_10

if (arg1[0x3e] u< 0x10)
    eax_10 = &arg1[0x39]
else
    eax_10 = arg1[0x39]

*eax_10 = 0
sub_403490(&arg1[0x39], 0x75d283, nullptr)
var_8_1.b = 3
arg1[0x44] = 0xf
arg1[0x43] = 0
void* eax_11

if (arg1[0x44] u< 0x10)
    eax_11 = &arg1[0x3f]
else
    eax_11 = arg1[0x3f]

*eax_11 = 0
sub_403490(&arg1[0x3f], 0x75d286, nullptr)
var_8_1.b = 4
sub_508880(&arg1[0x45])
var_8_1.b = 5
void* i_2 = i_1
arg1[0x8b] = i_2
*(arg1 + 0x3a) = 1
*(arg1 + 0x36) = 1
arg1[0xe].b = 1
i_1 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_12 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_12)
        sub_42ccf0(&arg1[0x12], &i_1)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_12)
                break
        
        if (edx_1 == eax_12)
            sub_42ccf0(&arg1[0x12], &i_1)

void* i

if (i_2 == 0)
    i = nullptr
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_13 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_13)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_13)
                break
        
        if (edx_2 == eax_13)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
