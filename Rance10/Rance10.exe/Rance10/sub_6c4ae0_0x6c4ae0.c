// 函数: sub_6c4ae0
// 地址: 0x6c4ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748b19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
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

void** arg_8
void** var_2c = arg_8
*eax_3 = 0
int32_t var_24 = sub_403590(arg1, var_2c, 0, 0xffffffff)
int32_t var_8_2 = 0
int32_t var_14_2 = 1
arg_8.b = 0xa
void* i = sub_510160(arg1, &arg_8, 0xffffffff)

if (i != 0xffffffff)
    arg_8.b = 0xa
    
    do
        int32_t ecx_4 = arg1[5]
        int32_t* eax_5
        
        if (ecx_4 u< 0x10)
            eax_5 = arg1
        else
            eax_5 = *arg1
        
        int32_t* ecx_5
        
        if (ecx_4 u< 0x10)
            ecx_5 = arg1
        else
            ecx_5 = *arg1
        
        int32_t var_24_1 = sub_6c51e0(arg1, eax_5 + i - ecx_5, 1, 0xd)
        i = sub_510160(arg1, &arg_8, i)
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
