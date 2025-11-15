// 函数: sub_474900
// 地址: 0x474900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void** esi = arg3 + 0x18
char* edi = ebx + 0x18

do
    if (ebx != &esi[-6])
        sub_403590(ebx, &esi[-6], 0, 0xffffffff)
    
    if (edi != esi)
        sub_403590(edi, esi, 0, 0xffffffff)
    
    ebx += 0x38
    *(edi + 0x18) = esi[6]
    int32_t ecx_2 = esi[7]
    esi = &esi[0xe]
    *(edi + 0x1c) = ecx_2
    edi = &edi[0x38]
while (&esi[-6] != arg2)

return ebx
