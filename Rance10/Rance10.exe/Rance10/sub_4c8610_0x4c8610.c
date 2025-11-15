// 函数: sub_4c8610
// 地址: 0x4c8610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = arg1
void* var_60 = arg2
int32_t* result

if (*arg1 == 0)
    result.b = 0
else
    result = *(arg2 + 0x2c)
    int32_t* result_3 = result
    
    if (result s<= 0)
        result.b = 1
    else
        result = *(arg2 + 0x30)
        
        if (result s<= 0)
            result.b = 1
        else
            int32_t esi_1 = *(arg2 + 0x3c)
            int32_t edi_1 = *(arg2 + 0x38)
            int32_t eax_3 = *(arg2 + 0x34)
            void* ecx_1 = *(arg2 + 0x20)
            void* edx_1 = *(arg2 + 0x1c)
            int32_t var_78_1 = esi_1
            int32_t var_7c_1 = edi_1
            int32_t var_80_1 = eax_3
            int32_t var_84_1 = 1
            int32_t var_78_2 = esi_1
            int32_t var_7c_2 = edi_1
            int32_t var_80_2 = eax_3
            void* ebx
            ebx.b = sub_54f290(var_48, edx_1, ecx_1, result_3) == 0
            int32_t var_84_2 = 1
            int32_t var_78_3 = esi_1
            int32_t var_7c_3 = edi_1
            int32_t var_80_3 = eax_3
            ebx:1.b = sub_54f290(var_48, edx_1, ecx_1 + result - 1, result_3) == 0
            int32_t* result_1 = result
            ebx:1.b |= ebx.b
            int32_t var_78_4 = esi_1
            int32_t var_7c_4 = edi_1
            int32_t var_80_4 = eax_3
            int32_t* result_2 = result
            ebx:1.b |= sub_54f290(var_48, edx_1, ecx_1, 1) == 0
            result.b = sub_54f290(var_48, edx_1 + result_3 - 1, ecx_1, 1).b == 0
            ebx:1.b |= result.b
            
            if (ebx:1.b == 0)
                result.b = 1
            else
                void* esi_2 = var_60
                var_60 = *(esi_2 + 0x1c)
                void* var_44
                sub_403360(&var_44, 0x762b20)
                int32_t var_8_1 = 0
                var_8_1.b = 1
                char var_2c
                sub_45aae0(sub_4b0f20(&var_60, &var_44, &var_2c, &var_60, *(esi_2 + 0x20), 
                    *(esi_2 + 0x2c), *(esi_2 + 0x30)))
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                int32_t* var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
