// 函数: sub_54d5a0
// 地址: 0x54d5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a68c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = &partsengine::CSurfaceFactory::`vftable'
arg1[2] = 0
int32_t var_8_1 = 0
arg1[3] = &partsengine::CGraph::`vftable'
arg1[4] = 0
arg1[5].w = 1
*(arg1 + 0x16) = 0
arg1[6] = &common::CRect::`vftable'
arg1[7] = &common::CPoint::`vftable'
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = &common::CSize::`vftable'
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd].b = 0
sub_6437f0(&arg1[0xe])
var_8_1.b = 3
int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

arg1[4] = data_7fcb5c
int32_t* ecx_2 = arg1[2]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[2] = 0

int32_t* ecx_3 = data_7fcbd4

if (ecx_3 == 0)
    arg1[2] = ecx_3
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

(**ecx_3)(eax_2)
arg1[2] = data_7fcbd4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
