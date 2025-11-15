// 函数: sub_6a43a0
// 地址: 0x6a43a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

int32_t eax_1 = *(arg1 + 0x274)
uint32_t (* result)[0x4]

if (eax_1 == 0)
    result = sub_705e22()
else
    result = eax_1(arg1, 0x10c)

if (result != 0)
    _memset(result, 0, 0x10c)

return result
