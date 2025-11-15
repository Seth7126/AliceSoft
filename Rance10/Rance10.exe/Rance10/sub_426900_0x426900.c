// 函数: sub_426900
// 地址: 0x426900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg3 + 0x2c)
int32_t edx = *(arg3 + 0x34)
int32_t* result = arg5
int32_t* result_1 = result

if (ecx != edx)
    *(arg3 + 0x2c) = ecx + 0x28
    result = result_1
else
    ecx = arg3 + 4

if (*(ecx + 4) == 6)
    void* ecx_2 = *(arg3 + 0x2c)
    
    if (ecx_2 != edx)
        *(arg3 + 0x2c) = ecx_2 + 0x28
    else
        ecx_2 = arg3 + 4
    
    int32_t esi_1 = *(ecx_2 + 4)
    
    if (esi_1 == 7)
    label_426b7c:
        result.b = 1
    else
        struct advengine::CValueSyntax::VTable* var_68
        
        if (esi_1 == 8)
            var_68 = &advengine::CValueSyntax::`vftable'
            char var_64_1 = 0
            int128_t var_60_1 = zx.o(0)
            int32_t var_8_1 = 0
            sub_4270b0(arg2, &var_68)
            int32_t var_8_2 = 0xffffffff
            sub_42cdb0(&var_68)
        
        int32_t eax_5 = *(arg3 + 0x2c)
        
        if (eax_5 != *(arg3 + 0x30))
            *(arg3 + 0x2c) = eax_5 - 0x28
        
        if (esi_1 == 8)
            goto label_426a2e
        
        struct advengine::CValueSyntax::VTable* var_50 = &advengine::CValueSyntax::`vftable'
        char var_4c_1 = 0
        int128_t var_48_1 = zx.o(0)
        int32_t var_8_3 = 1
        
        if (sub_42cdf0(&var_50, arg3, arg4, result_1) != 0)
            sub_426e20(arg2, &var_50)
            int32_t var_8_4 = 0xffffffff
            sub_42cdb0(&var_50)
        label_426a2e:
            
            if (*(arg3 + 0x2c) == *(arg3 + 0x34))
            label_426b7c_1:
                result.b = 1
            else
                while (true)
                    void* ecx_9 = *(arg3 + 0x2c)
                    
                    if (ecx_9 != *(arg3 + 0x34))
                        *(arg3 + 0x2c) = ecx_9 + 0x28
                    else
                        ecx_9 = arg3 + 4
                    
                    result = *(ecx_9 + 4)
                    
                    if (result == 7)
                        goto label_426b7c_1
                    
                    if (result != 8)
                        sub_4073f0(0x75d768)
                        result.b = 0
                        break
                    
                    var_50 = &advengine::CValueSyntax::`vftable'
                    char var_4c_2 = 0
                    int96_t var_48_2 = (zx.o(0)).12
                    int32_t var_8_5 = 2
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    var_8_5.b = 3
                    sub_42ccf0(arg3 + 0x38, arg3 + 0x2c)
                    void* eax_9
                    
                    if (sub_42ce60(&var_50, arg3, arg4).b != 0)
                        *(arg3 + 0x3c) -= 4
                        eax_9.b = 1
                    else
                        sub_407430(&var_2c, 0x75da10, 0x7b)
                        eax_9 = *(arg3 + 0x38)
                        
                        if (eax_9 != *(arg3 + 0x3c))
                            *(arg3 + 0x2c) = *(eax_9 + ((*(arg3 + 0x3c) - eax_9) s>> 2 << 2) - 4)
                            *(arg3 + 0x3c) -= 4
                        
                        eax_9.b = 0
                    
                    if (eax_9.b != 0)
                        sub_426e20(arg2, &var_50)
                    else
                        var_68 = &advengine::CValueSyntax::`vftable'
                        char var_64_2 = eax_9.b
                        int96_t var_60_2 = (zx.o(0)).12
                        var_8_5.b = 4
                        sub_4270b0(arg2, &var_68)
                        void* ecx_17 = var_60_2.d
                        
                        if (ecx_17 != 0)
                            sub_403160(ecx_17, (var_60_2:8.d - ecx_17) s>> 2, 4)
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    int32_t var_8_6 = 0xffffffff
                    void* ecx_19 = var_48_2.d
                    var_2c = 0
                    int32_t var_1c_2 = 0
                    int32_t var_18_2 = 0xf
                    
                    if (ecx_19 != 0)
                        sub_403160(ecx_19, (var_48_2:8.d - ecx_19) s>> 2, 4)
                    
                    if (*(arg3 + 0x2c) == *(arg3 + 0x34))
                        goto label_426b7c_1
        else
            sub_42cdb0(&var_50)
            result.b = 0
else
    sub_407430(result, 0x75d7a4, 0x23)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
