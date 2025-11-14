// 函数: sub_435fe0
// 地址: 0x435fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x6c); i != *(arg1 + 0x70); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (**ecx_1)(1)

*(arg1 + 0x70) = *(arg1 + 0x6c)
int32_t ebx = *(arg1 + 0x58)

for (int32_t* i_1 = *(arg1 + 0x54); i_1 != ebx; i_1 = &i_1[0xa])
    (**i_1)(0)

*(arg1 + 0x58) = *(arg1 + 0x54)
int32_t ebx_1 = *(arg1 + 0x64)
int32_t* esi = *(arg1 + 0x60)

if (esi == ebx_1)
    *(arg1 + 0x64) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0xa]
while (esi != ebx_1)

int32_t eax_6 = *(arg1 + 0x60)
*(arg1 + 0x64) = eax_6
return eax_6
