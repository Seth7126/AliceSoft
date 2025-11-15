// 函数: sub_5c9540
// 地址: 0x5c9540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x91].b != 0)
    int32_t eax_1
    
    if (arg1[0x93] == arg1[0x94])
        eax_1.b = 0
        return eax_1
    
    void* edx_1 = *arg1
    *(arg1 + 0x318) = *(edx_1 + 0x48)
    int128_t xmm0_2 = *(arg1 + 0x350)
    arg1[0xc8] = *(edx_1 + 0x50)
    int32_t eax_3 = arg1[0xd0]
    *(arg1 + 0x274) = xmm0_2
    *(arg1 + 0x284) = *(arg1 + 0x360)
    *(arg1 + 0x294) = *(arg1 + 0x370)
    *(arg1 + 0x2a4) = *(arg1 + 0x380)
    int64_t xmm0_6 = *(arg1 + 0x338)
    __builtin_memcpy(&arg1[0xad], edx_1 + 0xd0, 0x64)
    int32_t* esi_2 = arg1
    *(arg1 + 0x25c) = xmm0_6
    void* edi_2 = &esi_2[0x93]
    int64_t xmm0_7 = *(arg1 + 0x344)
    arg1[0x99] = eax_3
    int32_t eax_4 = arg1[0xd3]
    *(arg1 + 0x268) = xmm0_7
    arg1[0x9c] = eax_4
    int32_t ebx_1 = 0
    int32_t eax_5 = *(edx_1 + 0x44)
    
    if (((*(edi_2 + 4) - *edi_2) & 0xfffffffc) s> 0)
        while (true)
            void* ecx = *esi_2
            eax_1 = *(ecx + 0x68)
            int32_t xmm5_1 = *(ecx + 0x78)
            int32_t xmm6_1 = *(eax_1 + (ebx_1 << 2))
            int32_t xmm7_1 = *(eax_1 + (ebx_1 << 2) + 4)
            
            if (ebx_1 s< 0)
                break
            
            int32_t ecx_1 = *edi_2
            
            if (ebx_1 s>= (*(edi_2 + 4) - ecx_1) s>> 2)
                break
            
            int32_t* esi_3 = ecx_1 + (ebx_1 << 2)
            sub_5dc430(edi_2, esi_3)
            void* ecx_3 = *esi_3
            
            if (eax_5 == 0)
                sub_5d73e0(ecx_3, xmm5_1, &arg1[0xca])
            else
                if (eax_5 != 1)
                    break
                
                sub_5d79e0(ecx_3, xmm6_1, xmm7_1)
            
            arg1[0xc9] = *(*(*arg1 + 0x5c) + (ebx_1 << 2))
            int32_t ecx_5 = *edi_2
            
            if (ebx_1 s>= (*(edi_2 + 4) - ecx_5) s>> 2)
                break
            
            int32_t* esi_4 = ecx_5 + (ebx_1 << 2)
            sub_5dc430(edi_2, esi_4)
            
            if (sub_5d7090(*esi_4).b == 0)
                break
            
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_6 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            (*(*esi_6 + 0xc8))(1)
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_8 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            (*(*esi_8 + 0xcc))(1)
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_10 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            (*(*esi_10 + 0xc0))(0)
            __Smtx_lock_shared(&arg1[2])
            esi_2 = arg1
            int32_t eax_21 = esi_2[1]
            __Smtx_unlock_shared(&arg1[2])
            edi_2 = &esi_2[0x93]
            int32_t ecx_11 = *edi_2
            int32_t* eax_25
            
            if (ebx_1 s>= (esi_2[0x94] - ecx_11) s>> 2)
                eax_25 = nullptr
            else
                eax_25 = *(ecx_11 + (ebx_1 << 2))
            
            if (sub_576270(arg2, eax_25, eax_21).b == 0)
                break
            
            int32_t ecx_13 = *edi_2
            
            if (ebx_1 s>= (*(edi_2 + 4) - ecx_13) s>> 2)
                break
            
            if (sub_5d7350(*(ecx_13 + (ebx_1 << 2))).b == 0)
                break
            
            ebx_1 += 1
            
            if (ebx_1 s>= (*(edi_2 + 4) - *edi_2) s>> 2)
                goto label_5c97db
        
        eax_1.b = 0
        return eax_1

label_5c97db:
int32_t eax
eax.b = 1
return eax
