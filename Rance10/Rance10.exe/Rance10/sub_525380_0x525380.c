// 函数: sub_525380
// 地址: 0x525380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73968b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = arg2
arg1[1].w = 0
arg1[2] = &partsengine::CKey::`vftable'
arg1[0x67] = 0
arg1[0x68] = 0
arg1[0x69] = 0x50
arg1[0x6a] = 0x1f4
sub_523020(&arg1[2])
int32_t var_8_1 = 0
arg1[0x6b].b = 0
arg1[0x6c] = 0
arg1[0x6d].b = 0
arg1[0x6e] = 0
arg1[0x6f] = 0
arg1[0x70].b = 0
arg1[0x71] = 0
arg1[0x72] = 0
arg2 = &arg1[0x73]
arg1[0x73] = 0
arg1[0x74] = 0
arg1[0x73] = sub_483560(nullptr, nullptr)
arg1[0x75] = 0
arg1[0x76] = 0
arg1[0x77] = 0xffffffff
arg1[0x78] = 0
arg1[0x79] = &partsengine::CEventSubject::`vftable'
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7c] = 0
arg1[0x7d] = arg1
__builtin_memset(&arg1[0x7e], 0, 0x20)
arg1[0x88] = &arg1[0x79]
arg1[0x86] = &partsengine::CPartsDoubleClickWorker::`vftable'
arg1[0x87] = 0x1f5
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
