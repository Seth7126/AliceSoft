// 函数: sub_4959e0
// 地址: 0x4959e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3

if (ebx == arg2)
    return arg4

char* esi = arg4
int32_t* edi = &esi[0x28]

do
    if (esi != 0)
        edi[-5] = 0xf
        edi[-6] = 0
        *esi = 0
        sub_4056a0(esi, ebx)
        edi[1] = 0xf
        *edi = 0
        edi[-4].b = 0
        sub_4056a0(&edi[-4], &ebx[6])
    
    ebx = &ebx[0xc]
    esi = &esi[0x30]
    edi = &edi[0xc]
while (ebx != arg2)

return esi
