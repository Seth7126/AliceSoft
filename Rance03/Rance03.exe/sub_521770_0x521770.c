// 函数: sub_521770
// 地址: 0x521770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2e5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CDXSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CDXSprite::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CDXSprite::`vftable'
int32_t var_4 = 0
sub_5219f0(arg1)
arg1[0x12] = &chipmunk::CRect::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
