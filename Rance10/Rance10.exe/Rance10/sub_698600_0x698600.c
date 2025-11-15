// 函数: sub_698600
// 地址: 0x698600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74820e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c
int32_t* ecx
sub_69a740(ecx, &var_1c)
int32_t var_8_1 = 0
int32_t* ecx_1 = var_1c
bool result = ecx_1 == 0 ^ 1

if (result != 0)
    result = (*(*ecx_1 + 4))(0, 0, 0, &ecx_1[3])

int32_t var_8_2 = 1
int32_t* var_18

if (var_18 != 0)
    bool cond:0_1 = var_18[1] != 1
    result = (var_18[1]).b
    var_18[1] -= 1
    
    if (not(cond:0_1))
        result = (**var_18)(eax_2)
        int32_t edi_1 = var_18[2]
        var_18[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*var_18 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
