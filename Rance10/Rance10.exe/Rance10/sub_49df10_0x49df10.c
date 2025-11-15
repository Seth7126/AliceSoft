// 函数: sub_49df10
// 地址: 0x49df10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(GetSystemMetrics(SM_CYSCREEN) - *(arg2 + 8))
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(GetSystemMetrics(SM_CXSCREEN) - ebx)
arg1[2] = (eax_2 - edx) s>> 1
*arg1 = &common::CPoint::`vftable'
arg1[1] = (eax_6 - edx_1) s>> 1
return arg1
