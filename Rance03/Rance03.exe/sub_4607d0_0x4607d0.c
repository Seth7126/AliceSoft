// 函数: sub_4607d0
// 地址: 0x4607d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b89c7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CDefineData::VTable** var_14 = arg1
*arg1 = &exfile::CDefineData::`vftable'
int32_t var_4 = 2
sub_4608a0(arg1)
var_4.b = 1
sub_456c30(&arg1[0x13])
arg1[0xb] = &exfile::CDefineDataTable::`vftable'
void* var_10 = &arg1[0xb]
var_4.b = 4
sub_456ed0(&arg1[0xb])
int32_t eax_3 = arg1[0x10]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

var_4.b = 0
int32_t result = sub_45eab0(&arg1[0xc])

if (arg1[0xa] u>= 0x10)
    result = j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
