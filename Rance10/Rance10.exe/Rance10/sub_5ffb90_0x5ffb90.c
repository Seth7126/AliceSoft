// 函数: sub_5ffb90
// 地址: 0x5ffb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_7 = *(arg1 + 4)

if (eax_7 != 0x4f && eax_7 != 0x50)
    return 0xffffffff

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x10) - *(arg1 + 0xc))
int32_t edx_1 = edx s>> 2

if (edx_1 u>> 0x1f != neg.d(edx_1))
    return sub_5ffb90() + 1

sub_6d0947("invalid vector<T> subscript")
noreturn
