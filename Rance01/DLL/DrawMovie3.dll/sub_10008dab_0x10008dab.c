// 函数: sub_10008dab
// 地址: 0x10008dab
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1)
int32_t edi_5 = ((((eax_1 ^ edx) - edx) & 0xf) ^ edx) - edx

if (edi_5 != 0)
    __builtin_memset(arg1, 0, neg.d(edi_5) + 0x10)
    sub_10008dab(arg1 + neg.d(edi_5) + 0x10, 0, arg2 - (neg.d(edi_5) + 0x10), neg.d(edi_5) + 0x10)
    return arg1

int32_t count_1 = arg2 & 0x7f
int32_t count = count_1

if (arg2 != count_1)
    sub_10008d54(eax_1, arg2 - count_1)
    eax_1 = arg1
    count_1 = count

if (count_1 == 0)
    return eax_1

__builtin_memset(eax_1 + arg2 - count_1, 0, count)
return arg1
