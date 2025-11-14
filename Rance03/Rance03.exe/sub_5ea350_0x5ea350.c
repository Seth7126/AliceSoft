// 函数: sub_5ea350
// 地址: 0x5ea350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_7
int32_t edi

if (*(arg1 + 0x5c) != 0 || *(arg1 + 0xc) == 0)
    edi = arg4
    *edi = arg2
    eax_7 = arg3
else
    edi = arg4
    *edi = divs.dp.d(sx.q(*(arg1 + 0x30) * arg2), *(arg1 + 0x60))
    *(arg1 + 0x64)
    eax_7 = divs.dp.d(sx.q(*(arg1 + 0x34) * arg3), *(arg1 + 0x64))

*arg5 = eax_7
sub_5ea3e0(arg1, &arg4, &arg2)
*edi += arg4
*arg5 += arg2
int32_t ecx = *edi
int32_t result = *arg5

if (ecx s>= 0 && ecx s< *(arg1 + 0x68) && result s>= 0 && result s< *(arg1 + 0x6c))
    result.b = 1
    return result

result.b = 0
return result
