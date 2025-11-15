// 函数: sub_4511f0
// 地址: 0x4511f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x118) == 0 || arg2 == 0)
    result.b = 0
else
    void* ecx = *(arg1 + 0x120)
    
    if (ecx == 0)
        result.b = 0
    else
        bool cond:1_1 = *(arg1 + 0x110) == 0
        result.b = *(arg1 + 0x115)
        int32_t* ecx_1 = *(ecx + 8)
        float var_30
        var_30.b = result.b
        
        if (*(arg1 + 0x10c) != 1)
            if (ecx_1 == 0)
                result.b = 0
            else if ((*(*ecx_1 + 0x2c))(0, 0, var_30, cond:1_1.d).b == 0)
                result.b = 0
            else
            label_4512b8:
                int32_t var_50
                __builtin_memset(&var_50, 0, 0x18)
                int32_t var_48
                int32_t var_40
                char eax_8 = sub_451030(arg1, arg3 + 4, &var_50, &var_48, &var_40, &var_30)
                char eax_11 = (*(**(arg1 + 0x118) + 0x28))(eax_2)
                int32_t esi_1 = *(arg1 + 0x28)
                int32_t edi_1 = *(arg1 + 0x24)
                int32_t ecx_13 =
                    ((*(arg1 + 0xc) << 8 | zx.d(*(arg1 + 0xe4))) << 8 | zx.d(*(arg1 + 0xe8))) << 8
                    | zx.d(*(arg1 + 0xec))
                int32_t edx_1 = *(arg1 + 0x30)
                int32_t ecx_20 =
                    ((*(arg1 + 0x100) << 8 | zx.d(*(arg1 + 0xf4))) << 8 | zx.d(*(arg1 + 0xf8))) << 8
                    | zx.d(*(arg1 + 0xfc))
                uint32_t eax_17
                eax_17.b = *(arg1 + 0x114)
                int32_t var_7c_4 = *(arg3 + 0x18)
                int32_t var_80_4 = *(arg3 + 0x14)
                void* ebx_2 = *arg2
                int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + esi_1))
                int32_t xmm0_4 = _mm_cvtepi32_ps(zx.o(edx_1 + edi_1))
                uint32_t eax_21 = zx.d(*(arg1 + 0x19))
                int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(esi_1))
                int32_t xmm0_8 = _mm_cvtepi32_ps(zx.o(edi_1))
                int32_t var_4c
                int32_t var_44
                int32_t var_3c
                result = (*(ebx_2 + 0xb8))(1, 1, *(arg1 + 0x10), eax_11.d, ecx_13, ecx_20, 
                    eax_17.b.d, eax_8.d, var_50, var_4c, var_48, var_44, var_40, var_3c, var_30, 
                    eax_21, xmm0_8, xmm0_6, xmm0_4, xmm0_2, var_80_4, var_7c_4)
                
                if (result.b != 0)
                    result.b = 1
                else
                    void var_2c
                    sub_403360(&var_2c, 0x75de70)
                    int32_t var_8_1 = 0
                    sub_6c52e0(&var_2c)
                    sub_403320(&var_2c)
                    result.b = 0
        else if (ecx_1 == 0)
            result.b = 0
        else
            if ((*(*ecx_1 + 0x2c))(0, 1, var_30, cond:1_1.d).b != 0)
                goto label_4512b8
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
