// 函数: sub_4df6f0
// 地址: 0x4df6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be8a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_90 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x98) != 0xffffffff)
    int32_t eax_7 = sub_4c75f0(arg1 + 0xa8)
    int32_t var_78
    int32_t* ecx = &var_78
    bool cond:1_1 = eax_7 s>= *(arg1 + 0x98)
    int32_t* eax_8 = &var_78
    var_78 = eax_7
    
    if (cond:1_1)
        ecx = arg1 + 0x98
    
    if (*(arg1 + 0x98) s>= eax_7)
        eax_8 = arg1 + 0x98
    
    int32_t var_94_2 = *eax_8
    int32_t var_98_1 = *ecx
    eax_5 = sub_4df060(arg1)

char var_5c
int32_t* eax_9 = sub_40d1c0(eax_5, arg1 + 0xa8, &var_5c, arg2)
int32_t var_4 = 0
int32_t var_2c
sub_410ad0(eax_9, eax_9, &var_2c, arg1 + 0xc0)
var_4.b = 2
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t eax_10 = sub_4c75f0(&var_2c)
int32_t ebx = *(arg1 + 0x154)
int32_t var_44
int32_t var_30
int32_t* eax_14
void** ebp_1

if (ebx s>= eax_10)
    eax_14 = sub_403110(arg1 + 0xa8, arg2, nullptr, 0xffffffff)
    ebp_1 = arg1 + 0xc0
else
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    char var_74 = 0
    ebp_1 = arg1 + 0xc0
    var_4.b = 3
    var_4.b = 4
    sub_4c2150(&var_74, 
        ebx - sub_4c75f0(sub_40d1c0(sub_401ff0(&var_74, arg2, 0, 0xffffffff), arg1 + 0xa8, &var_44, 
            ebp_1)))
    var_4.b = 3
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    eax_14 = sub_403110(arg1 + 0xa8, &var_74, nullptr, 0xffffffff)
    var_4.b = 2
    
    if (var_60_1 u>= 0x10)
        eax_14 = j__free(var_74.d)

var_4.b = 5
char* result = sub_4daf10(arg1 + 0xf4, sub_40d1c0(eax_14, arg1 + 0xa8, &var_44, ebp_1))

if (var_30 u>= 0x10)
    result = j__free(var_44)

int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
