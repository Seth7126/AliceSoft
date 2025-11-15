// 函数: sub_6281f0
// 地址: 0x6281f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 4)
int32_t* ecx = *(esi + 0x24)
*(esi + 0x1f0) = 0

if (ecx != 0 && (**ecx)() != 0 && *(esi + 0x1ec) == 0)
    *(esi + 0x1ec) = 1
