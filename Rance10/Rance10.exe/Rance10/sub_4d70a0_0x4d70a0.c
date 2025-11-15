// 函数: sub_4d70a0
// 地址: 0x4d70a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7343ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** var_14 =
    arg1
arg1[1] = 1
void* eax_3 = &arg1[3]
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = 0
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = &arg1[9]
int32_t var_8_1 = 0
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
__builtin_memset(&arg1[0xf], 0, 0x1c)
var_8_1.b = 2
void* var_18 = &arg1[0x14]
arg1[0x14] = sub_42e780()
var_8_1.b = 3
void* var_18_1 = &arg1[0x16]
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x16] = sub_42e780()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
