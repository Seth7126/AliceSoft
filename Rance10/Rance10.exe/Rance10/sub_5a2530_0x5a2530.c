// 函数: sub_5a2530
// 地址: 0x5a2530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ea38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x2e4) - *(arg2 + 0x2e0))
int32_t edx_1 = edx s>> 1
int32_t result

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    result.b = 1
else
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    char var_2c = 0
    sub_403490(&var_2c, 0x769b84, 0x13)
    int32_t var_8_1 = 0
    char* esi_1 = &var_2c
    char* edx_2 = &var_2c
    
    if (var_18_1 u>= 0x10)
        esi_1 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_2 = var_2c.d
    
    void* esi_2 = arg1
    int32_t var_64_1 = 0.d
    sub_6ca200(arg1 + 4, *(esi_2 + 8), edx_2, var_1c_1 + esi_1)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t ebx_1 = 0
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x2e4) - *(arg2 + 0x2e0))
    int32_t edx_4 = edx_3 s>> 1
    
    if ((edx_4 u>> 0x1f) + edx_4 s<= 0)
    label_5a2706:
        int32_t var_30_1 = 0xf
        void* const var_34_1 = nullptr
        char var_44 = 0
        sub_403490(&var_44, "\r\n\r\n", 4)
        char* esi_4 = &var_44
        int32_t var_8_5 = 2
        char* edx_12 = &var_44
        
        if (var_30_1 u>= 0x10)
            esi_4 = var_44.d
        
        if (var_30_1 u>= 0x10)
            edx_12 = var_44.d
        
        int32_t var_64_3 = 0.d
        sub_6ca200(arg1 + 4, *(arg1 + 8), edx_12, var_34_1 + esi_4)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result.b = 1
    else
        int32_t eax_14 = 0
        char var_48_1
        var_48_1.d = 0
        
        while (true)
            if (sub_5a2790(esi_2, *(arg2 + 0x2e0) + eax_14).b == 0)
                result.b = 0
                break
            
            int32_t eax_15
            int32_t edx_7
            edx_7:eax_15 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x2e4) - *(arg2 + 0x2e0))
            int32_t edx_8 = edx_7 s>> 1
            
            if (ebx_1 s< (edx_8 u>> 0x1f) - 1 + edx_8)
                int32_t var_18_2 = 0xf
                void* const var_1c_2 = nullptr
                var_2c = 0
                sub_403490(&var_2c, ",\r\n", 3)
                int32_t var_8_3 = 1
                char* esi_3 = &var_2c
                char* edx_9 = &var_2c
                
                if (var_18_2 u>= 0x10)
                    esi_3 = var_2c.d
                
                if (var_18_2 u>= 0x10)
                    edx_9 = var_2c.d
                
                esi_2 = arg1
                int32_t var_64_2 = 0.d
                sub_6ca200(esi_2 + 4, *(esi_2 + 8), edx_9, var_1c_2 + esi_3)
                int32_t var_8_4 = 0xffffffff
                
                if (var_18_2 u>= 0x10)
                    sub_403160(var_2c.d, var_18_2 + 1, 1)
            
            ebx_1 += 1
            var_48_1.d += 0xc
            int32_t eax_24
            int32_t edx_10
            edx_10:eax_24 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x2e4) - *(arg2 + 0x2e0))
            int32_t edx_11 = edx_10 s>> 1
            eax_14 = var_48_1.d
            
            if (ebx_1 s>= (edx_11 u>> 0x1f) + edx_11)
                goto label_5a2706

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
