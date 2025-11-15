// 函数: sub_62ac10
// 地址: 0x62ac10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744cd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3

if (*(arg1 + 0xc) != 0)
    eax_3 = *(arg1 + 8)
else
    eax_3 = 0

char* ecx

if (*(arg1 + 0xc) != 0)
    ecx = *(arg1 + 8)
else
    ecx = nullptr

int32_t eax_4 = eax_3 + *(arg1 + 0x14)
int32_t var_2c = 0.d
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
sub_405b10(&var_20, ecx, eax_4)
int32_t var_8_1 = 0
char eax_5 = sub_563b40(arg2, &var_20)
void* edx_2 = var_20
int32_t ebx
ebx.b = eax_5

if (edx_2 != 0)
    sub_403160(edx_2, var_18 - edx_2, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
