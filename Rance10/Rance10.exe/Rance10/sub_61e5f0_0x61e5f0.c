// 函数: sub_61e5f0
// 地址: 0x61e5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7445fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1
int32_t ebx = arg1[2]
int32_t var_2c = eax_3
int32_t eax_4 = arg1[1]
int32_t var_28 = eax_4
int32_t eax_5 = arg1[3]
int32_t var_24 = ebx
int32_t var_20 = eax_5
*arg1 = 0xffffffff
int32_t var_8_1 = 0
void* edx

if (arg2 == arg1)
    edx = data_7fcbb4
else
    char eax_6 = sub_602c60(arg1)
    edx = data_7fcbb4
    
    if (eax_6 != 0 && edx != 0)
        sub_621db0(edx, ebx)
        edx = data_7fcbb4
    
    *arg1 = 0xffffffff
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    *arg2 = 0xffffffff

if (&var_2c != arg2)
    if (sub_602c60(arg2) != 0 && edx != 0)
        sub_621db0(edx, arg2[2])
        edx = data_7fcbb4
    
    *arg2 = eax_3
    arg2[1] = eax_4
    arg2[2] = ebx
    arg2[3] = eax_5
    var_2c = 0xffffffff

int32_t var_8_2 = 1
char result = sub_602c60(&var_2c)

if (result != 0 && edx != 0)
    result = sub_621db0(edx, ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
