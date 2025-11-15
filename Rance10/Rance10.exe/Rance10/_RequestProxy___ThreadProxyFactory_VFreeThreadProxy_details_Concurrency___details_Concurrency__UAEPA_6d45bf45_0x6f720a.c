// 函数: ?RequestProxy@?$ThreadProxyFactory@VFreeThreadProxy@details@Concurrency@@@details@Concurrency@@UAEPAUIThreadProxy@3@IH@Z
// 地址: 0x6f720a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t ecx = arg2
void* result = nullptr
void* const esi = &data_7531ac
void* ListHead = &arg1[2]
void* ListHead_1 = ListHead

while (true)
    if (ecx u> *esi)
        goto label_6f7241
    
    SLIST_ENTRY* eax = InterlockedPopEntrySList(ListHead)
    int32_t edi_1 = neg.d(eax)
    result = sbb.d(edi_1, edi_1, eax != 0) & &eax[-0xf]
    
    if (result == 0)
        ListHead = ListHead_1
        ecx = arg2
    label_6f7241:
        esi += 4
        ListHead += 8
        ListHead_1 = ListHead
        
        if (esi s< &data_7531bc)
            continue
        else if (result == 0)
            int32_t esi_1 = *(*arg1 + 0x1c)
            j_sub_4033e0()
            result = esi_1(ecx)
            
            if (result == 0)
                break
    
    int32_t esi_2 = *(*arg1 + 0x24)
    j_sub_4033e0()
    esi_2(result, arg3)
    break

return result
