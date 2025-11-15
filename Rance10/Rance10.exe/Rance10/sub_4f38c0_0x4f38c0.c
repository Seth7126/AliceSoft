// 函数: sub_4f38c0
// 地址: 0x4f38c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((esi - arg2) s>> 2)
int32_t** var_28 = arg3
int32_t* ebx = &arg2[(eax_3 - edx) s>> 1]
int32_t* eax_6 = esi - 4
sub_4f3cb0(eax_6, ebx, arg2, eax_6)
int32_t* ebp = &ebx[1]
int32_t* var_10 = ebp

if (arg2 u< ebx)
    do
        void* edx_2 = *ebx
        void* ecx_1 = ebx[-1]
        int32_t esi_1 = *(edx_2 + 4)
        int32_t eax_7 = *(ecx_1 + 4)
        
        if (eax_7 s< esi_1)
            break
        
        if (eax_7 s<= esi_1)
            int32_t eax_8 = *(ecx_1 + 8)
            int32_t esi_2 = *(edx_2 + 8)
            
            if (eax_8 s< esi_2)
                break
            
            if (eax_8 s<= esi_2 && *(ecx_1 + 0xc) s< *(edx_2 + 0xc))
                break
        
        int32_t eax_10 = *(edx_2 + 4)
        int32_t esi_3 = *(ecx_1 + 4)
        
        if (eax_10 s< esi_3)
            break
        
        if (eax_10 s<= esi_3)
            int32_t eax_11 = *(edx_2 + 8)
            int32_t esi_4 = *(ecx_1 + 8)
            
            if (eax_11 s< esi_4)
                break
            
            if (eax_11 s<= esi_4 && *(edx_2 + 0xc) s< *(ecx_1 + 0xc))
                break
        
        ebx = &ebx[-1]
    while (arg2 u< ebx)
    
    ebp = var_10
    esi = arg4

if (ebp u< esi)
    void* edx_3 = *ebx
    int32_t edi_1 = *(edx_3 + 4)
    
    while (true)
        void* ecx_2 = *ebp
        int32_t eax_13 = *(ecx_2 + 4)
        
        if (eax_13 s< edi_1)
            break
        
        if (eax_13 s> edi_1)
        label_4f3980:
            int32_t esi_6 = *(ecx_2 + 4)
            
            if (edi_1 s>= esi_6)
                if (edi_1 s> esi_6)
                label_4f399f:
                    esi = arg4
                    ebp = &ebp[1]
                    
                    if (ebp u>= esi)
                        break
                    
                    continue
                else
                    int32_t eax_17 = *(edx_3 + 8)
                    int32_t esi_7 = *(ecx_2 + 8)
                    
                    if (eax_17 s>= esi_7 && (eax_17 s> esi_7 || *(edx_3 + 0xc) s>= *(ecx_2 + 0xc)))
                        goto label_4f399f
        else
            int32_t eax_14 = *(ecx_2 + 8)
            int32_t esi_5 = *(edx_3 + 8)
            
            if (eax_14 s>= esi_5 && (eax_14 s> esi_5 || *(ecx_2 + 0xc) s>= *(edx_3 + 0xc)))
                goto label_4f3980
        
        esi = arg4
        break
    
    var_10 = ebp

int32_t* edi_2 = ebx
int32_t* eax_19 = ebp
int32_t* var_14 = edi_2

