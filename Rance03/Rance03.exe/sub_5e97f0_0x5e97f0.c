// 函数: sub_5e97f0
// 地址: 0x5e97f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e9a10(arg1)
*(arg1 + 8) = arg6
int32_t* result

if (arg6 == 0)
    result.b = 0
else
    (**arg6)(eax_2)
    int32_t eax_4 = 1
    *(arg1 + 0x14) = arg2
    *(arg1 + 0x18) = arg3
    
    if (arg2 s> 1)
        do
            eax_4 *= 2
        while (eax_4 s< arg2)
    
    *(arg1 + 0x1c) = eax_4
    int32_t eax_5 = 1
    
    if (arg3 s> 1)
        do
            eax_5 *= 2
        while (eax_5 s< arg3)
    
    *(arg1 + 0x20) = eax_5
    *(arg1 + 0x24) = arg4
    *(arg1 + 0x28) = arg5
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 * arg4), arg2)
    
    if (temp0_1 s> arg5)
        *(arg1 + 0x30) = arg5
        *(arg1 + 0x2c) = divs.dp.d(sx.q(arg2 * arg5), arg3)
    else
        *(arg1 + 0x2c) = arg4
        *(arg1 + 0x30) = temp0_1
    
    char eax_14
    
    if (arg4 != arg2 || arg5 != arg3)
        eax_14 = 1
    else
        eax_14 = 0
    
    int32_t arg_c
    bool cond:0_1 = arg_c.b == 0
    *(arg1 + 0x38) = eax_14
    
    if (cond:0_1)
        goto label_5e993e
    
    result = (*(**(arg1 + 8) + 0x4c))()
    *(arg1 + 0xc) = result
    
    if (result == 0)
        result.b = 0
    else
        void* esi_2 = *result
        int32_t eax_17 = (*(**(arg1 + 8) + 0x84))(1)
        *(arg1 + 0xc)
        
        if ((*(esi_2 + 0x30))(*(arg1 + 0x1c), *(arg1 + 0x20), 1, 1, eax_17) != 0)
            result = (*(**(arg1 + 8) + 0x58))()
            *(arg1 + 0x10) = result
            
            if (result == 0)
                result.b = 0
            else
                (*(*result + 0x28))(0, 0, *(arg1 + 0x14), *(arg1 + 0x18), 0, 0x3f800000)
            label_5e993e:
                result = (*(**(arg1 + 8) + 0x54))()
                *(arg1 + 0x34) = result
                
                if (result == 0)
                    result.b = 0
                else
                    int32_t var_18 = 0
                    int32_t var_14_1 = 0
                    int32_t var_10_1 = 0
                    int32_t var_4 = 0
                    arg_c = 0
                    sub_412de0(&var_18, &arg_c)
                    arg_c = 4
                    sub_412de0(&var_18, &arg_c)
                    arg_c = 6
                    sub_412de0(&var_18, &arg_c)
                    int32_t esi_3 = var_18
                    int32_t ebx_2
                    
                    if ((*(**(arg1 + 0x34) + 8))(4, esi_3, (var_14_1 - esi_3) s>> 2, 0).b == 0)
                        ebx_2.b = 0
                    else if (sub_5e9a90(arg1).b == 0)
                        ebx_2.b = 0
                    else
                        ebx_2.b = 1
                        *(arg1 + 0x3c) = arg7
                    
                    if (esi_3 != 0)
                        j__free(esi_3)
                    
                    result.b = ebx_2.b
        else
            int32_t var_30_2 = *(arg1 + 0x20)
            int32_t var_34_1 = *(arg1 + 0x1c)
            sub_64b530(0x6eb774)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
