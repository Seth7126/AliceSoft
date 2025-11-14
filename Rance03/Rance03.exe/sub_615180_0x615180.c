// 函数: sub_615180
// 地址: 0x615180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cda98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
void** esi = arg1
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff

if (sub_604a80(esi, arg2) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return true

if (esi[5] u>= 0x10)
    esi = *esi

void** var_28_1 = esi
sub_64b530(0x6ec264)
enum MESSAGEBOX_RESULT result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
