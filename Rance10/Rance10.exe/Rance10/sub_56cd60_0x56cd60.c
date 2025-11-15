// 函数: sub_56cd60
// 地址: 0x56cd60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = *(arg1 + 0xc)
int32_t* edi_1

if (eax == 0)
label_56cdba:
    
    if (*(arg1 + 0xd) != 0)
        int32_t* eax_6 = (*(*arg2 + 0x10))(*(arg1 + 4), *(arg1 + 8))
        edi_1 = eax_6
        arg2 = eax_6
        goto label_56cdd9
else if (*(arg1 + 0xd) == 0)
    if (eax == 0)
        goto label_56cdba
    
    if (*(arg1 + 0xd) == 0)
        edi_1 = (*(*arg2 + 0xc))(*(arg1 + 4), *(arg1 + 8), 0x20)
        arg2 = edi_1
        goto label_56cdd9
    
    if (eax == 0)
        goto label_56cdba
else
    edi_1 = (*(*arg2 + 8))(*(arg1 + 4), *(arg1 + 8), 0x20)
    arg2 = edi_1
label_56cdd9:
    
    if (edi_1 != 0)
        (*(*arg3 + 0x64))(edi_1, 0, 0, (*(*edi_1 + 0x10))((*(*edi_1 + 0x14))(0, 0, 0, 0)))
        int32_t edi_2 = *(arg1 + 0x20)
        int32_t* esi_1 = *(arg1 + 0x1c)
        
        if (esi_1 != edi_2)
            SRWLOCK* ebp_1 = &esi_1[1]
            SRWLOCK* var_8_1 = ebp_1
            
            do
                __Smtx_lock_shared(ebp_1)
                int32_t* eax_11 = *esi_1
                __Smtx_unlock_shared(ebp_1)
                int32_t var_4_1 = *arg3 + 0x5c
                (*__return_addr)(arg3, ebp_1, ebp_1, var_8_1, 0, 0, 
                    (*(*eax_11 + 0x10))((*(*eax_11 + 0x14))()))
                esi_1 = &esi_1[9]
                ebp_1 = &var_8_1[9]
                var_8_1 = ebp_1
            while (esi_1 != edi_2)
        
        return arg2
return 0
