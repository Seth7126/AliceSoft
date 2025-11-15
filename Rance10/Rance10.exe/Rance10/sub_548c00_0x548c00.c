// 函数: sub_548c00
// 地址: 0x548c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x88) = &common::CRect::`vftable'
*(arg1 + 0x98) = &common::CSize::`vftable'
*(arg1 + 0x8c) = &common::CPoint::`vftable'
*(arg1 + 0x78) = &partsengine::CConstructionProcessList::`vftable'
int32_t edi = *(arg1 + 0x80)

for (int32_t* i = *(arg1 + 0x7c); i != edi; i = &i[0x32])
    (**i)(0)

*(arg1 + 0x80) = *(arg1 + 0x7c)
sub_4aa320(arg1 + 0x7c)
return Concurrency::details::AllocatorBucket::~AllocatorBucket(arg1 + 0xc) __tailcall
