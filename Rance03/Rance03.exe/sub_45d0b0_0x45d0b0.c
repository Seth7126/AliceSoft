// 函数: sub_45d0b0
// 地址: 0x45d0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (*(arg2 + 0x20) != 0)
    result = *(arg2 + 0x24)
    
    if (result != *(arg2 + 0x1c) && result != 0xfffffff8)
        result = *(result + 0x24)
        
        if (result != 0xe)
            if (result != 0xf)
            label_45d109:
                *arg1 = 0
                result.b = 1
                return result
            
            result = **(arg2 + 0x24)
            *(arg2 + 0x24) = result
            
            if (*(arg2 + 0x20) != 0 && result != *(arg2 + 0x1c) && result != 0xfffffff8)
                *arg1 = 1
                result.b = 1
                return result
        else
            result = **(arg2 + 0x24)
            *(arg2 + 0x24) = result
            
            if (*(arg2 + 0x20) != 0 && result != *(arg2 + 0x1c) && result != 0xfffffff8)
                goto label_45d109

result.b = 0
return result
