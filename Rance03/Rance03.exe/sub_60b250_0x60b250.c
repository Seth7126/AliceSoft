// 函数: sub_60b250
// 地址: 0x60b250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (*(arg1 + 8) == 0)
    eax.b = 0
    return eax

int32_t* ebx = *(arg1 + 0xc)

if (ebx == 0)
    eax.b = 0
    return eax

int32_t ecx
ecx.b = arg2 != 0
int32_t eax_1
eax_1.b = arg3.b != 0
arg2.d = (ecx * 2) | eax_1
sub_42f3d0(arg1 + 0x24, &arg3, &arg2)
int32_t* eax_2 = arg3

if (eax_2 == *(arg1 + 0x24))
    eax_2.b = 0
    return eax_2

int32_t esi = eax_2[5]

if (*(arg1 + 0x2c) != esi)
    (*(*ebx + 0x90))(ebx, esi, 0)
    *(arg1 + 0x2c) = esi

eax_2.b = 1
return eax_2
