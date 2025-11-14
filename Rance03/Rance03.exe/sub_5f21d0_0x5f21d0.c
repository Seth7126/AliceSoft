// 函数: sub_5f21d0
// 地址: 0x5f21d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ecx = arg1
int32_t eax = ecx[4]

if (eax == 1)
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    return zx.d(*ecx)

if (eax != 2)
    return 0

int32_t eax_3 = ecx[5]
char* edx

if (eax_3 u< 0x10)
    edx = ecx
else
    edx = *ecx

if (eax_3 u>= 0x10)
    ecx = *ecx

return zx.d(*edx) << 8 | zx.d(*(ecx + 1))
