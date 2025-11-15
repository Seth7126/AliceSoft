// 函数: sub_421670
// 地址: 0x421670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728fa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (*(**(arg1 + 8) + 0x3c))(eax_2)
int32_t esi = 0
int32_t result_1 = result

if (result s> 0)
    do
        result = (*(**(arg1 + 8) + 0x40))(esi)
        
        if (result == arg3)
            int32_t result_3 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, 0x75cd16, nullptr)
            int32_t var_8_1 = 0
            char var_44
            char* eax_6 = sub_4201d0(arg1, &var_44, result)
            var_8_1.b = 1
            struct dpvariable::CRefPageInfo::VTable* var_84 = &dpvariable::CRefPageInfo::`vftable'
            int32_t var_80_1 = 4
            int32_t result_2 = result
            int32_t var_78_1 = 0
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            char var_74 = 0
            sub_403590(&var_74, eax_6, 0, 0xffffffff)
            var_8_1.b = 2
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            char var_5c = 0
            sub_403590(&var_5c, &var_2c, 0, 0xffffffff)
            var_8_1.b = 3
            sub_4223b0(arg2, &var_84)
            sub_423180(&var_84)
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            int32_t var_8_2 = 0xffffffff
            result = result_3
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (result u>= 0x10)
                result = sub_403160(var_2c.d, result + 1, 1)
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
        
        esi += 1
    while (esi s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
