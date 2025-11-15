// 函数: ?CommitStolenCores@ResourceManager@details@Concurrency@@AAEXPAVSchedulerProxy@23@@Z
// 地址: 0x6ebd75
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
int32_t i_1 = 0
int32_t* k = *(arg2 + 0x10)

if (*(arg1 + 0x18) u> 0)
    void* edx_1 = 0xfffffffc - k
    int32_t* esi_1 = &k[1]
    
    do
        int32_t j = 0
        
        if (*esi_1 u> 0)
            int32_t* ecx = nullptr
            int32_t* var_8_1 = nullptr
            
            do
                int32_t var_18_1 = 0
                int32_t* k_3 = 1
                k = esi_1[0xb] + ecx
                int32_t* k_2 = 1
                int32_t* k_1 = k
                
                if (*(arg1 + 8) u> 1)
                    do
                        void* eax_4 = *(*(*(arg1 + 0x54) + (k_3 << 2)) + 0x10)
                        
                        if (*(eax_4 + 0x6c) u> 0)
                            void* ecx_3 = edx_1 + esi_1 + *(eax_4 + 0x10)
                            int32_t* edx_3 = *(ecx_3 + 0x30) + var_8_1
                            
                            if (*edx_3 != 5)
                                ecx = var_8_1
                            else if (*k_1 != 4)
                                int32_t* eax_9 = edx_3[5]
                                *eax_9 += 1
                                ecx = var_8_1
                                *(ecx + *(ecx_3 + 0x30)) = 4
                            else
                                if (k_1[6] != 0 || edx_3[0xc].b != 0 || var_18_1 != 0)
                                    sub_6f6aac(eax_4, ecx_3, j)
                                else
                                    int32_t* eax_7 = edx_3[5]
                                    *eax_7 += 1
                                    bool cond:1_1 = *(edx_3 + 0x31) != 0
                                    *edx_3 = 4
                                    
                                    if (not(cond:1_1))
                                        sub_6f6ccd(eax_4, ecx_3, j)
                                    
                                    var_18_1 = 1
                                
                                ecx = var_8_1
                        
                        k = k_2 + 1
                        k_3 = k
                        k_2 = k
                    while (k u< *(arg1 + 8))
                
                j += 1
                ecx = &ecx[0xd]
                var_8_1 = ecx
            while (j u< *esi_1)
            
            i = i_1
        
        i += 1
        esi_1 = &esi_1[0xd]
        i_1 = i
    while (i u< *(arg1 + 0x18))

return k
