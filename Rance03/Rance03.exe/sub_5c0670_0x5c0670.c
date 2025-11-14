// 函数: sub_5c0670
// 地址: 0x5c0670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x1264) = 0xffffffff
int32_t eax = *(arg1 + 0x180)

if (eax s>= 0)
    *(arg1 + 0x1264) = eax

int32_t edx = *(arg1 + 0x1264)

if (edx == 0xffffffff)
    *(arg1 + 0x1260) = 0
    return eax

if (edx u>= (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
    *(arg1 + 0x1260) = 0
    return 0

int32_t eax_5 = *(*(arg1 + 0x174) + (edx << 2))
*(arg1 + 0x1260) = eax_5
return eax_5
