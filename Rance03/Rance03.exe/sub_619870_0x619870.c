// 函数: sub_619870
// 地址: 0x619870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t j_3 = (*(*arg1 + 0x10))()
int32_t i_3 = (*(*arg1 + 0x14))()
int32_t i_2 = i_3

if (j_3 * 2 == (*(*arg2 + 0x10))() && i_3 * 2 == (*(*arg2 + 0x14))())
    int32_t esi_2 = j_3 << 2
    char* edi_1 = (*(*arg1 + 8))(0, 0)
    int32_t eax_6 = (*(*arg1 + 0x1c))() - esi_2
    char* ebp_1 = (*(*arg2 + 8))(0, 0)
    void* eax_8 = (*(*arg2 + 0x1c))()
    void* ebx_1 = eax_8
    int32_t eax_10 = (eax_8 - esi_2) * 2
    void* var_4 = ebx_1
    int32_t i_1 = i_2
    
    if (i_1 s> 0)
        int32_t j_2 = j_3
        int32_t ecx_9 = eax_10
        int32_t esi_3 = eax_6
        int32_t i
        
        do
            if (j_2 s> 0)
                int32_t j_1 = j_2
                void* eax_11 = ebx_1 + ebp_1
                int32_t j
                
                do
                    uint32_t ecx_16 = zx.d(*(eax_11 + 4))
                    eax_11 += 8
                    uint32_t edx_6 = zx.d(*(4 - ebx_1 + eax_11 - 8)) + ecx_16 + zx.d(*ebp_1)
                    ebp_1 = &ebp_1[8]
                    *edi_1 = ((edx_6 + zx.d(*(eax_11 - 8))) s>> 2).b
                    char edx_13 = ((zx.d(*(1 - ebx_1 + eax_11 - 8))
                        + zx.d(*(5 - ebx_1 + eax_11 - 8)) + zx.d(*(eax_11 - 3))
                        + zx.d(*(eax_11 - 7))) s>> 2).b
                    edi_1[1] = edx_13
                    char edx_18 = ((zx.d(*(2 - ebx_1 + eax_11 - 8))
                        + zx.d(*(6 - ebx_1 + eax_11 - 8)) + zx.d(*(eax_11 - 2))
                        + zx.d(*(eax_11 - 6))) s>> 2).b
                    edi_1[2] = edx_18
                    char edx_23 = ((zx.d(*(3 - ebx_1 + eax_11 - 8))
                        + zx.d(*(7 - ebx_1 + eax_11 - 8)) + zx.d(*(eax_11 - 1))
                        + zx.d(*(eax_11 - 5))) s>> 2).b
                    edi_1[3] = edx_23
                    edi_1 = &edi_1[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ebx_1 = var_4
                i_1 = i_2
                j_2 = j_3
                ecx_9 = eax_10
                esi_3 = eax_6
            
            edi_1 = &edi_1[esi_3]
            ebp_1 = &ebp_1[ecx_9]
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
    
    i_1.b = 1
    return i_1

int32_t eax_1
eax_1.b = 0
return eax_1
