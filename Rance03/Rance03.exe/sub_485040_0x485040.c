// 函数: sub_485040
// 地址: 0x485040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebx = arg4
int32_t* esi = arg3 + 0x60
void* edi = ebx + 0x60

do
    *(edi - 0x5c) = esi[-0x17]
    *(edi - 0x58) = esi[-0x16]
    *(edi - 0x54) = esi[-0x15]
    *(edi - 0x50) = esi[-0x14]
    *(edi - 0x4c) = esi[-0x13]
    *(edi - 0x48) = esi[-0x12]
    *(edi - 0x44) = esi[-0x11]
    *(edi - 0x40) = esi[-0x10]
    *(edi - 0x3c) = esi[-0xf]
    *(edi - 0x38) = esi[-0xe]
    *(edi - 0x34) = esi[-0xd]
    *(edi - 0x30) = esi[-0xc]
    *(edi - 0x2c) = esi[-0xb]
    *(edi - 0x28) = esi[-0xa]
    *(edi - 0x24) = esi[-9]
    *(edi - 0x20) = esi[-8]
    *(edi - 0x1c) = esi[-7]
    *(edi - 0x18) = esi[-6]
    *(edi - 0x14) = esi[-5]
    *(edi - 0x10) = esi[-4]
    *(edi - 0xc) = esi[-3]
    *(edi - 4) = esi[-1]
    *edi = *esi
    *(edi + 4) = *(esi + 4)
    *(edi + 0x14) = esi[5]
    *(edi + 0x18) = esi[6]
    *(edi + 0x1c) = *(esi + 0x1c)
    
    if (edi + 0x2c != &esi[0xb])
        sub_401ff0(edi + 0x2c, &esi[0xb], 0, 0xffffffff)
    
    if (edi + 0x44 != &esi[0x11])
        sub_401ff0(edi + 0x44, &esi[0x11], 0, 0xffffffff)
    
    void* ecx_1
    ecx_1.b = esi[0x17].b
    ebx += 0xc0
    esi = &esi[0x30]
    *(edi + 0x5c) = ecx_1.b
    edi += 0xc0
while (&esi[-0x18] != arg2)

return ebx
