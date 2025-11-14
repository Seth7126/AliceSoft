// 函数: sub_53ae70
// 地址: 0x53ae70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b79fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CGameTextureList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CGameTextureList::VTable** var_10_1 = arg1
*arg1 = &sealengine::CGameTextureList::`vftable'
int32_t var_4 = 0

for (int32_t* i = arg1[1]; i != arg1[2]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        sub_53a360(ecx)

int32_t result = arg1[1]
arg1[2] = result

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
