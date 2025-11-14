// 函数: sub_5ab0c0
// 地址: 0x5ab0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c8a80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_84 = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else
    void* ecx = data_75d508
    
    if (arg2 s>= (*(ecx + 0x54) - *(ecx + 0x50)) s>> 2)
        result.b = 0
    else
        void* ecx_1 = (*(ecx + 0x50))[arg2]
        
        if (ecx_1 == 0 || arg4 s< 0 || arg4 s>= (*(ecx_1 + 0x20) - *(ecx_1 + 0x1c)) s>> 2)
            result.b = 0
        else
            result = *(*(ecx_1 + 0x1c) + (arg4 << 2))
            
            if (result == 0)
                result.b = 0
            else
                void* esi_1 = result[0x76]
                
                if (esi_1 == 0 || arg5 s< 0)
                    result.b = 0
                else
                    int32_t eax_10
                    int32_t edx
                    edx:eax_10 = muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                    int32_t edx_1 = edx s>> 6
                    
                    if (arg5 s>= (edx_1 u>> 0x1f) + edx_1)
                        result.b = 0
                    else
                        int32_t edi_1 = arg5 * 0x26c
                        void* edi_2 = edi_1 + *(esi_1 + 0x14)
                        
                        if (edi_1 == neg.d(*(esi_1 + 0x14)) || var_84 - 5 u> 0x2a)
                            result.b = 0
                        else
                            switch (var_84 + &jump_table_5ab2e8[3]:3)
                                case &lookup_table_5ab2fc
                                    void var_7c
                                    sub_401f60(&var_7c, (**arg6)(eax_4))
                                    int32_t var_c_1 = 0
                                    
                                    if (edi_2 + 8 != &var_7c)
                                        sub_401ff0(edi_2 + 8, &var_7c, 0, 0xffffffff)
                                    
                                    sub_401fb0(&var_7c)
                                    *(esi_1 + 0x10) += 1
                                    result.b = 1
                                case &lookup_table_5ab2fc[1], &lookup_table_5ab2fc[2], 
                                        &lookup_table_5ab2fc[3], &lookup_table_5ab2fc[4], 
                                        &lookup_table_5ab2fc[5], &lookup_table_5ab2fc[6], 
                                        &lookup_table_5ab2fc[7], &lookup_table_5ab2fc[8], 
                                        &lookup_table_5ab2fc[9], &lookup_table_5ab2fc[0xa], 
                                        &lookup_table_5ab2fc[0xb], &lookup_table_5ab2fc[0xc], 
                                        &lookup_table_5ab2fc[0xd], &lookup_table_5ab2fc[0xe], 
                                        &lookup_table_5ab2fc[0xf], &lookup_table_5ab2fc[0x10], 
                                        &lookup_table_5ab2fc[0x11], &lookup_table_5ab2fc[0x12], 
                                        &lookup_table_5ab2fc[0x13], &lookup_table_5ab2fc[0x14], 
                                        &lookup_table_5ab2fc[0x15], &lookup_table_5ab2fc[0x16], 
                                        &lookup_table_5ab2fc[0x17], &lookup_table_5ab2fc[0x18], 
                                        &lookup_table_5ab2fc[0x19], &lookup_table_5ab2fc[0x1a], 
                                        &lookup_table_5ab2fc[0x1b], &lookup_table_5ab2fc[0x1c], 
                                        &lookup_table_5ab2fc[0x1d], &lookup_table_5ab2fc[0x1e], 
                                        &lookup_table_5ab2fc[0x1f], &lookup_table_5ab2fc[0x20], 
                                        &lookup_table_5ab2fc[0x21], &lookup_table_5ab2fc[0x22], 
                                        &lookup_table_5ab2fc[0x23], &lookup_table_5ab2fc[0x24], 
                                        &lookup_table_5ab2fc[0x25], &lookup_table_5ab2fc[0x26], 
                                        &lookup_table_5ab2fc[0x27]
                                    result.b = 0
                                case &lookup_table_5ab2fc[0x28]
                                    void var_4c
                                    sub_401f60(&var_4c, (**arg6)(eax_4))
                                    int32_t var_c_2 = 1
                                    sub_537120(edi_2, &var_4c, &result[5], result[0x80])
                                    sub_401fb0(&var_4c)
                                    *(esi_1 + 0x10) += 1
                                    result.b = 1
                                case &lookup_table_5ab2fc[0x29]
                                    void var_64
                                    sub_401f60(&var_64, (**arg6)(eax_4))
                                    int32_t var_c_3 = 2
                                    
                                    if (edi_2 + 0x184 != &var_64)
                                        sub_401ff0(edi_2 + 0x184, &var_64, 0, 0xffffffff)
                                    
                                    sub_401fb0(&var_64)
                                    *(esi_1 + 0x10) += 1
                                    result.b = 1
                                case &lookup_table_5ab2fc[0x2a]
                                    void var_34
                                    sub_401f60(&var_34, (**arg6)(eax_4))
                                    int32_t var_c_4 = 3
                                    sub_537040(edi_2, &var_34)
                                    sub_401fb0(&var_34)
                                    *(esi_1 + 0x10) += 1
                                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
