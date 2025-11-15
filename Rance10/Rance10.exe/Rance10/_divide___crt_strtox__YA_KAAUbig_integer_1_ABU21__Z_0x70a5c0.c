// 函数: ?divide@__crt_strtox@@YA_KAAUbig_integer@1@ABU21@@Z
// 地址: 0x70a5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* eax = *ebx

if (eax == 0)
    return eax

int32_t edi
int32_t var_228 = edi
void* i_9 = *arg2

if (i_9 == 0)
    return 0

void* var_10 = eax - 1

if (i_9 == 1)
    int32_t ecx = arg2[1]
    int32_t var_2c_1 = ecx
    char var_21c[0x1cc]
    
    if (ecx != 1)
        if (eax == 1)
            int32_t esi_2 = ebx[1]
            int32_t var_220_1 = 0
            *ebx = 0
            _memcpy_s(&ebx[1], 0x1cc, &var_21c, nullptr)
            int32_t edx_4 = 0
            uint32_t temp1 = modu.dp.d(edx_4:esi_2, var_2c_1)
            ebx[1] = temp1
            *ebx = neg.d(sbb.d(0, 0, 0 u< temp1))
            return divu.dp.d(edx_4:esi_2, var_2c_1)
        
        uint32_t edi_6 = 0
        int32_t var_c_1 = 0
        int32_t var_8_1 = 0
        int32_t* var_14_1 = nullptr
        
        if (eax != 0)
            void* i_5 = var_10 + 1
            void* esi_4 = &ebx[eax]
            void* i
            
            do
                uint32_t eax_9
                uint32_t ecx_4
                int32_t edx_7
                eax_9, ecx_4, edx_7 = __aulldvrm(*esi_4, edi_6, ecx, 0)
                int32_t var_44_1 = edx_7
                esi_4 -= 4
                var_14_1 = ebx
                edi_6 = ecx_4
                int32_t ecx_6 = adc.d(var_c_1, 0, eax_9 u< 0)
                var_c_1 = eax_9
                i = i_5
                i_5 -= 1
                var_8_1 = ecx_6
                ecx = var_2c_1
            while (i != 1)
            ebx = arg1
        
        int32_t var_220_2 = 0
        *ebx = 0
        _memcpy_s(&ebx[1], 0x1cc, &var_21c, nullptr)
        ebx[1] = edi_6
        ebx[2] = var_14_1
        *ebx = neg.d(sbb.d(0, 0, 0 u< var_14_1)) + 1
        return var_c_1
    
    int32_t esi_1 = ebx[1]
    void* var_220 = i_9 - 1
    *ebx = i_9 - 1
    _memcpy_s(&ebx[1], 0x1cc, &var_21c, i_9 - 1)
    return esi_1

