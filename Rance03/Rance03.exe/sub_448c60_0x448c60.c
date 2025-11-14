// 函数: sub_448c60
// 地址: 0x448c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
int32_t eax

if (edi == 0)
    eax.b = 0
    return eax

if (arg2 == 0)
    eax.b = 0
    return eax

int32_t eax_2 = (*(*arg2 + 0x10))()
int32_t* eax_3 = (*(*arg2 + 0x14))()
int32_t* ebp = eax_3

if (eax_2 s>= 0x10 && ebp s>= 0x10)
    int32_t ecx_3 = eax_2 & 0x8000000f
    bool cond:0_1 = ecx_3 != 0
    
    if (ecx_3 s< 0)
        cond:0_1 = ((ecx_3 - 1) | 0xfffffff0) != 0xffffffff
    
    if (not(cond:0_1))
        eax_3 &= 0x8000000f
        bool cond:1_1 = eax_3 != 0
        
        if (eax_3 s< 0)
            cond:1_1 = ((eax_3 - 1) | 0xfffffff0) != 0xffffffff
        
        if (not(cond:1_1) && eax_2 == (*(*edi + 0x10))() && ebp == (*(*edi + 0x14))())
            int32_t ebx
            ebx:1.b = (*(*arg2 + 0x24))()
            char eax_11 = (*(*arg2 + 0x28))()
            ebx.b = (*(*edi + 0x24))()
            
            if (ebx:1.b == ebx.b && eax_11 == (*(*edi + 0x28))().b)
                int32_t eax_14
                int32_t edx_7
                edx_7:eax_14 = sx.q(eax_2)
                int32_t eax_16
                int32_t edx_9
                edx_9:eax_16 = sx.q(ebp)
                int32_t ebx_2 = ((edx_7 & 0xf) + eax_14) s>> 4
                int32_t var_8_1 = ebx_2
                eax_3 = arg3
                int32_t ebp_2 = ((edx_9 & 0xf) + eax_16) s>> 4
                
                if (eax_3[1] - *eax_3 == ebp_2 * ebx_2)
                    int32_t edx_13 = 0
                    int32_t var_18 = 0
                    
                    if (ebp_2 s> 0)
                        int32_t ebp_3 = 0
                        int32_t var_14_1 = 0
                        
                        do
                            int32_t ecx_15 = 0
                            int32_t var_1c_1 = 0
                            
                            if (ebx_2 s> 0)
                                do
                                    if ((*eax_3 + ebp_3)[ecx_15] != 0)
                                        int32_t eax_20 = ecx_15 << 4
                                        int32_t ecx_17 = edx_13 << 4
                                        int32_t i = 0
                                        int32_t var_10_1 = eax_20
                                        int32_t var_c_1 = ecx_17
                                        int32_t i_1 = 0
                                        
                                        do
                                            int32_t ebp_4 = i + ecx_17
                                            int32_t esi_1 = eax_20
                                            int32_t j_1 = 0x10
                                            int32_t j
                                            
                                            do
                                                int32_t* eax_22 = (*(*edi + 8))(esi_1, ebp_4)
                                                int32_t* eax_24 = (*(*arg2 + 8))(esi_1, ebp_4)
                                                esi_1 += 1
                                                edi = arg1
                                                *eax_24 = *eax_22
                                                j = j_1
                                                j_1 -= 1
                                            while (j != 1)
                                            eax_20 = var_10_1
                                            i = i_1 + 1
                                            ecx_17 = var_c_1
                                            i_1 = i
                                        while (i s< 0x10)
                                        
                                        ecx_15 = var_1c_1
                                        edx_13 = var_18
                                        ebx_2 = var_8_1
                                        ebp_3 = var_14_1
                                    
                                    eax_3 = arg3
                                    ecx_15 += 1
                                    var_1c_1 = ecx_15
                                while (ecx_15 s< ebx_2)
                            
                            edx_13 += 1
                            ebp_3 += ebx_2
                            var_18 = edx_13
                            var_14_1 = ebp_3
                        while (edx_13 s< ebp_2)
                    
                    eax_3.b = 1
                    return eax_3

eax_3.b = 0
return eax_3
