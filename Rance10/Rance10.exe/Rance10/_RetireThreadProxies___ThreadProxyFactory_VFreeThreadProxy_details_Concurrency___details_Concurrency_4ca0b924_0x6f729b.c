// 函数: ?RetireThreadProxies@?$ThreadProxyFactory@VFreeThreadProxy@details@Concurrency@@@details@Concurrency@@QAEXXZ
// 地址: 0x6f729b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = 4
void* ListHead = &arg1[2]
void* ListHead_1 = ListHead
int32_t i_2 = 4
SLIST_ENTRY* result
int32_t i

do
    result = InterlockedFlushSList(ListHead)
    int32_t edx_2 = neg.d(result)
    void* j = sbb.d(edx_2, edx_2, result != 0) & &result[-0xf]
    
    if (j != 0)
        do
            void* edi_1 = *(j + 0x3c)
            int32_t esi = *(*arg1 + 0x20)
            j_sub_4033e0()
            esi(j)
            result = edi_1 - 0x3c
            int32_t edx_5 = neg.d(edi_1)
            j = sbb.d(edx_5, edx_5, edi_1 != 0) & result
        while (j != 0)
        
        ListHead = ListHead_1
        i_1 = i_2
    
    ListHead += 8
    i = i_1
    i_1 -= 1
    ListHead_1 = ListHead
    i_2 = i_1
while (i != 1)
return result
