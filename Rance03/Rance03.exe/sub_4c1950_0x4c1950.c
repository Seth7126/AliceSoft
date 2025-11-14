// 函数: sub_4c1950
// 地址: 0x4c1950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* ebx = arg4
void* esi = arg2 + 0x10
char* edi = &ebx[4]

do
    int32_t eax = *(esi - 0x6c)
    esi -= 0x5c
    ebx -= 0x5c
    edi -= 0x5c
    *ebx = eax
    *(edi - 0xc) = *(esi - 0xc)
    *(edi - 8) = *(esi - 8)
    *(edi - 4) = *(esi - 4)
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    if (&edi[0x18] != esi + 0x18)
        sub_401ff0(&edi[0x18], esi + 0x18, 0, 0xffffffff)
    
    int32_t* eax_4
    eax_4.b = *(esi + 0x30)
    edi[0x30] = eax_4.b
    sub_4bf960(&edi[0x34], esi + 0x34)
    sub_4a6db0(&edi[0x40], esi + 0x40)
while (esi - 0x10 != arg3)

return ebx
