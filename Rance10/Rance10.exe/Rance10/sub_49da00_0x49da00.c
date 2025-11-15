// 函数: sub_49da00
// 地址: 0x49da00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t eax = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_1 = GetSystemMetrics(SM_CYMENU)
int32_t eax_2 = GetSystemMetrics(SM_CXFRAME)
int32_t eax_3 = GetSystemMetrics(SM_CYFRAME)
void* edi_1 = *(arg1 + 0x10)
int32_t esi = *(arg2 + 8)
int32_t edx = *(arg2 + 4)
*(edi_1 + 0x6c) = 0
*(edi_1 + 0x70) = 0
int32_t result = esi + (eax_3 << 1) + eax_1 + eax
*(edi_1 + 0x74) = edx + (eax_2 << 1)
*(edi_1 + 0x78) = result
return result
