// 函数: sub_4a5410
// 地址: 0x4a5410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::CPoint::VTable* var_24
struct common::CPoint::VTable* var_18
sub_404840(arg2, &var_24, sub_4a55d0(arg1, &var_18))
void* result
void* var_20
void* var_1c

if (*(arg1 + 0x64) != 0 || *(arg1 + 4) == 0)
    *(arg3 + 4) = var_20
    *(arg3 + 8) = var_1c
    
    if (var_20 s>= 0 && var_20 s< *(arg1 + 0x6c) && var_1c s>= 0 && var_1c s< *(arg1 + 0x70))
        result.b = 1
        return result
else
    struct common::CPoint::VTable* var_c
    struct common::CPoint::VTable** eax_3 =
        sub_4048a0(sub_404870(&var_24, &var_c, arg1 + 0x68), &var_18, arg1 + 0x34)
    *(arg3 + 4) = eax_3[1]
    *(arg3 + 8) = eax_3[2]
    
    if (var_20 s>= 0 && var_20 s< *(arg1 + 0x38) && var_1c s>= 0 && var_1c s< *(arg1 + 0x3c))
        result.b = 1
        return result
result.b = 0
return result
