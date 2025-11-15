// 函数: sub_6e8489
// 地址: 0x6e8489
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 - 0x20) = *(arg1 - 0x14)
*(arg1 - 0x24) = **(arg1 - 0x20)

if (**(arg1 - 0x24) == 0xe06d7363)
    _terminate()
    noreturn

*(arg1 - 0x28) = 0
return *(arg1 - 0x28)
