// 函数: sub_56d600
// 地址: 0x56d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0xc)
int32_t ecx = *(arg1 + 0x10)
int32_t* var_8 = eax
int32_t var_4 = ecx

while (eax != ecx)
    void* edi_1 = *eax
    int32_t* esi_1 = *(edi_1 + 0x1c)
    int32_t edi_2 = *(edi_1 + 0x20)
    
    if (esi_1 != edi_2)
        SRWLOCK* ebx_1 = &esi_1[1]
        
        do
            __Smtx_lock_shared(ebx_1)
            int32_t ebp_1 = *esi_1
            __Smtx_unlock_shared(ebx_1)
            
            if (ebp_1 == arg2)
                int32_t eax_1
                eax_1.b = 1
                return eax_1
            
            esi_1 = &esi_1[9]
            ebx_1 = &ebx_1[9]
        while (esi_1 != edi_2)
        
        eax = var_8
        ecx = var_4
    
    eax = &eax[1]
    var_8 = eax

eax.b = 0
return eax
