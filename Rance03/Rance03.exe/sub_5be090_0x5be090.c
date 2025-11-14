// 函数: sub_5be090
// 地址: 0x5be090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

void* esi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
int32_t* eax_3

if (esi_6 u> 0)
    if (sub_64aeb0(arg1 + 4, esi_6).b == 0)
        eax_3.b = 0
        return eax_3
    
    int32_t* eax_4
    
    if (*(arg1 + 0xc) != 0)
        eax_4 = *(arg1 + 8)
    else
        eax_4 = nullptr
    
    if (sub_468dd0(arg2, eax_4, esi_6).b == 0)
        eax_3.b = 0
        return eax_3

eax_3.b = 1
return eax_3
