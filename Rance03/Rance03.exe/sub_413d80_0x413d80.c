// 函数: sub_413d80
// 地址: 0x413d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* edi = arg4
int32_t* esi = arg3 + 8

do
    *(edi + 4) = esi[-1]
    *(edi + 8) = *esi
    *(edi + 0xc) = esi[1]
    int32_t eax_2
    eax_2.b = esi[2].b
    *(edi + 0x10) = eax_2.b
    *(edi + 0x14) = esi[3]
    
    if (edi + 0x18 != &esi[4])
        sub_401ff0(edi + 0x18, &esi[4], 0, 0xffffffff)
    
    if (edi + 0x30 != &esi[0xa])
        sub_401ff0(edi + 0x30, &esi[0xa], 0, 0xffffffff)
    
    *(edi + 0x4c) = esi[0x11]
    int32_t eax_6
    eax_6.b = esi[0x12].b
    *(edi + 0x50) = eax_6.b
    
    if (edi + 0x54 != &esi[0x13])
        sub_401ff0(edi + 0x54, &esi[0x13], 0, 0xffffffff)
    
    esi = &esi[0x1b]
    edi += 0x6c
while (&esi[-2] != arg2)

return edi
