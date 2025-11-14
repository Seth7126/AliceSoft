// 函数: sub_533890
// 地址: 0x533890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2e8ba2e9, arg1[2] - edi)
int32_t edx_3 = edx_2 s>> 3

if ((edx_3 u>> 0x1f) + edx_3 u>= 1)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x2e8ba2e9, edi - *arg1)
int32_t edx_5 = edx_4 s>> 3
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0x5d1745d - ecx_5 u>= 1)
    return sub_533990(arg1, sub_4b4d50(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
