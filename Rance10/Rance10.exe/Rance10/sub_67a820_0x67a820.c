// 函数: sub_67a820
// 地址: 0x67a820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = *(*(arg1 + 0x1c0) + 0x18)
int32_t esi = *arg2
int32_t ecx = arg2[2]
int32_t ebp = arg2[3]
int32_t edx = arg2[4]
int32_t edi = arg2[1]
int32_t ebx_1 = arg2[5]
int32_t var_1c = esi
int32_t var_24 = edi
int32_t var_20 = ecx
int32_t var_c = ebp
int32_t var_28 = edx

if (edi s> esi)
    int32_t eax_2 = esi
    int32_t var_10_1 = esi
    
    do
        int32_t esi_1 = ecx
        
        if (ecx s<= ebp)
            int16_t* edi_1 = *(eax_1 + (eax_2 << 2)) + (((ecx << 5) + edx) << 1)
            int32_t eax_4 = var_28
            
            do
                int16_t* edx_2 = edi_1
                int32_t ecx_3 = eax_4
                
                if (eax_4 s<= ebx_1)
                    do
                        eax_4.w = *edx_2
                        edx_2 = &edx_2[1]
                        
                        if (eax_4.w != 0)
                            esi = var_10_1
                            edi = var_24
                            var_1c = var_10_1
                            *arg2 = var_10_1
                            goto label_67a8dd
                        
                        ecx_3 += 1
                    while (ecx_3 s<= ebx_1)
                    
                    eax_4 = var_28
                
                esi_1 += 1
                edi_1 = &edi_1[0x20]
            while (esi_1 s<= ebp)
            
            eax_2 = var_10_1
            edx = var_28
            ecx = var_20
            edi = var_24
        
        eax_2 += 1
        var_10_1 = eax_2
    while (eax_2 s<= edi)
    
    esi = var_1c
label_67a8dd:
    
    if (edi s<= esi)
    label_67a97f:
        ecx = var_20
    else
        ecx = var_20
        int32_t eax_5 = edi
        int32_t var_10_2 = edi
        
        do
            int32_t esi_2 = ecx
            
            if (ecx s<= ebp)
                int16_t* edi_2 = *(eax_1 + (eax_5 << 2)) + (((ecx << 5) + var_28) << 1)
                int32_t eax_7 = var_28
                
                do
                    int16_t* edx_4 = edi_2
                    int32_t ecx_6 = eax_7
                    
                    if (eax_7 s<= ebx_1)
                        do
                            eax_7.w = *edx_4
                            edx_4 = &edx_4[1]
                            
                            if (eax_7.w != 0)
                                esi = var_1c
                                var_24 = var_10_2
                                arg2[1] = var_10_2
                                goto label_67a97f
                            
                            ecx_6 += 1
                        while (ecx_6 s<= ebx_1)
                        
                        eax_7 = var_28
                    
                    esi_2 += 1
                    edi_2 = &edi_2[0x20]
                while (esi_2 s<= ebp)
                
                eax_5 = var_10_2
                ecx = var_20
            
            esi = var_1c
            eax_5 -= 1
            var_10_2 = eax_5
        while (eax_5 s>= esi)
    
    edx = var_28

if (ebp s> ecx)
    int32_t eax_10 = ecx
    int32_t ecx_9 = var_24
    int32_t var_10_3 = eax_10
    int32_t edi_6 = ((ecx << 5) + edx) * 2
    
    while (true)
        if (var_1c s<= ecx_9)
            int32_t eax_11 = var_24
            
            do
                int16_t* ecx_12 = *(eax_1 + (esi << 2)) + edi_6
                
                if (var_28 s<= ebx_1)
                    do
                        eax_11.w = *ecx_12
                        ecx_12 = &ecx_12[1]
                        
                        if (eax_11.w != 0)
                            ecx = var_10_3
                            var_20 = var_10_3
                            arg2[2] = var_10_3
                            goto label_67aa0e
                        
                        edx += 1
                    while (edx s<= ebx_1)
                    
                    eax_11 = var_24
                
                edx = var_28
                esi += 1
            while (esi s<= eax_11)
            
            eax_10 = var_10_3
            ecx_9 = var_24
        
        eax_10 += 1
        edi_6 += 0x40
        var_10_3 = eax_10
        
        if (eax_10 s> ebp)
            break
        
        esi = var_1c
    
    ecx = var_20
