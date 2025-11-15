// 函数: sub_5a1ef0
// 地址: 0x5a1ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
void* var_68 = esi
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
int32_t edx_3 = edx_2 s>> 1
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s<= 0)
    result.b = 1
else
    void* var_5c
    int32_t* eax_6 = sub_419600(result, U"\t", &var_5c, arg2)
    int32_t var_8_1 = 0
    char var_2c
    char* ecx_2 = sub_4176f0(eax_6.b, eax_6, &var_2c, " =\r\n")
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
    
    int32_t* edx_6 = esi + 4
    int32_t var_80_2 = 0.d
    sub_6ca200(edx_6, *(esi + 8), ecx_2, &eax_8[ebx_1])
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t ebx_2 = 0
    int32_t eax_14
    int32_t edx_7
    edx_7:eax_14 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
    int32_t edx_8 = edx_7 s>> 1
    
    if ((edx_8 u>> 0x1f) + edx_8 s<= 0)
    label_5a20e0:
        int32_t var_30_1 = 0xf
        void* const var_34_1 = nullptr
        char var_44 = 0
        sub_403490(&var_44, "\r\n\r\n", 4)
        char* esi_2 = &var_44
        int32_t var_8_5 = 3
        char* edx_16 = &var_44
        
        if (var_30_1 u>= 0x10)
            esi_2 = var_44.d
        
        if (var_30_1 u>= 0x10)
            edx_16 = var_44.d
        
        int32_t var_80_4 = 0.d
        sub_6ca200(edx_6, *(var_68 + 8), edx_16, var_34_1 + esi_2)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result.b = 1
    else
        int32_t eax_18 = 0
        char var_60_1
        var_60_1.d = 0
        
        while (true)
            if (sub_5a2170(esi, *arg4 + eax_18).b == 0)
                result.b = 0
                break
            
            int32_t eax_19
            int32_t edx_11
            edx_11:eax_19 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
            int32_t edx_12 = edx_11 s>> 1
            
            if (ebx_2 s< (edx_12 u>> 0x1f) - 1 + edx_12)
                int32_t var_18_2 = 0xf
                void* const var_1c_2 = nullptr
                var_2c = 0
                sub_403490(&var_2c, ",\r\n", 3)
                int32_t var_8_3 = 2
                char* esi_1 = &var_2c
                char* edx_13 = &var_2c
                
                if (var_18_2 u>= 0x10)
                    esi_1 = var_2c.d
                
                if (var_18_2 u>= 0x10)
                    edx_13 = var_2c.d
                
                esi = var_68
                int32_t var_80_3 = 0.d
                sub_6ca200(esi + 4, *(esi + 8), edx_13, var_1c_2 + esi_1)
                int32_t var_8_4 = 0xffffffff
                
                if (var_18_2 u>= 0x10)
                    sub_403160(var_2c.d, var_18_2 + 1, 1)
            
            ebx_2 += 1
            var_60_1.d += 0xc
            int32_t eax_28
            int32_t edx_14
            edx_14:eax_28 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
            int32_t edx_15 = edx_14 s>> 1
            eax_18 = var_60_1.d
            
            if (ebx_2 s>= (edx_15 u>> 0x1f) + edx_15)
                goto label_5a20e0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
