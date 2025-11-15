// 函数: sub_527600
// 地址: 0x527600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0xb4)
*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x78) = 0

if (ecx != 0)
    (*(*ecx + 4))()

int32_t* ecx_1 = *(arg1 + 0xb8)

if (ecx_1 != 0)
    int32_t esi_1 = ecx_1[1]
    ecx_1[1] -= 1
    (**ecx_1)(esi_1 - 1)

*(arg1 + 0xb8) = 0
*(arg1 + 0xb4) = 0
