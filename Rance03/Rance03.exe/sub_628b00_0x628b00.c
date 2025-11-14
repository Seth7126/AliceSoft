// 函数: sub_628b00
// 地址: 0x628b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx
void* edx

if (arg2 u< 0x84)
    sub_6287e0(arg2, edx, ecx, arg1, arg2, "too short")
    return 0

if ((arg2.b & 3) == 0)
    return 1

sub_6287e0(arg2, edx, ecx, arg1, arg2, "invalid length")
return 0
