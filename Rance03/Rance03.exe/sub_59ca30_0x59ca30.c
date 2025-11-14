// 函数: sub_59ca30
// 地址: 0x59ca30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8833
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* var_20
int32_t* arg_4
sub_420040(arg1 + 4, &var_20, &arg_4)
int32_t* esi_1 = var_20
struct sealengine::CSurfaceTexture::VTable** result

if (esi_1 == *(arg1 + 4))
    int32_t* eax_9 = sub_69adc6(0x14)
    var_20 = eax_9
    var_4.b = 1
    
    if (eax_9 == 0)
        result = nullptr
    else
        result = sub_59c3b0(eax_9)
    
    var_4.b = 0
    (**arg_4)(eax_2)
    EnterCriticalSection(&result[3][1])
    result[1] = &result[1]->vFunc_0 + 1
    LeaveCriticalSection(&result[3][1])
    *sub_41ff70(arg1 + 4, &arg_4) = result
else
    void* edi_1 = esi_1[5]
    EnterCriticalSection(*(edi_1 + 0xc) + 4)
    *(edi_1 + 4) += 1
    LeaveCriticalSection(*(edi_1 + 0xc) + 4)
    result = esi_1[5]

LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
