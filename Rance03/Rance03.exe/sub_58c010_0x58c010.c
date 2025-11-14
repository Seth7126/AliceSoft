// 函数: sub_58c010
// 地址: 0x58c010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x150) != 0)
    int32_t eax_1
    
    if (*(arg1 + 0x15c) == *(arg1 + 0x160))
        eax_1.b = 0
        return eax_1
    
    void* ecx_1 = *(arg1 + 4)
    *(arg1 + 0x22c) = *(ecx_1 + 0x60)
    int128_t xmm0_2 = *(arg1 + 0x268)
    *(arg1 + 0x234) = *(ecx_1 + 0x68)
    *(arg1 + 0x184) = xmm0_2
    *(arg1 + 0x194) = *(arg1 + 0x278)
    *(arg1 + 0x1a4) = *(arg1 + 0x288)
    *(arg1 + 0x1b4) = *(arg1 + 0x298)
    sub_596b60(arg1 + 0x1c4, ecx_1 + 0xf0)
    int32_t esi_1 = 0
    int32_t eax_4 = *(arg1 + 0x258)
    *(arg1 + 0x16c) = *(arg1 + 0x250)
    int64_t xmm0_7 = *(arg1 + 0x25c)
    *(arg1 + 0x174) = eax_4
    int32_t eax_5 = *(arg1 + 0x264)
    *(arg1 + 0x178) = xmm0_7
    *(arg1 + 0x180) = eax_5
    var_4 = *(*(arg1 + 4) + 0x50)
    
    if (((*(arg1 + 0x160) - *(arg1 + 0x15c)) & 0xfffffffc) s> 0)
        while (true)
            void* edx_1 = *(arg1 + 4)
            int32_t xmm1_1
            
            if (esi_1 s>= 0)
                int32_t eax_13 = *(edx_1 + 0xa8)
                
                if (esi_1 s< (*(edx_1 + 0xac) - *(edx_1 + 0xa8)) s>> 2)
                    xmm1_1 = *(eax_13 + (esi_1 << 2))
                else
                    xmm1_1 = *(eax_13 + ((*(edx_1 + 0xac) - eax_13) s>> 2 << 2) - 4)
            else
                xmm1_1 = **(edx_1 + 0xa8)
            
            int32_t xmm0_8
            
            if (esi_1 + 1 s>= 0)
                int32_t eax_18 = *(edx_1 + 0xa8)
                
                if (esi_1 + 1 s< (*(edx_1 + 0xac) - *(edx_1 + 0xa8)) s>> 2)
                    xmm0_8 = *(eax_18 + (esi_1 << 2) + 4)
                else
                    xmm0_8 = *(eax_18 + ((*(edx_1 + 0xac) - eax_18) s>> 2 << 2) - 4)
            else
                xmm0_8 = **(edx_1 + 0xa8)
            
            if (sub_59b5a0(arg1 + 0x158, esi_1, var_4, arg1 + 0x240, xmm1_1, xmm0_8).b == 0)
                break
            
            void* ecx_10 = *(arg1 + 4)
            int32_t xmm0_9
            
            if (esi_1 s< 0 || esi_1 s>= (*(ecx_10 + 0x94) - *(ecx_10 + 0x90)) s>> 2)
                xmm0_9 = (zx.o(0)).d
            else
                xmm0_9 = *(*(ecx_10 + 0x90) + (esi_1 << 2))
            
            *(arg1 + 0x238) = xmm0_9
            int32_t xmm0_10
            
            if (esi_1 s< 0 || esi_1 s>= (*(ecx_10 + 0xa0) - *(ecx_10 + 0x9c)) s>> 2)
                xmm0_10 = (zx.o(0)).d
            else
                xmm0_10 = *(*(ecx_10 + 0x9c) + (esi_1 << 2))
            
            *(arg1 + 0x23c) = xmm0_10
            
            if (sub_59b6a0(arg1 + 0x158, esi_1).b == 0)
                break
            
            void* const eax_32
            
            if (esi_1 s< 0 || esi_1 s>= (*(arg1 + 0x160) - *(arg1 + 0x15c)) s>> 2)
                eax_32 = nullptr
            else
                eax_32 = *(*(arg1 + 0x15c) + (esi_1 << 2))
            
            if (sub_547410(arg1 + 0x130, eax_32, *(arg1 + 8), *(arg1 + 0x154)).b == 0)
                break
            
            if (esi_1 s< 0)
                break
            
            if (esi_1 s>= (*(arg1 + 0x160) - *(arg1 + 0x15c)) s>> 2)
                break
            
            if (sub_593360(*(*(arg1 + 0x15c) + (esi_1 << 2))).b == 0)
                break
            
            esi_1 += 1
            
            if (esi_1 s>= (*(arg1 + 0x160) - *(arg1 + 0x15c)) s>> 2)
                goto label_58c2a9
        
        eax_1.b = 0
        return eax_1

label_58c2a9:
int32_t eax
eax.b = 1
return eax
