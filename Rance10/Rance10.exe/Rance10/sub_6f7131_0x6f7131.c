// 函数: sub_6f7131
// 地址: 0x6f7131
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const esi = arg2

if (arg1[0xb].b == 0)
    for (SLIST_ENTRY* i = nullptr; i s< 4; i = &i->Next + 1)
        if (*(esi + 0x14) == *((i << 2) + &data_7531ac))
            void* ListHead = &arg1[2 + i * 2]
            
            if (zx.d(QueryDepthSList(ListHead)) s< data_7fc330)
                InterlockedPushEntrySList(ListHead, esi + 0x3c)
                
                if (arg1[0xb].b != 0)
                    i = InterlockedFlushSList(ListHead)
                    int32_t edx_2 = neg.d(i)
                    int32_t edx_5
                    void* edi_2
                    
                    for (void* j = sbb.d(edx_2, edx_2, i != 0) & &i[-0xf]; j != 0; 
                            j = sbb.d(edx_5, edx_5, edi_2 != 0) & (edi_2 - 0x3c))
                        edi_2 = *(j + 0x3c)
                        int32_t esi_1 = *(*arg1 + 0x20)
                        j_sub_4033e0()
                        esi_1(j)
                        edx_5 = neg.d(edi_2)
                
                esi = nullptr
            
            break

if (esi == 0)
    return 

int32_t esi_2 = *(*arg1 + 0x20)
j_sub_4033e0()
esi_2(esi)
