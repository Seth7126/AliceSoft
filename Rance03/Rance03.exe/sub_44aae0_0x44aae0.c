// 函数: sub_44aae0
// 地址: 0x44aae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg2
var_58 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4 = 0
void*** result = sub_605cc0(arg1, &var_58)
void** ebx = var_58
void** esi = ebx

if (ebx != var_54)
    int32_t* ebx_1 = var_4c
    
    do
        struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        char var_40 = 0
        var_4.b = 1
        sub_604730(&var_44)
        sub_403110(&var_40, arg1, nullptr, 0xffffffff)
        sub_604730(&var_44)
        sub_403110(&var_40, esi, nullptr, 0xffffffff)
        int32_t var_28
        char* eax_6 = sub_402d30(&var_28, &var_40)
        var_4.b = 2
        uint32_t ecx_6 = zx.d(data_75dd26)
        uint32_t var_70_1 = ecx_6
        char* var_74_1 = eax_6
        result = sub_4183d0(ebx_1, &var_4c, ecx_6)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)
        
        var_4.b = 0
        var_44 = &filesystem::CFilePath::`vftable'
        
        if (var_2c_1 u>= 0x10)
            result = j__free(var_40.d)
        
        esi = &esi[6]
    while (esi != var_54)
    
    ebx = var_58

if (ebx != 0)
    void** esi_1 = ebx
    
    if (ebx != var_54)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = nullptr
            esi_1 = &esi_1[6]
        while (esi_1 != var_54)
    
    result = j__free(ebx)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
