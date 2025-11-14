// 函数: sub_548700
// 地址: 0x548700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (sub_59c5a0(arg1 + 0x1c).b != 0)
    result = *(arg1 + 0x2c)
    
    if (result == 0)
    label_54872c:
        result = *(arg1 + 0x30)
        
        if (result == 0)
        label_548746:
            
            for (int32_t* i = *(arg1 + 0x34); i != *(arg1 + 0x38); i = &i[1])
                if (*i != 0 && sub_548700().b == 0)
                    result.b = 0
                    return result
            
            result.b = 1
            return result
        
        int32_t* ecx_2 = *(result + 0x10)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x10))().b != 0)
            goto label_548746
    else
        int32_t* ecx_1 = *(result + 0x10)
        
        if (ecx_1 != 0 && (*(*ecx_1 + 0x10))().b != 0)
            goto label_54872c

result.b = 0
return result
