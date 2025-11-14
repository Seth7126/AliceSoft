// 函数: sub_5d5670
// 地址: 0x5d5670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b93eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CPageCache::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CPageCache::VTable** var_10_1 = arg1
*arg1 = &sys43vm::CPageCache::`vftable'
int32_t var_4 = 0
sub_5d5780(arg1)
int32_t eax_3 = arg1[2]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
