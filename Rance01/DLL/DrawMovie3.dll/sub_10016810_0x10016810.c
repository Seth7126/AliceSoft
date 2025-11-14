// 函数: sub_10016810
// 地址: 0x10016810
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if ((*(*arg1 + 0x10))() s>= *(arg2 + 0x160) && (*(*arg1 + 0x14))() s>= *(arg2 + 0x164))
    *(arg2 + 0x174)
    
    if (*(arg2 + 0x178) != *(arg2 + 0x174))
        char* eax_5 = (*(*arg1 + 8))(0, 0)
        int32_t ebp = *(arg2 + 0x160)
        char* esi = eax_5
        int32_t eax_7 = (*(*arg1 + 0x1c))()
        int32_t ebp_1 = (*(arg2 + 0x164) - 1) * ebp * 3
        
        if (ebp_1 u>= *(arg2 + 0x178) - *(arg2 + 0x174))
            __invalid_parameter_noinfo()
        
        char* eax_12 = *(arg2 + 0x174) + ebp_1
        int32_t ebp_4 = neg.d(*(arg2 + 0x160) * 3)
        int32_t __saved_ecx = 0
        
        if (*(arg2 + 0x164) s> 0)
            bool cond:1_1
            
            do
                int32_t i = 0
                
                if (*(arg2 + 0x160) s> 0)
                    do
                        *esi = *eax_12
                        esi[1] = eax_12[1]
                        esi[2] = eax_12[2]
                        esi[3] = 0xff
                        i += 1
                        esi = &esi[4]
                        eax_12 = &eax_12[3]
                    while (i s< *(arg2 + 0x160))
                
                esi = &esi[eax_7 - (ebp << 2)]
                eax_12 = &eax_12[ebp_4 * 2]
                cond:1_1 = __saved_ecx + 1 s< *(arg2 + 0x164)
                __saved_ecx += 1
            while (cond:1_1)
        
        *(arg2 + 0x184) += 1
        *(arg2 + 0x180) = 0
        eax_12.b = 1
        return eax_12

int32_t eax_1
eax_1.b = 0
return eax_1
