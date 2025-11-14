// 函数: sub_5db420
// 地址: 0x5db420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = arg2
void* ecx = &edx[1]
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)
void* ecx_1 = *(arg1 + 4)

if (edx - ecx + 1 u> *(ecx_1 + 0xc))
    *(ecx_1 + 0xc) = 0
    
    if (sub_64aeb0(ecx_1 + 4, edx - ecx + 1) == 0)
        sub_64b530("IString::Set()\nallocMemory")

void* eax_1 = *(arg1 + 4)

if (*(eax_1 + 0xc) != 0)
    return sub_69d850(*(eax_1 + 8), arg2, edx - ecx + 1)

return sub_69d850(nullptr, arg2, edx - ecx + 1)
