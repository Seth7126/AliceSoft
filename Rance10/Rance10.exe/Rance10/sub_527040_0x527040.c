// 函数: sub_527040
// 地址: 0x527040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73972f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcba0

if (ecx != 0)
    (**ecx)(1)

data_7fcba0 = 0
struct partsengine::CProjection::VTable** eax_4
float ecx_1
eax_4, ecx_1 = sub_6e810c(0x58)
struct partsengine::CProjection::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
int32_t var_28 = 0x41f00000
*eax_4 = &partsengine::CProjection::`vftable'
__builtin_memset(&eax_4[1], 0, 0x14)
int64_t* result = sub_5572c0(eax_4, arg1, arg2, ecx_1)
data_7fcba0 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return result
