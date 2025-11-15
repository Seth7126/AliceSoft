// 函数: sub_5eef10
// 地址: 0x5eef10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = sub_566690(data_7fd4cc, arg2, arg4)
int32_t result

if (ebx == 0 || arg5 s< 0)
    result.b = 0
else
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x4da637d, *(ebx + 8) - *(ebx + 4))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg5 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t ecx_4 = arg5 * 0x34c
        void* ecx_5 = ecx_4 + *(ebx + 4)
        
        if (ecx_4 == neg.d(*(ebx + 4)) || arg3 - 7 u> 0xad)
            result.b = 0
        else
            switch (arg3 + &jump_table_5ef0fc[8]:1)
                case &lookup_table_5ef124
                    void* ecx_6 = ecx_5 + 8
                    
                    if (*(ecx_6 + 0x14) u>= 0x10)
                        ecx_6 = *ecx_6
                    
                    (*(*arg7 + 4))(ecx_6)
                    result.b = 1
                case &lookup_table_5ef124[1], &lookup_table_5ef124[2], &lookup_table_5ef124[3], 
                        &lookup_table_5ef124[4], &lookup_table_5ef124[5], &lookup_table_5ef124[6], 
                        &lookup_table_5ef124[7], &lookup_table_5ef124[8], &lookup_table_5ef124[9], 
                        &lookup_table_5ef124[0xa], &lookup_table_5ef124[0xb], 
                        &lookup_table_5ef124[0xc], &lookup_table_5ef124[0xd], 
                        &lookup_table_5ef124[0xe], &lookup_table_5ef124[0xf], 
                        &lookup_table_5ef124[0x10], &lookup_table_5ef124[0x11], 
                        &lookup_table_5ef124[0x12], &lookup_table_5ef124[0x13], 
                        &lookup_table_5ef124[0x14], &lookup_table_5ef124[0x15], 
                        &lookup_table_5ef124[0x16], &lookup_table_5ef124[0x17], 
                        &lookup_table_5ef124[0x18], &lookup_table_5ef124[0x19], 
                        &lookup_table_5ef124[0x1a], &lookup_table_5ef124[0x1b], 
                        &lookup_table_5ef124[0x1c], &lookup_table_5ef124[0x1d], 
                        &lookup_table_5ef124[0x1e], &lookup_table_5ef124[0x1f], 
                        &lookup_table_5ef124[0x20], &lookup_table_5ef124[0x22], 
                        &lookup_table_5ef124[0x23], &lookup_table_5ef124[0x24], 
                        &lookup_table_5ef124[0x25], &lookup_table_5ef124[0x26], 
                        &lookup_table_5ef124[0x27], &lookup_table_5ef124[0x28], 
                        &lookup_table_5ef124[0x29], &lookup_table_5ef124[0x2a], 
                        &lookup_table_5ef124[0x2b], &lookup_table_5ef124[0x2c], 
                        &lookup_table_5ef124[0x2d], &lookup_table_5ef124[0x2e], 
                        &lookup_table_5ef124[0x2f], &lookup_table_5ef124[0x30], 
                        &lookup_table_5ef124[0x31], &lookup_table_5ef124[0x32], 
                        &lookup_table_5ef124[0x33], &lookup_table_5ef124[0x34], 
                        &lookup_table_5ef124[0x35], &lookup_table_5ef124[0x36], 
                        &lookup_table_5ef124[0x37], &lookup_table_5ef124[0x38], 
                        &lookup_table_5ef124[0x39], &lookup_table_5ef124[0x3a], 
                        &lookup_table_5ef124[0x3b], &lookup_table_5ef124[0x3c], 
                        &lookup_table_5ef124[0x3d], &lookup_table_5ef124[0x3e], 
                        &lookup_table_5ef124[0x3f], &lookup_table_5ef124[0x40], 
                        &lookup_table_5ef124[0x41], &lookup_table_5ef124[0x42], 
                        &lookup_table_5ef124[0x43], &lookup_table_5ef124[0x44], 
                        &lookup_table_5ef124[0x45], &lookup_table_5ef124[0x46], 
                        &lookup_table_5ef124[0x47], &lookup_table_5ef124[0x48], 
                        &lookup_table_5ef124[0x49], &lookup_table_5ef124[0x50], 
                        &lookup_table_5ef124[0x51], &lookup_table_5ef124[0x52], 
                        &lookup_table_5ef124[0x53], &lookup_table_5ef124[0x54], 
                        &lookup_table_5ef124[0x55], &lookup_table_5ef124[0x56], 
                        &lookup_table_5ef124[0x57], &lookup_table_5ef124[0x58], 
                        &lookup_table_5ef124[0x59], &lookup_table_5ef124[0x5a], 
                        &lookup_table_5ef124[0x5b], &lookup_table_5ef124[0x5c], 
                        &lookup_table_5ef124[0x5d], &lookup_table_5ef124[0x5e], 
                        &lookup_table_5ef124[0x5f], &lookup_table_5ef124[0x60], 
                        &lookup_table_5ef124[0x61], &lookup_table_5ef124[0x62], 
                        &lookup_table_5ef124[0x63], &lookup_table_5ef124[0x64], 
                        &lookup_table_5ef124[0x65], &lookup_table_5ef124[0x66], 
                        &lookup_table_5ef124[0x67], &lookup_table_5ef124[0x68], 
                        &lookup_table_5ef124[0x69], &lookup_table_5ef124[0x6a], 
                        &lookup_table_5ef124[0x6b], &lookup_table_5ef124[0x6c], 
                        &lookup_table_5ef124[0x6d], &lookup_table_5ef124[0x6e], 
                        &lookup_table_5ef124[0x6f], &lookup_table_5ef124[0x70], 
                        &lookup_table_5ef124[0x71], &lookup_table_5ef124[0x72], 
                        &lookup_table_5ef124[0x73], &lookup_table_5ef124[0x74], 
                        &lookup_table_5ef124[0x75], &lookup_table_5ef124[0x76], 
                        &lookup_table_5ef124[0x77], &lookup_table_5ef124[0x78], 
                        &lookup_table_5ef124[0x79], &lookup_table_5ef124[0x7a], 
                        &lookup_table_5ef124[0x7b], &lookup_table_5ef124[0x7c], 
                        &lookup_table_5ef124[0x7d], &lookup_table_5ef124[0x7e], 
                        &lookup_table_5ef124[0x7f], &lookup_table_5ef124[0x80], 
                        &lookup_table_5ef124[0x81], &lookup_table_5ef124[0x82], 
                        &lookup_table_5ef124[0x83], &lookup_table_5ef124[0x84], 
                        &lookup_table_5ef124[0x85], &lookup_table_5ef124[0x86], 
                        &lookup_table_5ef124[0x87], &lookup_table_5ef124[0x88], 
                        &lookup_table_5ef124[0x89], &lookup_table_5ef124[0x8a], 
                        &lookup_table_5ef124[0x8b], &lookup_table_5ef124[0x8c], 
                        &lookup_table_5ef124[0x8d], &lookup_table_5ef124[0x8e], 
                        &lookup_table_5ef124[0x8f], &lookup_table_5ef124[0x90], 
                        &lookup_table_5ef124[0x91], &lookup_table_5ef124[0x92], 
                        &lookup_table_5ef124[0x93], &lookup_table_5ef124[0x94], 
                        &lookup_table_5ef124[0x95], &lookup_table_5ef124[0x96], 
                        &lookup_table_5ef124[0x97], &lookup_table_5ef124[0x98], 
                        &lookup_table_5ef124[0x99], &lookup_table_5ef124[0x9a], 
                        &lookup_table_5ef124[0x9b], &lookup_table_5ef124[0x9c], 
                        &lookup_table_5ef124[0x9d], &lookup_table_5ef124[0x9e], 
                        &lookup_table_5ef124[0x9f], &lookup_table_5ef124[0xa0], 
                        &lookup_table_5ef124[0xa1], &lookup_table_5ef124[0xa2], 
                        &lookup_table_5ef124[0xa3], &lookup_table_5ef124[0xa4], 
                        &lookup_table_5ef124[0xa5], &lookup_table_5ef124[0xa6], 
                        &lookup_table_5ef124[0xa7], &lookup_table_5ef124[0xa8], 
                        &lookup_table_5ef124[0xa9], &lookup_table_5ef124[0xaa], 
                        &lookup_table_5ef124[0xab], &lookup_table_5ef124[0xac]
                    result.b = 0
                case &lookup_table_5ef124[0x21]
                    void* ecx_18 = ecx_5 + 0xec
                    
                    if (*(ecx_18 + 0x14) u>= 0x10)
                        ecx_18 = *ecx_18
                    
                    (*(*arg7 + 4))(ecx_18)
                    result.b = 1
                case &lookup_table_5ef124[0x4a]
                    void* ecx_8 = ecx_5 + 0x210
                    
                    if (*(ecx_8 + 0x14) u>= 0x10)
                        ecx_8 = *ecx_8
                    
                    (*(*arg7 + 4))(ecx_8)
                    result.b = 1
                case &lookup_table_5ef124[0x4b]
                    void* ecx_10 = ecx_5 + 0x22c
                    
                    if (*(ecx_10 + 0x14) u>= 0x10)
                        ecx_10 = *ecx_10
                    
                    (*(*arg7 + 4))(ecx_10)
                    result.b = 1
                case &lookup_table_5ef124[0x4c]
                    void* ecx_12 = ecx_5 + 0x244
                    
                    if (*(ecx_12 + 0x14) u>= 0x10)
                        ecx_12 = *ecx_12
                    
                    (*(*arg7 + 4))(ecx_12)
                    result.b = 1
                case &lookup_table_5ef124[0x4d]
                    void* ecx_14 = ecx_5 + 0x25c
                    
                    if (*(ecx_14 + 0x14) u>= 0x10)
                        ecx_14 = *ecx_14
                    
                    (*(*arg7 + 4))(ecx_14)
                    result.b = 1
                case &lookup_table_5ef124[0x4e]
                    void* ecx_16 = ecx_5 + 0x274
                    
                    if (*(ecx_16 + 0x14) u>= 0x10)
                        ecx_16 = *ecx_16
                    
                    (*(*arg7 + 4))(ecx_16)
                    result.b = 1
                case &lookup_table_5ef124[0x4f]
                    void** ecx_20 = ecx_5 + 0x10c
                    
                    if (ecx_20[5] u>= 0x10)
                        ecx_20 = *ecx_20
                    
                    (*(*arg7 + 4))(ecx_20)
                    result.b = 1
                case &lookup_table_5ef124[0xad]
                    data_7fd4cc
                    void var_2c
                    int32_t* ecx_23 = sub_566980(&var_2c, arg2, arg4, arg5, arg6)
                    int32_t var_8_1 = 0
                    
                    if (ecx_23[5] u>= 0x10)
                        ecx_23 = *ecx_23
                    
                    (*(*arg7 + 4))(ecx_23)
                    sub_403320(&var_2c)
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
