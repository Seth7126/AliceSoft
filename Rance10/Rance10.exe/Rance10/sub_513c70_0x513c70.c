// 函数: sub_513c70
// 地址: 0x513c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73843e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* result_1 = result
int32_t* result_3 = result[1]

if (result_3 != 0)
    int32_t* edx
    
    if (arg4[5] u< 0x10)
        edx = arg4
    else
        edx = *arg4
    
    result = (*(result_3[1] + 0x24))(edx)
    result_3 = result

struct common::CEXTreeReader::VTable* const var_a0 = &common::CEXTreeReader::`vftable'
int32_t* result_6 = result_3
int32_t var_8_1 = 0

if (result_3 != 0)
    result = (*(*result_3 + 0x14))(eax_2)
    int32_t* result_4 = result
    int32_t esi_1 = 0
    
    if (result_4 s> 0)
        do
            var_8_1.b = 1
            void* var_90
            char var_78
            int32_t* eax_6 = sub_4175e0(sub_403dc0(&var_a0, &var_90, esi_1), arg4, &var_78, U".")
            var_8_1.b = 2
            char var_30
            sub_417750(eax_6, eax_6, &var_30, &var_90)
            var_8_1.b = 4
            int32_t var_64
            
            if (var_64 u>= 0x10)
                sub_403160(var_78.d, var_64 + 1, 1)
            
            var_64 = 0xf
            int32_t var_68_1 = 0
            var_78 = 0
            int32_t var_4c_1 = 0xf
            int32_t var_50_1 = 0
            char var_60 = 0
            sub_403590(&var_60, &var_90, 0, 0xffffffff)
            var_8_1.b = 5
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            var_8_1.b = 6
            int32_t* result_5 = result_1
            char* var_c0_3 = &var_60
            void* var_a8
            sub_514e50(arg3, &var_a8, sub_403590(&var_48, &var_30, 0, 0xffffffff))
            var_8_1.b = 4
            var_8_1.b = 7
            sub_513c70(sub_4175e0(sub_408940(&var_60), &var_30, &var_48, 0x766898))
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            int32_t var_1c
            
            if (var_1c u>= 0x10)
                sub_403160(var_30.d, var_1c + 1, 1)
            
            var_8_1.b = 0
            int32_t* result_2
            result = result_2
            var_1c = 0xf
            int32_t var_20_1 = 0
            var_30 = 0
            
            if (result u>= 0x10)
                result = sub_403160(var_90, result + 1, 1)
            
            esi_1 += 1
        while (esi_1 s< result_4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
