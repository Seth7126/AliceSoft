// 函数: sub_45d760
// 地址: 0x45d760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bcef
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcb58

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    data_7fcb58 = 0

struct common::SuicideRefCounter<class IDecodeCG2>::decodecg::CDecodeCG::VTable** eax_4 =
    sub_6e810c(0xc)
struct common::SuicideRefCounter<class IDecodeCG2>::decodecg::CDecodeCG::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
int32_t* ecx_2 = data_7fcbd4
eax_4[1] = 1
*eax_4 = &decodecg::CDecodeCG::`vftable'{for `common::SuicideRefCounter<class IDecodeCG2>'}
int32_t result

if (ecx_2 != 0)
    (**ecx_2)(eax_2)
    result = data_7fcbd4
else
    result = 0

eax_4[2] = result
result.b = 1
data_7fcb58 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return result
