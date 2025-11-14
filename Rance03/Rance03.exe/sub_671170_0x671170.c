// 函数: sub_671170
// 地址: 0x671170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0038
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
char* result = sub_671270(&var_2c, arg2)
int32_t ebx
ebx.b = *(result + 0x10) == 0
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

if (ebx.b == 0)
    struct dpparts::CListHeaderParts::VTable* var_4c = &dpparts::CListHeaderParts::`vftable'
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = ebx.b
    sub_402110(&var_48, "None", 4)
    char var_30_1 = 1
    int32_t var_4 = 0
    
    if (&var_48 != arg2)
        sub_401ff0(&var_48, arg2, 0, 0xffffffff)
    
    result = sub_6715d0(arg1 + 4, &var_4c)
    var_4c = &dpparts::CListHeaderParts::`vftable'
    
    if (var_34_1 u>= 0x10)
        result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