while (true)
    int32_t* var_8_1 = eax_19
    
    while (true)
        if (eax_19 u< esi)
            do
                void* esi_8 = *ebx
                void* edx_4 = *eax_19
                int32_t ecx_3 = *(esi_8 + 4)
                int32_t temp0_1 = *(edx_4 + 4)
                
                if (ecx_3 s>= temp0_1)
                    if (ecx_3 s> temp0_1)
                    label_4f39e8:
                        int32_t ecx_6 = *(edx_4 + 4)
                        int32_t temp2_1 = *(esi_8 + 4)
                        
                        if (ecx_6 s< temp2_1)
                            break
                        
                        if (ecx_6 s<= temp2_1)
                            int32_t ecx_7 = *(edx_4 + 8)
                            int32_t temp6_1 = *(esi_8 + 8)
                            
                            if (ecx_7 s< temp6_1)
                                break
                            
                            if (ecx_7 s<= temp6_1 && *(edx_4 + 0xc) s< *(esi_8 + 0xc))
                                break
                        
                        int32_t* ecx_9 = ebp
                        ebp = &ebp[1]
                        
                        if (ecx_9 != eax_19)
                            int32_t ecx_10 = ebp[-1]
                            ebp[-1] = edx_4
                            *eax_19 = ecx_10
                    else
                        int32_t ecx_4 = *(esi_8 + 8)
                        int32_t temp3_1 = *(edx_4 + 8)
                        
                        if (ecx_4 s>= temp3_1
                                && (ecx_4 s> temp3_1 || *(esi_8 + 0xc) s>= *(edx_4 + 0xc)))
                            goto label_4f39e8
                
                eax_19 = &eax_19[1]
            while (eax_19 u< arg4)
            
            edi_2 = var_14
            var_10 = ebp
            var_8_1 = eax_19
        
        bool cond:2_1 = edi_2 != arg2
        
        if (edi_2 u> arg2)
            int32_t* eax_20 = var_14
            void* edi_4 = &eax_20[-1]
            
            do
                void* edx_5 = *edi_4
                void* esi_9 = *ebx
                int32_t ecx_12 = *(edx_5 + 4)
                int32_t temp1_1 = *(esi_9 + 4)
                
                if (ecx_12 s>= temp1_1)
                    if (ecx_12 s> temp1_1)
                    label_4f3a60:
                        int32_t ecx_15 = *(esi_9 + 4)
                        int32_t temp4_1 = *(edx_5 + 4)
                        
                        if (ecx_15 s< temp4_1)
                            break
                        
                        if (ecx_15 s<= temp4_1)
                            int32_t ecx_16 = *(esi_9 + 8)
                            int32_t temp7_1 = *(edx_5 + 8)
                            
                            if (ecx_16 s< temp7_1)
                                break
                            
                            if (ecx_16 s<= temp7_1 && *(esi_9 + 0xc) s< *(edx_5 + 0xc))
                                break
                        
                        ebx -= 4
                        
                        if (ebx != edi_4)
                            int32_t ecx_18 = *ebx
                            *ebx = edx_5
                            *edi_4 = ecx_18
                    else
                        int32_t ecx_13 = *(edx_5 + 8)
                        int32_t temp5_1 = *(esi_9 + 8)
                        
                        if (ecx_13 s>= temp5_1
                                && (ecx_13 s> temp5_1 || *(edx_5 + 0xc) s>= *(esi_9 + 0xc)))
                            goto label_4f3a60
                
                eax_20 -= 4
                edi_4 -= 4
            while (arg2 u< eax_20)
            
            ebp = var_10
            var_14 = eax_20
            edi_2 = var_14
            cond:2_1 = edi_2 != arg2
            eax_19 = var_8_1
        
        if (not(cond:2_1))
            if (eax_19 == arg4)
                arg3[1] = ebp
                *arg3 = ebx
                return arg3
            
            if (ebp != eax_19)
                int32_t edx_6 = *ebx
                *ebx = *ebp
                *ebp = edx_6
            
            int32_t* edi_5 = eax_19
            int32_t* esi_10 = ebx
            ebp = &ebp[1]
            ebx = &ebx[1]
            var_10 = ebp
            eax_19 = &eax_19[1]
            int32_t edx_7 = *esi_10
            *esi_10 = *edi_5
            esi = arg4
            *edi_5 = edx_7
            edi_2 = var_14
            break
        
        esi = arg4
        edi_2 -= 4
        var_14 = edi_2
        
        if (eax_19 != esi)
            int32_t edx_10 = *eax_19
            *eax_19 = *edi_2
            eax_19 = &eax_19[1]
            *edi_2 = edx_10
            break
        
        ebx -= 4
        
        if (edi_2 != ebx)
            int32_t edx_8 = *edi_2
            *edi_2 = *ebx
            *ebx = edx_8
        
        int32_t edx_9 = *ebx
        ebp -= 4
        var_10 = ebp
        *ebx = *ebp
        *ebp = edx_9
