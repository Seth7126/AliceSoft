// 函数: sub_432de0
// 地址: 0x432de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = data_7fcb44
void* eax_1 = *(*edi + 4)
int32_t esi = *(eax_1 + 8)
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, *(eax_1 + 0xc) - esi)
int32_t edx_1 = edx s>> 2
int32_t ecx_4 = (edx_1 u>> 0x1f) + edx_1

if (*(esi + ecx_4 * 0x18 - 8) == 0)
    ecx_4 -= 1

int32_t result = edi[1]

if (ecx_4 != 0)
    return result

return result - 1
