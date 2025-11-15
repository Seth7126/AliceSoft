// 函数: sub_426bf0
// 地址: 0x426bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
sub_425fb0(arg2, arg1 + 8)
int32_t var_1c = sub_425fb0(arg2, arg1 + 0x1c)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_3 = edx_2 s>> 2
int32_t var_20 = (edx_3 u>> 0x1f) + edx_3
sub_6c9f00(arg2)
void* i = *(arg1 + 0x28)

for (int32_t edi_1 = *(arg1 + 0x2c); i != edi_1; i += 0x18)
    if (sub_42dbd0(i, arg2) == 0)
        return 0

return 1
