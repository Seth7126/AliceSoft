// 函数: sub_470b60
// 地址: 0x470b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9833
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t __saved_edi
int32_t var_ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_58
sub_402d30(&var_58, arg2)
int32_t var_4 = 0
var_4.b = 1
int32_t* var_88
char var_70
sub_402a20(&var_88, sub_402bc0(&var_70, &var_58))
var_4.b = 3
int32_t var_5c

if (var_5c u>= 0x10)
    j__free(var_70.d)

int32_t edi = *(arg1 + 4)
int32_t var_5c_1 = 0xf
int32_t var_60 = 0
var_70 = 0
void** eax_7 = sub_417ed0(arg1 + 4, &var_88)
char eax_9

if (eax_7 != *(arg1 + 4))
    eax_9 = sub_40c3a0(&var_88, &eax_7[4])

void** var_94

if (eax_7 == *(arg1 + 4) || eax_9 != 0)
    var_94 = *(arg1 + 4)
else
    var_94 = eax_7

int32_t var_74
struct _EXCEPTION_REGISTRATION_RECORD** result

if (var_94 == edi)
    var_4.b = 4
    void var_40
    int32_t* eax_14
    void* ecx_6
    eax_14, ecx_6 = sub_4718c0(sub_4717e0(&var_58, &var_88, &var_40, &var_58))
    int32_t* var_b0_7 = eax_14
    void* var_b4_2 = &eax_14[4]
    sub_44bc90(arg1 + 4, &var_94, ecx_6)
    var_4.b = 3
    sub_470d50(&var_40)
    void* eax_16 = sub_4713c0(arg1 + 0xc, &var_88)
    *(eax_16 + 8) = arg3
    result = sub_470da0(eax_16, eax_16, arg2, eax_16 + 4)
else
    int32_t* eax_11 = &var_88
    
    if (var_74 u>= 0x10)
        eax_11 = var_88
    
    int32_t* var_b0_4 = eax_11
    result = sub_455870(0x6dd41c)

if (var_74 u>= 0x10)
    result = j__free(var_88)

int32_t var_74_1 = 0xf
int32_t var_78 = 0
var_88.b = 0
int32_t var_44

if (var_44 u>= 0x10)
    result = j__free(var_58)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_98)
return result
