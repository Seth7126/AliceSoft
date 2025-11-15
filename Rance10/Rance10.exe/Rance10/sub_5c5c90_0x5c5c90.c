// 函数: sub_5c5c90
// 地址: 0x5c5c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_7400de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = arg1
*arg1 = arg3
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = arg3
arg1[5].b = 1
arg1[6] = arg2
int32_t var_14_1 = 0
*(arg1 + 0x1c) = data_7fd4d8.q
arg1[9] = data_7fd4e0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc].b = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
sub_5d8bd0(&arg1[0x10])
arg1[0x1f] = 0
arg1[0x20] = 0x3f800000
arg1[0x21] = 0x41200000
*(arg1 + 0x88) = data_7e7128
arg1[0x26] = 0x3f800000
arg1[0x27] = 0x3ca3d70a
arg1[0x28] = 0
*(arg1 + 0xa4) = data_7fd4f4
arg1[0x2e] = &common::CPoint::`vftable'
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = &common::CSize::`vftable'
arg1[0x32] = 0x500
arg1[0x33] = 0x2d0
arg1[0x2d] = &common::CRect::`vftable'
var_14_1.b = 2
sub_5c4440(&arg1[0x34], arg1[0x32], arg1[0x33])
arg1[0x4d] = 0
sub_575b80(&arg1[0x4e])
void* ecx_3 = &arg1[0x59]
var_14_1.b = 3
arg1[0x58] = 0
int32_t edx = 0
uint32_t edi_3 = 0x1f u>> 2
*ecx_3 = zx.o(0)

if (ecx_3 u> ecx_3 + 0x1c)
    edi_3 = 0

*(ecx_3 + 0x10) = 0
*(ecx_3 + 0x18) = 0

if (edi_3 != 0)
    do
        edx += 1
        *ecx_3 = 0
        ecx_3 += 4
    while (edx != edi_3)

arg1[0x60] = 0
arg1[0x61] = 1
sub_5c7120(&arg1[0x62])
var_14_1.b = 4
int32_t var_24 = 0
arg1[0x64] = 0
arg1[0x65] = 0
arg1[0x66] = 0
sub_422540(&arg1[0x64], 9, &var_24)
var_14_1.b = 5
sub_5c5f50(&arg1[0x67])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
