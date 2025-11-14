// 函数: sub_4dabf0
// 地址: 0x4dabf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3

if (arg3 == arg2)
    return arg4

char* ebx = arg4
char* edi = &ebx[0x38]
void** esi = arg2 + 0x38

do
    esi -= 0x84
    ebx -= 0x84
    edi -= 0x84
    
    if (ebx != &esi[-0xe])
        sub_401ff0(ebx, &esi[-0xe], 0, 0xffffffff)
    
    if (&edi[0xffffffe0] != &esi[-8])
        sub_401ff0(&edi[0xffffffe0], &esi[-8], 0, 0xffffffff)
    
    *(edi - 8) = esi[-2]
    *(edi - 4) = esi[-1]
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    if (&edi[0x18] != &esi[6])
        sub_401ff0(&edi[0x18], &esi[6], 0, 0xffffffff)
    
    int32_t* eax_6
    eax_6.b = esi[0xc].b
    edi[0x30] = eax_6.b
    sub_4bf960(&edi[0x34], &esi[0xd])
    sub_4a6db0(&edi[0x40], &esi[0x10])
while (&esi[-0xe] != arg3)

return ebx
