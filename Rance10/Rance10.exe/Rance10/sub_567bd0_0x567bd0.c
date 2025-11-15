// 函数: sub_567bd0
// 地址: 0x567bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c107
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_9c = 0xf
int32_t var_a0 = 0
char var_b0 = 0
sub_403490(&var_b0, ".bmp", 4)
int32_t var_8_1 = 0
int32_t var_84 = 0xf
int32_t var_88 = 0
char var_98 = 0
sub_403490(&var_98, ".tga", 4)
var_8_1.b = 1
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
sub_403490(&var_80, ".png", 4)
int32_t var_8_2 = 2
void** ecx_3 = arg2 + 4
char* esi = &var_b0
void** var_bc = ecx_3

while (true)
    struct filesystem::CFilePath::VTable* const var_4c = &filesystem::CFilePath::`vftable'
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    var_8_2.b = 3
    void* var_64
    int32_t* eax_6 = sub_4079d0(sub_403590(&var_48, ecx_3, 0, 0xffffffff), arg4, &var_64, esi)
    var_8_2.b = 4
    sub_67eaf0(&var_4c)
    sub_4055a0(&var_48, eax_6, 0, 0xffffffff)
    var_8_2.b = 3
    int32_t var_50
    
    if (var_50 u>= 0x10)
        sub_403160(var_64, var_50 + 1, 1)
    
    struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_2.b = 5
    int32_t* eax_10 = sub_4079d0(sub_403590(&var_2c, arg3 + 4, 0, 0xffffffff), arg4, &var_64, esi)
    var_8_2.b = 6
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, eax_10, 0, 0xffffffff)
    
    if (var_50 u>= 0x10)
        sub_403160(var_64, var_50 + 1, 1)
    
    char* lpFileName = &var_48
    
    if (var_34_1 u>= 0x10)
        lpFileName = var_48.d
    
    uint32_t eax_13 = GetFileAttributesA(lpFileName)
    void** ebx_1
    
    if (eax_13 != 0xffffffff && (not.b((eax_13 u>> 4).b) & 1) != 0)
        char* lpNewFileName = &var_2c
        
        if (var_18_1 u>= 0x10)
            lpNewFileName = var_2c.d
        
        char* lpExistingFileName = &var_48
        
        if (var_34_1 u>= 0x10)
            lpExistingFileName = var_48.d
        
        CopyFileA(lpExistingFileName, lpNewFileName, 0)
        var_30 = &filesystem::CFilePath::`vftable'
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        var_4c = &filesystem::CFilePath::`vftable'
        
        if (var_34_1 u>= 0x10)
            sub_403160(var_48.d, var_34_1 + 1, 1)
        
        ebx_1.b = 1
        goto label_567e9a
    
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    var_8_2.b = 2
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    var_4c = &filesystem::CFilePath::`vftable'
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    esi = &esi[0x18]
    void var_68
    
    if (esi == &var_68)
        ebx_1.b = 0
    label_567e9a:
        int32_t var_8_3 = 8
        `eh vector vbase constructor iterator'(&var_b0, 0x18, 3, sub_403320)
        int32_t result
        result.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    ecx_3 = var_bc
