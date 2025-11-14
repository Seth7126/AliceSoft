// 函数: sub_4a7990
// 地址: 0x4a7990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg4 - arg2) s>> 2)
int32_t* esi = &arg2[(eax_3 - edx) s>> 1]
int32_t* var_8 = esi
sub_4a7c30(arg4 - 4, esi, arg2, arg4 - 4, arg5)
int32_t* ebp = &esi[1]
int32_t* var_10 = ebp

if (arg2 u< esi)
    do
        void* edx_2 = *esi
        void* ecx_2 = esi[-1]
        int32_t edi_1 = *(edx_2 + 4)
        int32_t eax_7 = *(ecx_2 + 4)
        
        if (eax_7 s< edi_1)
            break
        
        if (eax_7 s<= edi_1)
            int32_t eax_8 = *(ecx_2 + 8)
            int32_t edi_2 = *(edx_2 + 8)
            
            if (eax_8 s< edi_2)
                break
            
            if (eax_8 s<= edi_2 && *(ecx_2 + 0xc) s< *(edx_2 + 0xc))
                break
        
        int32_t eax_10 = *(edx_2 + 4)
        int32_t edi_3 = *(ecx_2 + 4)
        
        if (eax_10 s< edi_3)
            break
        
        if (eax_10 s<= edi_3)
            int32_t eax_11 = *(edx_2 + 8)
            int32_t edi_4 = *(ecx_2 + 8)
            
            if (eax_11 s< edi_4)
                break
            
            if (eax_11 s<= edi_4 && *(edx_2 + 0xc) s< *(ecx_2 + 0xc))
                break
        
        esi = &esi[-1]
    while (arg2 u< esi)
    
    ebp = var_10
    var_8 = esi

void* eax_19 = arg4

if (ebp u< eax_19)
    void* edx_3 = *esi
    int32_t ebx_1 = *(edx_3 + 4)
    
    do
        void* ecx_3 = *ebp
        int32_t eax_13 = *(ecx_3 + 4)
        
        if (eax_13 s< ebx_1)
            break
        
        if (eax_13 s<= ebx_1)
            int32_t eax_14 = *(ecx_3 + 8)
            int32_t edi_5 = *(edx_3 + 8)
            
            if (eax_14 s< edi_5)
                break
            
            if (eax_14 s<= edi_5 && *(ecx_3 + 0xc) s< *(edx_3 + 0xc))
                break
        
        int32_t edi_6 = *(ecx_3 + 4)
        
        if (ebx_1 s< edi_6)
            break
        
        if (ebx_1 s<= edi_6)
            int32_t eax_17 = *(edx_3 + 8)
            int32_t edi_7 = *(ecx_3 + 8)
            
            if (eax_17 s< edi_7)
                break
            
            if (eax_17 s<= edi_7 && *(edx_3 + 0xc) s< *(ecx_3 + 0xc))
                break
        
        ebp = &ebp[1]
    while (ebp u< eax_19)
    
    esi = var_8
    eax_19 = arg4
    var_10 = ebp

int32_t* edi_8 = esi
int32_t* ebx_2 = ebp
int32_t* var_14 = edi_8