if (i_9 - 1 u<= eax - 1)
    void* edx_11 = eax - 1 - (i_9 - 1)
    void* ecx_11 = eax - 1
    
    if (eax - 1 s>= edx_11)
        void* esi_7 = &ebx[eax]
        void* edi_9 = &arg2[ecx_11 - edx_11 + 1]
        
        while (*edi_9 == *esi_7)
            ecx_11 -= 1
            edi_9 -= 4
            esi_7 -= 4
            
            if (ecx_11 s< edx_11)
                goto label_70a775
    
    if (eax - 1 s< edx_11 || arg2[ecx_11 - edx_11 + 1] u< ebx[ecx_11 + 1])
    label_70a775:
        edx_11 += 1
    
    if (edx_11 != 0)
        int32_t esi_9 = arg2[i_9]
        int32_t var_24 = arg2[i_9 - 1]
        int32_t eflags
        int32_t eax_21
        eax_21, eflags = _bit_scan_reverse(esi_9)
        int32_t var_38 = esi_9
        int32_t ecx_12
        
        if (edx_11 == 0)
            ecx_12 = 0x20
        else
            ecx_12 = 0x1f - eax_21
        
        if (ecx_12 != 0)
            uint32_t eax_24 = var_24 u>> (0x20 - ecx_12.b)
            char ecx_14 = ecx_12.b
            var_24 <<= ecx_14
            var_38 = esi_9 << ecx_14 | eax_24
            
            if (i_9 u> 2)
                var_24 |= arg2[i_9 - 2] u>> (0x20 - ecx_12.b)
        
        int32_t var_4c = 0
        void* var_20_1 = edx_11 - 1
        int32_t edi_18
        
        if (edx_11 - 1 s< 0)
            edi_18 = 0
        else
            void* var_14_2 = &ebx[edx_11]
            void* eax_27 = edx_11 - 1 + i_9
            void* var_c_2 = eax_27
            void* ecx_19 = &ebx[-1 + eax_27]
            void* var_50_1 = ecx_19
            
            while (true)
                uint32_t eax_28
                
                if (eax_27 u> var_10)
                    eax_28 = 0
                else
                    eax_28 = *(ecx_19 + 8)
                
                int32_t edx_14 = *(ecx_19 + 4)
                int32_t ecx_20 = *ecx_19
                uint32_t var_34_1 = eax_28
                int32_t var_2c_2 = 0
                int32_t var_18_1 = ecx_20
                
                if (ecx_12 u> 0)
                    int32_t eax_30
                    int32_t edx_16
                    eax_30, edx_16 = __allshl(edx_14, eax_28, ecx_12.b)
                    eax_28 = edx_16
                    edx_14 = ecx_20 u>> (0x20 - ecx_12.b) | eax_30
                    int32_t esi_15 = var_18_1 << ecx_12.b
                    var_18_1 = esi_15
                    
                    if (var_c_2 u>= 3)
                        var_18_1 = esi_15 | ebx[i_9 + var_20_1 - 2] u>> (0x20 - ecx_12.b)
                
                uint32_t eax_35
                int32_t ecx_25
                int32_t edx_17
                eax_35, ecx_25, edx_17 = __aulldvrm(edx_14, eax_28, var_38, 0)
                int32_t* var_2c_3 = ebx
                int32_t esi_17 = 0
                uint32_t ebx_1 = eax_35
                int32_t var_2c_4 = 0
                int32_t eax_36 = edx_17
                uint32_t var_8_4 = ebx_1
                int32_t var_1c_1 = eax_36
                int32_t edi_15 = ecx_25
                uint32_t var_48_1 = ebx_1
                int32_t var_44_2 = eax_36
                
                if (eax_36 != 0 || ebx_1 u> 0xffffffff)
                    int32_t eax_38
                    int32_t edx_18
                    eax_38, edx_18 = __allmul(ebx_1 + 1, 
                        adc.d(eax_36, 0xffffffff, ebx_1 u>= 0xffffffff), var_38, 0)
                    int32_t temp9_1 = edi_15
                    edi_15 += eax_38
                    esi_17 = adc.d(0, edx_18, temp9_1 + eax_38 u< temp9_1)
                    ebx_1 = 0xffffffff
                    eax_36 = 0
                    var_2c_4 = esi_17
                    var_8_4 = 0xffffffff
                    var_48_1 = 0xffffffff
                    var_1c_1 = 0
                    var_44_2 = 0
                
                if (esi_17 u<= 0 && (esi_17 u< 0 || edi_15 u<= 0xffffffff))
                    while (true)
                        int32_t eax_39
                        int32_t edx_19
                        eax_39, edx_19 = __allmul(var_24, 0, ebx_1, eax_36)
                        
                        if (edx_19 u< edi_15 || (edx_19 u<= edi_15 && eax_39 u<= var_18_1))
                            eax_36 = var_1c_1
                            break
                        
                        uint32_t temp13_1 = ebx_1
                        ebx_1 -= 1
                        var_48_1 = ebx_1
                        eax_36 = adc.d(var_1c_1, 0xffffffff, temp13_1 u>= 1)
                        int32_t temp14_1 = edi_15
                        edi_15 += var_38
                        var_1c_1 = eax_36
                        int32_t temp16_1 = adc.d(var_2c_4, 0, temp14_1 + var_38 u< temp14_1)
                        var_2c_4 = temp16_1
                        var_44_2 = eax_36
                        
                        if (temp16_1 != 0)
                            break
                        
                        if (edi_15 u> 0xffffffff)
                            break
                        
                        continue
                    
                    var_8_4 = ebx_1
                
                if (eax_36 != 0 || ebx_1 != 0)
                    void* i_8 = i_9
                    int32_t edi_16 = 0
                    int32_t esi_19 = 0
                    
                    if (i_8 != 0)
                        void* ebx_3 = var_14_2
                        int32_t* eax_42 = &arg2[1]
                        int32_t* var_18_2 = eax_42
                        void* i_6 = i_8
                        void* i_1
                        
                        do
                            int32_t eax_43 = *eax_42
                            int32_t eax_47
                            int32_t edx_20
                            edx_20:eax_47 = mulu.dp.d(var_48_1, eax_43)
                            int32_t edi_17 = edi_16 + eax_47
                            int32_t eax_48 = *ebx_3
                            edi_16 =
                                adc.d(esi_19, edx_20 + var_44_2 * eax_43, edi_16 + eax_47 u< edi_16)
                            esi_19 = 0
                            
                            if (eax_48 u< edi_17)
                                int32_t temp18_1 = edi_16
                                edi_16 += 1
                                esi_19 = adc.d(0, 0, temp18_1 u>= 0xffffffff)
                            
                            *ebx_3 = eax_48 - edi_17
                            ebx_3 += 4
                            eax_42 = &var_18_2[1]
                            i_1 = i_6
                            i_6 -= 1
                            var_18_2 = eax_42
                        while (i_1 != 1)
                        ebx_1 = var_8_4
                        i_8 = i_9
                    
                    if (0 u<= esi_19 && (0 u< esi_19 || var_34_1 u< edi_16))
                        if (i_8 != 0)
                            void* i_7 = i_8
                            void* edx_22 = var_14_2
                            void* esi_22 = &arg2[1]
                            int32_t ebx_4 = 0
                            void* i_2
                            
                            do
                                int32_t ecx_29 = *edx_22
                                esi_22 += 4
                                edx_22 += 4
                                int32_t ecx_30 = ecx_29 + *(esi_22 - 4)
                                int32_t eax_51 = adc.d(0, 0, ecx_29 + *(esi_22 - 4) u< ecx_29)
                                *(edx_22 - 4) = ecx_30 + ebx_4
                                ebx_4 = adc.d(eax_51, 0, ecx_30 + ebx_4 u< ecx_30)
                                i_2 = i_7
                                i_7 -= 1
                            while (i_2 != 1)
                            ebx_1 = var_8_4
                        
                        uint32_t temp19_1 = ebx_1
                        ebx_1 -= 1
                        int32_t var_1c_2 = adc.d(var_1c_1, 0xffffffff, temp19_1 u>= 1)
                    
                    var_10 = var_c_2 - 1
                
                edi_18 = ebx_1
                var_14_2 -= 4
                void* edx_24 = var_20_1 - 1
                ebx = arg1
                ecx_19 = var_50_1 - 4
                eax_27 = var_c_2 - 1
                var_4c = edi_18
                var_20_1 = edx_24
                var_50_1 = ecx_19
                var_c_2 = eax_27
                
                if (edx_24 s< 0)
                    break
        
        void* i_3 = var_10 + 1
        
        if (i_3 u< *ebx)
            void* ecx_34 = &ebx[i_3 + 1]
            
            do
                *ecx_34 = 0
                ecx_34 += 4
                i_3 += 1
            while (i_3 u< *ebx)
        
        *ebx = var_10 + 1
        
        if (var_10 != 0xffffffff)
            int32_t i_4
            
            do
                i_4 = *ebx
                
                if (ebx[i_4] != 0)
                    break
                
                *ebx = i_4 - 1
            while (i_4 != 1)
        
        return edi_18

return 0
