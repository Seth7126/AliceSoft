// 函数: sub_414740
// 地址: 0x414740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727fcc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* edi = arg2
*arg1 = *edi
arg2 = &arg1[1]
arg1[1] = edi[1]
arg1[7] = 0xf
arg1[6] = 0
char* eax_5

if (arg1[7] u< 0x10)
    eax_5 = &arg1[2]
else
    eax_5 = arg1[2]

*eax_5 = 0
sub_403590(&arg1[2], &edi[2], 0, 0xffffffff)
int32_t var_8_1 = 0
sub_416fb0(&arg1[8], &edi[8])
int32_t var_8_2 = 1
arg1[0x10] = 0xf
arg1[0xf] = 0
void* eax_7

if (arg1[0x10] u< 0x10)
    eax_7 = &arg1[0xb]
else
    eax_7 = arg1[0xb]

*eax_7 = 0
sub_403590(&arg1[0xb], &edi[0xb], 0, 0xffffffff)
var_8_2.b = 2
arg1[0x11] = edi[0x11]
arg1[0x12] = edi[0x12]
arg1[0x13] = edi[0x13]
arg1[0x14] = edi[0x14]
arg1[0x1a] = 0xf
arg1[0x19] = 0
void* eax_12

if (arg1[0x1a] u< 0x10)
    eax_12 = &arg1[0x15]
else
    eax_12 = arg1[0x15]

*eax_12 = 0
sub_403590(&arg1[0x15], &edi[0x15], 0, 0xffffffff)
var_8_2.b = 3
sub_416d30(&arg1[0x1b], &edi[0x1b])
arg1[0x1e].b = edi[0x1e].b
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
