// 函数: sub_56fff0
// 地址: 0x56fff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c72a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_14 = arg3
int32_t var_18 = 0
int32_t* edi = sub_6e810c(0x5c)
int32_t* var_1c = edi
int32_t var_8_1 = 0
void** edx = *arg10
int32_t* eax_3
eax_3.b = *arg9
arg10.b = eax_3.b
int32_t* eax_4 = *arg8
char* eax_6 = *arg7
int32_t* eax_8 = *arg5
int32_t* eax_10 = *arg4
int32_t eax_11 = *arg2
*edi = edx
edi[1] = eax_11
edi[7] = 0xf
edi[6] = 0
char* eax_12

if (edi[7] u< 0x10)
    eax_12 = &edi[2]
else
    eax_12 = edi[2]

*eax_12 = 0
sub_403590(&edi[2], edx, 0, 0xffffffff)
var_8_1.b = 1
sub_57c970(&edi[8], arg6, arg10.b, &edx[0xc], eax_4, eax_6)
edi[0x14].b = arg10.b
edi[0x15] = eax_10
edi[0x16] = eax_8
*arg3 = edi
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
