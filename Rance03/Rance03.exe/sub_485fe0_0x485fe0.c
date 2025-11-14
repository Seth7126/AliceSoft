// 函数: sub_485fe0
// 地址: 0x485fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baa3d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &partsengine::CFlatData::`vftable'{for `IInterface'}
int32_t var_4 = 6
sub_486110(arg1)

if (arg1[0x21] u>= 0x10)
    j__free(arg1[0x1c])

arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0
int32_t** eax_3 = arg1[0x1a]
sub_417e10(&arg1[0x1a], &var_10, *eax_3, eax_3)
j__free(arg1[0x1a])
int32_t** eax_4 = arg1[0x18]
sub_417e10(&arg1[0x18], &var_10, *eax_4, eax_4)
j__free(arg1[0x18])
int32_t** eax_5 = arg1[0x16]
sub_417e10(&arg1[0x16], &var_10, *eax_5, eax_5)
j__free(arg1[0x16])
int32_t** eax_6 = arg1[0x14]
sub_417e10(&arg1[0x14], &var_10, *eax_6, eax_6)
j__free(arg1[0x14])
int32_t** eax_7 = arg1[0x12]
sub_4200d0(&arg1[0x12], &var_10, *eax_7, eax_7)
j__free(arg1[0x12])
int32_t** eax_8 = arg1[0x10]
sub_417e10(&arg1[0x10], &var_10, *eax_8, eax_8)
int32_t result = j__free(arg1[0x10])
fsbase->NtTib.ExceptionList = ExceptionList
return result
