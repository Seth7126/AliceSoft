// 函数: sub_62bc10
// 地址: 0x62bc10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char edx = *(arg1 + 0x157)

if ((edx & 4) == 0)
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff
    
    if (*(arg1 + 0x150) u<= 0)
        *(arg1 + 0x7c) &= 0xfffffe7f

int32_t edi = *(arg1 + 0x7c)

if ((edi & 0x100) == 0 || (edi & 0x1000) == 0 || (edx & 2) != 0)
    return 

uint32_t eax_1 = zx.d(*(arg1 + 0x158))
uint32_t edx_1 = zx.d(*(arg1 + 0x1c0))
uint32_t esi_1 = zx.d(*(arg1 + 0x170))

if (eax_1 == 1)
    esi_1 *= 0xff
    edx_1 *= 0xff
else if (eax_1 == 2)
    esi_1 *= 0x55
    edx_1 *= 0x55
else if (eax_1 == 4)
    esi_1 *= 0x11
    edx_1 *= 0x11

*(arg1 + 0x16e) = esi_1.w
*(arg1 + 0x16c) = esi_1.w
*(arg1 + 0x16a) = esi_1.w

if ((edi & 0x2000000) != 0)
    return 

*(arg1 + 0x1be) = edx_1.w
*(arg1 + 0x1bc) = edx_1.w
*(arg1 + 0x1ba) = edx_1.w
