// 函数: sub_4a8430
// 地址: 0x4a8430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x4c)
int32_t* eax = *(arg1 + 0x48)

if (eax != edx)
    while (*eax != *(arg1 + 0x54))
        eax = &eax[1]
        
        if (eax == edx)
            break
    
    if (eax != edx)
        return (eax - *(arg1 + 0x48)) s>> 2

return ((edx - *(arg1 + 0x48)) s>> 2) - 1
