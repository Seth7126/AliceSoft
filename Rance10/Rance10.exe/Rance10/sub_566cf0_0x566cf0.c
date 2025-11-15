// 函数: sub_566cf0
// 地址: 0x566cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (*(arg1 + 0x60) != 0)
    int32_t* esi_1 = *(arg1 + 0x54)
    int32_t edi_1 = *(arg1 + 0x58)
    
    if (esi_1 != edi_1)
        SRWLOCK* ebx_1 = &esi_1[1]
        
        do
            __Smtx_lock_shared(ebx_1)
            int32_t ebp_1 = *esi_1
            __Smtx_unlock_shared(ebx_1)
            
            if (ebp_1 != 0)
                __Smtx_lock_shared(ebx_1)
                void* ebp_2 = *esi_1
                __Smtx_unlock_shared(ebx_1)
                (*(**(arg1 + 0x60) + 0xc))(*(ebp_2 + 8))
            
            esi_1 = &esi_1[2]
            ebx_1 = &ebx_1[2]
        while (esi_1 != edi_1)

void* result
result.b = 1
return result
