// 函数: sub_10008bb2
// 地址: 0x10008bb2
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2)
int32_t ecx_5 = ((((eax_1 ^ edx) - edx) & 0xf) ^ edx) - edx
int128_t* eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(arg1)
int32_t edi_5 = ((((eax_3 ^ edx_1) - edx_1) & 0xf) ^ edx_1) - edx_1

if ((ecx_5 | edi_5) != 0)
    if (ecx_5 == edi_5)
        __builtin_memcpy(arg1, arg2, neg.d(ecx_5) + 0x10)
        sub_10008bb2(arg1 + neg.d(ecx_5) + 0x10, arg2 + neg.d(ecx_5) + 0x10, 
            arg3 - (neg.d(ecx_5) + 0x10), neg.d(ecx_5) + 0x10)
        return arg1
    
    int32_t esi_5
    int32_t edi_9
    edi_9, esi_5 = __builtin_memcpy(arg1, arg2, arg3 u>> 2 << 2)
    __builtin_memcpy(edi_9, esi_5, arg3 & 3)
    return arg1

void* count_1 = arg3 & 0x7f
void* count = count_1

if (arg3 != count_1)
    sub_10008b2b(eax_3, arg2, arg3 - count_1)
    eax_3 = arg1
    count_1 = count

if (count_1 == 0)
    return eax_3

__builtin_memcpy(arg3 + eax_3 - count_1, arg2 + arg3 - count_1, count)
return arg1
