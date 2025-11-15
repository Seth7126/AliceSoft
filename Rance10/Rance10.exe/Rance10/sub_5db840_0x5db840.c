// 函数: sub_5db840
// 地址: 0x5db840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
void* var_4 = ebp
__Smtx_lock_shared(ebp + 0x18)
int32_t esi = *(ebp + 0x14)
__Smtx_unlock_shared(ebp + 0x18)

if (esi != 0)
    __Smtx_lock_shared(ebp + 0x18)
    int32_t* esi_1 = *(ebp + 0x14)
    __Smtx_unlock_shared(ebp + 0x18)
    int16_t* esi_2 = (*(*esi_1 + 0x18))()
    
    if (esi_2 != 0)
        int32_t ebx = *(ebp + 8)
        int32_t edi_2 = 0
        
        if (ebx s> 0)
            do
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(edi_2 + 1)
                *esi_2 = 0
                esi_2[1] = edi_2.w + 1
                edi_2 += 1
                esi_2[2] = (mods.dp.d(edx_1:eax_2, ebx)).w + 1
                esi_2 = &esi_2[3]
                ebx = *(ebp + 8)
            while (edi_2 s< ebx)
        
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*(ebp + 4) - 3 s> 0)
            do
                int32_t ecx_1 = *(ebp + 8)
                int16_t ebx_3 = ecx_1.w * i.w + 1
                int16_t eax_7 = ecx_1.w + ebx_3
                int32_t eax_8 = 0
                int16_t var_c_1 = 0
                
                if (ecx_1 s> 0)
                    do
                        ebp = var_4
                        int16_t temp1_2 = (mods.dp.d(sx.q(eax_8 + 1), ecx_1)).w
                        int16_t ecx_2 = var_c_1 + ebx_3
                        esi_2[1] = var_c_1 + eax_7
                        int16_t eax_15 = eax_7 + temp1_2
                        *esi_2 = ecx_2
                        esi_2[2] = eax_15
                        esi_2[4] = eax_15
                        esi_2[5] = temp1_2 + ebx_3
                        eax_8 += 1
                        esi_2[3] = ecx_2
                        esi_2 = &esi_2[6]
                        ecx_1 = *(ebp + 8)
                        var_c_1 = eax_8.w
                    while (eax_8 s< ecx_1)
                    
                    i = i_1
                
                i += 1
                i_1 = i
            while (i s< *(ebp + 4) - 3)
        
        __Smtx_lock_shared(ebp + 0x10)
        int32_t* ebx_4 = *(ebp + 0xc)
        __Smtx_unlock_shared(ebp + 0x10)
        int32_t edi_5 = *(ebp + 8)
        int32_t var_c_2 = edi_5
        int32_t edx_5 = 0
        int16_t var_8 = 0
        int32_t ecx_6 = (*(*ebx_4 + 0x20))() - edi_5 - 1
        int32_t var_4_1 = ecx_6
        
        if (edi_5 s> 0)
            void* ebx_5 = &esi_2[2]
            int32_t eax_30
            
            do
                *(ebx_5 - 2) = var_8 + ecx_6.w
                *(ebx_5 - 4) = (mods.dp.d(sx.q(edx_5 + 1), var_c_2)).w + ecx_6.w
                __Smtx_lock_shared(ebp + 0x10)
                int32_t* esi_3 = *(ebp + 0xc)
                __Smtx_unlock_shared(ebp + 0x10)
                ecx_6 = var_4_1
                ebx_5 += 6
                edx_5 += 1
                *(ebx_5 - 6) = (*(*esi_3 + 0x20))() - 1
                eax_30 = *(ebp + 8)
                var_8 = edx_5.w
                var_c_2 = eax_30
            while (edx_5 s< eax_30)
        
        __Smtx_lock_shared(ebp + 0x18)
        int32_t* esi_4 = *(ebp + 0x14)
        __Smtx_unlock_shared(ebp + 0x18)
        return (*(*esi_4 + 0x1c))() != 0

int16_t* result
result.b = 0
return result
