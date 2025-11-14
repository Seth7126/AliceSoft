// 函数: sub_5813d0
// 地址: 0x5813d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c70cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPolyMaterial::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPolyMaterial::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPolyMaterial::`vftable'
int32_t var_4 = 3

for (int32_t* i = arg1[0x12]; i != arg1[0x13]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

arg1[0x13] = arg1[0x12]
int32_t* ecx_1 = arg1[0x10]

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    arg1[0x10] = 0

int32_t* ecx_2 = arg1[0xf]

if (ecx_2 != 0)
    sub_53a360(ecx_2)
    arg1[0xf] = 0

for (int32_t* i_1 = arg1[0xc]; i_1 != arg1[0xd]; i_1 = &i_1[1])
    int32_t* ecx_3 = *i_1
    
    if (ecx_3 != 0)
        sub_53a360(ecx_3)

arg1[0xd] = arg1[0xc]
int32_t eax_6 = arg1[0x12]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

var_4.b = 1
int32_t result = sub_53ae70(&arg1[0xb])
var_4.b = 0
int32_t* i_2 = arg1[8]

if (i_2 != 0)
    for (int32_t ebx_1 = arg1[9]; i_2 != ebx_1; i_2 = &i_2[0xa])
        (**i_2)(0)
    
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
