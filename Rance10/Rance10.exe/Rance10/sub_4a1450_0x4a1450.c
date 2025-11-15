// 函数: sub_4a1450
// 地址: 0x4a1450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = data_7fcb64
void* result

if (ecx != 0)
    result = sub_47d790(ecx)
else
    result = nullptr

*(arg1 + 0x144) = result
*(arg1 + 0x1e0) = result
*(arg1 + 0x1e8) = result

if (result != 0)
    sub_47e830(result)

if (*(arg1 + 0x144) != 0)
    *(*(arg1 + 0x144) + 0x40) = (***(arg1 + 0x2b4))(0x760dfc)

void* ecx_4 = *(arg1 + 0x1d0)

if (ecx_4 != 0)
    *(*(ecx_4 + 8) + 0x18) = *(arg1 + 0x144)

result.b = 1
return result
