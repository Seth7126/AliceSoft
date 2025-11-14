// 函数: sub_6937f0
// 地址: 0x6937f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void* esi = arg2 + 0xc
char* edi = ebx + 0xc

do
    arg1.b = *(esi - 0x4c)
    esi -= 0x44
    edi -= 0x44
    ebx -= 0x44
    edi[0xfffffff8] = arg1.b
    *(edi - 4) = *(esi - 4)
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    *(edi + 0x18) = *(esi + 0x18)
    sub_4a6db0(&edi[0x1c], esi + 0x1c)
    edi[0x28] = *(esi + 0x28)
    *(edi + 0x2c) = *(esi + 0x2c)
    *(edi + 0x30) = *(esi + 0x30)
    *(edi + 0x34) = *(esi + 0x34)
while (esi - 0xc != arg3)

return ebx
