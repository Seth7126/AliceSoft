// 函数: sub_5c4ac0
// 地址: 0x5c4ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_2

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0xb8) - *(arg1 + 0xb4))
    edx_2 = edx_1 s>> 4

void* esi_1

if (arg2 s< 0 || arg2 s>= (edx_2 u>> 0x1f) + edx_2)
    esi_1 = nullptr
else
    esi_1 = *(arg1 + 0xb4) + arg2 * 0x48

int32_t eax_6
int32_t edx_3
edx_3:eax_6 = muls.dp.d(0x38e38e39, *(arg1 + 0xa0) - *(arg1 + 0x9c))
int32_t edx_4 = edx_3 s>> 4
void* result

if (arg3 u< (edx_4 u>> 0x1f) + edx_4)
    result = *(arg1 + 0x9c) + arg3 * 0x48
else
    result = nullptr

if (esi_1 != 0 && result != 0)
    return sub_5b65f0(esi_1, result)

result.b = 0
return result
