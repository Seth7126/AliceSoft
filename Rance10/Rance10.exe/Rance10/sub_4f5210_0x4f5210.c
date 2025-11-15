// 函数: sub_4f5210
// 地址: 0x4f5210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t* esi = *(arg1 + 0x5c)
uint32_t ebx_3 = (*(arg1 + 0x60) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x60))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_4fb800(*esi + 0x10)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return sub_4fb800(*(arg1 + 0x58) + 0x10) __tailcall
