// 函数: sub_470860
// 地址: 0x470860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b97e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_4 = 0
var_58 = 0xffffffff
int32_t var_28
char* eax_5 = sub_402bc0(&var_28, arg2)

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

int32_t* var_70 = &var_58
int32_t eax_6
eax_6.b = sub_69b31c(eax_5, 0x6dcf3c) == 1
int32_t ebx
ebx.b = eax_6.b == 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t eax_7 = var_58

if (ebx.b != 0)
    eax_7 = arg3

var_58 = eax_7
sub_6055e0(arg2, &var_54)
void** ebx_1 = var_54
void** esi = ebx_1
struct filesystem::CFilePath::VTable* const var_44
char var_40

if (ebx_1 != var_50)
    do
        var_44 = &filesystem::CFilePath::`vftable'
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_40 = 0
        var_4.b = 1
        sub_604730(&var_44)
        sub_403110(&var_40, arg2, nullptr, 0xffffffff)
        sub_604730(&var_44)
        sub_403110(&var_40, esi, nullptr, 0xffffffff)
        var_4.b = 2
        sub_470b60(arg1, sub_402d30(&var_28, &var_40), var_58)
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        var_4.b = 0
        var_44 = &filesystem::CFilePath::`vftable'
        
        if (var_2c_1 u>= 0x10)
            j__free(var_40.d)
        
        esi = &esi[6]
    while (esi != var_50)
    
    ebx_1 = var_54

void** esi_1 = ebx_1

if (ebx_1 != var_50)
    do
        if (esi_1[5] u>= 0x10)
            j__free(*esi_1)
        
        esi_1[5] = 0xf
        esi_1[4] = 0
        *esi_1 = nullptr
        esi_1 = &esi_1[6]
    while (esi_1 != var_50)

void*** result = sub_605cc0(arg2, &var_54)
void** ebx_3 = var_54
void** esi_2 = ebx_3

if (ebx_3 != ebx_1)
    do
        var_44 = &filesystem::CFilePath::`vftable'
        int32_t var_2c_2 = 0xf
        int32_t var_30_2 = 0
        var_40 = 0
        var_4.b = 3
        sub_604730(&var_44)
        sub_403110(&var_40, arg2, nullptr, 0xffffffff)
        sub_604730(&var_44)
        sub_403110(&var_40, esi_2, nullptr, 0xffffffff)
        var_4.b = 4
        result = sub_470860(sub_402d30(&var_28, &var_40), var_58)
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)
        
        var_4.b = 0
        var_44 = &filesystem::CFilePath::`vftable'
        
        if (var_2c_2 u>= 0x10)
            result = j__free(var_40.d)
        
        esi_2 = &esi_2[6]
    while (esi_2 != ebx_1)
    
    ebx_3 = var_54

void** esi_3 = ebx_3

if (ebx_3 != ebx_1)
    do
        if (esi_3[5] u>= 0x10)
            result = j__free(*esi_3)
        
        esi_3[5] = 0xf
        esi_3[4] = 0
        *esi_3 = nullptr
        esi_3 = &esi_3[6]
    while (esi_3 != ebx_1)

if (ebx_3 != 0)
    result = j__free(ebx_3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
