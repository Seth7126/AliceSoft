// 函数: ?ReclaimProxy@?$ThreadProxyFactory@VFreeThreadProxy@details@Concurrency@@@details@Concurrency@@UAEXPAUIThreadProxy@3@@Z
// 地址: 0x6f70cf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const esi = arg2
SLIST_ENTRY* i

for (i = nullptr; i s< 4; i = &i->Next + 1)
    if (*(esi + 0x14) == *((i << 2) + &data_7531ac))
        void* ListHead = &arg1[2 + i * 2]
        i = zx.d(QueryDepthSList(ListHead))
        
        if (i s< data_7fc330)
            i = InterlockedPushEntrySList(ListHead, esi + 0x3c)
            esi = nullptr
        
        break

if (esi == 0)
    return i

int32_t esi_1 = *(*arg1 + 0x20)
j_sub_4033e0()
return esi_1(esi)
