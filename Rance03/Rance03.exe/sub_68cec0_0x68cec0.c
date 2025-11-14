// 函数: sub_68cec0
// 地址: 0x68cec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void** esi = arg3 + 0xc
char* edi = ebx + 0xc

do
    arg1.b = esi[-2].b
    edi[0xfffffff8] = arg1.b
    *(edi - 4) = esi[-1]
    
    if (edi != esi)
        sub_401ff0(edi, esi, 0, 0xffffffff)
    
    *(edi + 0x18) = esi[6]
    sub_4a6db0(&edi[0x1c], &esi[7])
    ebx += 0x44
    edi[0x28] = esi[0xa].b
    *(edi + 0x2c) = esi[0xb]
    *(edi + 0x30) = esi[0xc]
    int32_t ecx_2 = esi[0xd]
    esi = &esi[0x11]
    *(edi + 0x34) = ecx_2
    edi = &edi[0x44]
while (&esi[-3] != arg2)

return ebx
