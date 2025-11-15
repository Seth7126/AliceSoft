// 函数: sub_5fc1c0
// 地址: 0x5fc1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = arg2 * 7
int32_t eax_1 = *arg1
*(eax_1 + (edx_1 << 3) + 0x20) += 1
void* esi = eax_1 + (edx_1 << 3)
sub_5fb6e0(esi + 0x24)
void* esi_1 = *(esi + 0x28)
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(esi_1 - 8) = performanceCount
int32_t result
*(esi_1 - 4) = result
return result
