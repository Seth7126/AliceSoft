// 函数: sub_4d9b50
// 地址: 0x4d9b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void* esi = arg3 + 0x38
void* edi = ebx + 0x38

do
    if (ebx != esi - 0x38)
        sub_401ff0(ebx, esi - 0x38, 0, 0xffffffff)
    
    if (edi - 0x20 != esi - 0x20)
        sub_401ff0(edi - 0x20, esi - 0x20, 0, 0xffffffff)
    
    *(edi - 8) = *(esi - 8)
    *(edi - 4) = *(esi - 4)
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    if (edi + 0x18 != esi + 0x18)
        sub_401ff0(edi + 0x18, esi + 0x18, 0, 0xffffffff)
    
    int32_t* eax_6
    eax_6.b = *(esi + 0x30)
    *(edi + 0x30) = eax_6.b
    sub_4bf960(edi + 0x34, esi + 0x34)
    sub_4a6db0(edi + 0x40, esi + 0x40)
    esi += 0x84
    ebx += 0x84
    edi += 0x84
while (esi - 0x38 != arg2)

return ebx
