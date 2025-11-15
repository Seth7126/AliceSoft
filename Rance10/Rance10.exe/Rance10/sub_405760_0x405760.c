// 函数: sub_405760
// 地址: 0x405760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726ef9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
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
int32_t var_8_1 = 0
int32_t edi = arg1[4]
void* eax_5 = arg2[4] + 1
int32_t var_14_1 = 1

if (edi u<= eax_5 && arg1[5] != eax_5 && sub_4036c0(arg1, eax_5, 1) != 0)
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = edi
    int32_t* eax_7
    
    if (cond:1_1)
        eax_7 = arg1
    else
        eax_7 = *arg1
    
    *(eax_7 + edi) = 0

sub_4055a0(arg1, arg2, 0, 0xffffffff)
sub_405500(arg1, 1, 0x5c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
