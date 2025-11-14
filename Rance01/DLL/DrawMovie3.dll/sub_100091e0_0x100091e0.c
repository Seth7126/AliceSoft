// 函数: sub_100091e0
// 地址: 0x100091e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* ecx_1 = *(arg1 + 0x3c) + arg1
uint32_t esi = zx.d(*(ecx_1 + 6))
int32_t edx = 0
int32_t edi
int32_t var_10 = edi
void* result = zx.d(*(ecx_1 + 0x14)) + ecx_1 + 0x18

if (esi u> 0)
    do
        int32_t ecx_2 = *(result + 0xc)
        
        if (arg2 u>= ecx_2 && arg2 u< *(result + 8) + ecx_2)
            return result
        
        edx += 1
        result += 0x28
    while (edx u< esi)

return nullptr
