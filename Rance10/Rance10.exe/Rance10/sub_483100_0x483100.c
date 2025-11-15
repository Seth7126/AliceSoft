// 函数: sub_483100
// 地址: 0x483100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 8)
int32_t result = 0
void** ecx = *edx

while (ecx != edx)
    int32_t esi_2 = ecx[3] - ecx[2]
    ecx = *ecx
    result += esi_2

return result
