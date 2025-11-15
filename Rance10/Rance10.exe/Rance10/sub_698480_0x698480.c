// 函数: sub_698480
// 地址: 0x698480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748196
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2c
int32_t* eax_3 = sub_6986a0(arg1, &var_2c)
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_1c
int32_t ebx
ebx.b = (*(*arg1 + 4))(1, 1, 0, sub_69afc0(eax_3, arg2, &var_1c, eax_3))
var_8_1.b = 2
int32_t* var_18

if (var_18 != 0)
    bool cond:0_1 = var_18[1] != 1
    var_18[1]
    var_18[1] -= 1
    
    if (not(cond:0_1))
        (**var_18)(eax_2)
        int32_t edi_1 = var_18[2]
        var_18[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_18 + 4))()

void* var_28
int32_t var_20

if (var_28 != 0)
    sub_403160(var_28, (var_20 - var_28) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
