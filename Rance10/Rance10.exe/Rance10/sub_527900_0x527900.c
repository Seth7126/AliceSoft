// 函数: sub_527900
// 地址: 0x527900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7397a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CRandManager::VTable** var_14 = arg1
*arg1 = &partsengine::CRandManager::`vftable'
arg1[1] = 0
arg1[2] = 0
int32_t* var_18 = &arg1[3]
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_42e780()
int32_t var_8_1 = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
var_8_1.b = 1

if ((arg1[7] - arg1[5]) s>> 2 u< 0xa)
    sub_404670(&arg1[5], 0xa)

arg1[1] = 0xa
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
