// 函数: sub_5873e0
// 地址: 0x5873e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)
char* eax

if (&edx[4] u<= *(arg2 + 8))
    bool cond:0_1 =
        (((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)) != 0
    *(arg2 + 4) = &edx[4]
    
    if (not(cond:0_1) && sub_5897b0(arg1 + 4, arg2).b != 0)
        eax = *(arg2 + 4)
        
        if (&eax[1] u<= *(arg2 + 8))
            bool cond:1_1 = *eax == 1
            *(arg2 + 4) = &eax[1]
            uint32_t ecx_9 = arg2
            arg2.b = cond:1_1
            *(arg1 + 0x23c) = 0
            eax = sub_468ab0(ecx_9, arg1 + 0x23d)
            
            if (eax.b != 0)
                if (*(arg1 + 0x23d) == 0 && *(arg1 + 0x16c) s>= 1)
                    eax = sub_587120(arg1)
                
                if (*(arg1 + 0x23d) != 0 || *(arg1 + 0x16c) s< 1 || eax.b != 0)
                    *(arg1 + 0x22c) = 0
                    
                    if (sub_587050(arg1).b != 0)
                        void* eax_3 = *(arg1 + 0x214)
                        
                        if (eax_3 != 0)
                            *(eax_3 + 0x50d) = 1
                        
                        eax_3.b = arg2.b
                        *(arg1 + 0x23c) = eax_3.b
                        eax_3.b = 1
                        return eax_3

eax.b = 0
return eax
