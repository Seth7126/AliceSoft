// 函数: sub_4a8ea0
// 地址: 0x4a8ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 0xc)

if (eax != 0)
    eax = *(eax + 0x2c)

void* ebx = arg2
sub_468ec0(ebx, eax)
void* eax_1 = *(arg1 + 4)

if (eax_1 != 0)
    eax_1 = *(eax_1 + 0x2c)

sub_468ec0(ebx, eax_1)
arg2.b = *(arg1 + 0x78) != 0
sub_414b60(ebx + 4, &arg2)
arg2.b = *(arg1 + 0x33) != 0
sub_414b60(ebx + 4, &arg2)
sub_468ec0(ebx, *(arg1 + 0x20))
sub_468ec0(ebx, *(arg1 + 0x24))
int32_t result
result.b = 1
return result
