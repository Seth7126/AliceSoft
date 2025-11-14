// 函数: sub_606620
// 地址: 0x606620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg4 - arg2) s/ 0x18)
int32_t* esi = &arg2[((eax_4 - edx_2) s>> 1) * 6]
sub_606ee0(arg4 - 0x18, esi, arg2, arg4 - 0x18, arg5)
int32_t* ecx_3 = &esi[6]
void** var_20 = ecx_3

if (arg2 u< esi)
    void* ecx_4 = &esi[-2]
    void* var_18_1 = ecx_4
    
    do
        int32_t edx_4 = *(ecx_4 + 0x1c)
        int32_t eax_9 = *(ecx_4 + 0x18)
        int32_t var_1c_1 = eax_9
        int32_t* edi_1
        
        if (edx_4 u< 0x10)
            edi_1 = esi
        else
            edi_1 = *esi
        
        int32_t edx_5 = *(ecx_4 + 4)
        int32_t ebp_1 = *ecx_4
        void* ecx_5 = ecx_4 - 0x10
        void* ebx_1
        
        if (edx_5 u< 0x10)
            ebx_1 = ecx_5
        else
            ebx_1 = *ecx_5
        
        int32_t edx_6 = eax_9
        
        if (ebp_1 u< eax_9)
            edx_6 = ebp_1
        
        int32_t eax_11
        int32_t ebx_2
        
        if (edx_6 == 0)
        label_606719:
            ebx_2 = var_1c_1
            
            if (ebp_1 u>= ebx_2)
                eax_11.b = ebp_1 != ebx_2
            else
                eax_11 = 0xffffffff
        else
            int32_t i_14 = edx_6 - 4
            
            if (edx_6 u>= 4)
                int32_t i
                
                do
                    if (*ebx_1 != *edi_1)
                        goto label_6066d9
                    
                    ebx_1 += 4
                    edi_1 = &edi_1[1]
                    i = i_14
                    i_14 -= 4
                while (i u>= 4)
            
            if (i_14 == 0xfffffffc)
                eax_11 = 0
            else
            label_6066d9:
                eax_9.b = *ebx_1
                char temp2_1 = *edi_1
                
                if (eax_9.b != temp2_1)
                    eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp2_1) | 1
                else if (i_14 == 0xfffffffd)
                    eax_11 = 0
                else
                    eax_9.b = *(ebx_1 + 1)
                    char temp11_1 = *(edi_1 + 1)
                    
                    if (eax_9.b != temp11_1)
                        eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp11_1) | 1
                    else if (i_14 == 0xfffffffe)
                        eax_11 = 0
                    else
                        eax_9.b = *(ebx_1 + 2)
                        char temp18_1 = *(edi_1 + 2)
                        
                        if (eax_9.b != temp18_1)
                            eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp18_1) | 1
                        else if (i_14 == 0xffffffff)
                            eax_11 = 0
                        else
                            eax_9.b = *(ebx_1 + 3)
                            char temp24_1 = *(edi_1 + 3)
                            
                            if (eax_9.b == temp24_1)
                                eax_11 = 0
                            else
                                eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp24_1) | 1
            
            if (eax_11 == 0)
                goto label_606719
            
            ebx_2 = var_1c_1
        
        eax_11.b = eax_11 s< 0
        
        if (eax_11.b != 0)
            break
        
        if (edx_5 u>= 0x10)
            ecx_5 = *ecx_5
        
        int32_t* edi_2
        
        if (edx_4 u< 0x10)
            edi_2 = esi
        else
            edi_2 = *esi
        
        int32_t edx_7 = ebp_1
        
        if (ebx_2 u< ebp_1)
            edx_7 = ebx_2
        
        int32_t eax_13
        bool cond:15_1
        
        if (edx_7 == 0)
        label_6067b2:
            
            if (ebx_2 u>= ebp_1)
                eax_13.b = ebx_2 != ebp_1
            else
                eax_13 = 0xffffffff
            
            cond:15_1 = eax_13 s< 0
        else
            int32_t i_15 = edx_7 - 4
            
            if (edx_7 u>= 4)
                int32_t i_1
                
                do
                    if (*edi_2 != *ecx_5)
                        goto label_606776
                    
                    edi_2 = &edi_2[1]
                    ecx_5 += 4
                    i_1 = i_15
                    i_15 -= 4
                while (i_1 u>= 4)
            
            if (i_15 == 0xfffffffc)
                eax_13 = 0
            else
            label_606776:
                eax_11.b = *edi_2
                char temp29_1 = *ecx_5
                
                if (eax_11.b != temp29_1)
                    eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp29_1) | 1
                else if (i_15 == 0xfffffffd)
                    eax_13 = 0
                else
                    eax_11.b = *(edi_2 + 1)
                    char temp36_1 = *(ecx_5 + 1)
                    
                    if (eax_11.b != temp36_1)
                        eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp36_1) | 1
                    else if (i_15 == 0xfffffffe)
                        eax_13 = 0
                    else
                        eax_11.b = *(edi_2 + 2)
                        char temp41_1 = *(ecx_5 + 2)
                        
                        if (eax_11.b != temp41_1)
                            eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp41_1) | 1
                        else if (i_15 == 0xffffffff)
                            eax_13 = 0
                        else
                            eax_11.b = *(edi_2 + 3)
                            char temp48_1 = *(ecx_5 + 3)
                            
                            if (eax_11.b == temp48_1)
                                eax_13 = 0
                            else
                                eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp48_1) | 1
            
            cond:15_1 = eax_13 s< 0
            
            if (eax_13 == 0)
                goto label_6067b2
        
        eax_13.b = cond:15_1
        
        if (eax_13.b != 0)
            break
        
        esi -= 0x18
        ecx_4 = var_18_1 - 0x18
        var_18_1 = ecx_4
    while (arg2 u< esi)
    
    ecx_3 = var_20

