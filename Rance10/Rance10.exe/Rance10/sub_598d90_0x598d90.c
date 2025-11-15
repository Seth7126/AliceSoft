// 函数: sub_598d90
// 地址: 0x598d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg1 != arg1[1])
    __Smtx_lock_shared(&arg1[4])
    int32_t esi_1 = arg1[3]
    __Smtx_unlock_shared(&arg1[4])
    
    if (esi_1 != 0)
        __Smtx_lock_shared(&arg1[4])
        int32_t* esi_2 = arg1[3]
        __Smtx_unlock_shared(&arg1[4])
        char* eax_2 = (*(*esi_2 + 0x18))()
        
        if (eax_2 == 0)
            eax_2.b = 0
            return eax_2
        
        int32_t* esi_3 = *arg1
        int32_t var_c = 0
        uint32_t ebp_3 = (arg1[1] - esi_3 + 3) u>> 2
        
        if (esi_3 u> arg1[1])
            ebp_3 = 0
        
        if (ebp_3 != 0)
            char* ebx_1 = eax_2
            int32_t eax_10
            
            do
                void* edi_3 = *esi_3
                sub_700660(ebx_1, *(edi_3 + 0x58), (*(edi_3 + 0x5c) - *(edi_3 + 0x58)) & 0xfffffffc)
                esi_3 = &esi_3[1]
                ebx_1 = &ebx_1[(*(edi_3 + 0x5c) - *(edi_3 + 0x58)) s>> 2 << 2]
                eax_10 = var_c + 1
                var_c = eax_10
            while (eax_10 != ebp_3)
        
        __Smtx_lock_shared(&arg1[4])
        int32_t* esi_4 = arg1[3]
        __Smtx_unlock_shared(&arg1[4])
        return (*(*esi_4 + 0x1c))() != 0

int32_t eax
eax.b = 1
return eax
