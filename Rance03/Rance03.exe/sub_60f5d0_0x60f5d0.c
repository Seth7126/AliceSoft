// 函数: sub_60f5d0
// 地址: 0x60f5d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_60
int32_t eax_2 = __security_cookie ^ &var_60
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0xc) == 0)
    result.b = 0
else
    int32_t __saved_edi
    result = (*(*arg2 + 0x10))(__security_cookie ^ &__saved_edi)
    
    if (*(arg1 + 0x14) != result)
        result.b = 0
    else
        int32_t esi_1 = *(arg1 + 0x18)
        
        if (esi_1 != (*(*arg2 + 0x14))())
            result.b = 0
        else
            int32_t var_3c
            _memset(&var_3c, 0, 0x2c)
            var_3c = *(arg1 + 0x14)
            int32_t var_2c_1 = *(arg1 + 0x40)
            void* eax_9 = *(arg1 + 8)
            int32_t var_38_1 = esi_1
            int32_t var_34_1 = 1
            int32_t var_30_1 = 1
            int32_t var_28_1 = 1
            int32_t var_24_1 = 0
            int32_t var_20_1 = 3
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0x20000
            int32_t var_14_1 = 0
            var_60 = nullptr
            int32_t* eax_10 = *(eax_9 + 0x34)
            
            if ((*(*eax_10 + 0x14))(eax_10, &var_3c, 0, &var_60) s< 0)
                result.b = 0
            else
                int32_t* edx_1 = var_60
                
                if (edx_1 == 0)
                    result.b = 0
                else
                    int32_t* eax_12 = *(*(arg1 + 8) + 0x38)
                    (*(*eax_12 + 0xbc))(eax_12, edx_1, *(arg1 + 0xc))
                    void* eax_13 = *(arg1 + 8)
                    int32_t* var_54 = nullptr
                    int32_t var_50_1 = 0
                    int32_t* eax_14 = *(eax_13 + 0x38)
                    
                    if ((*(*eax_14 + 0x38))(eax_14, var_60, 0, 1, 0, &var_54) s>= 0
                            && var_50_1 != 0)
                        int32_t* var_48
                        sub_448e90(&var_48, *(arg1 + 0x18) * var_50_1)
                        int32_t var_4 = 0
                        int32_t* esi_2 = var_48
                        int32_t var_44
                        sub_69d850(esi_2, var_54, var_44 - esi_2)
                        int32_t* eax_22 = *(*(arg1 + 8) + 0x38)
                        (*(*eax_22 + 0x3c))(eax_22, var_60, 0)
                        int32_t* eax_23 = var_60
                        (*(*eax_23 + 8))(eax_23)
                        char* ebx_1 = (*(*arg2 + 8))(0, 0)
                        int32_t edi_2 = *(arg1 + 0x14) << 2
                        int32_t eax_27 = (*(*arg2 + 0x1c))() - edi_2
                        int32_t i = 0
                        
                        if (*(arg1 + 0x18) s> 0)
                            int32_t eax_30 = *(arg1 + 0x14)
                            
                            do
                                int32_t ecx_15 = 0
                                
                                if (eax_30 s> 0)
                                    do
                                        ecx_15 += 1
                                        *ebx_1 = *esi_2
                                        ebx_1[1] = *(esi_2 + 1)
                                        ebx_1[2] = *(esi_2 + 2)
                                        char eax_34 = *(esi_2 + 3)
                                        esi_2 = &esi_2[1]
                                        ebx_1[3] = eax_34
                                        ebx_1 = &ebx_1[4]
                                        eax_30 = *(arg1 + 0x14)
                                    while (ecx_15 s< eax_30)
                                
                                esi_2 += var_50_1 - edi_2
                                i += 1
                                ebx_1 = &ebx_1[eax_27]
                            while (i s< *(arg1 + 0x18))
                        
                        sub_403510(&var_48)
                        result.b = 1
                    else
                        int32_t* eax_16 = var_60
                        (*(*eax_16 + 8))(eax_16)
                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
