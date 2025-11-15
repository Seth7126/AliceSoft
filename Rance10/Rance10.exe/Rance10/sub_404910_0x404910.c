// 函数: sub_404910
// 地址: 0x404910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = *(arg1 + 4) s>= 0
int32_t var_8 = 0
int32_t* ecx = &var_8
int32_t var_4 = 0

if (cond:0)
    ecx = arg1 + 4

bool cond:1 = *(arg1 + 8) s>= 0
arg2[1] = *ecx
void* ecx_2 = &var_4

if (cond:1)
    ecx_2 = arg1 + 8

*arg2 = &common::CPoint::`vftable'
arg2[2] = *ecx_2
return arg2
