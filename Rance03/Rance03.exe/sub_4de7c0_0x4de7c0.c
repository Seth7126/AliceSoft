// 函数: sub_4de7c0
// 地址: 0x4de7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2

if (arg1[0x3c] + ebp s< 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(arg1[0x3e])
    arg1[0x3c] = ((eax_3 - edx_1) s>> 1) - ebp

if ((*(*arg1 + 0x28))(1) - arg1[0x3e] s< arg1[0x3c] + 1 + ebp)
    arg1[0x3c] = (*(*arg1 + 0x28))(1) - arg1[0x3e] - ebp - 1

bool cond:1 = arg1[0x3c] s< 0
void* eax_15 = &arg2
arg2 = 0

if (cond:1)
    eax_15 = &arg1[0x3c]

int32_t result = *eax_15
arg1[0x3c] = result
return result
