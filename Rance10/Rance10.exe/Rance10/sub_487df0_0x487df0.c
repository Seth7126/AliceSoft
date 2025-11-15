// 函数: sub_487df0
// 地址: 0x487df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72efd9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundFileAFA::VTable** var_14 = arg1
*arg1 = &kiwi::CSoundFileAFA::`vftable'
arg1[1] = 0
int32_t* var_18 = &arg1[2]
arg1[2] = 0
arg1[3] = 0
arg1[2] = sub_461920()
int32_t var_8_1 = 0
void* var_18_1 = &arg1[4]
arg1[4] = &kiwi::CSoundFileDebug::`vftable'
void* var_1c = &arg1[5]
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_44e4c0()
var_8_1.b = 1
void* var_1c_1 = &arg1[7]
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_461920()
var_8_1.b = 2
void* var_1c_2 = &arg1[9]
arg1[9] = &kiwi::CSoundFileDebug::`vftable'
void* var_18_2 = &arg1[0xa]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_44e4c0()
var_8_1.b = 3
void* var_18_3 = &arg1[0xc]
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xc] = sub_461920()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
