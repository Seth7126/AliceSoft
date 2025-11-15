// 函数: sub_606e10
// 地址: 0x606e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

char* ebx = arg4
int32_t* esi = arg3 + 0x20
int32_t* edi = &ebx[0x20]

do
    if (ebx != 0)
        edi[-3] = 0xf
        edi[-4] = 0
        *ebx = 0
        sub_4056a0(ebx, &esi[-8])
        edi[-2] = 0
        edi[-1] = 0
        *edi = 0
        edi[-2] = esi[-2]
        edi[-1] = esi[-1]
        *edi = *esi
        esi[-2] = 0
        esi[-1] = 0
        *esi = 0
    
    esi = &esi[9]
    ebx = &ebx[0x24]
    edi = &edi[9]
while (&esi[-8] != arg2)

return ebx
