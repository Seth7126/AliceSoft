// 函数: sub_5fea80
// 地址: 0x5fea80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc566
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct vsfile::CVSFile::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct vsfile::CVSFile::VTable** var_10_1 = arg1
*arg1 = &vsfile::CVSFile::`vftable'
int32_t var_4 = 1
sub_5fedf0(arg1)

if (arg1[0xc] u>= 0x10)
    j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
