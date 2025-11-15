// 函数: sub_520410
// 地址: 0x520410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
*(arg2 + 4) = arg1[0x47]
*(arg2 + 8) = arg1[0x48]
*(arg2 + 0xc) = *(arg1 + 0x124)
*(arg2 + 0x1c) = arg1[0x4d]
*(arg2 + 0x20) = arg1[0x4e]
*(arg2 + 0x24) = *(arg1 + 0x13c)
int32_t eax_5 = (*(*arg1 + 0x28))(1)
int32_t result_1 = int.d(sub_4a78b0(*(arg2 + 0x1c)))
int32_t result = int.d(sub_4a78b0(*(arg2 + 0x20)))
int32_t ecx = eax_5 - 5

if (((eax_5 - 6).b & 1) == 0)
    ecx = eax_5 - 6

if (result_1 s< result)
    result_1 = result

*(arg2 + 8) = ecx - result_1 * 2
return result
