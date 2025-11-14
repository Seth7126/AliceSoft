// 函数: sub_523e30
// 地址: 0x523e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
int32_t ebp = arg2
int32_t var_4 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s< ebp)
    while (true)
        void* ebx_1 = *(arg3 + (esi_1 << 2))
        void* ecx = *(ebx_1 + 4)
        void* eax_5 = *(*arg5 + 4)
        int32_t edx_1 = *(ecx + 0x14)
        int32_t edi_1 = *(eax_5 + 0x14)
        
        if (edx_1 s>= edi_1)
            if (edx_1 s> edi_1)
                break
            
            int32_t xmm1_1 = *(ecx + 0x10)
            int32_t xmm0_1 = *(eax_5 + 0x10)
            
            if (not(xmm0_1 f> xmm1_1))
                if (xmm1_1 f> xmm0_1)
                    break
                
                if (*(eax_5 + 0xc) f<= *(ecx + 0xc))
                    break
        
        arg3 = var_4
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(esi_1 - 1)
        *(arg3 + (ebp << 2)) = ebx_1
        ebp = esi_1
        esi_1 = (eax_7 - edx_2) s>> 1
        
        if (arg4 s>= ebp)
            int32_t eax_10 = *arg5
            *(arg3 + (ebp << 2)) = eax_10
            return eax_10
    
    arg3 = var_4

int32_t eax_12 = *arg5
*(arg3 + (ebp << 2)) = eax_12
return eax_12
