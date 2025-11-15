// 函数: sub_502f40
// 地址: 0x502f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6ca100(arg2, *(arg1 + 4))
sub_6ca100(arg2, *(arg1 + 8))
sub_6ca100(arg2, *(arg1 + 0xc))
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x14) - *(arg1 + 0x10))
int32_t edx_1 = edx s>> 3
sub_6ca100(arg2, (edx_1 u>> 0x1f) + edx_1)
void* i = *(arg1 + 0x10)

for (int32_t edi_1 = *(arg1 + 0x14); i != edi_1; i += 0x2c)
    if (sub_5038f0(i, arg2) == 0)
        return 0

return 1
