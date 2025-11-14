// 函数: sub_6547e0
// 地址: 0x6547e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ceefb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
__builtin_memset(arg1, 0, 0x46)
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x68) = 0xf
*(arg1 + 0x64) = 0
*(arg1 + 0x54) = 0
sub_402110(arg1 + 0x54, 0x6da81a, nullptr)
int32_t var_4 = 0
*(arg1 + 0x80) = 0xf
*(arg1 + 0x7c) = 0
*(arg1 + 0x6c) = 0
sub_402110(arg1 + 0x6c, 0x6da81e, nullptr)
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
__builtin_memset(arg1 + 0x8c, 0, 0x18)
*(arg1 + 0xa4) = &dpparts::CListItem::`vftable'
__builtin_memset(arg1 + 0xa8, 1, 0x15)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
