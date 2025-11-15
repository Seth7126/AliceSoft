// 函数: sub_51fd60
// 地址: 0x51fd60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$make_shared@U_ExceptionHolder@details@Concurrency@@ABVexception_ptr@std@@PAX@std@@YA?AV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@0@ABVexception_ptr@0@$$QAPAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
sub_403490(arg1, 0x75d37e, nullptr)
int32_t* ebx = arg2
int32_t edi = 0
int32_t var_8_2 = 0
int32_t var_14_1 = 1
int32_t eax_4 = ebx[4]

if (eax_4 s> 0)
    do
        int32_t* eax_5
        
        if (ebx[5] u< 0x10)
            eax_5 = ebx
        else
            eax_5 = *ebx
        
        eax_5.b = *(eax_5 + edi)
        arg2.b = eax_5.b
        
        if (eax_5.b s< 0)
            if (eax_5.b == 0x7f)
                goto label_51fe0e
            
            sub_405500(arg1, 1, arg2.b)
        else if (eax_5.b s< 0x20 || eax_5.b == 0x7f)
        label_51fe0e:
            eax_5.b -= 9
            
            if (eax_5.b u<= 1)
                sub_405500(arg1, 1, 0x20)
        else
            sub_405500(arg1, 1, arg2.b)
        
        edi += 1
    while (edi s< eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
