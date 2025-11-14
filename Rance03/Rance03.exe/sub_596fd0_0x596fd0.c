// 函数: sub_596fd0
// 地址: 0x596fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = arg1 + 0x34
*(arg1 + 0x4c) = 0
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
int32_t ebx = *(arg1 + 0x2c)

for (int32_t* i = *(arg1 + 0x28); i != ebx; i = &i[0xe])
    (**i)(0)

*(arg1 + 0x2c) = *(arg1 + 0x28)
*(arg1 + 0x20) = 0
*(arg1 + 0x18) = *(arg1 + 0x14)
int32_t ebx_1 = *(arg1 + 0xc)
int32_t* esi = *(arg1 + 8)

if (esi == ebx_1)
    *(arg1 + 0xc) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0x2b]
while (esi != ebx_1)

int32_t eax_5 = *(arg1 + 8)
*(arg1 + 0xc) = eax_5
return eax_5
