// 函数: sub_547770
// 地址: 0x547770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x90) = &common::CRect::`vftable'
*(arg1 + 0xa0) = &common::CSize::`vftable'
*(arg1 + 0x94) = &common::CPoint::`vftable'
Concurrency::details::AllocatorBucket::~AllocatorBucket(arg1 + 0x24)
int32_t eax = *(arg1 + 0x1c)

if (eax u>= 0x10)
    eax = sub_403160(*(arg1 + 8), eax + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:0)
    *(arg1 + 8) = 0
    return eax

char* eax_2 = *(arg1 + 8)
*eax_2 = 0
return eax_2
