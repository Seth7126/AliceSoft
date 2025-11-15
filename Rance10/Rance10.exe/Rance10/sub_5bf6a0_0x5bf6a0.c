// 函数: sub_5bf6a0
// 地址: 0x5bf6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

char* esi = arg4
int32_t* edi = arg3 + 0x1c

do
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_4056a0(esi, &edi[-7])
        *(esi + 0x18) = edi[-1]
        *(esi + 0x1c) = *edi
        *(esi + 0x20) = *(edi + 4)
        *(esi + 0x30) = *(edi + 0x14)
        *(esi + 0x38) = edi[7]
    
    edi = &edi[0xf]
    esi = &esi[0x3c]
while (&edi[-7] != arg2)

return esi
