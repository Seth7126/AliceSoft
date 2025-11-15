// 函数: sub_5feb50
// 地址: 0x5feb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void** esi = arg2 + 8
char* edi = ebx + 8

do
    esi -= 0x38
    edi -= 0x38
    ebx -= 0x38
    
    if (edi != esi)
        sub_403590(edi, esi, 0, 0xffffffff)
    
    *(edi + 0x18) = esi[6]
    sub_5fe0d0(&edi[0x1c], &esi[7])
    *(edi + 0x28) = esi[0xa]
    *(edi + 0x2c) = esi[0xb]
while (&esi[-2] != arg3)

return ebx
