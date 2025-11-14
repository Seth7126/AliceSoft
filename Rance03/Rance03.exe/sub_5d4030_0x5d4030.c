// 函数: sub_5d4030
// 地址: 0x5d4030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xc) != 0)
    char* eax_1 = *(arg1 + 8)
    
    if (eax_1 != 0)
        int32_t result = 0
        
        while (*eax_1 != 0)
            arg1.b = *eax_1
            
            if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && (arg1.b u< 0xe0 || arg1.b u> 0xef))
                eax_1 = &eax_1[1]
            else
                eax_1 = &eax_1[2]
            
            result += 1
        
        return result

return 0
