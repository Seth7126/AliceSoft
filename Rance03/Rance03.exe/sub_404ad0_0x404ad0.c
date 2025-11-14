// 函数: sub_404ad0
// 地址: 0x404ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t edi = *(arg1 + 0x350)

if (edi s< 0)
    return 

int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x4bda12f7, *(arg1 + 0x344) - *(arg1 + 0x340))
int32_t edx_2 = edx_1 s>> 5

if (edi s< (edx_2 u>> 0x1f) + edx_2)
    sub_413b20(arg1 + 0x340, &var_4, edi * 0x6c + *(arg1 + 0x340))
    InvalidateRect(*(arg1 + 0x2ec), nullptr, 1)
