// 函数: sub_61c070
// 地址: 0x61c070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744540
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t* esi = arg1[3]
int32_t ecx_5 = arg1[6] & ((((((((zx.d(*arg3) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(arg3[1]))
    * 0x1000193) ^ zx.d(arg3[2])) * 0x1000193) ^ zx.d(arg3[3])) * 0x1000193)
int32_t ecx_6 = ecx_5 << 3
int32_t eax_9 = esi[ecx_5 * 2]
void* esi_1

if (eax_9 != arg1[1])
    esi_1 = *esi[ecx_5 * 2 + 1]
else
    esi_1 = arg1[1]

while (esi_1 != eax_9)
    esi_1 = *(esi_1 + 4)
    
    if (*arg3 == *(esi_1 + 8))
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_8_2 = 0xffffffff
int32_t* edi_1 = *arg1[1]
int32_t* eax_11 = sub_406980(edi_1, edi_1[1], arg3)

if (0x15555554 - arg1[2] u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[2] += 1
edi_1[1] = eax_11
*eax_11[1] = eax_11
char* edi_3 = *arg1[1]
arg3 = edi_3
void* eax_14 = *edi_3

if (esi_1 != eax_14)
    **(edi_3 + 4) = eax_14
    **(eax_14 + 4) = esi_1
    **(esi_1 + 4) = edi_3
    int32_t edx_3 = *(esi_1 + 4)
    *(esi_1 + 4) = *(eax_14 + 4)
    *(eax_14 + 4) = *(edi_3 + 4)
    *(edi_3 + 4) = edx_3

char** ecx_17 = arg1[3] + ecx_6
char* eax_15 = *ecx_17

if (eax_15 == arg1[1])
    *ecx_17 = edi_3
    *(arg1[3] + ecx_6 + 4) = edi_3
else if (eax_15 != esi_1)
    int32_t eax_18 = *ecx_17[1]
    ecx_17[1] = eax_18
    
    if (eax_18 != edi_3)
        int32_t ecx_18 = arg1[3]
        *(ecx_18 + ecx_6 + 4) = *(*(ecx_18 + ecx_6 + 4) + 4)
else
    *ecx_17 = edi_3

int32_t var_8_3 = 2
sub_61c5a0(arg1)
*arg2 = edi_3
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
