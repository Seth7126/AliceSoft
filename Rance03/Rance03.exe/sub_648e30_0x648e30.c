// 函数: sub_648e30
// 地址: 0x648e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t eax = esi[0x16]
int32_t ebx_1

if (eax s>= 2 && esi[1] != 0)
    ebx_1 = esi[0xd]

int32_t var_78
int32_t var_74
int64_t var_38
int32_t edx_3
int32_t ebx_2

if (eax s< 2 || esi[1] == 0 || ebx_1 s<= 0xffffffff)
    ebx_2 = 0xffffffff
    edx_3 = 0xffffff7d
    var_78 = edx_3
    var_74 = ebx_2
else
    int32_t edi_1 = 0
    var_38 = 0
    
    if (ebx_1 s<= 0)
        ebx_2 = var_38:4.d
        edx_3 = var_38.d
        var_78 = edx_3
        var_74 = ebx_2
    else
        var_74 = var_38:4.d
        var_78 = var_38.d
        
        do
            int32_t eax_3
            int32_t edx_2
            eax_3, edx_2 = sub_648940(esi, edi_1)
            int32_t temp1_1 = var_78
            var_78 += eax_3
            var_74 = adc.d(var_74, edx_2, temp1_1 + eax_3 u< temp1_1)
            edi_1 += 1
        while (edi_1 s< ebx_1)
        
        eax = esi[0x16]
        edx_3 = var_78
        ebx_2 = var_74

if (eax s< 2)
    return 

if (esi[1] == 0)
    return 

if (arg3 s< 0 || (arg3 s<= 0 && arg2 u< 0) || arg3 s> ebx_2 || (arg3 s>= ebx_2 && arg2 u> edx_3))
    return 

int32_t edi_2 = esi[0xd]
int32_t edi_3 = edi_2 - 1
int32_t var_60 = edi_3

if (edi_2 - 1 s>= 0)
    int32_t* eax_8 = esi[0x11] + 8 + (edi_3 << 4)
    int32_t temp20_1
    
    do
        int32_t temp8_1 = edx_3
        edx_3 -= *eax_8
        ebx_2 = sbb.d(ebx_2, eax_8[1], temp8_1 u< *eax_8)
        
        if (arg3 s> ebx_2)
            break
        
        if (arg3 s>= ebx_2 && arg2 u>= edx_3)
            break
        
        eax_8 -= 0x10
        temp20_1 = edi_3
        edi_3 -= 1
    while (temp20_1 - 1 s>= 0)
    esi = arg1
    var_74 = ebx_2
    var_78 = edx_3
    var_60 = edi_3

int32_t eax_9 = esi[0xe]
uint32_t ebx_3 = *(eax_9 + (edi_3 << 3))
uint32_t edi_4 = *(eax_9 + (edi_3 << 3) + 4)
int32_t eax_10 = esi[0x11]
uint32_t var_7c = *(eax_9 + (edi_3 << 3) + 8)
int32_t ecx_8 = var_60 * 2
uint32_t var_6c = *(eax_9 + (edi_3 << 3) + 0xc)
uint32_t var_70 = ebx_3
uint32_t var_80 = edi_4
uint32_t var_44 = ebx_3
uint32_t esi_2 = *(eax_10 + (ecx_8 << 3))
uint32_t var_54 = *(eax_10 + (ecx_8 << 3) + 4)
int32_t edx_6 = *(eax_10 + (ecx_8 << 3) + 8)
uint32_t var_3c = edx_6 + esi_2
uint32_t edx_8 = var_6c
var_38.d = adc.d(*(eax_10 + (ecx_8 << 3) + 0xc), var_54, edx_6 + esi_2 u< edx_6)
int32_t eax_14 = esi_2 - var_78
uint32_t var_58 = esi_2
uint32_t eax_15 = eax_14 + arg2
int32_t* esi_3 = arg1
int32_t ecx_11 = adc.d(sbb.d(var_54, var_74, esi_2 u< var_78), arg3, eax_14 + arg2 u< eax_14)
uint32_t var_5c = eax_15
uint32_t var_48 = edi_4
uint32_t ecx_12

if (edi_4 s<= edx_8)
    ecx_12 = var_7c

uint32_t var_84_1
void* var_28

