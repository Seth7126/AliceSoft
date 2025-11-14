// 函数: sub_475580
// 地址: 0x475580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

void** esi = arg2
void** edx

if (esi[5] u< 0x10)
    edx = esi
else
    edx = *esi

char eax_3 = (*(*ecx + 0x2c))(edx)

if (eax_3 == 0)
    return eax_3

void** edx_1 = arg4

if (edx_1[5] u>= 0x10)
    edx_1 = *edx_1

if (esi[5] u>= 0x10)
    esi = *esi

return (*(**(arg1 + 4) + 0x3c))(esi, arg3, edx_1)
