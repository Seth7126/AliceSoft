// 函数: sub_48e3e0
// 地址: 0x48e3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb127
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatLayerData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `IInterface'}
int32_t var_4 = 4
sub_48e4e0(arg1)
int32_t** eax_3 = arg1[0x16]
sub_4200d0(&arg1[0x16], &var_10, *eax_3, eax_3)
j__free(arg1[0x16])
int32_t** eax_4 = arg1[0x14]
sub_4200d0(&arg1[0x14], &var_10, *eax_4, eax_4)
j__free(arg1[0x14])
int32_t result = arg1[0x11]

if (result != 0)
    result = j__free(result)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

if (arg1[0xe] u>= 0x10)
    result = j__free(arg1[9])

arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0

if (arg1[8] u>= 0x10)
    result = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
