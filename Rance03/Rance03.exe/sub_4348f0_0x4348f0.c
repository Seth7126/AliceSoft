// 函数: sub_4348f0
// 地址: 0x4348f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5906
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CFuncFile::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CFuncFile::VTable** var_10_1 = arg1
*arg1 = &advengine::CFuncFile::`vftable'
int32_t var_4 = 1
sub_434990(arg1)
int32_t* result = arg1[7]

if (result != 0)
    sub_434d90(result, arg1[8])
    result = j__free(arg1[7])
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
