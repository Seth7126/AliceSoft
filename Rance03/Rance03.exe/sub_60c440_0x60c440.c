// 函数: sub_60c440
// 地址: 0x60c440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = *(arg1 + 0x30)

if (edx == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_1
eax_1.b = *(arg1 + 0x68) != 0
int32_t eax_2 = (*(*edx + 0x20))(edx, eax_1, 0)

if (eax_2 == 0x887a0005 || eax_2 == 0x887a0007)
    *(arg1 + 0x69) = 1

eax_2.b = 1
return eax_2
