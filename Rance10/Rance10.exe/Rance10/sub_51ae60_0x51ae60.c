// 函数: sub_51ae60
// 地址: 0x51ae60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738c46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIScene::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIScene::`vftable'
arg1[1] = 3
arg1[2] = &partsengine::CGUIMessageList::`vftable'{for `partsengine::IEventObserver'}
__builtin_memset(&arg1[3], 0, 0x18)
int32_t var_8_1 = 0
void* var_18 = &arg1[9]
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_5165a0()
arg1[0xb] = 0
int32_t var_30 = arg3
var_8_1.b = 1
sub_4f3f10(&arg1[0xc], &arg1[2])
arg1[0x2f] = arg2
arg1[0xb] = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
