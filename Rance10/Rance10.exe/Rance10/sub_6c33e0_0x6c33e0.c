// 函数: sub_6c33e0
// 地址: 0x6c33e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t ecx = esi[0x16]

if (ecx s>= 2)
    if (esi[1] == 0)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0))
        int32_t temp1_1 = esi[5]
        
        if (arg3 s<= temp1_1 && (arg3 s< temp1_1 || arg2 u<= esi[4]))
            if (ecx s>= 3)
                int32_t ecx_1 = esi[0x18]
                int32_t edx_1 = esi[0xe]
                int32_t temp2_1 = *(edx_1 + (ecx_1 << 3) + 4)
                
                if (arg3 s< temp2_1 || (arg3 s<= temp2_1 && arg2 u< *(edx_1 + (ecx_1 << 3))))
                    sub_6c2c40(esi)
                else
                    int32_t temp3_1 = *(edx_1 + (ecx_1 << 3) + 0xc)
                    
                    if (arg3 s>= temp3_1
                            && (arg3 s> temp3_1 || arg2 u>= *(edx_1 + (ecx_1 << 3) + 8)))
                        sub_6c2c40(esi)
            
            int32_t edx_2 = esi[0x17]
            esi[0x14] = 0xffffffff
            esi[0x15] = 0xffffffff
            
            if (esi != 0xffffff88 && esi[0x1e] != 0)
                sub_6b80e0(&esi[0x1e])
                esi[0x72] = edx_2
            
            int32_t eax_3
            int32_t edx_3
            eax_3, edx_3 = sub_6b37d0(&esi[0x78])
            int32_t var_170[0x54]
            int32_t (* ecx_6)[0x54] = &var_170
            
            if (sub_6c1a50(eax_3, edx_3, esi, arg2, arg3) != 0)
                esi[0x14] = 0xffffffff
                esi[0x15] = 0xffffffff
                sub_6b7a10(ecx_6)
                sub_6c2c40(esi)
                return 0xffffff77
            
            int32_t ebx_2 = 0
            int32_t var_1ac = 0
            int32_t var_1c0 = 0
            int32_t var_1bc = 0
            int32_t var_1b8 = 0
            sub_6b7990(ecx_6, esi[0x17])
            int32_t eax_6 = sub_6b80e0(&var_170)
            
            while (true)
                void* var_1a8
                
                if (esi[0x16] s>= 3 && var_170[0] != 0)
                    void var_190
                    eax_6 = sub_6b8190(eax_6, &var_190, &var_170, 1)
                    
                    if (eax_6 s> 0)
                        void* ecx_12 = (esi[0x18] << 5) + esi[0x12]
                        
                        if (*(ecx_12 + 0x1c) != 0)
                            int32_t eax_7 = sub_6c1950(ecx_12, &var_190)
                            ebx_2 = eax_7
                            
                            if (ebx_2 s< 0)
                                if (esi != 0xffffff88 && esi[0x1e] != 0)
                                    sub_6b8190(eax_7, nullptr, &esi[0x1e], 1)
                                
                                ebx_2 = 0
                            else if (var_1bc == 0 || var_1b8 != 0)
                                if (var_1c0 != 0)
                                    var_1ac += (var_1c0 + ebx_2) s>> 2
                            else if (esi != 0xffffff88 && esi[0x1e] != 0)
                                sub_6b8190(eax_7, nullptr, &esi[0x1e], 1)
                            
                            int32_t var_180
                            int32_t var_17c
                            eax_6 = var_180 & var_17c
                            
                            if (eax_6 == 0xffffffff)
                                var_1c0 = ebx_2
                                continue
                            
                            int32_t edi_1 = esi[0x18]
                            void* ebx_4 = esi[0x11]
                            int32_t eax_19 = edi_1 << 4
                            void* ecx_30 = var_180 - *(eax_19 + ebx_4)
                            int32_t edx_13 =
                                sbb.d(var_17c, *(eax_19 + ebx_4 + 4), var_180 u< *(eax_19 + ebx_4))
                            int32_t var_1c0_1 = edx_13
                            int32_t var_1a4
                            
                            if (edx_13 s<= 0 && (edx_13 s< 0 || ecx_30 u< 0))
                                var_1a8.q = 0
                                edx_13 = var_1a4
                                ecx_30 = var_1a8
                                var_1c0_1 = edx_13
                            
                            int64_t var_198_1 = 0
                            var_1a8.q = 0
                            int32_t var_1b8_1 = 0
                            int32_t var_1bc_1
                            int32_t var_1b0_2
                            void* ebx_9
                            int32_t edi_2
                            
                            if (edi_1 s< 2)
                                edi_2 = var_1a4
                                ebx_9 = var_1a8
                                var_1b0_2 = var_198_1:4.d
                                var_1bc_1 = var_198_1.d
                            else
                                edi_2 = var_1a4
                                void* eax_21 = ebx_4 + 0x18
                                int32_t esi_1 = var_198_1:4.d
                                int32_t edx_14 = var_198_1.d
                                int32_t i_2 = ((edi_1 - 2) u>> 1) + 1
                                var_1b8_1 = (((edi_1 - 2) u>> 1) + 1) * 2
                                ebx_9 = var_1a8
                                int32_t i
                                
                                do
                                    int32_t temp9_1 = edx_14
                                    edx_14 += *(eax_21 - 0x10)
                                    esi_1 = adc.d(esi_1, *(eax_21 - 0xc), 
                                        temp9_1 + *(eax_21 - 0x10) u< temp9_1)
                                    void* temp11_1 = ebx_9
                                    ebx_9 += *eax_21
                                    edi_2 =
                                        adc.d(edi_2, *(eax_21 + 4), temp11_1 + *eax_21 u< temp11_1)
                                    eax_21 += 0x20
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                var_1bc_1 = edx_14
                                edx_13 = var_1c0_1
                                var_1b0_2 = esi_1
                                esi = arg1
                            
                            if (var_1b8_1 s< esi[0x18])
                                int32_t eax_25 = var_1b8_1 << 4
                                void* temp19_1 = ecx_30
                                ecx_30 += *(eax_25 + ebx_4 + 8)
                                esi = arg1
                                var_1c0_1 = adc.d(edx_13, *(eax_25 + ebx_4 + 0xc), 
                                    temp19_1 + *(eax_25 + ebx_4 + 8) u< temp19_1)
                            
                            int32_t eax_27
                            int32_t edx_16
                            edx_16:eax_27 = sx.q(var_1ac)
                            void* ebx_10 = ebx_9 - eax_27
                            void* ebx_11 = ebx_10 + var_1bc_1
                            void* ebx_12 = ebx_11 + ecx_30
                            esi[0x14] = ebx_12
                            int32_t edi_5 = adc.d(
                                adc.d(sbb.d(edi_2, edx_16, ebx_9 u< eax_27), var_1b0_2, 
                                    ebx_10 + var_1bc_1 u< ebx_10), 
                                var_1c0_1, ebx_11 + ecx_30 u< ebx_11)
                            esi[0x15] = edi_5
                            
                            if (edi_5 s<= 0 && (edi_5 s< 0 || ebx_12 u< 0))
                                esi[0x14] = 0
                                esi[0x15] = 0
                            
                            break
                        else if (esi != 0xffffff88 && esi[0x1e] != 0)
                            eax_6 = sub_6b8190(eax_6, nullptr, &esi[0x1e], 1)
                
                if (ebx_2 != 0)
                    esi[0x14] = 0xffffffff
                    esi[0x15] = 0xffffffff
                    break
                
                int32_t eax_12
                int32_t edx_9
                eax_12, edx_9 = sub_6c1ab0(eax_6, &var_1a8, esi, 0xffffffff, 0xffffffff)
                
                if (edx_9 s< 0 || (edx_9 s<= 0 && eax_12 u< 0))
                    int32_t eax_28
                    int32_t edx_17
                    eax_28, edx_17 = sub_6c3350(esi, 0xffffffff)
                    esi[0x14] = eax_28
                    esi[0x15] = edx_17
                    break
                
                if (esi[0x16] s>= 3)
                    uint32_t eax_13 = sub_6b7960(&var_1a8)
                    
                    if (esi[0x17] != eax_13 && (*(var_1a8 + 5) & 2) != 0)
                        sub_6c2c40(esi)
                        sub_6b7a10(&var_170)
                
                if (esi[0x16] s< 3 || esi[0x16] s< 3)
                    uint32_t i_1 = sub_6b7960(&var_1a8)
                    int32_t edx_10 = 0
                    eax_6 = esi[0xd]
                    
                    if (eax_6 s> 0)
                        int32_t* ecx_23 = esi[0x10]
                        
                        while (*ecx_23 != i_1)
                            edx_10 += 1
                            ecx_23 = &ecx_23[1]
                            
                            if (edx_10 s>= eax_6)
                                break
                    
                    if (edx_10 == eax_6)
                        ebx_2 = var_1c0
                        continue
                    else
                        esi[0x18] = edx_10
                        esi[0x17] = i_1
                        
                        if (esi != 0xffffff88 && esi[0x1e] != 0)
                            sub_6b80e0(&esi[0x1e])
                            esi[0x72] = i_1
                        
                        if (var_170[0] != 0)
                            sub_6b80e0(&var_170)
                            uint32_t i_3 = i_1
                        
                        int32_t eax_15 = esi[0xf]
                        esi[0x16] = 3
                        int32_t temp8_1 = *(eax_15 + (edx_10 << 3) + 4)
                        
                        if (edx_9 s> temp8_1
                                || (edx_9 s>= temp8_1 && eax_12 u> *(eax_15 + (edx_10 << 3))))
                            var_1b8 = 0
                        else
                            var_1b8 = 1
                        
                        ebx_2 = var_1c0
                
                sub_6b7dc0(&esi[0x1e], &var_1a8)
                sub_6b7dc0(&var_170, &var_1a8)
                eax_6 = zx.d(*(var_1a8 + 5)) & 4
                var_1bc = eax_6
                continue
            
            sub_6b7a10(&var_170)
            *(esi + 0x68) = zx.o(0)
            return 0

return 0xffffff7d
