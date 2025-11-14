// 函数: sub_4d5400
// 地址: 0x4d5400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t edi = arg2
int32_t* result = *(arg1 + 0x48)

if (result[0xb] != edi)
    int32_t var_14_1 = edi
    result = sub_4a55e0(*(arg1 + 0x4c))
    
    if (result.b != 0)
        result = sub_4a56a0(edi)
        int32_t* result_1 = result
        int32_t* ecx_2 = result_1[0x17]
        
        if (ecx_2 != 0)
            result = (*(*ecx_2 + 8))(1)
            
            if (result == 1)
                void* eax
                int32_t ecx_4
                eax, ecx_4 = sub_4a3a10(result_1)
                
                if (*(eax + 0xa4) != 0)
                    char eax_1
                    eax_1, ecx_4 = sub_4d4f60(arg1)
                    
                    if (eax_1 != 0)
                        int32_t var_18_1 = ecx_4
                        ecx_4 = sub_49e1d0(sub_4a3a10(result_1), 0)
                
                int32_t var_18_2 = ecx_4
                sub_49e290(sub_4a3a10(result_1), arg1 + 4)
                arg2 = edi
                sub_4d3ea0(arg1 + 0x34, edi)
                result = sub_4158d0(arg1 + 0x38, &arg2)
                int32_t* ecx_12 = *(arg1 + 0x44)
                
                if (ecx_12 != 0)
                    return (**ecx_12)()

return result
