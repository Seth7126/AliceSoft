// 函数: sub_611e50
// 地址: 0x611e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743590
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[9]
int32_t var_48 = 0

if (ecx == 0)
label_611fac:
    arg2[2] = 0
    arg2[1] = 0
    *arg2 = 0
else
    if ((**ecx)(eax_2) == 0)
        goto label_611fac
    
    int32_t* eax_8
    
    if (sub_41ac20(0x76b30c, 0x76b2cc) == 0)
        eax_8 = sub_61e850(&arg1[0x63], 0x76b30c)
    else
        eax_8 = (*(*arg1 + 0x14))(0x76b2cc)
    
    if (eax_8 == 0)
        goto label_611fac
    
    int32_t* eax_9 = sub_618100(arg1)
    
    if (eax_9 == 0)
        goto label_611fac
    
    int32_t var_3c = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_8_1 = 0
    int32_t ebx_1 = 0
    
    if ((*(*eax_9 + 0x28))() s> 0)
        int32_t eax_20
        
        do
            char* eax_15 = (**eax_8)((*(*eax_9 + 0x14))((*(*eax_9 + 0x2c))(ebx_1)))
            
            if (eax_15 != 0)
                var_8_1.b = 1
                void* var_30
                sub_431bd0(&var_3c, sub_6127a0(&var_30, eax_15))
                var_8_1.b = 0
                int32_t var_1c
                
                if (var_1c u>= 0x10)
                    sub_403160(var_30, var_1c + 1, 1)
            
            ebx_1 += 1
            eax_20 = (*(*eax_9 + 0x28))()
        while (ebx_1 s< eax_20)
    
    *arg2 = var_3c
    arg2[1] = var_38_1
    arg2[2] = var_34_1
    var_3c = 0
    int32_t var_38_2 = 0
    int32_t var_34_2 = 0
    sub_417070(&var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
