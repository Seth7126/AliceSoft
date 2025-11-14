// 函数: sub_431730
// 地址: 0x431730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b55b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t var_1c = __security_cookie ^ &var_40
int32_t esi
int32_t var_48 = esi
int32_t var_4c = __security_cookie ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_3c = 0
uint32_t result = (*(*arg1 + 0xac))(arg3, &var_38, &var_3c, var_4c)

if (result.b != 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_18_1 = 0
    int32_t entry_ebx
    result = sub_431900(arg1, &var_40, arg2, entry_ebx, var_48)
    
    if (result.b != 0)
        if (entry_ebx - 0xa u> 0x25)
            result = (*(*arg1 + 0xb0))(arg3, var_48)
        else
            switch (entry_ebx + &jump_table_4318c0[1]:2)
                case &lookup_table_4318d0, &lookup_table_4318d0[0x25]
                    int32_t* var_5c_2 = &var_48
                    char* eax_10 = &var_40
                    
                    if (var_2c_1 u>= 0x10)
                        eax_10 = var_40.d
                    
                    result = sub_69b31c(eax_10, 0x6dcf3c)
                    
                    if (result == 1)
                        result = (*(*arg1 + 0xb0))(arg3, var_48)
                case &lookup_table_4318d0[1]
                    result = sub_4691d0(&var_40)
                    
                    if (result.b != 0)
                        result = (*(*arg1 + 0xb0))(arg3, var_48)
                case &lookup_table_4318d0[2]
                    result = (*(**(arg1[0x38] + 8) + 4))(var_48)
                    uint32_t result_1 = result
                    
                    if (result_1 != 0)
                        result = (*(*result_1 + 8))(var_30_1 + 1)
                        
                        if (result.b != 0)
                            char* ecx_11 = &var_40
                            
                            if (var_2c_1 u>= 0x10)
                                ecx_11 = var_40.d
                            
                            result = sub_69d850((*(*result_1 + 0x18))(ecx_11, var_30_1 + 1))
                case &lookup_table_4318d0[3], &lookup_table_4318d0[4], &lookup_table_4318d0[5], 
                        &lookup_table_4318d0[6], &lookup_table_4318d0[7], &lookup_table_4318d0[8], 
                        &lookup_table_4318d0[9], &lookup_table_4318d0[0xa], 
                        &lookup_table_4318d0[0xb], &lookup_table_4318d0[0xc], 
                        &lookup_table_4318d0[0xd], &lookup_table_4318d0[0xe], 
                        &lookup_table_4318d0[0xf], &lookup_table_4318d0[0x10], 
                        &lookup_table_4318d0[0x11], &lookup_table_4318d0[0x12], 
                        &lookup_table_4318d0[0x13], &lookup_table_4318d0[0x14], 
                        &lookup_table_4318d0[0x15], &lookup_table_4318d0[0x16], 
                        &lookup_table_4318d0[0x17], &lookup_table_4318d0[0x18], 
                        &lookup_table_4318d0[0x19], &lookup_table_4318d0[0x1a], 
                        &lookup_table_4318d0[0x1b], &lookup_table_4318d0[0x1c], 
                        &lookup_table_4318d0[0x1d], &lookup_table_4318d0[0x1e], 
                        &lookup_table_4318d0[0x1f], &lookup_table_4318d0[0x20], 
                        &lookup_table_4318d0[0x21], &lookup_table_4318d0[0x22], 
                        &lookup_table_4318d0[0x23], &lookup_table_4318d0[0x24]
                    result = (*(*arg1 + 0xb0))(arg3, var_48)
    
    if (var_2c_1 u>= 0x10)
        result = j__free(var_40.d)

int32_t var_20
fsbase->NtTib.ExceptionList = var_20
int32_t var_28
sub_69a5bc(var_28 ^ &var_4c)
return result
