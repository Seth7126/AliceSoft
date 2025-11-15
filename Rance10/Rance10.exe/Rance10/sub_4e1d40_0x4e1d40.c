// 函数: sub_4e1d40
// 地址: 0x4e1d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
void** result_1 = result

if (arg2[4] != 0)
    int32_t esi_1 = *(arg1 + 8)
    void* ebx_1 = nullptr
    int32_t var_38 = esi_1
    
    if ((esi_1.b & 1) != 0)
        var_38 = esi_1 + 1
    
    int32_t eax_5 = int.d(sub_4a78b0(*(arg1 + 0x20)))
    float xmm0_3 = *(arg1 + 0x1c)
    
    if (eax_5 s< *(arg1 + 8))
        esi_1 = eax_5
    
    int32_t var_40 = esi_1
    int32_t eax_6 = int.d(sub_4a78b0(xmm0_3))
    int32_t ecx_2 = *(arg1 + 8)
    
    if (eax_6 s< ecx_2)
        ecx_2 = eax_6
    
    int32_t* eax_7 = &var_40
    int32_t var_44 = ecx_2
    
    if (ecx_2 s>= esi_1)
        eax_7 = &var_44
    
    int32_t* edx_2 = arg4
    int32_t esi_2 = 0
    int32_t eax_9 = var_38 + (*eax_7 << 1)
    void** result_2 = result_1
    var_44 = eax_9
    *result_2 = nullptr
    *edx_2 = eax_9
    int32_t eax_10 = arg2[4]
    
    if (eax_10 s> 0)
        do
            int32_t edx_3 = arg2[5]
            int32_t* eax_11
            
            if (edx_3 u< 0x10)
                eax_11 = arg2
            else
                eax_11 = *arg2
            
            result_2.b = *(eax_11 + esi_2)
            
            if (result_2.b != 0xa)
                int32_t var_18_1 = 0xf
                int32_t var_8_1 = 0
                
                if (result_2.b u< 0x81 || result_2.b u> 0x9f)
                    eax_11.b = result_2.b
                    eax_11.b += 0x20
                
                char var_2c
                
                if ((result_2.b u< 0x81 || result_2.b u> 0x9f) && eax_11.b u> 0xf)
                    var_2c = result_2.b
                    int32_t var_1c_2 = 1
                    char var_2b_2 = 0
                else
                    esi_2 += 1
                    var_2c = result_2.b
                    int32_t var_1c_1 = 1
                    char var_2b_1 = 0
                    int32_t* eax_15
                    
                    if (edx_3 u< 0x10)
                        eax_15 = arg2
                    else
                        eax_15 = *arg2
                    
                    eax_15.b = *(eax_15 + esi_2)
                    var_40.b = eax_15.b
                    sub_405500(&var_2c, 1, var_40.b)
                
                int32_t ecx_5 = 0
                
                if (sub_641fe0(arg1, &var_2c, &var_38) != 0)
                    ecx_5 = var_38
                
                int32_t var_8_2 = 0xffffffff
                ebx_1 += arg5 + ecx_5
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                edx_2 = arg4
                result_2 = result_1
            else
                edx_2 = arg4
                result_2 = result_1
                *edx_2 += arg6 + var_44
                void* eax_14 = *result_2
                
                if (eax_14 s< ebx_1)
                    eax_14 = ebx_1
                
                ebx_1 = nullptr
                *result_2 = eax_14
            
            esi_2 += 1
        while (esi_2 s< eax_10)
    
    void* eax_21 = *result_2
    
    if (eax_21 s< ebx_1)
        eax_21 = ebx_1
    
    *result_2 = eax_21
    *edx_2 -= arg6
    result = arg5
    *result_2 -= result
else
    *result = 0
    *arg4 = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
