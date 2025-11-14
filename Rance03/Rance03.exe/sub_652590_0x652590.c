// 函数: sub_652590
// 地址: 0x652590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

while (*(arg1 + 0x10) u< *(arg1 + 0x14))
    char* eax = *(arg1 + 0x10)
    char* edx
    edx.b = *eax
    
    if (edx.b u<= 0x20 || edx.b == 0x7f)
        *(arg1 + 0x10) = &eax[1]
    else if (edx.b != 0x3b)
        if (&eax[1] u>= *(arg1 + 0x14))
            break
        
        if (edx.b != 0x2f)
            break
        
        if (eax[1] != edx.b)
            break
        
        *(arg1 + 0x10) = &eax[2]
        sub_652550(arg1)
    else
        int32_t esi_1 = *(arg1 + 0x14)
        *(arg1 + 0x10) = &eax[1]
        
        if (&eax[1] u< esi_1)
            void* eax_1
            
            do
                edx = *(arg1 + 0x10)
                eax_1.b = *edx
                
                if ((eax_1.b u< 0x81 || eax_1.b u> 0x9f) && (eax_1.b u< 0xe0 || eax_1.b u> 0xef))
                    if (eax_1.b == 0xa)
                        *(arg1 + 0x10) += 1
                        break
                    
                    eax_1 = &edx[1]
                else
                    eax_1 = &edx[2]
                
                *(arg1 + 0x10) = eax_1
            while (eax_1 u< esi_1)

int32_t result

if (*(arg1 + 0x10) u< *(arg1 + 0x14))
    result.b = 1
    return result

*(arg1 + 0x18) = 0
result.b = 0
return result
