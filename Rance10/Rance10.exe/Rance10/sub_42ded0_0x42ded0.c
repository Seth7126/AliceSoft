// 函数: sub_42ded0
// 地址: 0x42ded0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729f0f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb40

if (ecx != 0)
    (*(*ecx + 0x18))(1)
    data_7fcb40 = 0

int128_t* eax_4 = sub_6e810c(0x10)
int128_t* var_14 = eax_4
int32_t var_8_1 = 0
int32_t* var_18 = eax_4 + 8
*eax_4 = zx.o(0)
*(eax_4 + 4) = 1
*eax_4 = &afafactory::CAFAFactory::`vftable'{for `common::SuicideRefCounter<class IAFAFactory>'}
*(eax_4 + 8) = 0
*(eax_4 + 0xc) = 0
*(eax_4 + 8) = sub_42e780()
int32_t* result
result.b = 1
data_7fcb40 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return result
