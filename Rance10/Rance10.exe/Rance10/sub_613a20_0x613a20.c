// 函数: sub_613a20
// 地址: 0x613a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0x1fc)
int32_t ebx = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
*(arg1 + 0x1fc) = ecx - 1
int32_t edi = *(*(arg1 + 0x1f8) + ((ecx - 1) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 2
int32_t esi = *(*(arg1 + 0x1f8) + ((ecx - 2) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 3
sub_405d30(arg1 + 0x1f4, ebx)
sub_405d30(arg1 + 0x1f4, esi)
sub_405d30(arg1 + 0x1f4, edi)
return sub_405d30(arg1 + 0x1f4, ebx)
