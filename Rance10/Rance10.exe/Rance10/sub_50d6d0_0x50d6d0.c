// 函数: sub_50d6d0
// 地址: 0x50d6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4
void** result_1 = result

if (arg3[4] != 0)
    int32_t esi_1 = *(arg2 + 8)
    void* ebx_1 = nullptr
    int32_t var_34 = esi_1
    
    if ((esi_1.b & 1) != 0)
        var_34 = esi_1 + 1
    
    int32_t eax_5 = int.d(sub_4a78b0(*(arg2 + 0x20)))
    float xmm0_3 = *(arg2 + 0x1c)
    
    if (eax_5 s< *(arg2 + 8))
        esi_1 = eax_5
    
    int32_t var_44 = esi_1
    int32_t eax_6 = int.d(sub_4a78b0(xmm0_3))
    int32_t ecx_2 = *(arg2 + 8)
    
    if (eax_6 s< ecx_2)
        ecx_2 = eax_6
    
    int32_t* eax_7 = &var_44
    int32_t var_48 = ecx_2
    
    if (ecx_2 s>= esi_1)
        eax_7 = &var_48
    
    void** result_2 = result_1
    int32_t esi_2 = 0
    int32_t eax_11 = *(arg1 + 0x214) + var_34 + (*eax_7 << 1)
    *result_2 = nullptr
    int32_t* ecx_5 = arg5
    var_48 = eax_11
    *ecx_5 = eax_11
    int32_t eax_12 = arg3[4]
    
    if (eax_12 s> 0)
        do
            int32_t* eax_13
            
            if (arg3[5] u< 0x10)
                eax_13 = arg3
            else
                eax_13 = *arg3
            
            ecx_5.b = *(eax_13 + esi_2)
            
            if (ecx_5.b != 0xa)
                int32_t var_18_1 = 0xf
                int32_t var_8_1 = 0
                
                if (ecx_5.b u< 0x81 || ecx_5.b u> 0x9f)
                    eax_13.b = ecx_5.b
                    eax_13.b += 0x20
                
                char var_2c
                
                if ((ecx_5.b u< 0x81 || ecx_5.b u> 0x9f) && eax_13.b u> 0xf)
                    var_2c = ecx_5.b
                    int32_t var_1c_2 = 1
                    char var_2b_2 = 0
                else
                    esi_2 += 1
                    var_2c = ecx_5.b
                    int32_t var_1c_1 = 1
                    char var_2b_1 = 0
                    int32_t* eax_16
                    
                    if (arg3[5] u< 0x10)
                        eax_16 = arg3
                    else
                        eax_16 = *arg3
                    
                    eax_16.b = *(eax_16 + esi_2)
                    var_44.b = eax_16.b
                    sub_405500(&var_2c, 1, var_44.b)
                
                int32_t ecx_7 = 0
                
                if (sub_641fe0(arg2, &var_2c, &var_34) != 0)
                    ecx_7 = var_34
                
                int32_t var_8_2 = 0xffffffff
                ebx_1 += *(arg1 + 0x210) + ecx_7
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                ecx_5 = arg5
                result_2 = result_1
            else
                ecx_5 = arg5
                *ecx_5 += var_48
                void* eax_15 = *result_2
                
                if (eax_15 s< ebx_1)
                    eax_15 = ebx_1
                
                ebx_1 = nullptr
                *result_2 = eax_15
            
            esi_2 += 1
        while (esi_2 s< eax_12)
    
    void* eax_23 = *result_2
    
    if (eax_23 s< ebx_1)
        eax_23 = ebx_1
    
    *result_2 = eax_23
    *ecx_5 -= *(arg1 + 0x214)
    result = *(arg1 + 0x210)
    *result_2 -= result
else
    *arg5 = 0
    *result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
