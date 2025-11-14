// 函数: sub_688e10
// 地址: 0x688e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x100) - *(arg1 + 0xfc))
int32_t edx_3 = edx_2 s>> 2
*(arg1 + 0x88) = (edx_3 u>> 0x1f) + edx_3 + 1
sub_689120(arg1 + 0x70)
int32_t eax_7
int32_t edx_5
edx_5:eax_7 = sx.q(*(arg1 + 0x30))
*(arg1 + 0x68) = (*(arg1 + 0xf8) + 4) * ((eax_7 - edx_5) s>> 1)
sub_689120(arg1 + 0x50)
int32_t eax_10 = GetScrollPos(*(arg1 + 0x74), *(arg1 + 0x80))
int32_t var_20
sub_695bd0(&var_20, arg1 + 0xfc, GetScrollPos(*(arg1 + 0x54), *(arg1 + 0x60)), eax_10)
int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

InvalidateRect(*(arg1 + 8), nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 8))
sub_69a5bc(eax_1 ^ &var_24)
return result
