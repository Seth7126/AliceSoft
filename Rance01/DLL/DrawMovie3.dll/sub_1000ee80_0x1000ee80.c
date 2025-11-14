// 函数: sub_1000ee80
// 地址: 0x1000ee80
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(arg1 + 0x18) == 0)
    return 0x80040213

int32_t* eax_1 = *(arg1 + 0x18)
int32_t result = (*(*eax_1 + 0xc))(eax_1, arg2)

if (result s< 0)
    return result

int32_t eax_2 = *(arg1 + 0x20)
int32_t temp1_1 = *arg2
*arg2 -= eax_2
arg2[1] = sbb.d(arg2[1], *(arg1 + 0x24), temp1_1 u< eax_2)
return 0