void* eax_14 = arg4
int32_t* var_1c_2
int32_t* var_18_2
int32_t* ebx_4
int32_t* ebp_3

if (ecx_3 u>= eax_14)
label_60694b:
    ebx_4 = ecx_3
    ebp_3 = esi
    var_1c_2 = ebx_4
    var_18_2 = ebp_3
else
    int32_t ebp_2 = esi[4]
    
    do
        int32_t* edx_8
        
        if (esi[5] u< 0x10)
            edx_8 = esi
        else
            edx_8 = *esi
        
        int32_t ebx_3 = ecx_3[4]
        void** edi_3
        
        if (ecx_3[5] u< 0x10)
            edi_3 = ecx_3
        else
            edi_3 = *ecx_3
        
        int32_t ecx_7 = ebp_2
        
        if (ebx_3 u< ebp_2)
            ecx_7 = ebx_3
        
        int32_t eax_16
        bool cond:8_1
        
        if (ecx_7 == 0)
        label_606872:
            
            if (ebx_3 u>= ebp_2)
                eax_16.b = ebx_3 != ebp_2
            else
                eax_16 = 0xffffffff
            
            cond:8_1 = eax_16 s< 0
        else
            int32_t i_8 = ecx_7 - 4
            
            if (ecx_7 u>= 4)
                int32_t i_2
                
                do
                    if (*edi_3 != *edx_8)
                        goto label_606836
                    
                    edi_3 = &edi_3[1]
                    edx_8 = &edx_8[1]
                    i_2 = i_8
                    i_8 -= 4
                while (i_2 u>= 4)
            
            if (i_8 == 0xfffffffc)
                eax_16 = 0
            else
            label_606836:
                eax_14.b = *edi_3
                char temp7_1 = *edx_8
                
                if (eax_14.b != temp7_1)
                    eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp7_1) | 1
                else if (i_8 == 0xfffffffd)
                    eax_16 = 0
                else
                    eax_14.b = *(edi_3 + 1)
                    char temp14_1 = *(edx_8 + 1)
                    
                    if (eax_14.b != temp14_1)
                        eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp14_1) | 1
                    else if (i_8 == 0xfffffffe)
                        eax_16 = 0
                    else
                        eax_14.b = *(edi_3 + 2)
                        char temp21_1 = *(edx_8 + 2)
                        
                        if (eax_14.b != temp21_1)
                            eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp21_1) | 1
                        else if (i_8 == 0xffffffff)
                            eax_16 = 0
                        else
                            eax_14.b = *(edi_3 + 3)
                            char temp26_1 = *(edx_8 + 3)
                            
                            if (eax_14.b == temp26_1)
                                eax_16 = 0
                            else
                                eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp26_1) | 1
            
            cond:8_1 = eax_16 s< 0
            
            if (eax_16 == 0)
                goto label_606872
        
        eax_16.b = cond:8_1
        
        if (eax_16.b != 0)
            ecx_3 = var_20
            eax_14 = arg4
            goto label_60694b
        
        void** edx_9 = var_20
        
        if (edx_9[5] u>= 0x10)
            edx_9 = *edx_9
        
        int32_t* edi_4
        
        if (esi[5] u< 0x10)
            edi_4 = esi
        else
            edi_4 = *esi
        
        int32_t ecx_8 = ebx_3
        
        if (ebp_2 u< ebx_3)
            ecx_8 = ebp_2
        
        int32_t eax_18
        bool cond:16_1
        
        if (ecx_8 == 0)
        label_606907:
            
            if (ebp_2 u>= ebx_3)
                eax_18.b = ebp_2 != ebx_3
            else
                eax_18 = 0xffffffff
            
            cond:16_1 = eax_18 s< 0
        else
            int32_t i_9 = ecx_8 - 4
            
            if (ecx_8 u>= 4)
                int32_t i_3
                
                do
                    if (*edi_4 != *edx_9)
                        goto label_6068cb
                    
                    edi_4 = &edi_4[1]
                    edx_9 = &edx_9[1]
                    i_3 = i_9
                    i_9 -= 4
                while (i_3 u>= 4)
            
            if (i_9 == 0xfffffffc)
                eax_18 = 0
            else
            label_6068cb:
                eax_16.b = *edi_4
                char temp34_1 = *edx_9
                
                if (eax_16.b != temp34_1)
                    eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp34_1) | 1
                else if (i_9 == 0xfffffffd)
                    eax_18 = 0
                else
                    eax_16.b = *(edi_4 + 1)
                    char temp40_1 = *(edx_9 + 1)
                    
                    if (eax_16.b != temp40_1)
                        eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp40_1) | 1
                    else if (i_9 == 0xfffffffe)
                        eax_18 = 0
                    else
                        eax_16.b = *(edi_4 + 2)
                        char temp47_1 = *(edx_9 + 2)
                        
                        if (eax_16.b != temp47_1)
                            eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp47_1) | 1
                        else if (i_9 == 0xffffffff)
                            eax_18 = 0
                        else
                            eax_16.b = *(edi_4 + 3)
                            char temp52_1 = *(edx_9 + 3)
                            
                            if (eax_16.b == temp52_1)
                                eax_18 = 0
                            else
                                eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp52_1) | 1
            
            cond:16_1 = eax_18 s< 0
            
            if (eax_18 == 0)
                goto label_606907
        
        ecx_3 = var_20
        eax_18.b = cond:16_1
        eax_14 = arg4
        
        if (eax_18.b != 0)
            goto label_60694b
        
        ecx_3 = &ecx_3[6]
        var_20 = ecx_3
    while (ecx_3 u< eax_14)
    
    ebx_4 = ecx_3
    ebp_3 = esi
    var_1c_2 = ebx_4
    var_18_2 = ebp_3

