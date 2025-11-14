// 函数: sub_5ca190
// 地址: 0x5ca190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t result
int32_t edx
result, edx = sub_5c9230(arg1, *arg1[0x8d], ecx, "A_SORT_MEM")
int32_t* result_2 = result

if (result_2 != 0)
    result = result_2[0xf]
    
    if (result != 0x11)
        int32_t result_1 = result
        return sub_5c24e0(result, edx, result_2, arg1, 0x6e8e74)
    
    if (result_2[3] u> 1)
        int32_t* eax_4
        
        if (result_2[3] != 0)
            eax_4 = result_2[2]
        else
            eax_4 = nullptr
        
        int32_t edx_1 = *eax_4
        int32_t eax_7 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (edx_1 u< eax_7)
            eax_7 = *(arg1[0x5d] + (edx_1 << 2))
            
            if (eax_7 != 0)
                if (edi s< 0 || edi s>= *(eax_7 + 0x30))
                    return sub_5c24e0(eax_7, edx_1, result_2, arg1, 0x6e8ea8)
                
                int32_t edx_2 = *(*(eax_7 + 0x2c) + (edi << 2))
                
                if (edx_2 == 0xa)
                    return sub_5ca3b0(arg1, result_2, edi)
                
                if (edx_2 == 0xb)
                    return sub_5ca4c0(arg1, result_2, edi)
                
                if (edx_2 == 0xc)
                    return sub_5ca5e0(arg1, result_2, edi)
                
                int32_t var_10 = edx_2
                return sub_5c24e0(edx_2 - 0xc, edx_2, result_2, arg1, 0x6e8aec)
        
        return sub_5c24e0(eax_7, edx_1, result_2, arg1, 0x6e8ed8)

return result
