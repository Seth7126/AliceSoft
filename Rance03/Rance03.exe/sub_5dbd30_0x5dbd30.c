// 函数: sub_5dbd30
// 地址: 0x5dbd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, arg1[2] - ebx)
int32_t edx_3 = edx_2 s>> 2

if ((edx_3 u>> 0x1f) + edx_3 u>= arg2)
    return result

int32_t eax
int32_t edx_4
edx_4:eax = muls.dp.d(0x2aaaaaab, ebx - *arg1)
int32_t edx_5 = edx_4 s>> 2
int32_t ecx_5 = (edx_5 u>> 0x1f) + edx_5

if (0xaaaaaaa - ecx_5 u>= arg2)
    return sub_5dbda0(arg1, sub_410800(arg1, ecx_5 + arg2))

sub_69a551("vector<T> too long")
noreturn
