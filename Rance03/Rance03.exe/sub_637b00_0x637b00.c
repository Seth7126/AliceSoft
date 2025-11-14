// 函数: sub_637b00
// 地址: 0x637b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg1 + 4)
int32_t result = 0
void** ecx = *esi

while (ecx != esi)
    int32_t edx_2 = ecx[3] - ecx[2]
    ecx = *ecx
    result += edx_2

return result
