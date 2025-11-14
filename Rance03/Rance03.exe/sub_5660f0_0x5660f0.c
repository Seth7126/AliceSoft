// 函数: sub_5660f0
// 地址: 0x5660f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x1a6d01a7, arg1[2] - edi)
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 u>= 1)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x1a6d01a7, edi - *arg1)
int32_t edx_5 = edx_4 s>> 6
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0x69b406 - ecx_5 u>= 1)
    return sub_566e50(arg1, sub_566e00(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
