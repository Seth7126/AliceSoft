// 函数: sub_4522a0
// 地址: 0x4522a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b76b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFile::debugfile::CDebugFile::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &debugfile::CDebugFile::`vftable'{for `IDebugFile'}
arg1[1] = &debugfile::CDebugFile::`vftable'{for `IDebugMode'}
int32_t var_4 = 8
sub_452430(arg1)
sub_4524a0(arg1)
sub_4524f0(arg1)
sub_452540(arg1)
var_4.b = 7
arg1[0x17] = &debugfile::CVarSourceManager::`vftable'
sub_4414b0(&arg1[0x18])
int32_t* eax_3 = arg1[0x14]

if (eax_3 != 0)
    sub_434d90(eax_3, arg1[0x15])
    j__free(arg1[0x14])
    arg1[0x14] = 0
    arg1[0x15] = 0
    arg1[0x16] = 0

var_4.b = 5
sub_453870(&arg1[0x11])
int32_t** eax_4 = arg1[0xf]
sub_417e10(&arg1[0xf], &var_10, *eax_4, eax_4)
j__free(arg1[0xf])
int32_t eax_5 = arg1[0xc]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

int32_t** eax_6 = arg1[0xa]
sub_417e10(&arg1[0xa], &var_10, *eax_6, eax_6)
j__free(arg1[0xa])
int32_t eax_7 = arg1[7]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t** eax_8 = arg1[5]
sub_417e10(&arg1[5], &var_10, *eax_8, eax_8)
j__free(arg1[5])
int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
