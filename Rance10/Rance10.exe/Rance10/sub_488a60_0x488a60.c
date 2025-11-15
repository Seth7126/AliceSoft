// 函数: sub_488a60
// 地址: 0x488a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f028
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 0xf
int32_t var_6c = 0
char var_7c = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_488eb0(&var_7c) == 0 || arg1[1] != 0)
    ebx.b = 0
else if (sub_485d90(arg1, &var_7c) == 0)
    ebx.b = 0
else if (sub_485fd0(arg1, arg1[1]) == 0)
    ebx.b = 0
else
    struct filesystem::CFilePath::VTable* var_64 = &filesystem::CFilePath::`vftable'
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    char var_60 = 0
    var_8_1.b = 1
    sub_67e790(&var_64)
    char var_2c
    sub_403360(&var_2c, "Sound")
    var_8_1.b = 2
    sub_67eaf0(&var_64)
    sub_4055a0(&var_60, &var_2c, 0, 0xffffffff)
    var_8_1.b = 1
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t* ecx_7 = data_7fcb88
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (ecx_7 != 0)
        int32_t* eax_7 = (**ecx_7)(0x75ffc4)
        
        if (eax_7 != 0 && (**eax_7)(eax_2) != 0)
            sub_4838f0(&arg1[9], &var_60, 0xffffffff)
    
    struct filesystem::CFilePath::VTable* var_48 = &filesystem::CFilePath::`vftable'
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_8_1.b = 3
    sub_67e8b0(&var_48)
    sub_403360(&var_2c, "Sound")
    var_8_1.b = 4
    sub_67eaf0(&var_48)
    sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
    var_8_1.b = 3
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t* ecx_14 = data_7fcb88
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (ecx_14 != 0)
        int32_t* eax_14 = (**ecx_14)(0x75ffc4)
        
        if (eax_14 != 0 && (**eax_14)(eax_2) != 0)
            sub_4838f0(&arg1[4], &var_44, 0xffffffff)
    
    ebx.b = 1
    sub_67e530(&var_48)
    sub_67e530(&var_64)

if (var_68 u>= 0x10)
    sub_403160(var_7c.d, var_68 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
