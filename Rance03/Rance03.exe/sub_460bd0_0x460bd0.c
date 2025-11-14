// 函数: sub_460bd0
// 地址: 0x460bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8a4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
sub_459160(&var_2c, arg2)
int32_t var_4 = 0
void** eax_5 = sub_417ed0(arg1 + 0x1c, &var_2c)
char eax_7

if (eax_5 != *(arg1 + 0x1c))
    eax_7 = sub_40c3a0(&var_2c, &eax_5[4])

void** var_50

if (eax_5 == *(arg1 + 0x1c) || eax_7 != 0)
    var_50 = *(arg1 + 0x1c)
else
    var_50 = eax_5

void** eax_9 = var_50
struct exfile::CDefineData::VTable** result

if (eax_9 != *(arg1 + 0x1c))
    result = eax_9[0xa]
else
    void** eax_10 = sub_69adc6(0x60)
    var_50 = eax_10
    var_4.b = 1
    
    if (eax_10 == 0)
        result = nullptr
    else
        result = sub_460690(eax_10)
    
    var_4.b = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401ff0(&var_48, &var_2c, 0, 0xffffffff)
    struct exfile::CDefineData::VTable** result_1 = result
    var_4.b = 2
    int32_t* eax_12
    void* ecx_5
    eax_12, ecx_5 = sub_461410(&var_48)
    int32_t* var_64_3 = eax_12
    void* var_68_2 = &eax_12[4]
    sub_428520(arg1 + 0x1c, &var_50, ecx_5)
    
    if (var_34_1 u>= 0x10)
        j__free(var_48.d)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
