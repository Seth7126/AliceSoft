// 函数: sub_5bc410
// 地址: 0x5bc410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$make_shared@U_ExceptionHolder@details@Concurrency@@ABVexception_ptr@std@@PAX@std@@YA?AV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@0@ABVexception_ptr@0@$$QAPAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_8_1 = 0
int32_t edi = *(arg1 + 0x64)
void** i = *(arg1 + 0x60)
int32_t var_14_1 = 1

for (; i != edi; i = &i[1])
    *i
    
    if (arg3(eax_2) != 0)
        void* var_18 = *i
        sub_428f00(arg2, &var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
