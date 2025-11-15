// 函数: sub_6c9d00
// 地址: 0x6c9d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1

if (*(edi + 0x10) == 0)
    return sub_4263a0(edi + 4, &arg2)

arg1.b = *(edi + 0x10)
char* edx_3 = *(edi + 8) - *(edi + 4) - 1 + *(edi + 4)
int32_t ebx
ebx.b = arg2
*edx_3 |= ebx.b u>> arg1.b
ebx.b <<= 8 - (*(edi + 0x10)).b
arg2 = ebx.b
return sub_4263a0(edi + 4, &arg2)
