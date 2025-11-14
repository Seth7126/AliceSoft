// 函数: sub_49e2d0
// 地址: 0x49e2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 

int32_t edx_1 = *(arg1 + 0x278)
int32_t* eax = *(arg1 + 0x274)

if (eax == edx_1)
    return 

while (*eax != arg2)
    eax = &eax[1]
    
    if (eax == edx_1)
        break

if (eax != edx_1)
    _memcpy(eax, &eax[1], (*(arg1 + 0x278) - &eax[1]) & 0xfffffffc)
    *(arg1 + 0x278) -= 4
