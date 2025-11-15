// 函数: sub_526530
// 地址: 0x526530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg2
int32_t* result = arg2[1]
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_5267c0(arg1, *esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
