// 函数: sub_55c480
// 地址: 0x55c480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3

if (esi == arg2)
    return arg4

int32_t* edi = arg4
char* ebx = &edi[1]

do
    if (edi != 0)
        *edi = *esi
        *(ebx + 0x14) = 0xf
        *(ebx + 0x10) = 0
        *ebx = 0
        sub_4056a0(ebx, &esi[1])
    
    esi = &esi[7]
    edi = &edi[7]
    ebx = &ebx[0x1c]
while (esi != arg2)

return edi
