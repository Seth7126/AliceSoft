// 函数: sub_4c3fc0
// 地址: 0x4c3fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_485b20(arg1 + 4, arg3, 0)
int32_t result = sub_4c8700(arg1 - 4)

if (result.b == 0 && arg3 == 1 && *(arg1 + 0xa0) == result.b)
    int32_t eax_5 = *(arg1 + 0x90)
    
    if (eax_5 == 0)
        result = 0
    else
        result = eax_5 + 8
    
    if (arg2 != result)
        int32_t eax_6 = *(arg1 + 0x94)
        
        if (eax_6 == 0)
            result = 0
        else
            result = eax_6 + 8
        
        if (arg2 != result)
            int32_t var_40 = 0
            var_44 = 0
            sub_4e3340(&var_40, &var_44)
            void var_34
            sub_40d1c0(arg1 + 0xcc, arg1 + 0xb4, &var_34, arg1 + 0xcc)
            int32_t var_c_1 = 0
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(var_44))
            float xmm0_4 = _mm_cvtepi32_ps(zx.o(var_40))
            int32_t ecx_5
            float xmm0_5
            ecx_5, xmm0_5 = sub_4c8c20(arg1 - 4)
            int32_t var_5c_2 = ecx_5
            sub_4c6920(arg1 - 4, &var_34, int.d(xmm0_4 - sub_4c8b60(arg1 - 4)) - *(arg1 + 0x9c), 
                int.d(xmm0_2 - xmm0_5) - *(arg1 + 0x9c))
            *(arg1 + 0xa4) = sub_4c75f0(arg1 + 0xb4)
            result = sub_401fb0(&var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
