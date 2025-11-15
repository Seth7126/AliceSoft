// 函数: sub_4996c0
// 地址: 0x4996c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730252
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *arg1 = 0

int32_t* ecx_1 = data_7fcbb8

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    data_7fcbb8 = 0

struct common::SuicideRefCounter<class IVM>::sys43vm::CJaffaVM::VTable** eax_5 = sub_6e810c(0x1298)
struct common::SuicideRefCounter<class IVM>::sys43vm::CJaffaVM::VTable** var_14 = eax_5
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class IVM>::sys43vm::CJaffaVM::VTable** eax_6 = sub_60f840(eax_5)
int32_t var_8_2 = 0xffffffff
data_7fcbb8 = eax_6
eax_6[2] = arg2
*arg1 = eax_6
(*eax_6)->vFunc_0(eax_2)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
