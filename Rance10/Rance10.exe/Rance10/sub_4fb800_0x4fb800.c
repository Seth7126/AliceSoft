// 函数: sub_4fb800
// 地址: 0x4fb800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4fc720(arg1)
void* ecx = *(arg1 + 0x1e4)
*(arg1 + 0x39) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x208) = 0
sub_525500(ecx)
sub_525500(*(arg1 + 0x1f4))
sub_525500(*(arg1 + 0x1f8))
sub_525500(*(arg1 + 0x1fc))
sub_525500(*(arg1 + 0x200))
int32_t result = *(arg1 + 8)
*(arg1 + 0x1e4) = result
*(arg1 + 0x1f4) = result
*(arg1 + 0x1f8) = result
*(arg1 + 0x1fc) = result
*(arg1 + 0x200) = result
__builtin_memset(arg1 + 0xc, 0, 0x14)
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x244) = 0x1f5
return result
