// 函数: sub_44c280
// 地址: 0x44c280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ac2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct cgmanager::CDCFDecoder::VTable* const var_1c = &cgmanager::CDCFDecoder::`vftable'
int64_t* eax_3 = sub_6e810c(8)
int64_t* var_14 = eax_3
*eax_3 = 0
*(eax_3 + 4) = 1
*eax_3 = &nutria::CZlibDecompressor::`vftable'{for `common::SuicideRefCounter<class IDecompressor>'}
int32_t var_8_1 = 0
int32_t* result = sub_44a660(&var_1c, arg1, arg2, *(arg1 + 0x48))
int32_t var_8_2 = 1

if (eax_3 != 0)
    (*(*eax_3 + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
