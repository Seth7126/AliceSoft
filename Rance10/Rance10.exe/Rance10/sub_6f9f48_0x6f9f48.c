// 函数: sub_6f9f48
// 地址: 0x6f9f48
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_6f9977(arg1[0x28], arg2, arg1[7], zx.d(*(arg1 + 0xb2))) == 0)
    return 0

sub_6f98cb(arg1)

if (arg1[0x2b] != 0)
    Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(arg1[8] + 0x3c, 
        *(arg1[0x28] + 0x90))

arg1[0x2b] = 0
return 1
