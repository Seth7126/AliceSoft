// 函数: sub_5d7310
// 地址: 0x5d7310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result

if (*(arg1 + 0x48) != 0)
    int32_t ecx_2 = arg2
    
    if (ecx_2 s<= 0)
        if (*(arg1 + 0x38) != 0 || *(arg1 + 0x3c) - 0x10 u<= 1)
            if (sub_5d4ad0(arg1).b == 0)
                result.b = 0
                return result
            
            ecx_2 = arg2
        
        *(arg1 + 0xc) = 0
        *(arg1 + 0x48) = 0
    
    result = *(arg1 + 0xc) u>> 2
    
    if (ecx_2 != result)
        if (ecx_2 s<= result)
            result = sub_5d4e30(arg1, ecx_2)
            goto label_5d738a
        
        if (sub_5d4c50(arg1, ecx_2).b == 0)
            result.b = 0
            return result
else if (arg2 s> 0)
    result = sub_5d4340(arg1, 1, &arg2, 1)
label_5d738a:
    
    if (result.b == 0)
        return result

result.b = 1
return result
