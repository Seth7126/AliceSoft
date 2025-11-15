// 函数: sub_656360
// 地址: 0x656360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_110
int32_t eax_1 = __security_cookie ^ &var_110
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
void* ebx = arg1
int32_t var_8c = arg2
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* var_98 = ebx
int32_t edx_1 = *(ebx + 0x128) - 1
void* edi = *(ebx + 0x1a0)
void* var_94 = edi
void* var_11c

while (*(ebx + 0x7c) s<= *(ebx + 0x84))
    int32_t* ecx_1 = *(ebx + 0x1a8)
    
    if (*(ecx_1 + 0x11) != 0)
        break
    
    if (*(ebx + 0x7c) == *(ebx + 0x84))
        int32_t eax_5
        eax_5.b = *(ebx + 0x178) == 0
        
        if (*(ebx + 0x80) u> eax_5 + *(ebx + 0x88))
            break
    
    int32_t eax_7 = *ecx_1
    var_11c = ebx
    
    if (eax_7(var_11c) == 0)
        @__security_check_cookie@4(eax_1 ^ &var_110)
        return 0

int32_t i = 0
void* ebp
var_11c = ebp
void** esp_1 = &var_11c
void* ebp_1 = *(ebx + 0xc4)
int32_t var_f4 = 0
void* var_e8 = ebp_1

