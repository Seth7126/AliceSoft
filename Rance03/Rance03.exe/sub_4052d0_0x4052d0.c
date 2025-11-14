// 函数: sub_4052d0
// 地址: 0x4052d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2e16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10_1 = arg1
*arg1 = &dpanalysis::CBreakPoint::`vftable'
int32_t var_4 = 1

if (arg1[0x1a] u>= 0x10)
    result = j__free(arg1[0x15])

arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
int32_t* ecx = arg1[0x13]
arg1[0x12] = &dpanalysis::CTokenAnalyser::`vftable'

if (ecx != 0)
    result = (*(*ecx + 8))(1)
    arg1[0x13] = 0

if (arg1[0x11] u>= 0x10)
    result = j__free(arg1[0xc])

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0

if (arg1[0xb] u>= 0x10)
    result = j__free(arg1[6])

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
