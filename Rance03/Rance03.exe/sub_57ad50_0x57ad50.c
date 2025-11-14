// 函数: sub_57ad50
// 地址: 0x57ad50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6b8f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CPolyData::`vftable'
int32_t var_4 = 9
sub_57b010(arg1)
sub_53bfb0(&arg1[0x27])
int32_t eax_3 = arg1[0x24]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

if (arg1[0x21] u>= 0x10)
    j__free(arg1[0x1c])

arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0
int32_t eax_4 = arg1[0x19]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

void* ecx_1 = arg1[0x16]

if (ecx_1 != 0)
    struct sealengine::CPolyData::VTable** var_24_4 = arg1
    void* var_28_1 = ecx_1
    sub_57ffd0(ecx_1, arg1[0x17])
    j__free(arg1[0x16])
    arg1[0x16] = 0
    arg1[0x17] = 0
    arg1[0x18] = 0

int32_t eax_5 = arg1[0x13]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x13] = 0
    arg1[0x14] = 0
    arg1[0x15] = 0

void* ecx_2 = arg1[0x10]

if (ecx_2 != 0)
    struct sealengine::CPolyData::VTable** var_24_6 = arg1
    void* var_28_2 = ecx_2
    sub_57ff80(ecx_2, arg1[0x11])
    j__free(arg1[0x10])
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

arg1[0xc] = &sealengine::CPolyMaterialList::`vftable'
void* var_10 = &arg1[0xc]
var_4.b = 0xa
sub_51faa0(&arg1[0xc])
int32_t** eax_6 = arg1[0xd]
sub_4200d0(&arg1[0xd], &var_10, *eax_6, eax_6)
int32_t result = j__free(arg1[0xd])

if (arg1[9] u>= 0x10)
    result = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_5 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_5 != 0)
    result = (**ecx_5)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
