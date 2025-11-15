// 函数: sub_4a54c0
// 地址: 0x4a54c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_34 = 0
struct common::CPoint::VTable** edi
struct common::CPoint::VTable* var_24
struct common::CPoint::VTable* var_30

if (*(arg1 + 0x64) != 0 || *(arg1 + 4) == 0)
    edi = &var_30
    var_30 = &common::CPoint::`vftable'
    int32_t var_2c_1 = *(arg2 + 4)
    int32_t var_28_1 = *(arg2 + 8)
else
    edi = sub_4048a0(sub_404870(arg2, &var_24, arg1 + 0x34), &var_30, arg1 + 0x68)
struct common::CPoint::VTable* var_18
struct common::CPoint::VTable* var_c
struct common::CPoint::VTable** eax_7 = sub_404810(edi, &var_c, sub_4a55d0(arg1, &var_18))
int32_t ecx_5 = eax_7[1]
*(arg3 + 4) = ecx_5
int32_t result = eax_7[2]
*(arg3 + 8) = result

if (ecx_5 s>= 0 && ecx_5 s< *(arg1 + 0x78) && result s>= 0 && result s< *(arg1 + 0x7c))
    result.b = 1
    return result

result.b = 0
return result
