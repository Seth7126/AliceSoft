// 函数: sub_57c970
// 地址: 0x57c970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ce3e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
sub_57cf80(arg1, arg2)
int32_t var_8_1 = 0
arg2 = &arg1[3]
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_42e780()
arg1[5] = &sealengine::CMatrixIndexList::`vftable'{for `IMatrixIndexList'}
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
var_8_1.b = 2
arg1[9] = arg6
arg1[0xa] = 0
arg1[0xb] = 0
sub_57ca80(arg1, arg4)

if (arg3 != 0)
    sub_57cb10(arg1)
    sub_57cc20(arg1, arg5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
