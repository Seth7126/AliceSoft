// 函数: sub_4afa40
// 地址: 0x4afa40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2 = *(arg1 + 0x38)
int32_t result = *(arg1 + 0x48)
arg1.b = *(arg1 + 0x3c)
int32_t ebx
ebx.b = eax_2 == 2

if (eax_2 != 1)
    if (ebx.b == 0)
        return result
    
    if (result != 2 && result != 5 && result != 8)
        if (arg1.b == 0)
            return result
        
        if (result != 4)
            if (result == 6)
                return 1
            
            return result
else if (result != 4 && result != 5 && result != 6)
    if (arg1.b == 0)
        return result
    
    if (result != 8 && result != 2)
        return result

return 1
