// 函数: sub_5482f0
// 地址: 0x5482f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4881
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CMaterial::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMaterial::VTable** var_10_1 = arg1
*arg1 = &sealengine::CMaterial::`vftable'
int32_t var_4 = 2

for (int32_t* i = arg1[0xd]; i != arg1[0xe]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

arg1[0xe] = arg1[0xd]
sub_548690(arg1)

if (arg1[0x15] u>= 0x10)
    j__free(arg1[0x10])

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
int32_t eax_5 = arg1[0xd]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_59c4c0(&arg1[7])
fsbase->NtTib.ExceptionList = ExceptionList
return result
