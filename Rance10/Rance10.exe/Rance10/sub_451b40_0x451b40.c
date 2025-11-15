// 函数: sub_451b40
// 地址: 0x451b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x124)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x124) = 0

int32_t* ecx_1 = *(arg1 + 0x120)

if (ecx_1 != 0)
    int32_t esi_1 = ecx_1[1]
    ecx_1[1] -= 1
    (**ecx_1)(esi_1 - 1)
    *(arg1 + 0x120) = 0

*(arg1 + 0x12c) = 1
