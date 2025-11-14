// 函数: sub_662cc0
// 地址: 0x662cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
void* esi = arg2 + 8

do
    int32_t eax = *(esi - 0xc8)
    esi -= 0xc0
    edi -= 0xc0
    *edi = eax
    edi[1] = *(esi - 4)
    edi[2] = *esi
    edi[3] = *(esi + 4)
    edi[4] = *(esi + 8)
    edi[5] = *(esi + 0xc)
    edi[6] = *(esi + 0x10)
    edi[7] = *(esi + 0x14)
    edi[8] = *(esi + 0x18)
    edi[9] = *(esi + 0x1c)
    edi[0xa] = *(esi + 0x20)
    edi[0xb] = *(esi + 0x24)
    edi[0xc] = *(esi + 0x28)
    edi[0xd] = *(esi + 0x2c)
    edi[0xe] = *(esi + 0x30)
    edi[0xf] = *(esi + 0x34)
    edi[0x10] = *(esi + 0x38)
    edi[0x11].b = *(esi + 0x3c)
    *(edi + 0x45) = *(esi + 0x3d)
    edi[0x12] = *(esi + 0x40)
    edi[0x13] = *(esi + 0x44)
    edi[0x14].b = *(esi + 0x48)
    
    if (&edi[0x15] != esi + 0x4c)
        sub_401ff0(&edi[0x15], esi + 0x4c, 0, 0xffffffff)
    
    if (&edi[0x1b] != esi + 0x64)
        sub_401ff0(&edi[0x1b], esi + 0x64, 0, 0xffffffff)
    
    edi[0x21] = *(esi + 0x7c)
    int32_t eax_24
    eax_24.b = *(esi + 0x80)
    edi[0x22].b = eax_24.b
    edi[0x23] = *(esi + 0x84)
    edi[0x24] = *(esi + 0x88)
    edi[0x25] = *(esi + 0x8c)
    edi[0x26] = *(esi + 0x90)
    edi[0x27] = *(esi + 0x94)
    edi[0x28] = *(esi + 0x98)
    sub_6541d0(&edi[0x29], esi + 0x9c)
while (esi - 8 != arg3)

return edi
