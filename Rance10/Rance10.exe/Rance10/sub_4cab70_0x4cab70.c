// 函数: sub_4cab70
// 地址: 0x4cab70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7339d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result

if (*arg1 == 0)
    result.b = 0
else
    int32_t edx_1 = *(arg2 + 0x20)
    int32_t esi_1 = 0
    int32_t ecx_1 = *(arg2 + 0x1c)
    int32_t ebx_1 = *(arg2 + 0x2c)
    int32_t edx_2 = *(arg2 + 0x30)
    int32_t edx_3 = *(arg2 + 0x40)
    result = *(arg2 + 0x50) - edx_3
    int32_t var_50 = ecx_1
    void* const result_1 = result
    
    if (ebx_1 s<= 0)
    label_4caca2:
        result.b = 1
    else
        void* edi_1 = nullptr
        
        while (true)
            int32_t var_70_1 = divs.dp.d(sx.q(edi_1), ebx_1) + edx_3
            int32_t var_74_1 = edx_2
            int32_t var_78_1 = 1
            int32_t var_7c_1 = edx_1
            result, ebx_1 = sub_54f5b0(arg1, esi_1.b + ecx_1.b)
            
            if (result.b == 0)
                void* const var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                sub_403490(&var_2c, 0x763c80, 0x60)
                int32_t var_8_1 = 0
                var_8_1.b = 1
                char var_44
                sub_45aae0(sub_4b0f20(&var_50, &var_2c, &var_44, &var_50, edx_1, ebx_1, edx_2))
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                break
            
            edi_1 += result_1
            esi_1 += 1
            
            if (esi_1 s>= ebx_1)
                goto label_4caca2
            
            ecx_1 = var_50
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
