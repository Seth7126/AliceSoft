// 函数: sub_5dc430
// 地址: 0x5dc430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg2
*(edx + 0x84) = *(arg1 + 0x10)
*(edx + 0x8c) = *(arg1 + 0x18)
void* ecx = *arg2
*(ecx + 0x90) = *(arg1 + 0x1c)
*(ecx + 0x98) = *(arg1 + 0x24)
void* eax_2 = *arg2
*(eax_2 + 0x9c) = *(arg1 + 0x28)
*(eax_2 + 0xac) = *(arg1 + 0x38)
*(eax_2 + 0xbc) = *(arg1 + 0x48)
*(eax_2 + 0xcc) = *(arg1 + 0x58)
__builtin_memcpy(*arg2 + 0xdc, arg1 + 0x68, 0x64)
float xmm3 = *(arg1 + 0xd0)
float xmm2 = *(arg1 + 0xcc)
float xmm4 = *(arg1 + 0xd4)
void* ecx_1 = *arg2
float xmm0_10 = sub_484cc0(xmm2 * xmm2 + xmm3 * xmm3 + xmm4 * xmm4)
xmm0_10 - 0f
eax_2:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
    | (xmm0_10 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float eax_3
int64_t xmm0_11

if (not(p_1))
    xmm0_11 = *(arg1 + 0xcc)
    eax_3 = *(arg1 + 0xd4)
else
    float xmm1_4 = 1f / xmm0_10
    float var_8_1 = xmm3 * xmm1_4
    xmm0_11 = (xmm2 * xmm1_4).q
    eax_3 = xmm4 * xmm1_4

*(ecx_1 + 0x180) = xmm0_11
*(ecx_1 + 0x188) = eax_3
int32_t result = *(arg1 + 0xd8)
*(*arg2 + 0x258) = result
return result
