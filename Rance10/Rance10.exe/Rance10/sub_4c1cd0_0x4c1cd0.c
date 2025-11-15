// 函数: sub_4c1cd0
// 地址: 0x4c1cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4efcc0(*(arg1 + 0xa8))
int32_t ecx_1 = *(arg1 + 0x130)
int32_t edx = *(arg1 + 0x134)
int32_t ecx_2 = *(arg1 + 0x138)
int32_t var_34 = edx
void* ecx_4 = *(*(arg1 + 0x1d4) + 8)

if (ecx_4 == 0)
    goto label_4c1d73

if (sub_4d62f0(ecx_4, arg1 + 0x118) == 0)
    edx = var_34
label_4c1d73:
    
    if (ecx_1 != 0 || edx != 0 || ecx_2 != edx)
        void* esi_3 = *(eax_3 + 0x44)
        sub_555e00(esi_3, 0x12, 1)
        sub_551a00(*(esi_3 + 0x80), arg1 + 0x100, ecx_1, var_34, ecx_2)
    else
        void* eax_7
        
        if (*(arg1 + 0x114) u< 0x10)
            eax_7 = arg1 + 0x100
        else
            eax_7 = *(arg1 + 0x100)
        
        if (sub_44c4e0(eax_7) == 0)
            void var_2c
            sub_403360(&var_2c, 0x7625b4)
            int32_t var_8_1 = 0
            void* esi_2 = *(eax_3 + 0x44)
            sub_555e00(esi_2, 0x13, 1)
            sub_55d4d0(*(esi_2 + 0x80), &var_2c)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_2c)
            ___std_parallel_algorithms_hw_threads@0(eax_3, 0x18, 1)
            sub_517b60(eax_3, 1)
        else
            sub_517680(eax_3, arg1 + 0x100, nullptr, 1)
else
    void* esi_1 = *(eax_3 + 0x44)
    sub_555e00(esi_1, 0x1a, 1)
    sub_4dbf90(*(esi_1 + 0x80), arg1 + 0x118)

*(*(arg1 + 0xa8) + 0x98) = *(arg1 + 0x144)
int32_t result
result.b = *(arg1 + 0x148)
*(*(arg1 + 0xa8) + 0xaa) = result.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
