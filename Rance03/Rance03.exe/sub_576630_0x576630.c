// 函数: sub_576630
// 地址: 0x576630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6711
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPOLData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CPOLData::`vftable'
int32_t var_4 = 2

for (int32_t* i = arg1[3]; i != arg1[4]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

arg1[4] = arg1[3]
void* ecx_1 = arg1[9]

if (ecx_1 != 0)
    struct sealengine::CPOLData::VTable** var_20_1 = arg1
    void* var_24_1 = ecx_1
    sub_579960(ecx_1, arg1[0xa])
    j__free(arg1[9])
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

sub_579180(&arg1[6])
int32_t result = arg1[3]

if (result != 0)
    result = j__free(result)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
