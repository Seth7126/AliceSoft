// 函数: sub_50f100
// 地址: 0x50f100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737d99
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14_1 = 0
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
sub_403490(arg1, 0x75d2ce, nullptr)
int32_t var_8_2 = 0
int32_t var_14_2 = 1
int32_t eax_4 = arg2[5]
int32_t* i

if (eax_4 u< 0x10)
    i = arg2
else
    i = *arg2

int32_t* eax_5

if (eax_4 u< 0x10)
    eax_5 = arg2
else
    eax_5 = *arg2

for (void* edi_2 = arg2[4] + eax_5; i != edi_2; i += 1)
    eax_5.b = *i
    
    if (eax_5.b s< 0)
        if (eax_5.b == 0x7f)
            goto label_50f1b1
        
        sub_405500(arg1, 1, eax_5.b)
    else if (eax_5.b s< 0x20 || eax_5.b == 0x7f)
    label_50f1b1:
        int32_t ecx_2 = sx.d(eax_5.b)
        
        if (ecx_2 == 9)
            sub_405500(arg1, 1, 0x20)
        else if (ecx_2 == 0xa)
            sub_405500(arg1, 1, eax_5.b)
    else
        sub_405500(arg1, 1, eax_5.b)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
