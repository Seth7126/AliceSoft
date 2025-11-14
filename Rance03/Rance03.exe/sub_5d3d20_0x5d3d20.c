// 函数: sub_5d3d20
// 地址: 0x5d3d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg2
void* ebx = esi[4]

if (ebx + 1 u> *(arg1 + 0xc))
    *(arg1 + 0xc) = 0
    char eax_1 = sub_64aeb0(arg1 + 4, ebx + 1)
    
    if (eax_1 == 0)
        return eax_1

if (esi[5] u>= 0x10)
    esi = *esi

if (*(arg1 + 0xc) != 0)
    sub_69d850(*(arg1 + 8), esi, ebx + 1)
    int32_t* eax_4
    eax_4.b = 1
    return eax_4

sub_69d850(nullptr, esi, ebx + 1)
int32_t* eax_2
eax_2.b = 1
return eax_2
