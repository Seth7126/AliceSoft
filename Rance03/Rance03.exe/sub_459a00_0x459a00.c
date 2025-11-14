// 函数: sub_459a00
// 地址: 0x459a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7f52
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
struct exfile::CEXTextAnalyser::VTable* const var_4c = nullptr
sub_402110(arg1 + 4, 0x6da15a, nullptr)
sub_402110(arg1 + 0x1c, 0x6da15f, nullptr)
sub_402110(arg1 + 0x34, 0x6da15b, nullptr)
int32_t var_28
char* eax_6 = sub_4026d0(&var_28, esi)
int32_t var_4 = 0
int32_t ebx = 1
var_4c = 1
char var_4d_1
char var_40

if (sub_40c250(eax_6, "txtex") != 0)
    var_4d_1 = 0
else
    char* eax_7 = sub_4026d0(&var_40, esi)
    int32_t var_4_1 = 1
    ebx = 3
    var_4c = 3
    var_4d_1 = 1
    
    if (sub_40c250(eax_7, 0x6dbab4) != 0)
        var_4d_1 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0

int32_t var_4_2 = 0xffffffff
int32_t var_14

if ((ebx.b & 1) != 0 && var_14 u>= 0x10)
    j__free(var_28)

char result

if (var_4d_1 != 0)
    result = 1
else
    var_4c = &exfile::CEXTextAnalyser::`vftable'
    void* var_48_1 = arg1 + 0x4c
    int32_t var_4_3 = 2
    
    if (sub_45d6c0(&var_4c, esi, arg2) != 0)
        if (arg1 + 0x34 != esi)
            sub_401ff0(arg1 + 0x34, esi, 0, 0xffffffff)
        
        result = 1
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* var_68_4 = esi
        var_4_3.b = 3
        sub_456a00(arg1 + 0x4c, sub_4691f0(&var_28, 0x6dba84))
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
