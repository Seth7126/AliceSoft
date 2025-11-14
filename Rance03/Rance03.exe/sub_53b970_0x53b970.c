// 函数: sub_53b970
// 地址: 0x53b970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c424d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_70 = nullptr
struct thread::CCriticalLock::VTable* const var_64 = &thread::CCriticalLock::`vftable'
int32_t eax_8 = EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_60 = 1
int32_t var_4 = 0
char var_58
int32_t var_44
char var_28
int32_t* eax_9
void** ebx

if (arg3[4] == 0)
    var_44 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    sub_402110(&var_58, 0x6da705, nullptr)
    eax_9 = &var_58
    int32_t var_4_1 = 2
    ebx = 2
else
    eax_9 = sub_4216c0(eax_8, 0x6e3898, &var_28, arg3)
    var_4.b = 1
    ebx = 1

var_70 = ebx
char var_40
sub_410b00(eax_9, arg2, &var_40, eax_9)
int32_t var_4_2 = 3

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_2 = 0
    var_58 = 0

var_4_2.b = 5

if ((ebx.b & 1) != 0)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0

void** eax_10 = sub_417ed0(arg1 + 4, &var_40)
char eax_12

if (eax_10 != *(arg1 + 4))
    eax_12 = sub_40c3a0(&var_40, &eax_10[4])

if (eax_10 == *(arg1 + 4) || eax_12 != 0)
    var_70 = *(arg1 + 4)
else
    var_70 = eax_10

void** eax_14 = var_70
int32_t* result

if (eax_14 == *(arg1 + 4))
    void** eax_19 = sub_69adc6(0x40)
    var_70 = eax_19
    var_4_2.b = 6
    
    if (eax_19 == 0)
        result = nullptr
    else
        result = sub_53a200(eax_19, 0)
    
    void* ecx_6 = arg1
    var_4_2.b = 5
    result[0xf] = *(ecx_6 + 0x18)
    int32_t eax_22 = *(ecx_6 + 0x14)
    
    if (result[0xd] != eax_22)
        result[0xd] = eax_22
        int32_t* eax_23 = result[4]
        
        if (eax_23 != 0)
            ecx_6 = sub_53a7b0(result, eax_23)
    
    void* var_88_10 = ecx_6
    char eax_24
    
    if (arg3[4] == 0)
        eax_24 = sub_53a570(result, arg2)
    else
        eax_24 = sub_53a610(result, arg2, arg3)
    
    if (eax_24 != 0)
        EnterCriticalSection(result[3] + 4)
        result[1] += 1
        LeaveCriticalSection(result[3] + 4)
        *sub_427f90(arg1 + 4, &var_40) = result
    else
        sub_53a360(result)
        result = nullptr
else
    result = eax_14[0xa]
    
    if (result != 0)
        EnterCriticalSection(result[3] + 4)
        result[1] += 1
        LeaveCriticalSection(result[3] + 4)

int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
