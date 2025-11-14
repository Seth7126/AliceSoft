// 函数: sub_4b49b0
// 地址: 0x4b49b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_468ec0(arg2, *(arg1 + 4))
sub_468ec0(arg2, *(arg1 + 8))
sub_468ec0(arg2, *(arg1 + 0xc))
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x14) - *(arg1 + 0x10))
int32_t edx_1 = edx s>> 3
sub_468ec0(arg2, (edx_1 u>> 0x1f) + edx_1)

for (void* i = *(arg1 + 0x10); i != *(arg1 + 0x14); i += 0x2c)
    if (sub_4b64d0(i, arg2) == 0)
        return 0

return 1