while (true)
    if (ebx_4 u< eax_14)
        int32_t* var_1c_3 = &ecx_3[-1]
        
        do
            int32_t eax_20 = ebx_4[4]
            int32_t* edx_10
            
            if (ebx_4[5] u< 0x10)
                edx_10 = ebx_4
            else
                edx_10 = *ebx_4
            
            int32_t ebp_4 = esi[4]
            int32_t* edi_5
            
            if (esi[5] u< 0x10)
                edi_5 = esi
            else
                edi_5 = *esi
            
            int32_t ecx_9 = eax_20
            
            if (ebp_4 u< eax_20)
                ecx_9 = ebp_4
            
            if (ecx_9 == 0)
                goto label_6069f6
            
            int32_t i_10 = ecx_9 - 4
            
            if (ecx_9 u>= 4)
                int32_t i_4
                
                do
                    if (*edi_5 != *edx_10)
                        goto label_6069b7
                    
                    edi_5 = &edi_5[1]
                    edx_10 = &edx_10[1]
                    i_4 = i_10
                    i_10 -= 4
                while (i_4 u>= 4)
            
            int32_t eax_22
            
            if (i_10 == 0xfffffffc)
                eax_22 = 0
            else
            label_6069b7:
                eax_20.b = *edi_5
                char temp12_1 = *edx_10
                
                if (eax_20.b != temp12_1)
                    eax_22 = sbb.d(eax_20, eax_20, eax_20.b u< temp12_1) | 1
                else if (i_10 == 0xfffffffd)
                    eax_22 = 0
                else
                    eax_20.b = *(edi_5 + 1)
                    char temp20_1 = *(edx_10 + 1)
                    
                    if (eax_20.b != temp20_1)
                        eax_22 = sbb.d(eax_20, eax_20, eax_20.b u< temp20_1) | 1
                    else if (i_10 == 0xfffffffe)
                        eax_22 = 0
                    else
                        eax_20.b = *(edi_5 + 2)
                        char temp25_1 = *(edx_10 + 2)
                        
                        if (eax_20.b != temp25_1)
                            eax_22 = sbb.d(eax_20, eax_20, eax_20.b u< temp25_1) | 1
                        else if (i_10 == 0xffffffff)
                            eax_22 = 0
                        else
                            eax_20.b = *(edi_5 + 3)
                            char temp31_1 = *(edx_10 + 3)
                            
                            if (eax_20.b == temp31_1)
                                eax_22 = 0
                            else
                                eax_22 = sbb.d(eax_20, eax_20, eax_20.b u< temp31_1) | 1
            
            bool cond:11_1 = eax_22 s< 0
            
            if (eax_22 == 0)
                eax_20 = ebx_4[4]
            label_6069f6:
                
                if (ebp_4 u>= eax_20)
                    eax_22.b = ebp_4 != ebx_4[4]
                else
                    eax_22 = 0xffffffff
                
                cond:11_1 = eax_22 s< 0
            
            eax_22.b = cond:11_1
            
            if (eax_22.b == 0)
                int32_t* edi_6
                
                if (esi[5] u< 0x10)
                    edi_6 = esi
                else
                    edi_6 = *esi
                
                int32_t* edx_11
                
                if (ebx_4[5] u< 0x10)
                    edx_11 = ebx_4
                else
                    edx_11 = *ebx_4
                
                int32_t eax_23 = ebx_4[4]
                int32_t ecx_10 = ebp_4
                
                if (eax_23 u< ebp_4)
                    ecx_10 = eax_23
                
                if (ecx_10 == 0)
                    goto label_606a95
                
                int32_t i_11 = ecx_10 - 4
                
                if (ecx_10 u>= 4)
                    int32_t i_5
                    
                    do
                        if (*edx_11 != *edi_6)
                            goto label_606a56
                        
                        edx_11 = &edx_11[1]
                        edi_6 = &edi_6[1]
                        i_5 = i_11
                        i_11 -= 4
                    while (i_5 u>= 4)
                
                int32_t eax_25
                
                if (i_11 == 0xfffffffc)
                    eax_25 = 0
                else
                label_606a56:
                    eax_23.b = *edx_11
                    char temp42_1 = *edi_6
                    
                    if (eax_23.b != temp42_1)
                        eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp42_1) | 1
                    else if (i_11 == 0xfffffffd)
                        eax_25 = 0
                    else
                        eax_23.b = *(edx_11 + 1)
                        char temp50_1 = *(edi_6 + 1)
                        
                        if (eax_23.b != temp50_1)
                            eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp50_1) | 1
                        else if (i_11 == 0xfffffffe)
                            eax_25 = 0
                        else
                            eax_23.b = *(edx_11 + 2)
                            char temp53_1 = *(edi_6 + 2)
                            
                            if (eax_23.b != temp53_1)
                                eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp53_1) | 1
                            else if (i_11 == 0xffffffff)
                                eax_25 = 0
                            else
                                eax_23.b = *(edx_11 + 3)
                                char temp57_1 = *(edi_6 + 3)
                                
                                if (eax_23.b == temp57_1)
                                    eax_25 = 0
                                else
                                    eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp57_1) | 1
                
                bool cond:18_1 = eax_25 s< 0
                
                if (eax_25 == 0)
                    eax_23 = ebx_4[4]
                label_606a95:
                    
                    if (eax_23 u>= ebp_4)
                        eax_25.b = ebx_4[4] != ebp_4
                    else
                        eax_25 = 0xffffffff
                    
                    cond:18_1 = eax_25 s< 0
                
                eax_25.b = cond:18_1
                
                if (eax_25.b != 0)
                    break
                
                void** eax_26 = var_20
                int32_t* edi_8 = &var_1c_3[6]
                var_20 = &var_20[6]
                var_1c_3 = edi_8
                
                if (eax_26 != ebx_4 && &edi_8[-5] != ebx_4)
                    sub_607920(&edi_8[-5], ebx_4)
                    int32_t ecx_14 = edi_8[-1]
                    edi_8[-1] = ebx_4[4]
                    ebx_4[4] = ecx_14
                    int32_t ecx_15 = *edi_8
                    *edi_8 = ebx_4[5]
                    ebx_4[5] = ecx_15
            
            ebx_4 = &ebx_4[6]
        while (ebx_4 u< arg4)
        
        ebp_3 = var_18_2
        var_1c_2 = ebx_4
    
    bool cond:2_1 = ebp_3 != arg2
    
    if (ebp_3 u> arg2)
        int32_t* ebx_5 = &ebp_3[-6]
        int32_t* var_c_2 = ebx_5
        int32_t* eax_43
        
        do
            int32_t eax_31 = esi[4]
            int32_t* edx_12
            
            if (esi[5] u< 0x10)
                edx_12 = esi
            else
                edx_12 = *esi
            
            int32_t ebp_5 = ebx_5[4]
            int32_t* edi_9
            
            if (ebx_5[5] u< 0x10)
                edi_9 = ebx_5
            else
                edi_9 = *ebx_5
            
            int32_t ecx_16 = eax_31
            
            if (ebp_5 u< eax_31)
                ecx_16 = ebp_5
            
            if (ecx_16 == 0)
                goto label_606b9a
            
            int32_t i_12 = ecx_16 - 4
            
            if (ecx_16 u>= 4)
                int32_t i_6
                
                do
                    if (*edi_9 != *edx_12)
                        goto label_606b5b
                    
                    edi_9 = &edi_9[1]
                    edx_12 = &edx_12[1]
                    i_6 = i_12
                    i_12 -= 4
                while (i_6 u>= 4)
            
            int32_t eax_33
            
            if (i_12 == 0xfffffffc)
                eax_33 = 0
            else
            label_606b5b:
                eax_31.b = *edi_9
                char temp15_1 = *edx_12
                
                if (eax_31.b != temp15_1)
                    eax_33 = sbb.d(eax_31, eax_31, eax_31.b u< temp15_1) | 1
                else if (i_12 == 0xfffffffd)
                    eax_33 = 0
                else
                    eax_31.b = *(edi_9 + 1)
                    char temp22_1 = *(edx_12 + 1)
                    
                    if (eax_31.b != temp22_1)
                        eax_33 = sbb.d(eax_31, eax_31, eax_31.b u< temp22_1) | 1
                    else if (i_12 == 0xfffffffe)
                        eax_33 = 0
                    else
                        eax_31.b = *(edi_9 + 2)
                        char temp27_1 = *(edx_12 + 2)
                        
                        if (eax_31.b != temp27_1)
                            eax_33 = sbb.d(eax_31, eax_31, eax_31.b u< temp27_1) | 1
                        else if (i_12 == 0xffffffff)
                            eax_33 = 0
                        else
                            eax_31.b = *(edi_9 + 3)
                            char temp33_1 = *(edx_12 + 3)
                            
                            if (eax_31.b == temp33_1)
                                eax_33 = 0
                            else
                                eax_33 = sbb.d(eax_31, eax_31, eax_31.b u< temp33_1) | 1
            
            bool cond:14_1 = eax_33 s< 0
            
            if (eax_33 == 0)
                eax_31 = esi[4]
            label_606b9a:
                
                if (ebp_5 u>= eax_31)
                    eax_33.b = ebp_5 != esi[4]
                else
                    eax_33 = 0xffffffff
                
                cond:14_1 = eax_33 s< 0
            
            eax_33.b = cond:14_1
            
            if (eax_33.b == 0)
                int32_t* edi_10
                
                if (ebx_5[5] u< 0x10)
                    edi_10 = ebx_5
                else
                    edi_10 = *ebx_5
                
                int32_t* edx_13
                
                if (esi[5] u< 0x10)
                    edx_13 = esi
                else
                    edx_13 = *esi
                
                int32_t eax_34 = esi[4]
                int32_t ecx_17 = ebp_5
                
                if (eax_34 u< ebp_5)
                    ecx_17 = eax_34
                
                if (ecx_17 == 0)
                    goto label_606c36
                
                int32_t i_13 = ecx_17 - 4
                
                if (ecx_17 u>= 4)
                    int32_t i_7
                    
                    do
                        if (*edx_13 != *edi_10)
                            goto label_606bf7
                        
                        edx_13 = &edx_13[1]
                        edi_10 = &edi_10[1]
                        i_7 = i_13
                        i_13 -= 4
                    while (i_7 u>= 4)
                
                int32_t eax_36
                
                if (i_13 == 0xfffffffc)
                    eax_36 = 0
                else
                label_606bf7:
                    eax_34.b = *edx_13
                    char temp43_1 = *edi_10
                    
                    if (eax_34.b != temp43_1)
                        eax_36 = sbb.d(eax_34, eax_34, eax_34.b u< temp43_1) | 1
                    else if (i_13 == 0xfffffffd)
                        eax_36 = 0
                    else
                        eax_34.b = *(edx_13 + 1)
                        char temp51_1 = *(edi_10 + 1)
                        
                        if (eax_34.b != temp51_1)
                            eax_36 = sbb.d(eax_34, eax_34, eax_34.b u< temp51_1) | 1
                        else if (i_13 == 0xfffffffe)
                            eax_36 = 0
                        else
                            eax_34.b = *(edx_13 + 2)
                            char temp54_1 = *(edi_10 + 2)
                            
                            if (eax_34.b != temp54_1)
                                eax_36 = sbb.d(eax_34, eax_34, eax_34.b u< temp54_1) | 1
                            else if (i_13 == 0xffffffff)
                                eax_36 = 0
                            else
                                eax_34.b = *(edx_13 + 3)
                                char temp58_1 = *(edi_10 + 3)
                                
                                if (eax_34.b == temp58_1)
                                    eax_36 = 0
                                else
                                    eax_36 = sbb.d(eax_34, eax_34, eax_34.b u< temp58_1) | 1
                
                bool cond:20_1 = eax_36 s< 0
                
                if (eax_36 == 0)
                    eax_34 = esi[4]
                label_606c36:
                    
                    if (eax_34 u>= ebp_5)
                        eax_36.b = esi[4] != ebp_5
                    else
                        eax_36 = 0xffffffff
                    
                    cond:20_1 = eax_36 s< 0
                
                eax_36.b = cond:20_1
                
                if (eax_36.b != 0)
                    ebp_3 = var_18_2
                    eax_43 = arg2
                    break
                
                esi -= 0x18
                
                if (esi != ebx_5)
                    void* ebp_6 = &esi[4]
                    
                    if (esi[5] u< 0x10)
                        if (ebx_5[5] u>= 0x10)
                            void* eax_44 = *ebp_6
                            int32_t edi_13 = *ebx_5
                            
                            if (eax_44 != 0xffffffff)
                                sub_69d850(ebx_5, esi, eax_44 + 1)
                            
                            *esi = edi_13
                        else
                            int32_t ebp_7 = ebp_6 - esi
                            int32_t edi_12 = 0
                            char* edx_14 = esi
                            
                            if (esi u> &esi[4])
                                ebp_7 = 0
                            
                            if (ebp_7 != 0)
                                int32_t* var_8_2 = ebx_5
                                void* ebx_6 = ebx_5 - esi
                                
                                do
                                    void* eax_40
                                    eax_40.b = *(edx_14 + ebx_6)
                                    edx_14 = &edx_14[1]
                                    char ecx_19 = edx_14[0xffffffff]
                                    edi_12 += 1
                                    edx_14[0xffffffff] = eax_40.b
                                    *(edx_14 + ebx_6 - 1) = ecx_19
                                while (edi_12 != ebp_7)
                                
                                ebx_5 = var_c_2
                            
                            ebp_6 = &esi[4]
                    else if (ebx_5[5] u< 0x10)
                        void* eax_38 = ebx_5[4]
                        int32_t edi_11 = *esi
                        
                        if (eax_38 != 0xffffffff)
                            sub_69d850(esi, ebx_5, eax_38 + 1)
                        
                        *ebx_5 = edi_11
                    else
                        int32_t ecx_18 = *esi
                        *esi = *ebx_5
                        *ebx_5 = ecx_18
                    
                    int32_t ecx_20 = *ebp_6
                    *ebp_6 = ebx_5[4]
                    ebx_5[4] = ecx_20
                    int32_t ecx_21 = *(ebp_6 + 4)
                    *(ebp_6 + 4) = ebx_5[5]
                    ebx_5[5] = ecx_21
            
            ebx_5 -= 0x18
            eax_43 = arg2
            ebp_3 = var_18_2 - 0x18
            var_18_2 = ebp_3
            var_c_2 = ebx_5
        while (eax_43 u< ebp_3)
        
        ebx_4 = var_1c_2
        cond:2_1 = ebp_3 != eax_43
    
    if (cond:2_1)
        ebp_3 -= 0x18
        var_18_2 = ebp_3
        
        if (ebx_4 != arg4)
            sub_606fa0(ebx_4, ebp_3)
            ecx_3 = var_20
            ebx_4 = &ebx_4[6]
            eax_14 = arg4
            var_1c_2 = ebx_4
        else
            esi -= 0x18
            
            if (ebp_3 != esi)
                sub_607920(ebp_3, esi)
                int32_t ecx_30 = ebp_3[4]
                ebp_3[4] = esi[4]
                esi[4] = ecx_30
                int32_t ecx_31 = ebp_3[5]
                ebp_3[5] = esi[5]
                esi[5] = ecx_31
            
            void* edx_18 = var_20 - 0x18
            var_20 = edx_18
            sub_606fa0(esi, edx_18)
            ecx_3 = var_20
            eax_14 = arg4
    else
        eax_14 = arg4
        
        if (ebx_4 == eax_14)
            break
        
        void** ecx_22 = var_20
        
        if (ecx_22 != ebx_4 && esi != ecx_22)
            void** edx_15
            
            if (esi[5] u< 0x10)
                if (ecx_22[5] u>= 0x10)
                    void* eax_54 = esi[4]
                    void* edi_17 = *ecx_22
                    
                    if (eax_54 != 0xffffffff)
                        sub_69d850(ecx_22, esi, eax_54 + 1)
                    
                    *esi = edi_17
                else
                    int32_t edi_15 = 0
                    void* ebx_8 = 0x10
                    void* edx_16 = esi
                    
                    if (esi u> &esi[4])
                        ebx_8 = nullptr
                    
                    if (ebx_8 != 0)
                        int32_t ebp_10 = ecx_22 - esi
                        
                        do
                            void* eax_49
                            eax_49.b = *(edx_16 + ebp_10)
                            edx_16 += 1
                            ecx_22.b = *(edx_16 - 1)
                            edi_15 += 1
                            *(edx_16 - 1) = eax_49.b
                            *(edx_16 + ebp_10 - 1) = ecx_22.b
                        while (edi_15 != ebx_8)
                    
                    ebx_4 = var_1c_2
                
                edx_15 = var_20
            else if (ecx_22[5] u< 0x10)
                void* eax_47 = ecx_22[4]
                void* edi_14 = *esi
                
                if (eax_47 != 0xffffffff)
                    sub_69d850(esi, ecx_22, eax_47 + 1)
                    ecx_22 = var_20
                
                *ecx_22 = edi_14
                edx_15 = var_20
            else
                edx_15 = var_20
                void* ecx_23 = *esi
                *esi = *edx_15
                *edx_15 = ecx_23
            
            int32_t ecx_24 = esi[4]
            esi[4] = edx_15[4]
            edx_15[4] = ecx_24
            int32_t ecx_25 = esi[5]
            esi[5] = edx_15[5]
            eax_14 = arg4
            edx_15[5] = ecx_25
            ecx_22 = var_20
        
        int32_t* edi_16 = ebx_4
        void* ebp_11 = esi
        ecx_3 = &ecx_22[6]
        ebx_4 = &ebx_4[6]
        esi = &esi[6]
        var_20 = ecx_3
        var_1c_2 = ebx_4
        
        if (ebp_11 != edi_16)
            sub_607920(ebp_11, edi_16)
            int32_t ecx_27 = *(ebp_11 + 0x10)
            *(ebp_11 + 0x10) = edi_16[4]
            edi_16[4] = ecx_27
            int32_t ecx_28 = *(ebp_11 + 0x14)
            *(ebp_11 + 0x14) = edi_16[5]
            eax_14 = arg4
            edi_16[5] = ecx_28
            ecx_3 = var_20
        
        ebp_3 = var_18_2

*arg3 = esi
arg3[1] = var_20
return arg3
