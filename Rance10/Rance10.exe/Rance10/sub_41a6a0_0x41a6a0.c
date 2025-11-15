// 函数: sub_41a6a0
// 地址: 0x41a6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3

if (esi == arg2)
    return arg4

int32_t* edi = arg4

do
    sub_41a740(edi, esi)
    esi = &esi[0xa]
    edi = &edi[0xa]
while (esi != arg2)

return edi
