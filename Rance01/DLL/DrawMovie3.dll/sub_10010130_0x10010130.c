// 函数: sub_10010130
// 地址: 0x10010130
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* ecx
int32_t* var_4 = ecx
int32_t* edi = arg1
int32_t* esi = nullptr

if (edi == 0)
    return 1

int32_t* eax_1 = *edi
int32_t* ebx = arg2
int32_t ecx_3 = (*(*ebx + 0x1c))(ebx, *eax_1, eax_1[1], eax_1[2], eax_1[3])

if (arg3 != 0)
    int32_t* eax_5 = *edi
    ecx_3 = (*(*ebx + 0xc))(ebx, *eax_5, eax_5[1], eax_5[2], eax_5[3], edi[1], edi[2])
    
    if (ecx_3 s>= 0)
        arg3 = 0
        
        if (edi[3] u> 0)
            int32_t i
            
            do
                void* edx_2 = edi[4]
                void* ecx_6 = edx_2 + esi
                int32_t* edx_4 = *(ecx_6 + 0x14)
                void* eax_9 = edx_2 + esi
                int32_t* eax_11 = *edi
                int32_t eax_13 = (*(*ebx + 0x14))(ebx, *eax_11, eax_11[1], eax_11[2], eax_11[3], 
                    *eax_9, *(eax_9 + 4), *(eax_9 + 8), *(edx_2 + esi + 0xc), 
                    *(edx_2 + esi + 0x10), *edx_4, edx_4[1], edx_4[2], edx_4[3], *(ecx_6 + 0x18))
                ecx_3 = eax_13
                
                if (ecx_3 s< 0)
                    break
                
                int32_t edx_17 = edi[4]
                void* j = nullptr
                arg1 = nullptr
                
                if (*(esi + edx_17 + 0x1c) u> 0)
                    do
                        void* ebp_7 = *ebx
                        int32_t* eax_14 = *(esi + edx_17 + 0x20) + (j << 3)
                        int32_t* eax_15 = eax_14[1]
                        int32_t* eax_17 = *eax_14
                        ebx = arg2
                        int32_t* eax_19 = *edi
                        int32_t eax_21 = (*(ebp_7 + 0x18))(ebx, *eax_19, eax_19[1], eax_19[2], 
                            eax_19[3], *(esi + edx_17), *eax_17, eax_17[1], eax_17[2], eax_17[3], 
                            *eax_15, eax_15[1], eax_15[2], eax_15[3])
                        ecx_3 = eax_21
                        
                        if (ecx_3 s< 0)
                            goto label_10010306
                        
                        edx_17 = edi[4]
                        j = arg1 + 1
                        arg1 = j
                    while (j u< *(esi + edx_17 + 0x1c))
                
                i = arg3 + 1
                esi = &esi[9]
                arg3 = i
            while (i u< edi[3])

label_10010306:
int32_t eax_26 = neg.d(ecx_3 + 0x7ff8fffe)
return sbb.d(eax_26, eax_26, ecx_3 != 0x80070002) & ecx_3
