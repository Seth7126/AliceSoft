// 函数: sub_510560
// 地址: 0x510560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ea9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
int32_t* eax_3 = sub_4321d0()
int32_t** edi = arg2
*arg1 = eax_3
*arg1 = *edi
*edi = eax_3
int32_t ecx_1 = arg1[1]
arg1[1] = edi[1]
edi[1] = ecx_1
int32_t var_8_1 = 0
arg2 = &arg1[2]
arg1[2] = 0
arg1[3] = 0
int32_t* eax_5 = sub_429890()
arg1[2] = eax_5
arg1[2] = edi[2]
edi[2] = eax_5
int32_t ecx_3 = arg1[3]
arg1[3] = edi[3]
edi[3] = ecx_3
var_8_1.b = 1
arg2 = &arg1[4]
arg1[4] = 0
arg1[5] = 0
int32_t* eax_7 = sub_429890()
arg1[4] = eax_7
arg1[4] = edi[4]
edi[4] = eax_7
int32_t ecx_5 = arg1[5]
arg1[5] = edi[5]
edi[5] = ecx_5
var_8_1.b = 2
arg2 = &arg1[6]
arg1[6] = 0
arg1[7] = 0
int32_t* eax_9 = sub_429890()
arg1[6] = eax_9
arg1[6] = edi[6]
edi[6] = eax_9
int32_t ecx_7 = arg1[7]
arg1[7] = edi[7]
edi[7] = ecx_7
var_8_1.b = 3
arg2 = &arg1[8]
arg1[8] = nullptr
arg1[9] = 0
int32_t* eax_11 = sub_4f2cd0()
arg1[8] = eax_11
arg1[8] = edi[8]
edi[8] = eax_11
int32_t ecx_9 = arg1[9]
arg1[9] = edi[9]
edi[9] = ecx_9
arg1[0xa] = edi[0xa]
arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
sub_4056a0(&arg1[0xb], &edi[0xb])
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
sub_4056a0(&arg1[0x11], &edi[0x11])
edi[0xa] = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
