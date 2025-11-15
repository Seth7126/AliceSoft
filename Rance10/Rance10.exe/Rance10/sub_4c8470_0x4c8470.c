// 函数: sub_4c8470
// 地址: 0x4c8470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7336e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*arg1 == 0)
    result.b = 0
else
    int32_t eax_4 = *(arg2 + 0x44) - *(arg2 + 0x34)
    int32_t eax_6 = *(arg2 + 0x48) - *(arg2 + 0x38)
    bool cond:0_1 = *(arg2 + 0x30) s<= 0
    int32_t* var_4c = *(arg2 + 0x4c) - *(arg2 + 0x3c)
    int32_t var_50_1 = 0
    
    if (cond:0_1)
    label_4c8546:
        result.b = 1
    else
        int32_t edi_1 = 0
        void* var_48_1 = nullptr
        result = nullptr
        int32_t var_58_1 = 0
        int32_t* result_1 = nullptr
        
        while (true)
            int32_t ecx_1 = *(arg2 + 0x30)
            int32_t var_78_1 = divs.dp.d(sx.q(var_48_1), ecx_1) + *(arg2 + 0x3c)
            int32_t var_7c_1 = divs.dp.d(sx.q(edi_1), ecx_1) + *(arg2 + 0x38)
            int32_t var_80_1 = divs.dp.d(sx.q(result), ecx_1) + *(arg2 + 0x34)
            int32_t var_84_1 = 1
            
            if (sub_54f290(arg1, *(arg2 + 0x1c), *(arg2 + 0x20) + var_50_1, *(arg2 + 0x2c)) == 0)
                var_4c = *(arg2 + 0x1c)
                int32_t* var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                sub_403490(&var_2c, 0x762b90, 0x52)
                int32_t var_8_1 = 0
                var_8_1.b = 1
                char var_44
                sub_45aae0(sub_4b0f20(&var_4c, &var_2c, &var_44, &var_4c, *(arg2 + 0x20), 
                    *(arg2 + 0x2c), *(arg2 + 0x30)))
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                break
            
            int32_t ebx_4 = var_50_1 + 1
            result = result_1 + eax_4
            edi_1 = var_58_1 + eax_6
            var_48_1 += var_4c
            var_50_1 = ebx_4
            result_1 = result
            var_58_1 = edi_1
            
            if (ebx_4 s>= *(arg2 + 0x30))
                goto label_4c8546
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