if (*(ebx + 0x24) s> 0)
    int32_t esi
    int32_t var_120 = esi
    int32_t* esp_2 = &var_120
    int32_t var_f0_1 = 0
    void* ecx_2 = edi + 0x48
    void* var_90_1 = 0xffffffb8 - edi
    int32_t esi_2 = 0
    void* var_ec_1 = ecx_2
    
    do
        if (*(ebp_1 + 0x34) != 0)
            int32_t edi_1 = *(ebx + 0x88)
            uint32_t esi_3 = *(ebp_1 + 0xc)
            uint32_t edx_3
            
            if (edi_1 u>= edx_1)
                uint32_t temp1_1 = modu.dp.d(0:(*(ebp_1 + 0x20)), esi_3)
                *(esp_2 + 0x17) = 1
                uint32_t eax_12 = temp1_1
                
                if (eax_12 == 0)
                    eax_12 = esi_3
                
                esp_2[0x18] = eax_12
                edx_3 = eax_12
            else
                *(esp_2 + 0x17) = 0
                esp_2[0x18] = esi_3
                edx_3 = esi_3 * 2
            
            *(esp_2 - 4) = 0
            int32_t eax_18
            void* esp_8
            
            if (edi_1 == 0)
                void* eax_19 = *(ebx + 4)
                *(esp_2 - 8) = edx_3
                *(esp_2 - 0xc) = 0
                *(esp_2 - 0x10) = *ecx_2
                int32_t eax_20 = *(eax_19 + 0x20)
                *(esp_2 - 0x14) = ebx
                eax_18 = eax_20()
                esp_8 = esp_2 - 4
                *(esp_8 + 0x2a) = 1
            else
                void* ecx_5 = *(ebx + 4)
                *(esp_2 - 8) = edx_3 + esi_3
                *(esp_2 - 0xc) = (edi_1 - 1) * esi_3
                *(esp_2 - 0x10) = *esp_2[0xd]
                int32_t eax_16 = *(ecx_5 + 0x20)
                *(esp_2 - 0x14) = ebx
                int32_t eax_17 = eax_16()
                esp_8 = esp_2 - 4
                int32_t ecx_6 = *(ebp_1 + 0xc)
                *(esp_8 + 0x2a) = 0
                eax_18 = eax_17 + (ecx_6 << 2)
            
            int16_t* ecx_7 = *(ebp_1 + 0x50)
            int32_t esi_4 = 0
            *(esp_8 + 0x78) = eax_18
            esp_2 = esp_8 + 0x14
            void* eax_21 = esp_2[0x23]
            int32_t edx_7 = esp_2[0x25]
            esp_2[0x21] = 0
            int32_t edi_2 = *(eax_21 + 0x70)
            esp_2[6] = zx.d(*ecx_7)
            esp_2[0x1a] = zx.d(ecx_7[1])
            esp_2[0x1b] = zx.d(ecx_7[8])
            int32_t edi_3 = edi_2 + esp_2[0xc]
            esp_2[0x1c] = zx.d(ecx_7[0x10])
            esp_2[0x1d] = zx.d(ecx_7[9])
            ecx_2 = esp_2[0xd]
            esp_2[0x1e] = zx.d(ecx_7[2])
            int32_t eax_29 = *(ebx + 0x1b4) + esp_2[0x24]
            esp_2[4] = edi_3
            esp_2[0x26] = *(eax_29 + ecx_2 + 4)
            esp_2[0x17] = *(edx_7 + (esp_2[0xb] << 2))
            int32_t eax_33 = esp_2[0x18]
            
            if (eax_33 s> 0)
                do
                    bool cond:1_1 = *(esp_2 + 0x16) == 0
                    int32_t ebx_1 = esp_2[0x19]
                    int16_t* edx_8 = *(ebx_1 + (esi_4 << 2))
                    esp_2[0x12] = edx_8
                    int16_t* ecx_8
                    
                    if (not(cond:1_1))
                        ecx_8 = edx_8
                    
                    if (cond:1_1 || esi_4 != 0)
                        ecx_8 = *(ebx_1 + (esi_4 << 2) - 4)
                    
                    int16_t* eax_35
                    
                    if (*(esp_2 + 0x17) != 0)
                        eax_35 = edx_8
                    
                    if (*(esp_2 + 0x17) == 0 || esi_4 != eax_33 - 1)
                        eax_35 = *(ebx_1 + (esi_4 << 2) + 4)
                    
                    void* edi_4 = esp_2[0xe]
                    int32_t ebp_2 = sx.d(*edx_8)
                    int32_t ebx_2 = sx.d(*ecx_8)
                    int32_t esi_5 = ebp_2
                    esp_2[7] = ebp_2
                    int32_t edi_6 = *(edi_4 + 0x1c) - 1
                    esp_2[9] = ebp_2
                    int32_t ebp_3 = sx.d(*eax_35)
                    esp_2[0x20] = edi_6
                    void* edi_7 = esp_2[4]
                    esp_2[0x10] = ebx_2
                    esp_2[8] = ebx_2
                    esp_2[0x1f] = esi_5
                    esp_2[0x11] = ebp_3
                    esp_2[0xa] = ebp_3
                    esp_2[0x15] = 0
                    esp_2[0x16] = 0
                    esp_2[0x13] = ecx_8 + 0x80
                    esp_2[0x14] = eax_35 + 0x80
                    int32_t j
                    
                    do
                        *(esp_2 - 4) = 0x80
                        *(esp_2 - 8) = edx_8
                        *(esp_2 - 0xc) = &esp_2[0x27]
                        sub_700660()
                        int32_t ecx_10
                        
                        if (esp_2[0x16] u>= esp_2[0x20])
                            ecx_10 = esp_2[7]
                        else
                            esp_2[0x10] = sx.d(*esp_2[0x13])
                            ecx_10 = sx.d(*(esp_2[0x12] + 0x80))
                            int16_t* eax_42 = esp_2[0x14]
                            esp_2[7] = ecx_10
                            esp_2[0x11] = sx.d(*eax_42)
                        
                        int32_t edi_8 = *(edi_7 + 4)
                        
                        if (edi_8 != 0 && *(esp_2 + 0x9e) == 0)
                            int32_t ecx_12 = (esi_5 - ecx_10) * esp_2[6] * 0x24
                            int32_t eax_48 = esp_2[0x1a] << 7
                            int32_t eax_51
                            
                            if (ecx_12 s< 0)
                                int32_t eax_54 = divs.dp.d(sx.q(eax_48 - ecx_12), esp_2[0x1a] << 8)
                                
                                if (edi_8 s> 0)
                                    int32_t edx_14 = 1 << edi_8.b
                                    
                                    if (eax_54 s>= edx_14)
                                        eax_54 = edx_14 - 1
                                
                                eax_51 = neg.d(eax_54)
                            else
                                eax_51 = divs.dp.d(sx.q(eax_48 + ecx_12), esp_2[0x1a] << 8)
                                
                                if (edi_8 s> 0)
                                    int32_t edx_11 = 1 << edi_8.b
                                    
                                    if (eax_51 s>= edx_11)
                                        eax_51 = edx_11 - 1
                            
                            *(esp_2 + 0x9e) = eax_51.w
                        
                        void* esi_10 = esp_2[4]
                        int32_t edi_9 = *(esi_10 + 8)
                        
                        if (edi_9 != 0 && esp_2[0x2b].w == 0)
                            int32_t ecx_18 = (esp_2[8] - esp_2[0xa]) * esp_2[6] * 0x24
                            int32_t eax_59 = esp_2[0x1b] << 7
                            int32_t eax_62
                            
                            if (ecx_18 s< 0)
                                int32_t eax_65 = divs.dp.d(sx.q(eax_59 - ecx_18), esp_2[0x1b] << 8)
                                
                                if (edi_9 s> 0)
                                    int32_t edx_20 = 1 << edi_9.b
                                    
                                    if (eax_65 s>= edx_20)
                                        eax_65 = edx_20 - 1
                                
                                eax_62 = neg.d(eax_65)
                            else
                                eax_62 = divs.dp.d(sx.q(eax_59 + ecx_18), esp_2[0x1b] << 8)
                                esi_10 = esp_2[4]
                                
                                if (edi_9 s> 0)
                                    int32_t edx_17 = 1 << edi_9.b
                                    
                                    if (eax_62 s>= edx_17)
                                        eax_62 = edx_17 - 1
                            
                            esp_2[0x2b].w = eax_62.w
                        
                        int32_t edi_10 = *(esi_10 + 0xc)
                        
                        if (edi_10 != 0 && esp_2[0x2f].w == 0)
                            int32_t eax_69 = esp_2[0x1c] << 7
                            int32_t ecx_27 = (esp_2[0xa] - esp_2[9] * 2 + esp_2[8]) * esp_2[6] * 9
                            int32_t eax_72
                            
                            if (ecx_27 s< 0)
                                int32_t eax_75 = divs.dp.d(sx.q(eax_69 - ecx_27), esp_2[0x1c] << 8)
                                
                                if (edi_10 s> 0)
                                    int32_t edx_26 = 1 << edi_10.b
                                    
                                    if (eax_75 s>= edx_26)
                                        eax_75 = edx_26 - 1
                                
                                eax_72 = neg.d(eax_75)
                            else
                                eax_72 = divs.dp.d(sx.q(eax_69 + ecx_27), esp_2[0x1c] << 8)
                                esi_10 = esp_2[4]
                                
                                if (edi_10 s> 0)
                                    int32_t edx_23 = 1 << edi_10.b
                                    
                                    if (eax_72 s>= edx_23)
                                        eax_72 = edx_23 - 1
                            
                            esp_2[0x2f].w = eax_72.w
                        
                        int32_t edi_11 = *(esi_10 + 0x10)
                        int32_t ebx_3
                        
                        if (edi_11 == 0 || *(esp_2 + 0xae) != 0)
                            ebx_3 = esp_2[6]
                        else
                            ebx_3 = esp_2[6]
                            int32_t ecx_32 = (esp_2[0x11] - ebp_3 - esp_2[0x10] + ebx_2) * ebx_3 * 5
                            int32_t eax_82 = esp_2[0x1d] << 7
                            
                            if (ecx_32 s< 0)
                                int32_t eax_89 = divs.dp.d(sx.q(eax_82 - ecx_32), esp_2[0x1d] << 8)
                                
                                if (edi_11 s> 0)
                                    int32_t edx_32 = 1 << edi_11.b
                                    
                                    if (eax_89 s>= edx_32)
                                        eax_89 = edx_32 - 1
                                
                                *(esp_2 + 0xae) = neg.d(eax_89).w
                            else
                                int32_t eax_85 = divs.dp.d(sx.q(eax_82 + ecx_32), esp_2[0x1d] << 8)
                                esi_10 = esp_2[4]
                                
                                if (edi_11 s<= 0)
                                    *(esp_2 + 0xae) = eax_85.w
                                else
                                    int32_t edx_29 = 1 << edi_11.b
                                    
                                    if (eax_85 s< edx_29)
                                        *(esp_2 + 0xae) = eax_85.w
                                    else
                                        *(esp_2 + 0xae) = edx_29.w - 1
                        
                        int32_t edi_12 = *(esi_10 + 0x14)
                        int32_t ebp_4 = esp_2[7]
                        
                        if (edi_12 != 0 && esp_2[0x28].w == 0)
                            int32_t eax_93 = esp_2[0x1e] << 7
                            int32_t ecx_41 = (ebp_4 - esp_2[9] * 2 + esp_2[0x1f]) * ebx_3 * 9
                            int32_t eax_96
                            
                            if (ecx_41 s< 0)
                                int32_t eax_99 = divs.dp.d(sx.q(eax_93 - ecx_41), esp_2[0x1e] << 8)
                                
                                if (edi_12 s> 0)
                                    int32_t edx_38 = 1 << edi_12.b
                                    
                                    if (eax_99 s>= edx_38)
                                        eax_99 = edx_38 - 1
                                
                                eax_96 = neg.d(eax_99)
                            else
                                eax_96 = divs.dp.d(sx.q(eax_93 + ecx_41), esp_2[0x1e] << 8)
                                
                                if (edi_12 s> 0)
                                    int32_t edx_35 = 1 << edi_12.b
                                    
                                    if (eax_96 s>= edx_35)
                                        eax_96 = edx_35 - 1
                            
                            esp_2[0x28].w = eax_96.w
                        
                        *(esp_2 - 4) = esp_2[0x15]
                        int32_t edi_13 = esp_2[0xe]
                        *(esp_2 - 8) = esp_2[0x17]
                        *(esp_2 - 0xc) = &esp_2[0x27]
                        *(esp_2 - 0x10) = edi_13
                        *(esp_2 - 0x14) = esp_2[0x22]
                        esp_2[0x26]()
                        int32_t eax_101 = esp_2[0x10]
                        esi_5 = esp_2[9]
                        ebx_2 = esp_2[8]
                        int32_t edx_39 = esp_2[0x12]
                        esp_2[0x13] -= 0xffffff80
                        edx_8 = edx_39 + 0x80
                        esp_2[0x14] -= 0xffffff80
                        esp_2[8] = eax_101
                        int32_t eax_102 = esp_2[0x11]
                        esp_2[9] = ebp_4
                        ebp_3 = esp_2[0xa]
                        esp_2[0xa] = eax_102
                        edi_7 = esp_2[4]
                        esp_2[0x15] += *(edi_13 + 0x24)
                        j = esp_2[0x16] + 1
                        esp_2[0x1f] = esi_5
                        esp_2[0x12] = edx_8
                        esp_2[0x16] = j
                    while (j u<= esp_2[0x20])
                    ebp_1 = esp_2[0xe]
                    int32_t ecx_46 = esp_2[0x17]
                    esi_4 = esp_2[0x21] + 1
                    int32_t eax_106 = *(ebp_1 + 0x28)
                    esp_2[0x21] = esi_4
                    eax_33 = esp_2[0x18]
                    esp_2[0x17] = ecx_46 + (eax_106 << 2)
                while (esi_4 s< eax_33)
                
                ebx = esp_2[0x22]
                ecx_2 = esp_2[0xd]
            
            esi_2 = esp_2[0xc]
            i = esp_2[0xb]
        
        edx_1 = esp_2[0xf]
        i += 1
        esi_2 += 0x18
        esp_2[0xb] = i
        ecx_2 += 4
        esp_2[0xc] = esi_2
        ebp_1 += 0x58
        esp_2[0xd] = ecx_2
        esp_2[0xe] = ebp_1
    while (i s< *(ebx + 0x24))
    
    *esp_2
    esp_1 = &esp_2[1]

*(ebx + 0x88) += 1
int32_t eax_107 = *(ebx + 0x88)
*esp_1
esp_1[1]
esp_1[2]
int32_t result = sbb.d(eax_107, eax_107, eax_107 u< *(ebx + 0x128)) + 4
@__security_check_cookie@4(esp_1[0x46] ^ &esp_1[3])
return result
