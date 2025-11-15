// 函数: sub_6df3fe
// 地址: 0x6df3fe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_749d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_8
void* const var_5c_4 = &data_6df40a
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44
void var_2c
int32_t arg_8
int32_t arg_10
sub_6dc0c7(&var_44, &arg_8, &arg_10, arg3, arg4, &var_2c)
int32_t var_8 = 0

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg5 |= 1

int32_t var_34

if (var_34 != 0)
    int32_t i = 0
    int32_t var_5c_2 = 0
    sub_632b90(arg6, var_34)
    int32_t* eax_3 = var_44
    int32_t var_30
    
    if (var_30 u< 0x10)
        eax_3 = &var_44
    
    if (*eax_3 == 0x2d)
        int16_t* ecx_2
        
        if (arg6[5] u< 8)
            ecx_2 = arg6
        else
            ecx_2 = *arg6
        
        int16_t var_18
        eax_3.w = var_18
        *ecx_2 = eax_3.w
        i = 1
    
    for (; i u< var_34; i += 1)
        int32_t** eax_4 = var_44
        
        if (var_30 u< 0x10)
            eax_4 = &var_44
        
        void** ecx_3
        
        if (arg6[5] u< 8)
            ecx_3 = arg6
        else
            ecx_3 = *arg6
        
        int16_t var_8c[0xe]
        int32_t eax_5
        eax_5.w = var_8c[sx.d(*(eax_4 + i))]
        *(ecx_3 + (i << 1)) = eax_5.w
else
    *arg5 |= 2

void* var_5c_3 = nullptr
char var_60_2 = 1
*arg1 = arg_8
arg1[1] = arg2
sub_4033f0(&var_44, var_60_2, var_5c_3)
void* const __saved_ebp_3 = &data_6df4d7
@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
