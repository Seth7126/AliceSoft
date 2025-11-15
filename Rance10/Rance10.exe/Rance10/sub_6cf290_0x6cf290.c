// 函数: sub_6cf290
// 地址: 0x6cf290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fd4c4
int32_t* i_1
int32_t* i = i_1

if (i != *ecx || arg3 != ecx)
    for (; i != arg3; i = i_1)
        sub_429080(&i_1)
        sub_6ceee0(&var_14, i)
    
    *arg2 = i
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t var_8_1 = 0
sub_42e7b0(ecx[1])
void* eax_4 = data_7fd4c4
*(eax_4 + 4) = eax_4
int32_t* eax_5 = data_7fd4c4
*eax_5 = eax_5
void* eax_6 = data_7fd4c4
*(eax_6 + 8) = eax_6
int32_t* eax_7 = data_7fd4c4
data_7fd4c8 = 0
*arg2 = *eax_7
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
