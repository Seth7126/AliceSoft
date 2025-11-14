// 函数: sub_66ff00
// 地址: 0x66ff00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x50) += 1

if (*(arg1 + 0x2c) u>= *(arg1 + 0x50))
    *(arg1 + 0x64) = 0
else
    *(arg1 + 0x64) = 1
    *(arg1 + 0x50) = 0

sub_67f150(*(arg1 + 0x6c))
sub_667690(*(arg1 + 0x70))
void* ebx = *(arg1 + 0x74)
int32_t* edi = *(*(arg1 + 0x70) + 0x2a0)

if (*(ebx + 0x2c) != edi)
    sub_6827a0(ebx, edi)

*(ebx + 0x2c) = edi
void* esi_1 = *(arg1 + 0x74)
sub_682290(esi_1)
InvalidateRect(*(esi_1 + 8), nullptr, 0)
return UpdateWindow(*(esi_1 + 8))
