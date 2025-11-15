// 函数: sub_694510
// 地址: 0x694510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0xc) = 0

int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
*(arg1 + 0x2c) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
return result
