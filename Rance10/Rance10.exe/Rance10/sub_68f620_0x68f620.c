// 函数: sub_68f620
// 地址: 0x68f620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7479a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if ((*(*arg1 + 8))(eax_2) == 0)
    bool cond:0_1 = (*(*arg1 + 0xc))() == 0
    void* eax_11 = *arg1
    char var_44
    int32_t* var_2c
    
    if (cond:0_1)
        if ((*(eax_11 + 0x10))() == 0)
            if ((*(*arg1 + 0x14))() == 0)
                if ((*(*arg1 + 0x18))() == 0)
                    int32_t ecx_24
                    ecx_24.b = (*(*arg1 + 0x4c))(zx.d((*(*arg1 + 0x58))(arg2))) != 0
                    int32_t ecx_27
                    ecx_27.b = (*(*arg1 + 0x3c))((*(*arg1 + 0x40))(ecx_24)) != 0
                    int32_t ecx_30
                    ecx_30.b = (*(*arg1 + 0x34))((*(*arg1 + 0x38))(ecx_27)) != 0
                    int32_t ecx_32
                    ecx_32.b = (*(*arg1 + 0x30))(ecx_30) != 0
                    int32_t ecx_34
                    ecx_34.b = (*(*arg1 + 0x2c))(ecx_32) != 0
                    int32_t ecx_36
                    ecx_36.b = (*(*arg1 + 0x28))(ecx_34) != 0
                    int32_t eax_60 = (*(*arg1 + 0x20))(ecx_36)
                    int32_t eax_61 = (*(*arg1 + 0x1c))()
                    int32_t ecx_39
                    ecx_39.b = eax_61.b != 0
                    result = sub_692130(eax_61, eax_60, ecx_39)
                else
                    sub_403360(&var_44, "ps_bicubic.fx")
                    int32_t var_8_4 = 6
                    int32_t result_4 = sub_691fe0(&var_44)
                    sub_403320(&var_44)
                    result = result_4
            else
                sub_403360(&var_2c, "ps_ssao.fx")
                int32_t var_8_3 = 5
                int32_t result_3 = sub_691fe0(&var_2c)
                sub_403320(&var_2c)
                result = result_3
        else
            sub_403360(&var_2c, "ps_dof.fx")
            int32_t var_8_2 = 4
            int32_t result_2 = sub_691fe0(&var_2c)
            sub_403320(&var_2c)
            result = result_2
    else
        void* const ecx_2
        
        if ((*(eax_11 + 0x64))() == 0)
            ecx_2 = &data_76f320
            
            if ((*(*arg1 + 0x68))() == 0)
                ecx_2 = &data_75d72e
        else
            ecx_2 = &data_76f31c
        
        sub_403360(&var_2c, ecx_2)
        int32_t var_8_1 = 0
        int32_t var_60 = (*(*arg1 + 0x6c))()
        sub_403360(&var_44, "ps_shadeoff%d%s.fx")
        var_8_1.b = 1
        int32_t* eax_19 = &var_2c
        int32_t var_18
        
        if (var_18 u>= 0x10)
            eax_19 = var_2c
        
        char var_5c
        sub_45f080(&var_60, &var_44, &var_5c, &var_60, eax_19)
        var_8_1.b = 3
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t result_1 = sub_691fe0(&var_5c)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result = result_1
else
    int32_t eax_6
    eax_6.b = arg2.b != 0
    result = eax_6 << 0x18 | 6

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
