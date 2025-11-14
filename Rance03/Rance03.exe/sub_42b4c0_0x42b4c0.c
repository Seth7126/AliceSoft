// 函数: sub_42b4c0
// 地址: 0x42b4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t X = (*(*(arg1 + 0xb4) + 0x10))() + *(arg1 + 0xf0)
int32_t eax_2 = (*(*(arg1 + 0x84) + 0x10))()
int32_t eax_3 = (*(*(arg1 + 0xb4) + 0x14))()
void* esi = *(arg1 + 0x1a4)
int32_t nHeight = eax_3 - 3

if (esi == 0)
    return nHeight

MoveWindow(*(esi + 4), X, 2, eax_2 - X - 1, nHeight, 1)
return ShowWindow(*(esi + 4), SW_SHOW)
