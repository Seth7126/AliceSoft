// 函数: sub_5b6880
// 地址: 0x5b6880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x38e38e39, arg1[2] - ebx)
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 u>= arg2)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x38e38e39, ebx - *arg1)
int32_t edx_5 = edx_4 s>> 4
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0x38e38e3 - ecx_5 u>= arg2)
    return sub_5b6990(arg1, sub_5b6940(arg1, ecx_5 + arg2))

sub_69a551("vector<T> too long")
noreturn