if (edi_4 s<= edx_8 && (edi_4 s< edx_8 || ebx_3 u< ecx_12))
    while (true)
        int32_t eax_17 = ecx_12 - ebx_3
        uint32_t ecx_14 = sbb.d(edx_8, edi_4, ecx_12 u< ebx_3)
        uint32_t ebx_4
        uint32_t edi_5
        
        if (ecx_14 s> 0 || (ecx_14 s>= 0 && eax_17 u>= 0x10000))
            double xmm0_1 = sub_6b121f(var_5c - var_58, sbb.d(ecx_11, var_54, var_5c u< var_58))
            double xmm0_2 = sub_6b121f(eax_17, ecx_14)
            double xmm0_3
            uint64_t xmm6_1[0x2]
            xmm0_3, xmm6_1 = sub_6b121f(var_3c - var_58, sbb.d(var_38.d, var_54, var_3c u< var_58))
            int32_t eax_18
            int32_t edx_14
            int16_t x87control
            int80_t st0_1
            st0_1, eax_18, edx_14, x87control =
                __dtol3(x87control, xmm0_1 * xmm0_2 / xmm0_3, xmm6_1)
            int32_t edi_7 = eax_18 + var_70
            edi_5 = edi_7 - 0x10000
            ebx_4 = sbb.d(adc.d(edx_14, var_80, eax_18 + var_70 u< eax_18), 0, edi_7 u< 0x10000)
            int32_t eax_22 = adc.d(var_80, 0, var_70 u>= 0xffff0000)
            
            if (ebx_4 s<= eax_22 && (ebx_4 s< eax_22 || edi_5 u< var_70 + 0x10000))
                edi_5 = var_70
                ebx_4 = var_80
        else
            edi_5 = ebx_3
            ebx_4 = var_80
        
        if (edi_5 != esi_3[2] || ebx_4 != esi_3[3])
            int32_t ecx_21 = *esi_3
            int32_t eax_25
            
            if (ecx_21 == 0)
                eax_25 = 0xffffff7f
            else
                int32_t eax_23 = esi_3[0xb1]
                int32_t eax_24
                
                if (eax_23 != 0)
                    eax_24 = eax_23(ecx_21, edi_5, ebx_4, 0)
                
                if (eax_23 == 0 || eax_24 == 0xffffffff)
                    eax_25 = 0xffffff80
                else
                    esi_3[2] = edi_5
                    esi_3[3] = ebx_4
                    
                    if (esi_3[7] s>= 0)
                        __builtin_memset(&esi_3[8], 0, 0x14)
                    
                    eax_25 = 0
            
            uint32_t eax_26
            int32_t edx_16
            edx_16:eax_26 = sx.q(eax_25)
            var_84_1 = eax_26
            
            if ((eax_26 | edx_16) != 0)
                break
        
        eax_15 = var_7c
        
        while (true)
            int32_t eax_28 = sbb.d(var_6c, esi_3[3], eax_15 u< esi_3[2])
            uint32_t edx_18
            eax_15, edx_18 = sub_647050(eax_28, &var_28, esi_3, eax_15 - esi_3[2], eax_28)
            var_84_1 = eax_15
            
            if (eax_15 == 0xffffff80 && edx_18 == 0xffffffff)
                goto label_649556
            
            int32_t eax_33
            
            if (edx_18 s> 0 || (edx_18 s>= 0 && eax_15 u>= 0))
                void* ecx_31 = var_28
                edx_8 = ((zx.d(*(ecx_31 + 0x11)) << 8 | zx.d(*(ecx_31 + 0x10))) << 8
                    | zx.d(*(ecx_31 + 0xf))) << 8 | zx.d(*(ecx_31 + 0xe))
                
                if (edx_8 == *(esi_3[0x10] + (var_60 << 2)))
                    eax_15, edx_8 = sub_63cdc0(&var_28)
                    uint32_t var_4c_2 = eax_15
                    
                    if ((eax_15 & edx_8) != 0xffffffff)
                        if (edx_8 s> ecx_11 || (edx_8 s>= ecx_11 && eax_15 u>= var_5c))
                            double var_68
                            var_68.d = var_80
                            var_68.d = adc.d(var_68.d, 0, var_70 u>= 0xffffffff)
                            esi_3 = arg1
                            int32_t temp30_1 = var_68.d
                            
                            if (ebx_4 s< temp30_1)
                                goto label_6493c6
                            
                            if (ebx_4 s<= temp30_1 && edi_5 u<= var_70 + 1)
                                goto label_6493c6
                            
                            eax_15 = var_4c_2
                            
                            if (var_7c == esi_3[2])
                                eax_15 = var_4c_2
                            
                            if (var_7c != esi_3[2] || var_6c != esi_3[3])
                                ecx_12 = edi_5
                                var_6c = ebx_4
                                ebx_3 = var_70
                                edi_4 = var_80
                                var_7c = ecx_12
                                var_3c = eax_15
                                var_38.d = edx_8
                                goto label_6493a1
                            
                            uint32_t temp41_1 = edi_5
                            edi_5 -= 0x10000
                            var_7c = var_84_1
                            ebx_4 = adc.d(ebx_4, 0xffffffff, temp41_1 u>= 0x10000)
                            var_6c = edx_18
                            
                            if (ebx_4 s<= var_80 && (ebx_4 s< var_80 || edi_5 u<= var_70))
                                ebx_4 = var_68.d
                                edi_5 = var_70 + 1
                            
                            int32_t ecx_40 = *esi_3
                            
                            if (ecx_40 == 0)
                                goto label_649350
                            
                            int32_t eax_46 = esi_3[0xb1]
                            
                            if (eax_46 == 0)
                                goto label_649349
                            
                            if (eax_46(ecx_40, edi_5, ebx_4, 0) == 0xffffffff)
                                goto label_649349
                            
                            esi_3[2] = edi_5
                            esi_3[3] = ebx_4
                            sub_63d580(&esi_3[6])
                            eax_33 = 0
                            goto label_649355
                        
                        ebx_3 = esi_3[2]
                        edi_4 = esi_3[3]
                        var_44 = var_84_1
                        var_48 = edx_18
                        var_58 = var_4c_2
                        eax_15 = sbb.d(ecx_11, edx_8, var_5c u< var_4c_2)
                        var_70 = ebx_3
                        var_80 = edi_4
                        var_54 = edx_8
                        
                        if (eax_15 s> 0 || (eax_15 s>= 0 && var_5c - var_4c_2 u> 0xac44))
                            ecx_12 = var_7c
                        label_6493a1:
                            edx_8 = var_6c
                            
                            if (edi_4 s< edx_8)
                                break
                            
                            if (edi_4 s> edx_8)
                                goto label_6493c6
                            
                            if (ebx_3 u< ecx_12)
                                break
                            
                            goto label_6493c6
                        
                        edi_5 = ebx_3
                        ebx_4 = var_80
            else
                edx_8 = adc.d(var_80, 0, var_70 u>= 0xffffffff)
                
                if (ebx_4 s< edx_8)
                    goto label_6493c6
                
                if (ebx_4 s<= edx_8 && edi_5 u<= var_70 + 1)
                    goto label_6493c6
                
                if ((edi_5 | ebx_4) == 0)
                    goto label_649556
                
                uint32_t temp34_1 = edi_5
                edi_5 -= 0x10000
                ebx_4 = adc.d(ebx_4, 0xffffffff, temp34_1 u>= 0x10000)
                
                if (ebx_4 s<= var_80 && (ebx_4 s< var_80 || edi_5 u<= var_70))
                    edi_5 = var_70 + 1
                    ebx_4 = edx_8
                
                int32_t ecx_30 = *esi_3
                
                if (ecx_30 != 0)
                    int32_t eax_31 = esi_3[0xb1]
                    
                    if (eax_31 == 0)
                    label_649349:
                        eax_33 = 0xffffff80
                        goto label_649355
                    
                    if (eax_31(ecx_30, edi_5, ebx_4, 0) == 0xffffffff)
                        goto label_649349
                    
                    esi_3[2] = edi_5
                    esi_3[3] = ebx_4
                    
                    if (esi_3[7] s>= 0)
                        __builtin_memset(&esi_3[8], 0, 0x14)
                    
                    eax_33 = 0
                    goto label_649355
                
            label_649350:
                eax_33 = 0xffffff7f
            label_649355:
                uint32_t eax_48
                edx_8:eax_48 = sx.q(eax_33)
                var_84_1 = eax_48
                
                if ((eax_48 | edx_8) != 0)
                    goto label_649556
            eax_15 = var_6c
            bool cond:12_1 = var_80 s< eax_15
            
            if (var_80 s> eax_15)
                goto label_6493c6
            
            eax_15 = var_7c
            
            if (not(cond:12_1))
                if (var_70 u>= eax_15)
                    goto label_6493c6
