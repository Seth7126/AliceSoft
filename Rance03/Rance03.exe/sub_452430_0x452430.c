// 函数: sub_452430
// 地址: 0x452430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (void* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i += 0x1c)
    int32_t* ecx_1 = *(i + 0x18)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()

int32_t ebx = *(arg1 + 0x54)
int32_t* esi = *(arg1 + 0x50)

if (esi == ebx)
    *(arg1 + 0x54) = esi
    return esi

do
    if (esi[5] u>= 0x10)
        j__free(*esi)
    
    esi[5] = 0xf
    esi[4] = 0
    *esi = 0
    esi = &esi[7]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 0x50)
*(arg1 + 0x54) = eax_2
return eax_2
