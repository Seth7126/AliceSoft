// 函数: sub_5c4dc0
// 地址: 0x5c4dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d62e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18
sub_586e30(arg1 + 4, &var_18, arg2)
int32_t var_8_1 = 0
int32_t* ecx_1 = var_18
int32_t ebx

if (ecx_1 != 0)
    ebx.b = sub_583700(ecx_1, arg3)
else
    ebx.b = 0

int32_t var_8_2 = 1
int32_t* var_14

if (var_14 != 0)
    bool cond:0_1 = var_14[1] != 1
    var_14[1]
    var_14[1] -= 1
    
    if (not(cond:0_1))
        (**var_14)(eax_2)
        int32_t edi_1 = var_14[2]
        var_14[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_14 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
