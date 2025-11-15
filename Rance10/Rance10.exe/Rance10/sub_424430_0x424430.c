// 函数: sub_424430
// 地址: 0x424430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7294f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcb3c
sub_427910(esi + 0x14)
sub_403490(esi + 0x64, 0x75cd33, nullptr)
int32_t* result

if (*(esi + 0xc) != 0)
    void* eax_4 = sub_427ba0(esi + 0x14, arg1, arg2)
    
    if (eax_4.b == 0)
        void* var_74
        int32_t* eax_5 = sub_419600(eax_4, 0x75d650, &var_74, arg1)
        int32_t var_8_1 = 0
        char var_5c[0x10]
        char* eax_6 = sub_4176f0(eax_5.b, eax_5, &var_5c, U":")
        var_8_1.b = 1
        char var_44
        char* eax_7 = sub_417750(eax_6, eax_6, &var_44, arg2)
        var_8_1.b = 2
        var_8_1.b = 3
        char var_2c[0x10]
        sub_45ab60(sub_4176f0(eax_7.b, eax_7, &var_2c, 0x75d61c))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c[0].d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c[0] = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c[0].d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        int32_t* var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74, var_60 + 1, 1)
        
        result.b = 0
    else
        result = sub_4245c0(esi, arg2)
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
