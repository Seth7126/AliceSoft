// 函数: sub_5238f0
// 地址: 0x5238f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x94)

if (ecx != 0)
    (**ecx)(1)

int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0x94) = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0xc) = 0

bool cond:0 = *(arg1 + 0x90) u< 0x10
void* result = arg1 + 0x7c
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
int32_t* ecx_3 = *(arg1 + 0x10)

if (ecx_3 != 0)
    int32_t esi_1 = ecx_3[1]
    ecx_3[1] -= 1
    (**ecx_3)(esi_1 - 1)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x24) = 1

__builtin_memset(arg1 + 0x98, 0, 0x14)
result.b = 1
return result
