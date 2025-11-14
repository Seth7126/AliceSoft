// 函数: sub_57a990
// 地址: 0x57a990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6a91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPOLMaterial::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPOLMaterial::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPOLMaterial::`vftable'
int32_t var_4 = 2

for (int32_t* i = arg1[0xb]; i != arg1[0xc]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

int32_t result = arg1[0xb]

if (result != 0)
    result = j__free(result)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

var_4.b = 0
int32_t* i_1 = arg1[8]

if (i_1 != 0)
    for (int32_t ebx_1 = arg1[9]; i_1 != ebx_1; i_1 = &i_1[0xa])
        (**i_1)(0)
    
    result = j__free(arg1[8])
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
