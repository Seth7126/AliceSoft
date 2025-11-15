// 函数: sub_56ec20
// 地址: 0x56ec20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_28 = arg1
void* var_2c = arg1
sub_570210(*(arg1 + 0x38), *(arg1 + 0x3c))
*(arg1 + 0x3c) = *(arg1 + 0x38)
int32_t var_8_1 = 0
sub_56ff20(*(*(arg1 + 0x44) + 4))
void* eax_5 = *(arg1 + 0x44)
int32_t edi = 0
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x44)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x44)
int32_t var_8_2 = 0xffffffff
void* edx_1 = arg1
*(eax_7 + 8) = eax_7
*(arg1 + 0x48) = 0
void** esi = *(edx_1 + 0x2c)
uint32_t ebx_4 = (*(edx_1 + 0x30) - esi + 3) u>> 2

if (esi u> *(edx_1 + 0x30))
    ebx_4 = 0

if (ebx_4 != 0)
    do
        sub_57cb70(*esi + 0x20, edx_1 + 0x38)
        edx_1 = arg1
        esi = &esi[1]
        edi += 1
    while (edi != ebx_4)

int32_t var_8_3 = 1
sub_56ff20(*(*(edx_1 + 0x44) + 4))
void* eax_10 = *(edx_1 + 0x44)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(edx_1 + 0x44)
*eax_11 = eax_11
void* result = *(edx_1 + 0x44)
*(result + 8) = result
*(edx_1 + 0x48) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
