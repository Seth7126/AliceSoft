// 函数: sub_4bd8b0
// 地址: 0x4bd8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4beb30(arg1 + 0x10, arg1 + 4)
int32_t ebx = *(arg1 + 8)
void* esi = *(arg1 + 4)

if (esi == ebx)
    *(arg1 + 8) = esi
    return esi

do
    sub_4b7cf0(esi + 8)
    esi += 0x5c
while (esi != ebx)

int32_t eax = *(arg1 + 4)
*(arg1 + 8) = eax
return eax
