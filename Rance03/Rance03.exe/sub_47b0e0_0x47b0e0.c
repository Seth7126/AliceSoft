// 函数: sub_47b0e0
// 地址: 0x47b0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
int32_t* eax = *(arg1 + 4)

if (eax != edx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == edx)
            break
    
    if (eax != edx)
        _memcpy(eax, &eax[1], (*(arg1 + 8) - &eax[1]) & 0xfffffffc)
        *(arg1 + 8) -= 4
        int32_t* eax_1
        eax_1.b = 1
        return eax_1

eax.b = 0
return eax
