// 函数: sub_606ed0
// 地址: 0x606ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

int32_t* ebx = arg4
char* esi = &ebx[2]

do
    if (ebx != 0)
        *ebx = *edi
        *(esi - 4) = edi[1]
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_4056a0(esi, &edi[2])
    
    edi = &edi[8]
    ebx = &ebx[8]
    esi = &esi[0x20]
while (edi != arg2)

return ebx