while (true)
    int32_t* var_8_1 = ebx_2
    
    while (true)
        if (ebx_2 u< eax_19)
            do
                void* edx_4 = *esi
                void* ecx_4 = *ebx_2
                int32_t eax_20 = *(edx_4 + 4)
                int32_t temp0_1 = *(ecx_4 + 4)
                
                if (eax_20 s>= temp0_1)
                    if (eax_20 s> temp0_1)
                    label_4a7ad0:
                        int32_t eax_23 = *(ecx_4 + 4)
                        int32_t temp2_1 = *(edx_4 + 4)
                        
                        if (eax_23 s< temp2_1)
                            break
                        
                        if (eax_23 s<= temp2_1)
                            int32_t eax_24 = *(ecx_4 + 8)
                            int32_t temp6_1 = *(edx_4 + 8)
                            
                            if (eax_24 s< temp6_1)
                                break
                            
                            if (eax_24 s<= temp6_1 && *(ecx_4 + 0xc) s< *(edx_4 + 0xc))
                                break
                        
                        int32_t* eax_26 = ebp
                        ebp = &ebp[1]
                        
                        if (eax_26 != ebx_2)
                            int32_t eax_27 = ebp[-1]
                            ebp[-1] = ecx_4
                            *ebx_2 = eax_27
                    else
                        int32_t eax_21 = *(edx_4 + 8)
                        int32_t temp3_1 = *(ecx_4 + 8)
                        
                        if (eax_21 s>= temp3_1
                                && (eax_21 s> temp3_1 || *(edx_4 + 0xc) s>= *(ecx_4 + 0xc)))
                            goto label_4a7ad0
                
                ebx_2 = &ebx_2[1]
            while (ebx_2 u< arg4)
            
            edi_8 = var_14
            var_10 = ebp
            var_8_1 = ebx_2
        
        bool cond:2_1 = edi_8 != arg2
        
        if (edi_8 u> arg2)
            int32_t* ebx_3 = var_14
            void* edi_10 = &ebx_3[-1]
            
            do
                void* ecx_5 = *edi_10
                void* edx_5 = *esi
                int32_t eax_29 = *(ecx_5 + 4)
                int32_t temp1_1 = *(edx_5 + 4)
                
                if (eax_29 s>= temp1_1)
                    if (eax_29 s> temp1_1)
                    label_4a7b41:
                        int32_t eax_32 = *(edx_5 + 4)
                        int32_t temp4_1 = *(ecx_5 + 4)
                        
                        if (eax_32 s< temp4_1)
                            break
                        
                        if (eax_32 s<= temp4_1)
                            int32_t eax_33 = *(edx_5 + 8)
                            int32_t temp7_1 = *(ecx_5 + 8)
                            
                            if (eax_33 s< temp7_1)
                                break
                            
                            if (eax_33 s<= temp7_1 && *(edx_5 + 0xc) s< *(ecx_5 + 0xc))
                                break
                        
                        esi -= 4
                        
                        if (esi != edi_10)
                            int32_t eax_35 = *esi
                            *esi = ecx_5
                            *edi_10 = eax_35
                    else
                        int32_t eax_30 = *(ecx_5 + 8)
                        int32_t temp5_1 = *(edx_5 + 8)
                        
                        if (eax_30 s>= temp5_1
                                && (eax_30 s> temp5_1 || *(ecx_5 + 0xc) s>= *(edx_5 + 0xc)))
                            goto label_4a7b41
                
                ebx_3 -= 4
                edi_10 -= 4
            while (arg2 u< ebx_3)
            
            ebp = var_10
            var_14 = ebx_3
            edi_8 = var_14
            cond:2_1 = edi_8 != arg2
            ebx_2 = var_8_1
        
        if (not(cond:2_1))
            if (ebx_2 == arg4)
                *arg3 = esi
                arg3[1] = ebp
                return arg3
            
            if (ebp != ebx_2)
                int32_t ecx_6 = *esi
                *esi = *ebp
                *ebp = ecx_6
            
            int32_t* edi_11 = ebx_2
            int32_t* edx_6 = esi
            ebp = &ebp[1]
            esi = &esi[1]
            var_10 = ebp
            ebx_2 = &ebx_2[1]
            int32_t ecx_7 = *edx_6
            *edx_6 = *edi_11
            eax_19 = arg4
            *edi_11 = ecx_7
            edi_8 = var_14
            break
        
        edi_8 -= 4
        var_14 = edi_8
        
        if (ebx_2 != arg4)
            int32_t ecx_10 = *ebx_2
            *ebx_2 = *edi_8
            ebx_2 = &ebx_2[1]
            eax_19 = arg4
            *edi_8 = ecx_10
            break
        
        esi -= 4
        
        if (edi_8 != esi)
            int32_t ecx_8 = *edi_8
            *edi_8 = *esi
            *esi = ecx_8
        
        int32_t eax_40 = ebp[-1]
        ebp -= 4
        int32_t ecx_9 = *esi
        *esi = eax_40
        eax_19 = arg4
        var_10 = ebp
        *ebp = ecx_9
