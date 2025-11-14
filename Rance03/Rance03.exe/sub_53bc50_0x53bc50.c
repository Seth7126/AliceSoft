// 函数: sub_53bc50
// 地址: 0x53bc50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c429b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_34 = 1
int32_t var_5c_1 = arg2
int32_t var_4 = 0
char var_2c
sub_4691f0(&var_2c, "CGTexture/%d")
var_4.b = 1
void** eax_8 = sub_417ed0(arg1 + 4, &var_2c)
char eax_10

if (eax_8 != *(arg1 + 4))
    eax_10 = sub_40c3a0(&var_2c, &eax_8[4])

void** var_40

if (eax_8 == *(arg1 + 4) || eax_10 != 0)
    var_40 = *(arg1 + 4)
else
    var_40 = eax_8

int32_t* result

if (var_40 == *(arg1 + 4))
    struct sealengine::CGameTexture::VTable** eax_17
    int32_t ecx_1
    eax_17, ecx_1 = sub_69adc6(0x40)
    struct sealengine::CGameTexture::VTable** var_40_1 = eax_17
    var_4.b = 2
    
    if (eax_17 == 0)
        result = nullptr
    else
        struct sealengine::CGameTexture::VTable** result_1
        result_1, ecx_1 = sub_53a200(eax_17, 0xffffffff)
        result = result_1
    
    var_4.b = 1
    result[0xf] = *(arg1 + 0x18)
    int32_t eax_19 = *(arg1 + 0x14)
    
    if (result[0xd] != eax_19)
        result[0xd] = eax_19
        int32_t* eax_20 = result[4]
        
        if (eax_20 != 0)
            ecx_1 = sub_53a7b0(result, eax_20)
    
    int32_t var_5c_7 = ecx_1
    
    if (sub_53a6b0(result, arg2) != 0)
        EnterCriticalSection(result[3] + 4)
        result[1] += 1
        LeaveCriticalSection(result[3] + 4)
        *sub_427f90(arg1 + 4, &var_2c) = result
    else
        sub_53a360(result)
        result = nullptr
else
    result = var_40[0xa]
    
    if (result != 0)
        EnterCriticalSection(result[3] + 4)
        result[1] += 1
        LeaveCriticalSection(result[3] + 4)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
