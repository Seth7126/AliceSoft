// 函数: sub_501850
// 地址: 0x501850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736ef2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIListBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* i_1
void* i_2 = i_1
arg1[0x10] = 0xffffffff
void* arg_8
void* var_28 = arg_8
arg1[0x11] = 0xffffffff
sub_4c2740(&arg1[0x12], arg2, var_28, i_2)
var_8_1.b = 1
arg1[0x2a] = sub_4c2920(&arg1[0x12])
arg1[0x2b] = sub_4c2920(&arg1[0x12])
arg1[0x2c] = sub_4c2920(&arg1[0x12])
arg1[0x2d] = sub_4c2920(&arg1[0x12])
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
var_8_1.b = 2
sub_4ff830(&arg1[0x31])
var_8_1.b = 3
arg1[0x63] = i_1
void* eax_9 = arg_8
arg1[0x64] = arg2
arg1[0x65] = eax_9
arg1[0x66].w = 0
*(arg1 + 0x36) = 0x101
arg1[0xe].b = 1
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_10 = arg1[0x15]
    int32_t* edx_1 = arg1[0x14]
    
    if (edx_1 == eax_10)
        sub_42ccf0(&arg1[0x14], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_10)
                break
        
        if (edx_1 == eax_10)
            sub_42ccf0(&arg1[0x14], &arg_8)

void* i_3 = i_1
void* i

if (i_3 == 0)
    i = nullptr
else
    i = i_3 + 8

i_1 = i

if (i != 0)
    int32_t eax_11 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_11)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_11)
                break
        
        if (edx_2 == eax_11)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
