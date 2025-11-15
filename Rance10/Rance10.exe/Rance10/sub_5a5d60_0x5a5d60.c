// 函数: sub_5a5d60
// 地址: 0x5a5d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73eea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
int32_t edx_3 = edx_2 s>> 2
int32_t result

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    result.b = 1
else
    if (esi[5] u>= 0x10)
        esi = *esi
    
    void** var_60 = esi
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "\t%s =\r\n", 7)
    int32_t var_8_1 = 0
    char var_5c
    char* ecx_2 = sub_409240(&var_60, &var_2c, &var_5c, &var_60)
    var_8_1.b = 1
    int32_t edx_5 = *(ecx_2 + 0x14)
    int32_t ebx_1 = *(ecx_2 + 0x10)
    char* eax_8
    
    if (edx_5 u< 0x10)
        eax_8 = ecx_2
    else
        eax_8 = *ecx_2
    
    if (edx_5 u>= 0x10)
        ecx_2 = *ecx_2
    
    void* esi_1 = arg3
    int32_t var_7c_2 = 0.d
    sub_6ca200(esi_1 + 4, *(esi_1 + 8), ecx_2, &eax_8[ebx_1])
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t ecx_5 = arg4[1] - *arg4
    int32_t ebx_2 = 0
    
    if (ecx_5 s/ 0x18 s<= 0)
    label_5a5f76:
        int32_t var_30_1 = 0xf
        void* const var_34_1 = nullptr
        char var_44 = 0
        sub_403490(&var_44, "\r\n\r\n", 4)
        char* esi_3 = &var_44
        int32_t var_8_5 = 3
        char* edx_15 = &var_44
        
        if (var_30_1 u>= 0x10)
            esi_3 = var_44.d
        
        if (var_30_1 u>= 0x10)
            edx_15 = var_44.d
        
        int32_t var_7c_5 = 0.d
        sub_6ca200(arg3 + 4, *(arg3 + 8), edx_15, var_34_1 + esi_3)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result.b = 1
    else
        void** eax_18 = nullptr
        var_60 = nullptr
        
        while (true)
            int32_t var_7c_3 = ecx_5
            
            if (sub_5a6f40(esi_1, *arg4 + eax_18).b == 0)
                result.b = 0
                break
            
            int32_t eax_19
            int32_t edx_10
            edx_10:eax_19 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
            int32_t edx_11 = edx_10 s>> 2
            
            if (ebx_2 s< (edx_11 u>> 0x1f) - 1 + edx_11)
                int32_t var_18_2 = 0xf
                void* const var_1c_2 = nullptr
                var_2c = 0
                sub_403490(&var_2c, ",\r\n", 3)
                int32_t var_8_3 = 2
                char* esi_2 = &var_2c
                char* edx_12 = &var_2c
                
                if (var_18_2 u>= 0x10)
                    esi_2 = var_2c.d
                
                if (var_18_2 u>= 0x10)
                    edx_12 = var_2c.d
                
                esi_1 = arg3
                int32_t var_7c_4 = 0.d
                sub_6ca200(esi_1 + 4, *(esi_1 + 8), edx_12, var_1c_2 + esi_2)
                int32_t var_8_4 = 0xffffffff
                
                if (var_18_2 u>= 0x10)
                    sub_403160(var_2c.d, var_18_2 + 1, 1)
            
            ecx_5 = arg4[1] - *arg4
            ebx_2 += 1
            var_60 = &var_60[6]
            eax_18 = var_60
            
            if (ebx_2 s>= ecx_5 s/ 0x18)
                goto label_5a5f76

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
