// 函数: sub_44bc00
// 地址: 0x44bc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aba7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcb48
sub_4063f0(esi + 0x10)
int32_t* ecx_1 = *(esi + 0x4c)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(esi + 0x4c) = 0

int32_t* ecx_2 = *(esi + 0x48)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *(esi + 0x48) = 0

int32_t* edi = data_7fcb58
*(esi + 0x44) = 0
char* result

if (edi == 0)
    result = nullptr
else if (sub_41ac20(0x75dce8, 0x75e0dc) == 0)
    if (sub_41ac20(0x75dce8, 0x75e0ec) == 0)
        result = nullptr
    else
        (**edi)(eax_2)
        result = data_7fcb58
else
    (**edi)(eax_2)
    result = data_7fcb58

*(esi + 0x48) = result

if (result != 0)
    result.b = arg2
    *(esi + 0xc) = result.b
    *(esi + 0x44) = arg1
    char var_2c
    
    if (arg1 == 0)
        sub_403360(&var_2c, "CGAFA")
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        int32_t var_8_2 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
    
    struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGCache::VTable** eax_12 =
        sub_6e810c(0x20)
    struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGCache::VTable** var_80_1 =
        eax_12
    int32_t var_8_3 = 1
    *(esi + 0x4c) = sub_44b360(eax_12, *(esi + 8))
    struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_4 = 2
    sub_67e790(&var_48)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, "CG", 2)
    var_8_4.b = 3
    sub_67eaf0(&var_48)
    sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
    var_8_4.b = 2
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t ebx
    
    if (sub_44d130(esi + 0x50, *(esi + 0xc), &var_44).b != 0)
        struct filesystem::CFilePath::VTable* var_64 = &filesystem::CFilePath::`vftable'
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60 = 0
        var_8_4.b = 4
        sub_67e8b0(&var_64)
        void* var_7c
        sub_403360(&var_7c, "CG")
        var_8_4.b = 5
        sub_67eaf0(&var_64)
        sub_4055a0(&var_60, &var_7c, 0, 0xffffffff)
        var_8_4.b = 4
        int32_t var_68
        
        if (var_68 u>= 0x10)
            sub_403160(var_7c, var_68 + 1, 1)
        
        ebx.b = sub_44d130(esi + 0x60, *(esi + 0xc), &var_60) != 0
        sub_67e530(&var_64)
    else
        ebx.b = 0
    
    var_48 = &filesystem::CFilePath::`vftable'
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
