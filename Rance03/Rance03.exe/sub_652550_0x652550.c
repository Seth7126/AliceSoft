// 函数: sub_652550
// 地址: 0x652550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg1 + 0x10)
int32_t esi = *(arg1 + 0x14)

if (edx u>= esi)
    return 

while (true)
    void* eax
    eax.b = *edx
    
    if ((eax.b u< 0x81 || eax.b u> 0x9f) && (eax.b u< 0xe0 || eax.b u> 0xef))
        if (eax.b == 0xa)
            *(arg1 + 0x10) += 1
            break
        
        eax = &edx[1]
    else
        eax = &edx[2]
    
    edx = eax
    *(arg1 + 0x10) = eax
    
    if (edx u>= esi)
        return 
