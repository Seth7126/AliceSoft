// 函数: sub_6ec229
// 地址: 0x6ec229
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x14) = data_7fc2d4
*(arg1 + 0x18) = data_7fc2d0
*(arg1 + 0x1c) = data_7fc2c8
int32_t eax_3 = *(arg1 + 0x14)
int32_t ecx
ecx.b = mulu.dp.d(eax_3, 0xc) u>> 0x20 != 0
int32_t var_28 = neg.d(ecx) | (eax_3 * 0xc)
uint32_t (* eax_5)[0x4] = sub_6e8787()
void* ecx_3 = *(arg1 + 0x14) * 0xc
int32_t ebx = 0
*(arg1 + 0x44) = eax_5
_memset(eax_5, 0, ecx_3)
int32_t esi = *(arg1 + 0x18)
int32_t ecx_4
ecx_4.b = mulu.dp.d(esi, 0x28) u>> 0x20 != 0
int32_t ecx_6 = neg.d(ecx_4) | (esi * 0x28)
int32_t eax_8
eax_8.b = ecx_6 u>= 0xfffffffc
int32_t var_38 = neg.d(eax_8) | (ecx_6 + 4)
int32_t* eax_11 = sub_6e8787()
void* ecx_8

if (eax_11 == 0)
    ecx_8 = nullptr
else
    *eax_11 = esi
    ecx_8 = &eax_11[1]

void* eax_12 = *(arg1 + 0x18) * 0x28
*(arg1 + 0x48) = ecx_8
_memset(ecx_8, 0, eax_12)
uint32_t (** result)[0x4]

if (data_7fc2d8 s< 4)
    uint32_t (** esi_4)[0x4] = data_7fc2e0
    
    if (esi_4 != 0)
        int32_t ecx_19 = 0
        int32_t i = 0
        int32_t i_3 = 0
        int32_t var_8_2 = 0
        
        if (data_7fc2dc u> 0)
            int32_t var_14_2 = 0
            
            do
                int32_t eax_25 = esi_4[1]
                
                if (eax_25 == 1)
                    if (data_7fc2cc != 0)
                        goto label_6ec499
                    
                    if (*esi_4 != 0)
                        sub_6eda9b(*(arg1 + 0x48) + ebx, arg1, ecx_19.w, 0, *esi_4, 0, 0)
                        i = i_3
                        *(ebx + *(arg1 + 0x48) + 0x14) = esi_4[2]
                        ecx_19 = var_8_2 + 1
                        ebx += 0x28
                        var_8_2 = ecx_19
                    label_6ec499:
                        uint32_t (* eax_30)[0x4] = *esi_4
                        
                        if (eax_30 != 0)
                            uint32_t (** ecx_28)[0x4] = *(arg1 + 0x44) + var_14_2
                            int32_t eax_31 = esi_4[2]
                            ecx_28[1] = 0
                            var_14_2 += 0xc
                            ecx_28[2] = eax_31
                            *ecx_28 = eax_30
                            ecx_19 = var_8_2
                else if (eax_25 == 3 && data_7fc2cc != (eax_25 - 3).b && *esi_4 != eax_25 - 3)
                    sub_6eda9b(*(arg1 + 0x48) + ebx, arg1, ecx_19.w, (eax_25 - 3).w, *esi_4, 
                        eax_25 - 3, (eax_25 - 3).b)
                    i = i_3
                    ecx_19 = var_8_2 + 1
                    var_8_2 = ecx_19
                    ebx += 0x28
                
                i += 0x18
                esi_4 = &esi_4[6]
                i_3 = i
            while (i u< data_7fc2dc)
        
        result = Concurrency::details::ResourceManager::CleanupTopologyInformation()
    else
        int16_t* ecx_17 = data_7fc2c0
        uint32_t (* esi_5)[0x4]
        
        if (ecx_17 == 0)
            esi_5 = data_7fc2b8
        else
            esi_5 = *sub_6ed4c9(ecx_17, 0)
        
        sub_6eda9b(*(arg1 + 0x48), arg1, 0, 0, esi_5, 0, 0)
        result = *(arg1 + 0x44)
        *result = esi_5
else
    int32_t ecx_9 = 0
    int32_t i_1 = 0
    int32_t* ebx_1 = data_7fc2e0
    int32_t i_4 = 0
    int32_t var_8_1 = 0
    
    if (data_7fc2dc u> 0)
        int32_t var_14_1 = 0
        
        do
            int32_t eax_13 = *ebx_1
            
            if (eax_13 == 1)
                if (data_7fc2cc == 0 && ebx_1[8] != 0)
                    int32_t esi_2 = ecx_9 * 0x28
                    sub_6eda9b(*(arg1 + 0x48) + esi_2, arg1, ecx_9.w, ebx_1[9].w, ebx_1[8], 0, 0)
                    var_8_1 += 1
                    i_1 = i_4
                    *(esi_2 + *(arg1 + 0x48) + 0x14) = ebx_1[2]
                
                int32_t esi_3 = ebx_1[8]
                
                if (esi_3 != 0)
                    int32_t* edx_2 = *(arg1 + 0x44) + var_14_1
                    uint32_t ecx_16 = zx.d(ebx_1[9].w)
                    var_14_1 += 0xc
                    edx_2[2] = ebx_1[2]
                    edx_2[1] = ecx_16
                    *edx_2 = esi_3
                    i_1 = i_4
            else if (eax_13 == 3 && data_7fc2cc != (eax_13 - 2).b - 1)
                int32_t j = 0
                uint32_t (** esi_1)[0x4] = &ebx_1[8]
                int32_t j_2 = 0
                int32_t var_10_1 = ecx_9 * 0x28
                
                do
                    if (*esi_1 != 0)
                        sub_6eda9b(*(arg1 + 0x48) + var_10_1, arg1, ecx_9.w, esi_1[1].w, *esi_1, 0, 
                            0)
                        j = j_2
                        ecx_9 = var_8_1 + 1
                        var_10_1 += 0x28
                        var_8_1 = ecx_9
                    
                    j += 1
                    esi_1 = &esi_1[3]
                    j_2 = j
                while (j s< zx.d(*(ebx_1 + 0x1e)))
                
                i_1 = i_4
            
            i_1 += ebx_1[1]
            ebx_1 += ebx_1[1]
            ecx_9 = var_8_1
            i_4 = i_1
        while (i_1 u< data_7fc2dc)
    
    result = Concurrency::details::ResourceManager::CleanupTopologyInformation()

if (data_7fc2cc != 0)
    int32_t i_2 = 0
    
    if (*(arg1 + 0x18) u> 0)
        int32_t* ecx_29 = nullptr
        
        do
            int32_t j_1 = 0
            
            if (*(arg1 + 0x14) u> 0)
                int32_t* ebx_3 = *(arg1 + 0x44)
                
                do
                    result = *(arg1 + 0x48)
                    
                    if (*(ecx_29 + *(arg1 + 0x48) + 0xc) == ebx_3[1])
                        result = *(ecx_29 + result)
                        
                        if ((*ebx_3 & result) != 0)
                            result = *(j_1 * 0xc + *(arg1 + 0x44) + 8)
                            *(ecx_29 + *(arg1 + 0x48) + 0x14) = result
                            break
                    
                    j_1 += 1
                    ebx_3 = &ebx_3[3]
                while (j_1 u< *(arg1 + 0x14))
            
            i_2 += 1
            ecx_29 = &ecx_29[0xa]
        while (i_2 u< *(arg1 + 0x18))

return result
