// 函数: sub_5cc5c0
// 地址: 0x5cc5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9ee8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_esi
int32_t var_64 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
var_58 = 0
var_4.b = 1
char result = sub_5cea10(arg1, &var_58, "system.CopySaveFile")

if (result != 0)
    result = sub_5cea10(arg1, &var_40, "system.CopySaveFile")
    
    if (result != 0)
        var_4.b = 2
        int32_t var_28
        int32_t ebx
        ebx.b = sub_5db110(arg1 + 0x1e0, sub_5c0db0(arg1, &var_28), &var_40, &var_58)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        int32_t eax_7
        eax_7.b = ebx.b != 0
        result = sub_5ddf10(arg1 + 0x220, eax_7)

if (var_44 u>= 0x10)
    result = j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
