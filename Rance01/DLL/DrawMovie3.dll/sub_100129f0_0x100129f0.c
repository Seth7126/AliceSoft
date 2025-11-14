// 函数: sub_100129f0
// 地址: 0x100129f0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(arg1 + 0x40) != 0)
    CoTaskMemFree(*(arg1 + 0x44))
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

int32_t* result = *(arg1 + 0x3c)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 0x3c) = 0

return result
