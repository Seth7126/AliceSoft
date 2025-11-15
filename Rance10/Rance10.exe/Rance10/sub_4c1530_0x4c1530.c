// 函数: sub_4c1530
// 地址: 0x4c1530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733044
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMessageWindowView::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIMessageWindowView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIMessageWindowView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_8
void* i_1
sub_4c2740(&arg1[0x10], arg2, arg_8, i_1)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = sub_4c2920(&arg1[0x10])
arg1[0x2a] = sub_4c2920(&arg1[0x10])
arg1[0x2b] = sub_4c1450(0)
arg1[0x2c] = sub_4c1450(1)
arg1[0x2d] = sub_4c1450(2)
sub_4be6b0(&arg1[0x2e])
var_8_1.b = 2
void* i_2 = i_1
arg1[0x75] = arg2
arg1[0x74] = i_2
void* esi_2 = *(sub_4efcc0(arg1[0x29]) + 0x44)
sub_555e00(esi_2, 0x13, 1)
void* esi_3 = *(esi_2 + 0x80)

if (*(esi_3 + 0xf0) != 1)
    *(esi_3 + 0xf0) = 1
    sub_55d550(esi_3)
    *(esi_3 + 0xd4) = 1

*(arg1 + 0x3a) = 1
*(arg1 + 0x36) = 1
arg1[0xe].b = 1
arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_11 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_11)
        sub_42ccf0(&arg1[0x12], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_11)
                break
        
        if (edx_1 == eax_11)
            sub_42ccf0(&arg1[0x12], &arg_8)

void* i_3 = i_1
void* i

if (i_3 == 0)
    i = nullptr
else
    i = i_3 + 8

i_1 = i

if (i != 0)
    int32_t eax_12 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_12)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_12)
                break
        
        if (edx_2 == eax_12)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
