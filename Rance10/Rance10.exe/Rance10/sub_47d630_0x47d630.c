// 函数: sub_47d630
// 地址: 0x47d630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x20)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x20) = 0

int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0x1c) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x10) = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

*(arg1 + 0xc) = 0
*(arg1 + 0x24) = 0
*(arg1 + 4) = 0
