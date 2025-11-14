// 函数: sub_4bf790
// 地址: 0x4bf790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* ebx = arg4
void** esi = arg3 + 0x10
void* edi = &ebx[4]

do
    *ebx = esi[-4]
    *(edi - 0xc) = esi[-3]
    *(edi - 8) = esi[-2]
    *(edi - 4) = esi[-1]
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    if (edi + 0x18 != &esi[6])
        sub_401ff0(edi + 0x18, &esi[6], 0, 0xffffffff)
    
    void* eax_4
    eax_4.b = esi[0xc].b
    *(edi + 0x30) = eax_4.b
    sub_4bf960(edi + 0x34, &esi[0xd])
    sub_4a6db0(edi + 0x40, &esi[0x10])
    esi = &esi[0x17]
    ebx = &ebx[0x17]
    edi += 0x5c
while (&esi[-4] != arg2)

return ebx
