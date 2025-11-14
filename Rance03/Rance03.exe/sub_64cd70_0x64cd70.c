// 函数: sub_64cd70
// 地址: 0x64cd70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 0xb8)
char* esi = arg2
int32_t result
void* esi_1

if (eax_5 != *(arg1 + 0xbc))
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xbc) - eax_5)
    int32_t edx_2 = edx_1 s>> 2
    void* ecx_7
    
    if (*esi != 0)
        char* ecx_8 = esi
        int32_t eax_10
        
        do
            eax_10.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_10.b != 0)
        ecx_7 = ecx_8 - &ecx_8[1]
    else
        ecx_7 = nullptr
    
    sub_4057c0(*(arg1 + 0xb8) + ((edx_2 u>> 0x1f) + edx_2) * 0x18 - 0x18, esi, ecx_7)
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xbc) - *(arg1 + 0xb8))
    int32_t edx_5 = edx_4 s>> 2
    result = ((edx_5 u>> 0x1f) + edx_5) * 3
    esi_1 = *(*(arg1 + 0xb8) + (result << 3) - 8)
else
    sub_401f60(&var_2c, esi)
    int32_t var_4 = 0
    sub_412d60(arg1 + 0xb8, &var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    do
        result.b = *esi
        esi = &esi[1]
    while (result.b != 0)
    
    esi_1 = esi - &esi[1]

if (*(arg1 + 0xc4) s< esi_1)
    *(arg1 + 0xc4) = esi_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
