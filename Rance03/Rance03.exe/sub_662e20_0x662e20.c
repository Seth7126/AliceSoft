// 函数: sub_662e20
// 地址: 0x662e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
int32_t* esi = arg3 + 8

do
    *edi = esi[-2]
    edi[1] = esi[-1]
    edi[2] = *esi
    edi[3] = esi[1]
    edi[4] = esi[2]
    edi[5] = esi[3]
    edi[6] = esi[4]
    edi[7] = esi[5]
    edi[8] = esi[6]
    edi[9] = esi[7]
    edi[0xa] = esi[8]
    edi[0xb] = esi[9]
    edi[0xc] = esi[0xa]
    edi[0xd] = esi[0xb]
    edi[0xe] = esi[0xc]
    edi[0xf] = esi[0xd]
    edi[0x10] = esi[0xe]
    edi[0x11].b = esi[0xf].b
    *(edi + 0x45) = *(esi + 0x3d)
    edi[0x12] = esi[0x10]
    edi[0x13] = esi[0x11]
    edi[0x14].b = esi[0x12].b
    
    if (&edi[0x15] != &esi[0x13])
        sub_401ff0(&edi[0x15], &esi[0x13], 0, 0xffffffff)
    
    if (&edi[0x1b] != &esi[0x19])
        sub_401ff0(&edi[0x1b], &esi[0x19], 0, 0xffffffff)
    
    edi[0x21] = esi[0x1f]
    int32_t eax_24
    eax_24.b = esi[0x20].b
    edi[0x22].b = eax_24.b
    edi[0x23] = esi[0x21]
    edi[0x24] = esi[0x22]
    edi[0x25] = esi[0x23]
    edi[0x26] = esi[0x24]
    edi[0x27] = esi[0x25]
    edi[0x28] = esi[0x26]
    sub_6541d0(&edi[0x29], &esi[0x27])
    esi = &esi[0x30]
    edi = &edi[0x30]
while (&esi[-2] != arg2)

return edi
