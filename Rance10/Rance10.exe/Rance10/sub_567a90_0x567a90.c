// 函数: sub_567a90
// 地址: 0x567a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result

if (arg4[4] == 0)
    result.b = 1
else
    result = sub_567bd0(arg4, arg2, arg3, arg4)
    
    if (result.b != 0)
        int32_t esi_1 = 1
        void* var_44
        void** var_30
        
        while (true)
            int32_t* var_4c = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                arg4)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, "%s_%02d", 7)
            int32_t var_8_1 = 0
            sub_4075c0(&var_4c, &var_2c, &var_44, &var_4c, esi_1)
            var_8_1.b = 2
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (sub_567bd0(&var_44, arg2, arg3, &var_44) == 0)
                break
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            esi_1 += 1
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
