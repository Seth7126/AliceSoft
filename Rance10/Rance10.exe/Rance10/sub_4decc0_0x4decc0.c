// 函数: sub_4decc0
// 地址: 0x4decc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x68) != 0)
    result = *(arg1 + 8)
    
    if (result != 0)
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(result[2]))
        char edx = *(arg1 + 0x13a)
        int32_t ebx_1 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x130))) / (1000f / xmm0_2))
        
        if (edx == 0)
        label_4dee01:
            
            if (*(arg1 + 0x138) == 0)
                int32_t eax_12
                
                if (*(arg1 + 0x139) == 0)
                    eax_12 = *(arg1 + 0x134)
                
                if (*(arg1 + 0x139) == 0 && eax_12 != ebx_1)
                    if (eax_12 s< ebx_1 - 1)
                        int32_t i_2 = ebx_1 - 1 - eax_12
                        int32_t i
                        
                        do
                            *(arg1 + 0x68)
                            sub_4dab20(1, arg1 + 0x70, 0)
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    *(arg1 + 0x68)
                    result = sub_4dab20(1, arg1 + 0x70, 1)
                else
                    result = sub_4dabb0(arg1 + 0x70)
            else
                *(arg1 + 0x138) = 0
                result = sub_4dab20(1, arg1 + 0x70, 1)
        else
            int32_t eax_3 = *(arg1 + 0x13c)
            
            if (eax_3 s< 1)
                if (edx == 0 || *(arg1 + 0x13c) != 0)
                    goto label_4dee01
                
                result = sub_4dabb0(arg1 + 0x70)
                *(arg1 + 0x138) = 0
            else
                int32_t i_1 = 0
                
                if (eax_3 - 1 s> 0)
                    do
                        void* var_20 = nullptr
                        int32_t var_1c_1 = 0
                        int32_t var_18_1 = 0
                        int32_t var_8_1 = 0
                        sub_4dac60(*(arg1 + 0x68), 1, &var_20, 1, arg1 + 0x70, 0)
                        int32_t var_8_2 = 0xffffffff
                        void* ecx_2 = var_20
                        
                        if (ecx_2 != 0)
                            sub_403160(ecx_2, (var_18_1 - ecx_2) s>> 2, 4)
                            var_20 = nullptr
                            int32_t var_1c_2 = 0
                            int32_t var_18_2 = 0
                        
                        i_1 += 1
                    while (i_1 s< *(arg1 + 0x13c) - 1)
                
                *(arg1 + 0x68)
                result = sub_4dab20(1, arg1 + 0x70, 1)
                *(arg1 + 0x138) = 0
        
        *(arg1 + 0x13a) = 0
        *(arg1 + 0x13c) = 0
        *(arg1 + 0x134) = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
