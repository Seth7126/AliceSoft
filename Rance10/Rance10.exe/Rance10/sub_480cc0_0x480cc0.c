// 函数: sub_480cc0
// 地址: 0x480cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

char* ebx = arg4
int32_t* esi = arg3 + 8
char* edi = &ebx[8]

do
    if (ebx != 0)
        *ebx = esi[-2].b
        *(edi - 4) = esi[-1]
        *(edi + 0x14) = 0xf
        *(edi + 0x10) = 0
        *edi = 0
        sub_4056a0(edi, esi)
        *(edi + 0x18) = esi[6]
        edi[0x1c] = esi[7].b
        *(edi + 0x20) = esi[8]
        *(edi + 0x24) = esi[9]
        *(edi + 0x28) = esi[0xa]
    
    esi = &esi[0xd]
    ebx = &ebx[0x34]
    edi = &edi[0x34]
while (&esi[-2] != arg2)

return ebx
