// 函数: sub_4e6db0
// 地址: 0x4e6db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4e0
int32_t var_8 = 0
int32_t* result_1 = nullptr
int32_t* result = sub_46cb80(edi)

if (result.b != 0)
    int32_t ecx_2
    result, ecx_2 = (***(edi + 0xc))(&var_8, &result_1)
    
    if (result.b == 1)
        if (*(arg1 + 0x44) == 0)
            int32_t var_18_2 = ecx_2
            sub_485700(arg1 + 0x64, var_8, result_1)
            sub_4e7460(arg1)
            *(arg1 + 0x48) = 0
        
        int32_t var_18_3
        
        if (*(arg1 + 8) == 0)
            var_18_3 = 2
        else
            var_18_3 = 3
        
        int32_t var_18_4 = (*(**(arg1 + 4) + 0x38))(var_18_3)
        sub_485890(arg1 + 0x64, var_8, result_1, *(arg1 + 0x48))
        int32_t edx_1 = var_8
        result = result_1
        
        if (*(arg1 + 0x50) != edx_1 || *(arg1 + 0x54) != result)
            sub_485750(arg1 + 0x64, edx_1, result, 0)
            edx_1 = var_8
            result = result_1
        
        *(arg1 + 0x50) = edx_1
        *(arg1 + 0x54) = result

*(arg1 + 0x44) = 1
return result
