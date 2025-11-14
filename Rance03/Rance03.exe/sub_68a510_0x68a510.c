// 函数: sub_68a510
// 地址: 0x68a510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x78787879, arg1[2] - edi)
int32_t edx_3 = edx_2 s>> 5

if ((edx_3 u>> 0x1f) + edx_3 u>= 1)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x78787879, edi - *arg1)
int32_t edx_5 = edx_4 s>> 5
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0x3c3c3c3 - ecx_5 u>= 1)
    return sub_68a580(arg1, sub_579440(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
