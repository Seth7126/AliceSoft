// 函数: sub_6987a0
// 地址: 0x6987a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748274
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18
(*(*arg2 + 8))(&var_18)
int32_t var_8_1 = 0
int32_t result

if (*(arg1 + 4) != 4 || arg2[4].b != 0)
    result = sub_698870(var_18, arg2)
    int32_t var_8_3 = 1
else
    int32_t* ecx_1 = var_18
    
    if (*(arg1 + 0xc) == 0)
        (*(*ecx_1 + 4))(1, 0, 0, &ecx_1[3])
    else
        (*(*ecx_1 + 4))(1, 1, 1, arg1 + 0xc)
    
    result = (**arg2)(1)
    int32_t var_8_2 = 2

int32_t* var_14

if (var_14 != 0)
    bool cond:0_1 = var_14[1] != 1
    result = var_14[1]
    var_14[1] -= 1
    
    if (not(cond:0_1))
        result = (**var_14)(eax_2)
        int32_t esi_1 = var_14[2]
        var_14[2] -= 1
        
        if (esi_1 == 1)
            result = (*(*var_14 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
