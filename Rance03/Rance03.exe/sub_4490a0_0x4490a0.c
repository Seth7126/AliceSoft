// 函数: sub_4490a0
// 地址: 0x4490a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6bdb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::cgmanager::CCGCache::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::cgmanager::CCGCache::VTable** var_10_1 = arg1
*arg1 = &cgmanager::CCGCache::`vftable'{for `IInterface'}
int32_t var_4 = 0
int32_t* edi = arg1[2]

for (void** i = *edi; i != edi; i = *i)
    (*(*i[8] + 4))(eax_2)

sub_449440(&arg1[2])
int32_t result = j__free(arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
