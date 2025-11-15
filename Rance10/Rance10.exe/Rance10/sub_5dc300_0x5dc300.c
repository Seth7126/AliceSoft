// 函数: sub_5dc300
// 地址: 0x5dc300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c = arg1
sub_5dc6a0(*arg1, arg1[1])
arg1[1] = *arg1
int32_t edi = 0
int32_t* esi_1

while (true)
    int32_t* var_14
    void arg_c
    sub_5dc5e0(&var_14, &arg_c)
    int32_t var_8_1 = 0
    esi_1 = var_14
    
    if (sub_5d6bf0(esi_1, arg2) == 0)
        break
    
    sub_5dc620(arg1, &var_14)
    int32_t var_8_2 = 0xffffffff
    int32_t* esi_2 = var_14
    
    if (esi_2 != 0)
        sub_5d6b10(esi_2)
        int32_t var_2c_2 = 0x290
        operator new(esi_2)
    
    edi += 1
    
    if (edi s>= 1)
        arg1[3] = arg2
        int32_t result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

if (esi_1 != 0)
    sub_5d6b10(esi_1)
    int32_t var_2c_3 = 0x290
    operator new(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