else
label_6493c6:
    uint32_t eax_51
    int32_t edx_26
    edx_26:eax_51 = sx.q(sub_646ff0(eax_15, edx_8, esi_3, var_44, var_48))
    var_84_1 = eax_51
    int32_t eax_52 = eax_51 | edx_26
    esi_3[0x14] = 0xffffffff
    esi_3[0x15] = 0xffffffff
    
    if (eax_52 == 0)
        uint32_t eax_53
        int32_t edx_28
        eax_53, edx_28 = sub_647050(eax_52, &var_38, esi_3, 0xffffffff, 0xffffffff)
        var_84_1 = eax_53
        
        if (edx_28 s>= 0 && (edx_28 s> 0 || eax_53 u>= 0))
            if (var_60 == esi_3[0x18])
                sub_6389d0(&esi_3[0x78])
            else
                sub_648230(esi_3)
                int32_t eax_54 = esi_3[0x10]
                esi_3[0x18] = var_60
                esi_3[0x17] = *(eax_54 + (var_60 << 2))
                esi_3[0x16] = 3
            
            int32_t edx_29 = esi_3[0x17]
            
            if (esi_3 != 0xffffff88 && esi_3[0x1e] != 0)
                sub_63d5b0(&esi_3[0x1e])
                esi_3[0x72] = edx_29
            
            int32_t eax_56 = sub_63d2a0(&esi_3[0x1e], &var_38)
            int32_t var_14
            int32_t ebx_8 = var_14
            
            while (true)
                if (esi_3 == 0xffffff88)
                    goto label_649489
                
                if (esi_3[0x1e] == 0)
                    break
                
                int32_t eax_57 = sub_63d660(eax_56, &var_28, &esi_3[0x1e], 0)
                ebx_8 = var_14
                
                while (true)
                    int32_t eax_58
                    int32_t edx_32
                    edx_32:eax_58 = sx.q(eax_57)
                    
                    if ((eax_58 | edx_32) == 0)
                        uint32_t eax_67
                        int32_t edx_36
                        edx_36:eax_67 = sx.q(sub_646ff0(eax_58, edx_32, esi_3, var_44, var_48))
                        var_84_1 = eax_67
                        
                        if (edx_36 s>= 0 && (edx_36 s> 0 || eax_67 u>= 0))
                            while (true)
                                uint32_t eax_68
                                int32_t edx_38
                                eax_68, edx_38 = sub_647100(esi_3, &var_38)
                                
                                if (edx_38 s< 0)
                                    break
                                
                                if (edx_38 s<= 0 && eax_68 u< 0)
                                    break
                                
                                void* edi_10 = var_38.d
                                
                                if ((((zx.d(*(edi_10 + 0x11)) << 8 | zx.d(*(edi_10 + 0x10))) << 8
                                        | zx.d(*(edi_10 + 0xf))) << 8 | zx.d(*(edi_10 + 0xe)))
                                        == esi_3[0x17])
                                    int32_t eax_72
                                    int32_t edx_39
                                    eax_72, edx_39 = sub_63cdc0(&var_38)
                                    
                                    if (edx_39 s> 0xffffffff)
                                        sub_6489d0(esi_3, eax_68, edx_38)
                                        return 
                                    
                                    if (edx_39 s< 0xffffffff)
                                        if ((*(edi_10 + 5) & 1) == 0)
                                            sub_6489d0(esi_3, eax_68, edx_38)
                                            return 
                                    else if (eax_72 u> 0xffffffff || (*(edi_10 + 5) & 1) == 0)
                                        sub_6489d0(esi_3, eax_68, edx_38)
                                        return 
                                
                                esi_3[2] = eax_68
                                esi_3[3] = edx_38
                        
                        goto label_649556
                    
                    if (edx_32 s< 0 || (edx_32 s<= 0 && eax_58 u< 0))
                        var_84_1 = 0xffffff78
                    else
                        int32_t var_18
                        eax_56 = var_18 & ebx_8
                        
                        if (eax_56 != 0xffffffff)
                            int32_t eax_60 = esi_3[0x11]
                            int32_t ecx_53 = esi_3[0x18] << 4
                            int32_t edx_34 = var_18 - *(ecx_53 + eax_60)
                            int32_t ebx_9 =
                                sbb.d(ebx_8, *(ecx_53 + eax_60 + 4), var_18 u< *(ecx_53 + eax_60))
                            esi_3[0x14] = edx_34
                            esi_3[0x15] = ebx_9
                            
                            if (ebx_9 s<= 0 && (ebx_9 s< 0 || edx_34 u< 0))
                                esi_3[0x14] = 0
                                esi_3[0x15] = 0
                            
                            int32_t temp39_1 = esi_3[0x14]
                            esi_3[0x14] += var_78
                            esi_3[0x15] = adc.d(esi_3[0x15], var_74, temp39_1 + var_78 u< temp39_1)
                            int32_t temp40_1 = esi_3[0x15]
                            
                            if (temp40_1 s<= arg3 && (temp40_1 s< arg3 || esi_3[0x14] u<= arg2))
                                int32_t eax_63
                                int32_t edx_35
                                eax_63, edx_35 = sub_648940(esi_3, 0xffffffff)
                                
                                if (arg3 s<= edx_35 && (arg3 s< edx_35 || arg2 u<= eax_63))
                                    *(esi_3 + 0x68) = zx.o(0)
                                    return 
                            
                            var_84_1 = 0xffffff7f
                        else
                            if (esi_3 == 0xffffff88)
                            label_649489:
                                eax_57 = 0
                                continue
                            
                            if (esi_3[0x1e] == 0)
                                break
                            
                            eax_56 = sub_63d660(eax_56, nullptr, &esi_3[0x1e], 1)
                            break
                    
                    var_38:4.d = 0xffffffff
                    goto label_649556
            
            goto label_649489
label_649556:
esi_3[0x14] = 0xffffffff
esi_3[0x15] = 0xffffffff
sub_638740(&esi_3[0x78])
sub_638370(&esi_3[0x94])
esi_3[0x16] = 2
