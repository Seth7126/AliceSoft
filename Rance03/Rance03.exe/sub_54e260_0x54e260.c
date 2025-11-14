// 函数: sub_54e260
// 地址: 0x54e260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, arg1[2] - ebx)
int32_t edx_3 = edx_2 s>> 3

if ((edx_3 u>> 0x1f) + edx_3 u>= arg2)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x2aaaaaab, ebx - *arg1)
int32_t edx_5 = edx_4 s>> 3
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0x5555555 - ecx_5 u>= arg2)
    return sub_54e610(arg1, sub_4154b0(arg1, ecx_5 + arg2))

sub_69a551("vector<T> too long")
noreturn
