// 函数: sub_48c660
// 地址: 0x48c660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x24)

if (eax != 0)
    _free(eax)

int32_t result = *(arg1 + 0x10)

if (result != 0)
    result = _free(result)

return result
