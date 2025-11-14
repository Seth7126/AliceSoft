// 函数: sub_60be40
// 地址: 0x60be40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x27c)
int32_t* eax = *(arg1 + 0x278)

if (eax != edx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == edx)
            break
    
    if (eax != edx)
        _memcpy(eax, &eax[1], (*(arg1 + 0x27c) - &eax[1]) & 0xfffffffc)
        *(arg1 + 0x27c) -= 4
        int32_t* eax_1
        eax_1.b = 1
        return eax_1

eax.b = 0
return eax
