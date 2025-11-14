// 函数: sub_577220
// 地址: 0x577220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg3
void* eax_5

if (sub_468d00(arg2, ebp).b == 0)
labelid_1:
    eax_5.b = 0
else
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
    labelid_1:
        eax_5.b = 0
    else
        *(ebp + 0x18) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        uint32_t var_70
        
        if (sub_468b20(arg2, &var_70).b == 0)
        labelid_1:
            eax_5.b = 0
        else
            uint32_t ebx_1 = var_70
            void* esi_1 = ebp + 0x1c
            uint32_t var_6c = esi_1
            sub_578bd0(esi_1, ebx_1)
            void* var_60_1 = nullptr
            uint32_t var_74
            uint32_t var_68
            uint32_t i_6
            
            if (ebx_1 s> 0)
                int32_t ecx_10 = 0
                int32_t var_64_1 = 0
                
                while (true)
                    char* edx_2 = *(arg2 + 4)
                    uint32_t* esi_3 = *esi_1 + ecx_10
                    
                    if (&edx_2[4] u> *(arg2 + 8))
                        goto label_5773ea_2
                    
                    uint32_t ecx_17 =
                        ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                        | zx.d(*edx_2)
                    *(arg2 + 4) = &edx_2[4]
                    *esi_3 = ecx_17
                    
                    if (sub_468bc0(arg2, &esi_3[1]).b == 0)
                        goto label_5773ea_2
                    
                    if (sub_468bc0(arg2, &esi_3[2]).b == 0)
                        goto label_5773ea_2
                    
                    float xmm1_1 = *(arg1 + 4)
                    *esi_3 = *esi_3 f* xmm1_1
                    float xmm1_2 = xmm1_1 f* esi_3[2]
                    esi_3[1] = esi_3[1] f* xmm1_1
                    esi_3[2] = xmm1_2
                    uint32_t i_5
                    
                    if (*(arg1 + 8) s> 1)
                        if (sub_468ae0(arg2, &var_68).b == 0)
                            goto label_5773ea_2
                        
                        i_5 = sx.d(var_68.w)
                        i_6 = i_5
                    else
                        if (sub_468b20(arg2, &i_6).b == 0)
                            goto label_5773ea_2
                        
                        i_5 = i_6
                    
                    void* esi_4 = &esi_3[3]
                    void* var_58_1 = esi_4
                    sub_578af0(esi_4, i_5)
                    int32_t var_54_1 = 0
                    int32_t xmm1_3 = (zx.o(0)).d
                    
                    if (i_5 s> 0)
                        int32_t ebp_2 = 0
                        int32_t eax_16
                        
                        do
                            uint32_t* esi_6 = *esi_4 + ebp_2
                            
                            if (*(arg1 + 8) s> 1)
                                if (sub_468ae0(arg2, &var_74).b == 0)
                                    goto label_5773ea_2
                                
                                *esi_6 = sx.d(var_74.w)
                            else if (sub_468b20(arg2, esi_6).b == 0)
                                goto label_5773ea_2
                            
                            if (sub_468bc0(arg2, &esi_6[2]).b == 0)
                                goto label_5773ea_2
                            
                            ebp_2 += 0xc
                            xmm1_3 = xmm1_3 f+ esi_6[2]
                            esi_4 = var_58_1
                            eax_16 = var_54_1 + 1
                            var_54_1 = eax_16
                        while (eax_16 s< i_5)
                        
                        if (i_5 s> 0 && (0.949999988f f> xmm1_3 || not(xmm1_3 f<= 1.04999995f)))
                            int32_t ecx_27 = 0
                            uint32_t i
                            
                            do
                                if (not(xmm1_3 f<= 0))
                                    int32_t eax_17 = *var_58_1
                                    *(ecx_27 + eax_17 + 8) = *(ecx_27 + eax_17 + 8) f/ xmm1_3
                                
                                ecx_27 += 0xc
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                    
                    eax_5 = var_60_1 + 1
                    ecx_10 = var_64_1 + 0x18
                    var_60_1 = eax_5
                    var_64_1 = ecx_10
                    
                    if (eax_5 s>= var_70)
                        ebp = arg3
                        break
                    
                    esi_1 = var_6c
            
            char* ecx_29 = *(arg2 + 4)
            
            if (&ecx_29[4] u> *(arg2 + 8))
            labelid_1:
                eax_5.b = 0
            else
                uint32_t ebx_10 =
                    ((zx.d(ecx_29[3]) << 8 | zx.d(ecx_29[2])) << 8 | zx.d(ecx_29[1])) << 8
                    | zx.d(*ecx_29)
                *(arg2 + 4) = &ecx_29[4]
                sub_544290(ebp + 0x28, ebx_10)
                eax_5 = nullptr
                var_70 = 0
                
                if (ebx_10 s> 0)
                    do
                        char* edx_5 = *(arg2 + 4)
                        int32_t eax_22 = eax_5 << 3
                        uint32_t* ebp_4 = *(ebp + 0x28) + eax_22
                        var_6c = eax_22
                        
                        if (&edx_5[4] u> *(arg2 + 8))
                            goto label_5773ea_2
                        
                        uint32_t ecx_37 =
                            ((zx.d(edx_5[3]) << 8 | zx.d(edx_5[2])) << 8 | zx.d(edx_5[1])) << 8
                            | zx.d(*edx_5)
                        *(arg2 + 4) = &edx_5[4]
                        *ebp_4 = ecx_37
                        char* edx_6 = *(arg2 + 4)
                        void* ebp_6 = *(ebp + 0x28) + var_6c
                        
                        if (&edx_6[4] u> *(arg2 + 8))
                            goto label_5773ea_2
                        
                        uint32_t ecx_44 =
                            ((zx.d(edx_6[3]) << 8 | zx.d(edx_6[2])) << 8 | zx.d(edx_6[1])) << 8
                            | zx.d(*edx_6)
                        *(arg2 + 4) = &edx_6[4]
                        eax_5 = var_70 + 1
                        var_6c = ecx_44
                        *(ebp_6 + 4) = var_6c
                        var_70 = eax_5
                    while (eax_5 s< ebx_10)
                
                void* ebp_11 = arg1
                bool cond:0_1
                
                if (*(ebp_11 + 8) s< 1)
                    eax_5 = nullptr
                    var_74 = 0
                label_5776be:
                    cond:0_1 = eax_5 s> 0
                label_5776c7:
                    eax_5.b = cond:0_1
                    *(arg3 + 0x40) = eax_5.b
                    
                    if (*(ebp_11 + 8) s< 3)
                        var_68 = 0
                    label_5777ce:
                        char* ecx_84 = *(arg2 + 4)
                        
                        if (&ecx_84[4] u> *(arg2 + 8))
                        label_5773ea:
                            eax_5.b = 0
                        else
                            void* i_2 = ((zx.d(ecx_84[3]) << 8 | zx.d(ecx_84[2])) << 8
                                | zx.d(ecx_84[1])) << 8 | zx.d(*ecx_84)
                            *(arg2 + 4) = &ecx_84[4]
                            int32_t var_1c
                            sub_42f420(&var_1c, i_2)
                            int32_t var_4 = 0
                            
                            if (*(ebp_11 + 8) s> 1)
                                int32_t esi_24 = 0
                                
                                if (i_2 s<= 0)
                                label_577931:
                                    int32_t var_40 = 0
                                    int32_t var_3c_1 = 0
                                    int32_t var_38_1 = 0
                                    var_4.b = 1
                                    
                                    if (*(arg1 + 8) s< 2)
                                        var_70 = 0
                                    label_577a43:
                                        int32_t ebp_25 = 0
                                        int32_t var_4c = 0
                                        int32_t var_48_1 = 0
                                        int32_t var_44_1 = 0
                                        var_4.b = 2
                                        void* i_3
                                        
                                        if (*(arg1 + 8) s< 3)
                                            i_2 = nullptr
                                            i_3 = nullptr
                                        label_577ad5:
                                            char eax_92
                                            
                                            if (var_68 s<= 0 || i_2 s<= 0)
                                                eax_92 = 0
                                            else
                                                eax_92 = 1
                                            
                                            *(arg3 + 0x41) = eax_92
                                            char* ecx_112 = *(arg2 + 4)
                                            
                                            if (&ecx_112[4] u> *(arg2 + 8))
                                            label_577cf8:
                                                i_2.b = 0
                                            else
                                                void* i_7 = arg3 + 0x34
                                                uint32_t ebx_27 =
                                                    zx.d(ecx_112[3]) << 8 | zx.d(ecx_112[2])
                                                i_6 = i_7
                                                i_2 = (ebx_27 << 8 | zx.d(ecx_112[1])) << 8
                                                    | zx.d(*ecx_112)
                                                *(arg2 + 4) = &ecx_112[4]
                                                void* i_4 = i_2
                                                sub_578c80(i_7, i_2)
                                                int32_t var_60_3 = 0
                                                
                                                if (i_2 s<= 0)
                                                label_578003:
                                                    
                                                    for (void* i_1 = *i_7; i_1 != *(arg3 + 0x38); 
                                                            i_1 += 0x6c)
                                                        int32_t ecx_223 = *(i_1 + 4)
                                                        int32_t esi_28 = *(arg3 + 0x1c)
                                                        int32_t ecx_224 = *(i_1 + 8)
                                                        int32_t xmm0_16 =
                                                            *(esi_28 + *i_1 * 0x18 + 4)
                                                        *(i_1 + 0x68) = xmm0_16
                                                        int32_t xmm1_4 =
                                                            *(esi_28 + ecx_223 * 0x18 + 4)
                                                        
                                                        if (not(xmm0_16 f<= xmm1_4))
                                                            *(i_1 + 0x68) = xmm1_4
                                                        
                                                        int32_t xmm1_5 =
                                                            *(esi_28 + ecx_224 * 0x18 + 4)
                                                        
                                                        if (not(*(i_1 + 0x68) f<= xmm1_5))
                                                            *(i_1 + 0x68) = xmm1_5
                                                    
                                                    void* ecx_227 = *(arg3 + 0x34)
                                                    int32_t eax_181
                                                    int32_t edx_51
                                                    edx_51:eax_181 = muls.dp.d(0x4bda12f7, 
                                                        *(arg3 + 0x38) - ecx_227)
                                                    var_6c.b = 0
                                                    int32_t edx_52 = edx_51 s>> 5
                                                    int32_t eax_184 = (edx_52 u>> 0x1f) + edx_52
                                                    sub_579bd0(eax_184, *(arg3 + 0x38), ecx_227, 
                                                        eax_184, var_6c)
                                                    sub_578860(arg3 + 0x1c)
                                                    i_2.b = 1
                                                else
                                                    int32_t eax_96 = 0
                                                    int32_t var_58_2 = 0
                                                    
                                                    while (true)
                                                        char* edx_35 = *(arg2 + 4)
                                                        uint32_t* esi_27 = *i_7 + eax_96
                                                        
                                                        if (&edx_35[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        *esi_27 = ((zx.d(edx_35[3]) << 8
                                                            | zx.d(edx_35[2])) << 8 | zx.d(edx_35[1]))
                                                            << 8 | zx.d(*edx_35)
                                                        *(arg2 + 4) += 4
                                                        char* edx_36 = *(arg2 + 4)
                                                        
                                                        if (&edx_36[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        esi_27[1] = ((zx.d(edx_36[3]) << 8
                                                            | zx.d(edx_36[2])) << 8 | zx.d(edx_36[1]))
                                                            << 8 | zx.d(*edx_36)
                                                        *(arg2 + 4) += 4
                                                        char* edx_37 = *(arg2 + 4)
                                                        
                                                        if (&edx_37[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        esi_27[2] = ((zx.d(edx_37[3]) << 8
                                                            | zx.d(edx_37[2])) << 8 | zx.d(edx_37[1]))
                                                            << 8 | zx.d(*edx_37)
                                                        *(arg2 + 4) += 4
                                                        char* edx_38 = *(arg2 + 4)
                                                        
                                                        if (&edx_38[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        esi_27[3] = ((zx.d(edx_38[3]) << 8
                                                            | zx.d(edx_38[2])) << 8 | zx.d(edx_38[1]))
                                                            << 8 | zx.d(*edx_38)
                                                        *(arg2 + 4) += 4
                                                        char* edx_39 = *(arg2 + 4)
                                                        
                                                        if (&edx_39[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        esi_27[4] = ((zx.d(edx_39[3]) << 8
                                                            | zx.d(edx_39[2])) << 8 | zx.d(edx_39[1]))
                                                            << 8 | zx.d(*edx_39)
                                                        *(arg2 + 4) += 4
                                                        char* edx_40 = *(arg2 + 4)
                                                        
                                                        if (&edx_40[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        esi_27[5] = ((zx.d(edx_40[3]) << 8
                                                            | zx.d(edx_40[2])) << 8 | zx.d(edx_40[1]))
                                                            << 8 | zx.d(*edx_40)
                                                        *(arg2 + 4) += 4
                                                        char* edx_41 = *(arg2 + 4)
                                                        
                                                        if (var_74 s<= 0)
                                                            esi_27[6] = 0
                                                            esi_27[7] = 0
                                                            esi_27[8] = 0
                                                        else
                                                            if (&edx_41[4] u> *(arg2 + 8))
                                                                break
                                                            
                                                            esi_27[6] = ((zx.d(edx_41[3]) << 8
                                                                | zx.d(edx_41[2])) << 8
                                                                | zx.d(edx_41[1])) << 8 | zx.d(*edx_41)
                                                            *(arg2 + 4) += 4
                                                            char* edx_42 = *(arg2 + 4)
                                                            
                                                            if (&edx_42[4] u> *(arg2 + 8))
                                                                break
                                                            
                                                            esi_27[7] = ((zx.d(edx_42[3]) << 8
                                                                | zx.d(edx_42[2])) << 8
                                                                | zx.d(edx_42[1])) << 8 | zx.d(*edx_42)
                                                            *(arg2 + 4) += 4
                                                            
                                                            if (sub_468b20(arg2, &esi_27[8]) == 0)
                                                                break
                                                        
                                                        if (var_68 s<= 0)
                                                            esi_27[9] = 0
                                                            esi_27[0xa] = 0
                                                            esi_27[0xb] = 0
                                                        else
                                                            char* edx_43 = *(arg2 + 4)
                                                            
                                                            if (&edx_43[4] u> *(arg2 + 8))
                                                                break
                                                            
                                                            esi_27[9] = ((zx.d(edx_43[3]) << 8
                                                                | zx.d(edx_43[2])) << 8
                                                                | zx.d(edx_43[1])) << 8 | zx.d(*edx_43)
                                                            *(arg2 + 4) += 4
                                                            
                                                            if (sub_468b20(arg2, &esi_27[0xa]) == 0)
                                                                break
                                                            
                                                            if (sub_468b20(arg2, &esi_27[0xb]) == 0)
                                                                break
                                                        
                                                        char* edx_44 = *(arg2 + 4)
                                                        
                                                        if (&edx_44[4] u> *(arg2 + 8))
                                                            break
                                                        
                                                        uint32_t ecx_187 = ((zx.d(edx_44[3]) << 8
                                                            | zx.d(edx_44[2])) << 8 | zx.d(edx_44[1]))
                                                            << 8 | zx.d(*edx_44)
                                                        *(arg2 + 4) = &edx_44[4]
                                                        uint32_t var_24
                                                        
                                                        if (sub_468b20(arg2, &var_24) == 0)
                                                            break
                                                        
                                                        uint32_t var_20
                                                        
                                                        if (sub_468b20(arg2, &var_20) == 0)
                                                            break
                                                        
                                                        int32_t ecx_190 = var_1c
                                                        int32_t var_18
                                                        
                                                        if (ecx_190 == var_18)
                                                            esi_27[0xc] = 0xffffffff
                                                            esi_27[0xd] = 0xffffffff
                                                            esi_27[0xe] = 0xffffffff
                                                        else
                                                            esi_27[0xc] =
                                                                *(ecx_190 + (ecx_187 << 2))
                                                            esi_27[0xd] = *(ecx_190 + (var_24 << 2))
                                                            esi_27[0xe] = *(ecx_190 + (var_20 << 2))
                                                        
                                                        if (var_70 s> 0)
                                                            uint32_t var_34
                                                            
                                                            if (sub_468b20(arg2, &var_34) == 0)
                                                                break
                                                            
                                                            uint32_t var_30
                                                            
                                                            if (sub_468b20(arg2, &var_30) == 0)
                                                                break
                                                            
                                                            uint32_t var_2c
                                                            
                                                            if (sub_468b20(arg2, &var_2c) == 0)
                                                                break
                                                            
                                                            int32_t edx_45 = var_40
                                                            uint32_t eax_159 = var_30
                                                            esi_27[0xc] =
                                                                zx.d(*(edx_45 + var_34)) << 0x18
                                                                | (esi_27[0xc] & 0xffffff)
                                                            uint32_t eax_162 = var_2c
                                                            esi_27[0xd] =
                                                                zx.d(*(edx_45 + eax_159)) << 0x18
                                                                | (esi_27[0xd] & 0xffffff)
                                                            esi_27[0xe] =
                                                                zx.d(*(edx_45 + eax_162)) << 0x18
                                                                | (esi_27[0xe] & 0xffffff)
                                                        
                                                        if (i_3 s<= 0)
                                                            esi_27[0xf].w = 0
                                                            *(esi_27 + 0x3e) = 0
                                                        else
                                                            for (i_2 = nullptr; i_2 s< 3; i_2 += 1)
                                                                if (sub_468b20(arg2, &var_6c) == 0)
                                                                    goto label_577cf8_2
                                                                
                                                                uint32_t ecx_204 = var_6c
                                                                
                                                                if (ecx_204 s< 0)
                                                                    goto label_577cf8_2
                                                                
                                                                if (ecx_204 s>= var_48_1 - ebp_25)
                                                                    goto label_577cf8_2
                                                                
                                                                int32_t eax_167
                                                                eax_167.b = *(ecx_204 + ebp_25)
                                                                *(i_2 + esi_27 + 0x3c) = eax_167.b
                                                        
                                                        int32_t ebp_26 = 0
                                                        i_2 = &esi_27[0x11]
                                                        
                                                        while (true)
                                                            char* edx_46 = *(arg2 + 4)
                                                            
                                                            if (&edx_46[4] u> *(arg2 + 8))
                                                                goto label_577cf8_2
                                                            
                                                            uint32_t ecx_211 = ((
                                                                zx.d(edx_46[3]) << 8 | zx.d(edx_46[2]))
                                                                << 8 | zx.d(edx_46[1])) << 8
                                                                | zx.d(*edx_46)
                                                            *(arg2 + 4) = &edx_46[4]
                                                            *(i_2 - 4) = ecx_211
                                                            
                                                            if (sub_468bc0(arg2, i_2) == 0)
                                                                goto label_577cf8_2
                                                            
                                                            if (sub_468bc0(arg2, i_2 + 4) == 0)
                                                                goto label_577cf8_2
                                                            
                                                            ebp_26 += 1
                                                            i_2 += 0xc
                                                            
                                                            if (ebp_26 s>= 3)
                                                                char* edx_47 = *(arg2 + 4)
                                                                
                                                                if (&edx_47[4] u> *(arg2 + 8))
                                                                    goto label_577cf8_2
                                                                
                                                                ebp_25 = var_4c
                                                                esi_27[0x19] = ((zx.d(edx_47[3]) << 8
                                                                    | zx.d(edx_47[2])) << 8
                                                                    | zx.d(edx_47[1])) << 8 | zx.d(*edx_47)
                                                                eax_96 = var_58_2 + 0x6c
                                                                *(arg2 + 4) += 4
                                                                int32_t ecx_114 = var_60_3 + 1
                                                                i_7 = i_6
                                                                var_60_3 = ecx_114
                                                                var_58_2 = eax_96
                                                                
                                                                if (ecx_114 s< i_4)
                                                                    break
                                                                
                                                                goto label_578003
                                                    
                                                label_577cf8_1:
                                                    i_2.b = 0
                                        else
                                            char* ecx_109 = *(arg2 + 4)
                                            
                                            if (&ecx_109[4] u<= *(arg2 + 8))
                                                i_2 = (
                                                    (zx.d(ecx_109[3]) << 8 | zx.d(ecx_109[2])) << 8
                                                    | zx.d(ecx_109[1])) << 8 | zx.d(*ecx_109)
                                                *(arg2 + 4) = &ecx_109[4]
                                                i_3 = i_2
                                                sub_403540(&var_4c, i_2)
                                                ebp_25 = var_4c
                                                char* ecx_111 = nullptr
                                                
                                                if (i_2 s> 0)
                                                    do
                                                        char* edx_33 = *(arg2 + 4)
                                                        
                                                        if (&edx_33[1] u> *(arg2 + 8))
                                                            goto label_577cf8_2
                                                        
                                                        void* eax_90
                                                        eax_90.b = *edx_33
                                                        ecx_111[ebp_25] = eax_90.b
                                                        ecx_111 = &ecx_111[1]
                                                        *(arg2 + 4) += 1
                                                    while (ecx_111 s< i_2)
                                                
                                                goto label_577ad5
                                            
                                        label_577cf8_2:
                                            i_2.b = 0
                                        int32_t eax_131 = var_4c
                                        
                                        if (eax_131 != 0)
                                            j__free(eax_131)
                                    else
                                        char* ecx_99 = *(arg2 + 4)
                                        
                                        if (&ecx_99[4] u> *(arg2 + 8))
                                            i_2.b = 0
                                        else
                                            uint32_t esi_23 = (
                                                (zx.d(ecx_99[3]) << 8 | zx.d(ecx_99[2])) << 8
                                                | zx.d(ecx_99[1])) << 8 | zx.d(*ecx_99)
                                            *(arg2 + 4) = &ecx_99[4]
                                            var_70 = esi_23
                                            sub_403540(&var_40, esi_23)
                                            char* ecx_101 = nullptr
                                            
                                            if (esi_23 s<= 0)
                                                goto label_577a43
                                            
                                            int32_t ebp_23 = var_40
                                            
                                            while (true)
                                                char* edx_30 = *(arg2 + 4)
                                                
                                                if (&edx_30[1] u> *(arg2 + 8))
                                                    break
                                                
                                                void* eax_82
                                                eax_82.b = *edx_30
                                                ecx_101[ebp_23] = eax_82.b
                                                ecx_101 = &ecx_101[1]
                                                *(arg2 + 4) += 1
                                                
                                                if (ecx_101 s>= esi_23)
                                                    goto label_577a43
                                            
                                            i_2.b = 0
                                    
                                    int32_t eax_132 = var_40
                                    
                                    if (eax_132 != 0)
                                        j__free(eax_132)
                                else
                                    while (true)
                                        char* edx_31 = *(arg2 + 4)
                                        
                                        if (&edx_31[4] u> *(arg2 + 8))
                                            break
                                        
                                        uint32_t ecx_108 = (
                                            (zx.d(edx_31[3]) << 8 | zx.d(edx_31[2])) << 8
                                            | zx.d(edx_31[1])) << 8 | zx.d(*edx_31)
                                        *(arg2 + 4) = &edx_31[4]
                                        *(var_1c + (esi_24 << 2)) = ecx_108
                                        esi_24 += 1
                                        
                                        if (esi_24 s>= i_2)
                                            goto label_577931
                                    
                                    i_2.b = 0
                            else
                                var_70 = 0
                                
                                if (i_2 s<= 0)
                                    goto label_577931
                                
                                while (true)
                                    int32_t ebp_22 = *(arg2 + 8)
                                    char* esi_10 = *(arg2 + 4) + 4
                                    
                                    if (esi_10 u> ebp_22)
                                        break
                                    
                                    char* ecx_88 = *(arg2 + 4)
                                    uint32_t edx_20 = ((zx.d(ecx_88[3]) << 8 | zx.d(ecx_88[2])) << 8
                                        | zx.d(ecx_88[1])) << 8 | zx.d(*ecx_88)
                                    *(arg2 + 4) = esi_10
                                    var_6c = edx_20
                                    
                                    if (&esi_10[4] u> ebp_22)
                                        break
                                    
                                    uint32_t ecx_95 = ((zx.d(esi_10[3]) << 8 | zx.d(esi_10[2])) << 8
                                        | zx.d(esi_10[1])) << 8 | zx.d(*esi_10)
                                    *(arg2 + 4) = &esi_10[4]
                                    
                                    if (&esi_10[8] u> ebp_22)
                                        break
                                    
                                    float xmm0_11 = var_6c f* 255f
                                    uint32_t edx_28 = ((zx.d(esi_10[7]) << 8 | zx.d(esi_10[6])) << 8
                                        | zx.d(esi_10[5])) << 8 | zx.d(esi_10[4])
                                    *(arg2 + 4) = &esi_10[8]
                                    int32_t eax_75
                                    int16_t x87control
                                    int16_t x87control_1
                                    int80_t st0_1
                                    st0_1, eax_75, x87control_1 = sub_6b0e80(x87control, xmm0_11)
                                    int32_t eax_76
                                    int16_t x87control_2
                                    int80_t st0_2
                                    st0_2, eax_76, x87control_2 =
                                        sub_6b0e80(x87control_1, ecx_95 f* 255f)
                                    int32_t eax_77
                                    int80_t st0_3
                                    st0_3, eax_77, x87control =
                                        sub_6b0e80(x87control_2, edx_28 f* 255f)
                                    uint32_t ecx_97 = var_70
                                    *(var_1c + (ecx_97 << 2)) =
                                        ((eax_75 | 0xffffff00) << 8 | eax_76) << 8 | eax_77
                                    var_70 = ecx_97 + 1
                                    
                                    if (ecx_97 + 1 s>= i_2)
                                        goto label_577931
                                
                                i_2.b = 0
                            
                            int32_t eax_133 = var_1c
                            
                            if (eax_133 != 0)
                                j__free(eax_133)
                            
                            eax_133.b = i_2.b
                    else
                        char* ecx_66 = *(arg2 + 4)
                        
                        if (&ecx_66[4] u<= *(arg2 + 8))
                            uint32_t ebp_18 = ((zx.d(ecx_66[3]) << 8 | zx.d(ecx_66[2])) << 8
                                | zx.d(ecx_66[1])) << 8 | zx.d(*ecx_66)
                            *(arg2 + 4) = &ecx_66[4]
                            var_68 = ebp_18
                            uint32_t ebp_19 = var_74
                            sub_544290(ebp + 0x28, var_68 + ebp_19 + ebx_10)
                            var_70 = 0
                            
                            if (var_68 s> 0)
                                uint32_t ebp_21 = (ebp_19 + ebx_10) << 3
                                uint32_t ecx_83
                                
                                do
                                    char* edx_11 = *(arg2 + 4)
                                    int32_t ebx_11 = *(ebp + 0x28)
                                    
                                    if (&edx_11[4] u> *(arg2 + 8))
                                        goto label_5773ea_2
                                    
                                    uint32_t ecx_74 = ((zx.d(edx_11[3]) << 8 | zx.d(edx_11[2])) << 8
                                        | zx.d(edx_11[1])) << 8 | zx.d(*edx_11)
                                    *(arg2 + 4) = &edx_11[4]
                                    *(ebx_11 + ebp_21) = ecx_74
                                    char* edx_12 = *(arg2 + 4)
                                    int32_t ebx_12 = *(ebp + 0x28)
                                    
                                    if (&edx_12[4] u> *(arg2 + 8))
                                        goto label_5773ea_2
                                    
                                    var_6c = ((zx.d(edx_12[3]) << 8 | zx.d(edx_12[2])) << 8
                                        | zx.d(edx_12[1])) << 8 | zx.d(*edx_12)
                                    uint32_t xmm0_9 = var_6c
                                    ecx_83 = var_70 + 1
                                    *(arg2 + 4) = &edx_12[4]
                                    *(ebx_12 + ebp_21 + 4) = xmm0_9
                                    ebp_21 += 8
                                    var_70 = ecx_83
                                while (ecx_83 s< var_68)
                            
                            ebp_11 = arg1
                            goto label_5777ce
                        
                    label_5773ea_1:
                        eax_5.b = 0
                else
                    char* ecx_45 = *(arg2 + 4)
                    
                    if (&ecx_45[4] u<= *(arg2 + 8))
                        var_74 = zx.d(ecx_45[3]) << 8
                        var_74 |= zx.d(ecx_45[2])
                        uint32_t eax_35 = zx.d(ecx_45[1])
                        var_74 <<= 8
                        var_74 |= eax_35
                        uint32_t eax_36 = zx.d(*ecx_45)
                        var_74 <<= 8
                        uint32_t ecx_47 = var_74 | eax_36
                        *(arg2 + 4) = &ecx_45[4]
                        var_74 = ecx_47
                        sub_544290(ebp + 0x28, ecx_47 + ebx_10)
                        eax_5 = var_74
                        var_70 = 0
                        cond:0_1 = eax_5 s> 0
                        
                        if (eax_5 s<= 0)
                            goto label_5776c7
                        
                        uint32_t eax_38 = ebx_10 << 3
                        var_68 = eax_38
                        uint32_t ecx_64
                        
                        do
                            char* edx_8 = *(arg2 + 4)
                            uint32_t* ebp_8 = *(ebp + 0x28) + eax_38
                            
                            if (&edx_8[4] u> *(arg2 + 8))
                                goto label_5773ea_2
                            
                            uint32_t ecx_55 =
                                ((zx.d(edx_8[3]) << 8 | zx.d(edx_8[2])) << 8 | zx.d(edx_8[1])) << 8
                                | zx.d(*edx_8)
                            *(arg2 + 4) = &edx_8[4]
                            *ebp_8 = ecx_55
                            char* edx_9 = *(arg2 + 4)
                            void* ebp_10 = *(ebp + 0x28) + var_68
                            
                            if (&edx_9[4] u> *(arg2 + 8))
                                goto label_5773ea_2
                            
                            var_6c =
                                ((zx.d(edx_9[3]) << 8 | zx.d(edx_9[2])) << 8 | zx.d(edx_9[1])) << 8
                                | zx.d(*edx_9)
                            uint32_t xmm0_8 = var_6c
                            ecx_64 = var_70 + 1
                            *(arg2 + 4) = &edx_9[4]
                            eax_38 = var_68 + 8
                            *(ebp_10 + 4) = xmm0_8
                            var_70 = ecx_64
                            var_68 = eax_38
                        while (ecx_64 s< var_74)
                        ebp_11 = arg1
                        eax_5 = var_74
                        goto label_5776be
                    
                label_5773ea_2:
                    eax_5.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
