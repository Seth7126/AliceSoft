// 函数: sub_4fb040
// 地址: 0x4fb040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_736a07
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
struct partsengine::CGUIInputController::VTable** var_24 = arg1
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIInputController::VTable** var_24_1 = arg1
*arg1 = &partsengine::CGUIInputController::`vftable'
arg1[1] = arg2
__builtin_memset(&arg1[2], 0, 0x35)
arg1[0x10] = &partsengine::CKey::`vftable'
arg1[0x75] = 0
arg1[0x76] = 0
arg1[0x77] = 0x50
arg1[0x78] = 0x1f4
sub_523020(&arg1[0x10])
int32_t var_14_1 = 0
arg1[0x79] = 0
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7c].b = 0
__builtin_memset(&arg1[0x7d], 0, 0x15)
arg1[0x83] = &partsengine::CEventSubject::`vftable'
__builtin_memset(&arg1[0x84], 0, 0x30)
arg1[0x90] = &partsengine::CPartsDoubleClickWorker::`vftable'
arg1[0x91] = 0x1f5
arg1[0x92] = &arg1[0x83]
var_14_1.b = 2
*(arg1 + 0x221) = 1
*(arg1 + 0x223) = 1
*(arg1 + 0x227) = 0x101
*(arg1 + 0x23a) = 0x1010101
*(arg1 + 0x23e) = 1
*(arg1 + 0x229) = 1
*(arg1 + 0x22b) = 0x1010101
*(arg1 + 0x22f) = 1
arg1[0x8d] = 0x1010101
arg1[0x8e].w = 0x101
sub_4fb350(arg1)
sub_4fb430(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
