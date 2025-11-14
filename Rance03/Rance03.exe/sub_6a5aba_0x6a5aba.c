// 函数: sub_6a5aba
// 地址: 0x6a5aba
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg1 + 0x18
_memset(esi, 0, 0x101)
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0x21c) = 0
int32_t i_2 = 0x101
*(arg1 + 0xc) = 0
void* edi_1 = arg1 + 0x10
*edi_1 = 0
*(edi_1 + 4) = 0
int32_t i

do
    *esi = *(0x74a978 - arg1 + esi)
    esi = &esi[1]
    i = i_2
    i_2 -= 1
while (i != 1)
void* ecx = arg1 + 0x119
int32_t i_3 = 0x100
char result
int32_t i_1

do
    result = *(ecx + 0x74a978 - arg1)
    *ecx = result
    ecx += 1
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return result
