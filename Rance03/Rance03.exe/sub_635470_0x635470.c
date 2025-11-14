// 函数: sub_635470
// 地址: 0x635470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (arg4 s>= 0x36 && sub_635550(arg1, arg3).b != 0)
    result = *(arg1 + 4)
    
    if (result == 8)
        int32_t* ecx = data_75d544
        
        if (ecx != 0)
            result = (*(*ecx + 0x10))(*(arg1 + 8), *(arg1 + 0xc))
            
            if (result != 0)
            label_6354f9:
                *(arg2 + 0x14) = result
                int32_t ecx_3 = *(arg1 + 4)
                
                if (ecx_3 != 8)
                    if (ecx_3 == 0x18)
                        result = sub_6355e0(arg1, result)
                        goto label_63550c
                    
                    if (ecx_3 == 0x20)
                        result = sub_6356a0(arg1, result)
                        goto label_63550c
                else
                    result = sub_635740(arg1, result)
                label_63550c:
                    
                    if (result.b == 0)
                        return result
                
                *(arg2 + 0x18) = 0
                result.b = 1
                *(arg2 + 0x1c) = 0
                return result
    else if (result == 0x18)
        int32_t* ecx_1 = data_75d544
        
        if (ecx_1 != 0)
            result = (*(*ecx_1 + 0xc))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
            
            if (result != 0)
                goto label_6354f9
            
            result.b = 0
            return result
    else if (result == 0x20)
        int32_t* ecx_2 = data_75d544
        
        if (ecx_2 != 0)
            result = (*(*ecx_2 + 8))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
            
            if (result != 0)
                goto label_6354f9

result.b = 0
return result
