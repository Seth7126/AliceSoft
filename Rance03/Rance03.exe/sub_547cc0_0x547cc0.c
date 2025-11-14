// 函数: sub_547cc0
// 地址: 0x547cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 3
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3

if (i_1 s<= 0)
    *(arg1 + 8) = 0
    result.b = 1
else
    int32_t arg_14
    
    if (i_1 == *(arg1 + 8))
    label_547e98:
        int32_t* esi_2 = *(arg1 + 4)
        
        if (esi_2 == 0)
            result.b = 0
        else
            struct sealengine::CWriteVB::VTable* const var_1c_1 = &sealengine::CWriteVB::`vftable'
            int32_t var_4_2 = 1
            int32_t eax_10 = sub_59f850(arg3)
            int32_t edx_5 = *esi_2
            arg_14 = eax_10
            int32_t* esi_3 = (*(edx_5 + 0x18))(eax_2)
            
            if (esi_3 == 0)
                result.b = 0
            else
                if (i_1 s> 0)
                    int32_t edi_1 = 0
                    int32_t i
                    
                    do
                        int32_t ecx_16 = *arg2
                        *esi_3 = *(edi_1 + ecx_16 + 8)
                        esi_3[1] = *(edi_1 + ecx_16 + 0xc)
                        esi_3[2] = *(edi_1 + ecx_16 + 0x10)
                        __builtin_memset(&esi_3[3], 0, 0x18)
                        esi_3[9] = sub_547c20(arg_14, *(edi_1 + *arg2 + 0x14))
                        esi_3[0xa] = 0xffffffff
                        __builtin_memset(&esi_3[0xb], 0, 0x2c)
                        int32_t ecx_17 = *arg2
                        esi_3[0x16] = *(edi_1 + ecx_17 + 0x1c)
                        esi_3[0x17] = *(edi_1 + ecx_17 + 0x20)
                        esi_3[0x18] = *(edi_1 + ecx_17 + 0x24)
                        __builtin_memset(&esi_3[0x19], 0, 0x18)
                        esi_3[0x1f] = sub_547c20(arg_14, *(edi_1 + *arg2 + 0x28))
                        esi_3 = &esi_3[0x2c]
                        esi_3[-0xc] = 0xffffffff
                        edi_1 += 0x2c
                        __builtin_memset(&esi_3[-0xb], 0, 0x2c)
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if ((*(**(arg1 + 4) + 0x1c))().b == 0)
                    result.b = 0
                else
                    result.b = arg4
                    *(arg1 + 0xc) = result.b
                    result.b = arg5
                    *(arg1 + 0xd) = result.b
                    result.b = 1
    else
        if (*(arg1 + 4) == 0)
            result = (*(*arg_14 + 0x54))(eax_2)
            *(arg1 + 4) = result
        
        if (*(arg1 + 4) == 0 && result == 0)
            result.b = 0
        else
            int32_t var_18 = 0
            int32_t var_14_1 = 0
            int32_t var_10_1 = 0
            int32_t var_4 = 0
            arg_14 = 1
            sub_412de0(&var_18, &arg_14)
            arg_14 = 2
            sub_412de0(&var_18, &arg_14)
            arg_14 = 3
            sub_412de0(&var_18, &arg_14)
            arg_14 = 4
            sub_412de0(&var_18, &arg_14)
            arg_14 = 5
            sub_412de0(&var_18, &arg_14)
            arg_14 = 6
            sub_412de0(&var_18, &arg_14)
            arg_14 = 7
            sub_412de0(&var_18, &arg_14)
            arg_14 = 8
            sub_412de0(&var_18, &arg_14)
            arg_14 = 9
            sub_412de0(&var_18, &arg_14)
            arg_14 = 0xa
            sub_412de0(&var_18, &arg_14)
            int32_t esi_1 = var_18
            
            if ((*(**(arg1 + 4) + 8))(i_1 * 2, esi_1, (var_14_1 - esi_1) s>> 2, 1).b != 0)
                *(arg1 + 8) = i_1
                int32_t var_4_1 = 0xffffffff
                
                if (esi_1 != 0)
                    j__free(esi_1)
                
                goto label_547e98
            
            if (esi_1 != 0)
                j__free(esi_1)
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