label_67aa0e:
    
    if (ebp s> ecx)
        int32_t edx_6 = var_24
        int32_t eax_13 = ebp
        int32_t var_10_4 = eax_13
        int32_t edi_10 = ((ebp << 5) + var_28) * 2
        
        do
            int32_t esi_3 = var_1c
            
            if (esi_3 s<= edx_6)
                int32_t eax_14 = var_28
                
                do
                    int32_t edx_7 = eax_14
                    int16_t* ecx_15 = *(eax_1 + (esi_3 << 2)) + edi_10
                    
                    if (eax_14 s<= ebx_1)
                        do
                            eax_14.w = *ecx_15
                            ecx_15 = &ecx_15[1]
                            
                            if (eax_14.w != 0)
                                ebp = var_10_4
                                var_c = var_10_4
                                arg2[3] = var_10_4
                                ecx = var_20
                                goto label_67aa90
                            
                            edx_7 += 1
                        while (edx_7 s<= ebx_1)
                        
                        eax_14 = var_28
                    
                    esi_3 += 1
                while (esi_3 s<= var_24)
                
                eax_13 = var_10_4
                ecx = var_20
                edx_6 = var_24
            
            eax_13 -= 1
            edi_10 -= 0x40
            var_10_4 = eax_13
        while (eax_13 s>= ecx)

label_67aa90:

if (ebx_1 s> var_28)
    int32_t esi_4 = var_1c
    int32_t edi_11 = var_28
    int32_t eax_17 = var_24
    int32_t eax_21
    
    while (true)
        int32_t edx_8 = esi_4
        
        if (esi_4 s<= eax_17)
            int32_t esi_7 = (ecx << 5) + edi_11
            
            while (true)
                int16_t* eax_20 = *(eax_1 + (edx_8 << 2)) + esi_7 * 2
                
                if (var_20 s<= ebp)
                    while (*eax_20 == 0)
                        ecx += 1
                        eax_20 = &eax_20[0x20]
                        
                        if (ecx s> ebp)
                            goto label_67aad4
                    
                    eax_21 = edi_11
                    var_28 = eax_21
                    arg2[4] = edi_11
                    break
                
            label_67aad4:
                eax_17 = var_24
                edx_8 += 1
                
                if (edx_8 s> eax_17)
                    esi_4 = var_1c
                    goto label_67aae1
                
                ecx = var_20
            
            break
        
    label_67aae1:
        edi_11 += 1
        
        if (edi_11 s> ebx_1)
            eax_21 = var_28
            break
        
        ecx = var_20
    
    if (ebx_1 s> eax_21)
        int32_t ecx_18 = var_24
        int32_t edi_12 = ebx_1
        int32_t esi_9 = var_1c
        
        do
            int32_t edx_9 = esi_9
            
            if (esi_9 s<= ecx_18)
                int32_t ecx_19 = var_20
                int32_t esi_12 = (ecx_19 << 5) + edi_12
                
                while (true)
                    int16_t* eax_24 = *(eax_1 + (edx_9 << 2)) + esi_12 * 2
                    
                    if (var_20 s<= ebp)
                        while (*eax_24 == 0)
                            ecx_19 += 1
                            eax_24 = &eax_24[0x20]
                            
                            if (ecx_19 s> ebp)
                                goto label_67ab46
                        
                        ebx_1 = edi_12
                        arg2[5] = edi_12
                        break
                    
                label_67ab46:
                    edx_9 += 1
                    
                    if (edx_9 s> var_24)
                        eax_21 = var_28
                        ecx_18 = var_24
                        esi_9 = var_1c
                        goto label_67ab59
                    
                    ecx_19 = var_20
                
                break
            
        label_67ab59:
            edi_12 -= 1
        while (edi_12 s>= eax_21)

int32_t eax_27 = ebp - var_20
int32_t edi_14 = ebx_1 - var_28
int32_t esi_14 = 0
int32_t edx_12 = (var_24 - var_1c) << 4
int32_t ecx_21 = eax_27 * 0xc
int32_t eax_28 = edi_14 << 3
int32_t var_4 = edi_14
int32_t eax_31 = eax_28 * eax_28 + ecx_21 * ecx_21 + edx_12 * edx_12
int32_t edx_14 = var_1c
arg2[6] = eax_31

if (edx_14 s> var_24)
    arg2[7] = 0
    return eax_31

int32_t eax_32 = var_20
int32_t ecx_24 = var_24

do
    if (eax_32 s<= ebp)
        int16_t* ebp_1 = *(eax_1 + (edx_14 << 2)) + (((eax_32 << 5) + var_28) << 1)
        int32_t ecx_28 = var_28
        int32_t i_1 = eax_27 + 1
        int32_t i_2 = i_1
        int32_t i
        
        do
            int16_t* edx_15 = ebp_1
            
            if (ecx_28 s<= ebx_1)
                int32_t j_1 = edi_14 + 1
                int32_t j
                
                do
                    int32_t ecx_29 = esi_14 + 1
                    bool cond:1_1 = *edx_15 == 0
                    edx_15 = &edx_15[1]
                    
                    if (cond:1_1)
                        ecx_29 = esi_14
                    
                    esi_14 = ecx_29
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i_1 = i_2
                edi_14 = var_4
                ecx_28 = var_28
            
            ebp_1 = &ebp_1[0x20]
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
        ebp = var_c
        eax_32 = var_20
        ecx_24 = var_24
        edx_14 = var_1c
    
    edx_14 += 1
    var_1c = edx_14
while (edx_14 s<= ecx_24)

arg2[7] = esi_14
return arg2
