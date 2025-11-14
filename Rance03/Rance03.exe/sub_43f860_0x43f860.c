// 函数: sub_43f860
// 地址: 0x43f860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 5
var_4 = (edx_3 u>> 0x1f) + edx_3
sub_4158d0(arg2, &var_4)

for (void* i = *(arg1 + 4); i != *(arg1 + 8); i += 0x68)
    if (sub_440410(i, arg2) == 0)
        return 0

return 1
