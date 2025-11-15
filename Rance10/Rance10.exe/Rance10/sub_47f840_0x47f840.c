// 函数: sub_47f840
// 地址: 0x47f840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb88
int32_t* eax_4

if (ecx != 0)
    eax_4 = (**ecx)(0x75ffa4)

int32_t result

if (ecx == 0 || eax_4 == 0)
    result = 0
else
    void* var_60
    sub_403360(&var_60, (*(*eax_4 + 8))(eax_2, arg1))
    int32_t var_8_1 = 0
    struct filesystem::CFilePath::VTable* var_48 = &filesystem::CFilePath::`vftable'
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_8_1.b = 1
    sub_67eaf0(&var_48)
    sub_4055a0(&var_44, &var_60, 0, 0xffffffff)
    char var_2c
    sub_67ea40(&var_48, &var_2c)
    var_8_1.b = 2
    int32_t esi = sbb.d(arg1, arg1, sub_47f960(&var_2c) != 0)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_67e530(&var_48)
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    result = esi + 2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
