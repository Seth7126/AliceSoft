// 函数: sub_4b1ed0
// 地址: 0x4b1ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731f54
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIFormView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIFormView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_8
void* edi = arg_8
void* i_1
sub_4c2740(&arg1[0x10], arg2, edi, i_1)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = sub_4c2920(&arg1[0x10])
arg1[0x2a] = sub_4c2920(&arg1[0x10])
arg1[0x2b] = sub_4c2920(&arg1[0x10])
arg1[0x2c] = sub_4c2920(&arg1[0x10])
arg1[0x2d] = sub_4c2920(&arg1[0x10])
arg1[0x2e] = sub_4c2920(&arg1[0x10])
arg1[0x2f] = sub_4c2920(&arg1[0x10])
arg1[0x30] = sub_4c2920(&arg1[0x10])
arg1[0x31] = sub_4c2920(&arg1[0x10])
arg1[0x32] = sub_4c2920(&arg1[0x10])
arg1[0x33] = sub_4c2920(&arg1[0x10])
arg1[0x34] = sub_4c2920(&arg1[0x10])
arg1[0x35] = sub_4c2920(&arg1[0x10])
arg1[0x36] = sub_4c2920(&arg1[0x10])
arg1[0x37] = 0
arg1[0x38] = 0
sub_4ae0c0(&arg1[0x39])
var_8_1.b = 2
arg1[0x56] = i_1
arg1[0x57] = edi
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5c] = 0
*(arg1 + 0x3a) = 1
*(arg1 + 0x36) = 0x101
arg1[0xe].b = 1
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_20 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_20)
        sub_42ccf0(&arg1[0x12], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_20)
                break
        
        if (edx_1 == eax_20)
            sub_42ccf0(&arg1[0x12], &arg_8)

void* i_2 = i_1
void* i

if (i_2 == 0)
    i = nullptr
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_21 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_21)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_21)
                break
        
        if (edx_2 == eax_21)
            sub_42ccf0(&arg1[4], &i_1)

*(arg1[0x34] + 0xaa) = 0
*(arg1[0x35] + 0xaa) = 0
*(arg1[0x36] + 0xaa) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
