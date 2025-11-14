// 函数: sub_44a0a0
// 地址: 0x44a0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct cgmanager::CDCFDecoder::VTable* const var_18 = &cgmanager::CDCFDecoder::`vftable'
struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_3 = sub_69adc6(8)

if (eax_3 == 0)
    eax_3 = nullptr
else
    *eax_3 = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
    eax_3[1] = 1

int32_t var_4 = 0
int32_t* result = sub_448580(&var_18, arg1, arg2, *(arg1 + 0x14))
int32_t var_4_1 = 0xffffffff

if (eax_3 != 0)
    (*eax_3)->vFunc_1(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
