// 函数: sub_56d870
// 地址: 0x56d870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t* i = *(arg1 + 0xc); i != *(arg1 + 0x10); i = &i[1])
    void* eax_1 = *i
    int32_t* esi_1 = *(eax_1 + 0x1c)
    int32_t eax_2 = *(eax_1 + 0x20)
    
    if (esi_1 != eax_2)
        SRWLOCK* ebx_1 = &esi_1[1]
        
        do
            __Smtx_lock_shared(ebx_1)
            int32_t ebp_1 = *esi_1
            __Smtx_unlock_shared(ebx_1)
            
            if (ebp_1 == arg2)
                return (i - *(arg1 + 0xc)) s>> 2
            
            esi_1 = &esi_1[9]
            ebx_1 = &ebx_1[9]
        while (esi_1 != eax_2)

return 0xffffffff
