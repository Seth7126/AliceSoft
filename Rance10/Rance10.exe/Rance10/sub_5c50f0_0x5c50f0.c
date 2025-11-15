// 函数: sub_5c50f0
// 地址: 0x5c50f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* edx = *(arg2 + 4)
char* eax

if (&edx[4] u<= *(arg2 + 8))
    bool cond:0_1 =
        (((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)) != 0
    *(arg2 + 4) = &edx[4]
    
    if (not(cond:0_1) && sub_5c6ac0(arg1, arg2).b != 0)
        eax = *(arg2 + 4)
        
        if (&eax[1] u<= *(arg2 + 8))
            bool cond:1_1 = *eax == 1
            *(arg2 + 4) = &eax[1]
            uint32_t ecx_9 = arg2
            arg2.b = cond:1_1
            *(arg1 + 0x1e4) = 0
            eax = sub_6c9280(ecx_9, arg1 + 0x1e5)
            
            if (eax.b != 0)
                if (*(arg1 + 0x1e5) == 0 && *(arg1 + 0x134) s>= 1)
                    eax = sub_5c4c80(arg1)
                
                if (*(arg1 + 0x1e5) != 0 || *(arg1 + 0x134) s< 1 || eax.b != 0)
                    *(arg1 + 0x1d4) = 0
                    
                    if (sub_5c4b10(arg1).b != 0)
                        void* eax_3 = *(arg1 + 0x1c0)
                        
                        if (eax_3 != 0)
                            *(eax_3 + 0x5c5) = 1
                        
                        eax_3.b = arg2.b
                        *(arg1 + 0x1e4) = eax_3.b
                        eax_3.b = 1
                        return eax_3

eax.b = 0
return eax
