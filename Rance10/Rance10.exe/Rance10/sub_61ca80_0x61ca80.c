// 函数: sub_61ca80
// 地址: 0x61ca80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t esi = arg1[3]
int32_t ecx_5 = arg1[6] & ((((((((zx.d(*arg3) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(arg3[1]))
    * 0x1000193) ^ zx.d(arg3[2])) * 0x1000193) ^ zx.d(arg3[3])) * 0x1000193)
int32_t eax_9 = *(esi + (ecx_5 << 3))
char* edx_2 = ecx_5 << 3
void* esi_1

if (eax_9 != arg1[1])
    esi_1 = **(esi + edx_2 + 4)
else
    esi_1 = arg1[1]

while (esi_1 != eax_9)
    esi_1 = *(esi_1 + 4)
    
    if (*arg3 == *(esi_1 + 8))
        *arg4[1] = *arg4
        *(*arg4 + 4) = arg4[1]
        arg1[2] -= 1
        sub_403160(arg4, 1, 0xc)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t* var_18 = arg4
void* eax_10 = *arg4

if (esi_1 != eax_10)
    *arg4[1] = eax_10
    **(eax_10 + 4) = esi_1
    **(esi_1 + 4) = arg4
    int32_t edx_3 = *(esi_1 + 4)
    *(esi_1 + 4) = *(eax_10 + 4)
    *(eax_10 + 4) = arg4[1]
    arg4[1] = edx_3

void* ecx_13 = &edx_2[arg1[3]]
int32_t eax_11 = *ecx_13

if (eax_11 == arg1[1])
    *ecx_13 = arg4
    *(arg1[3] + edx_2 + 4) = arg4
else if (eax_11 != esi_1)
    int32_t eax_17 = **(ecx_13 + 4)
    *(ecx_13 + 4) = eax_17
    
    if (eax_17 != arg4)
        int32_t ecx_18 = arg1[3]
        *(ecx_18 + edx_2 + 4) = *(*(ecx_18 + edx_2 + 4) + 4)
else
    *ecx_13 = arg4

int32_t var_8_2 = 2
sub_61c5a0(arg1)
*arg2 = arg4
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
