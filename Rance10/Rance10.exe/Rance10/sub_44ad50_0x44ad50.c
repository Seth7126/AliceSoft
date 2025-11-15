// 函数: sub_44ad50
// 地址: 0x44ad50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3
int32_t* var_28 = edi

if (edi == 0 || arg2 == 0)
    arg1.b = 0
    return arg1

int32_t eax_1 = (*(*arg2 + 0x10))()
int32_t* ebp = (*(*arg2 + 0x14))()
int32_t* eax_2

if (eax_1 s>= 0x10 && ebp s>= 0x10 && eax_1 == (*(*edi + 0x10))() && ebp == (*(*edi + 0x14))())
    int32_t ebx
    ebx:1.b = (*(*arg2 + 0x24))()
    char eax_7 = (*(*arg2 + 0x28))()
    ebx.b = (*(*edi + 0x24))()
    
    if (ebx:1.b == ebx.b && eax_7 == (*(*edi + 0x28))().b)
        int32_t eax_10
        int32_t edx_8
        edx_8:eax_10 = sx.q(eax_1)
        int32_t eax_12
        int32_t edx_10
        edx_10:eax_12 = sx.q(ebp)
        int32_t ebx_2 = ((edx_8 & 0xf) + eax_10) s>> 4
        int32_t var_8_1 = ebx_2
        eax_2 = arg4
        int32_t ebp_2 = ((edx_10 & 0xf) + eax_12) s>> 4
        
        if (eax_2[1] - *eax_2 == ebp_2 * ebx_2)
            int32_t edx_14 = 0
            int32_t var_1c = 0
            
            if (ebp_2 s> 0)
                int32_t ebp_3 = 0
                int32_t var_18_1 = 0
                
                do
                    int32_t ecx_10 = 0
                    int32_t var_20_1 = 0
                    
                    if (ebx_2 s> 0)
                        do
                            if ((*eax_2 + ebp_3)[ecx_10] != 0)
                                int32_t eax_16 = ecx_10 << 4
                                int32_t ecx_12 = edx_14 << 4
                                int32_t i = 0
                                int32_t var_10_1 = eax_16
                                int32_t var_c_1 = ecx_12
                                int32_t i_1 = 0
                                
                                do
                                    int32_t ebp_4 = i + ecx_12
                                    int32_t esi_1 = eax_16
                                    int32_t j_1 = 0x10
                                    int32_t j
                                    
                                    do
                                        int32_t* eax_18 = (*(*edi + 8))(esi_1, ebp_4)
                                        int32_t* eax_20 = (*(*arg2 + 8))(esi_1, ebp_4)
                                        esi_1 += 1
                                        edi = var_28
                                        *eax_20 = *eax_18
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    eax_16 = var_10_1
                                    i = i_1 + 1
                                    ecx_12 = var_c_1
                                    i_1 = i
                                while (i s< 0x10)
                                
                                ecx_10 = var_20_1
                                edx_14 = var_1c
                                ebx_2 = var_8_1
                                ebp_3 = var_18_1
                            
                            eax_2 = arg4
                            ecx_10 += 1
                            var_20_1 = ecx_10
                        while (ecx_10 s< ebx_2)
                    
                    edx_14 += 1
                    ebp_3 += ebx_2
                    var_1c = edx_14
                    var_18_1 = ebp_3
                while (edx_14 s< ebp_2)
            
            eax_2.b = 1
            return eax_2

eax_2.b = 0
return eax_2
