// 函数: ?convert_decimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z
// 地址: 0x708730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_b3c = edi
int32_t eax_2
eax_2.b = arg2[1].b == 0
void* ebx = *arg1

if (ebx s< 0)
    ebx = nullptr

void* eax_6 = arg1[1]
void* ecx_1 = ebx

if (ebx u>= eax_6)
    ecx_1 = eax_6

void* eax_8 = eax_6 + 8 + arg1
void* edx_1 = &arg1[2] + ecx_1
void* ebx_1 = ebx - ecx_1
int32_t eax_9 = eax_8 - edx_1
void* edi_2 = &arg1[2]
uint32_t i_54 = 0
void* var_930 = edx_1
int32_t esi = 0
uint32_t i_53 = 0
int32_t ecx_2 = 0
uint32_t i_48 = 0
int32_t var_920 = 0
void* var_928 = edi_2
uint32_t i_11
char var_914[0x1cc]
int32_t var_744
uint32_t i_24
int32_t var_3a4
int32_t var_1d4
uint32_t i_61

if (edi_2 != edx_1)
    uint32_t i_62
    
    while (true)
        if (ecx_2 != 9)
            i_62 = i_53
        else
            if (i_54 != 0)
                int32_t ecx_3 = 0
                int32_t esi_1 = 0
                
                do
                    int32_t eax_11
                    int32_t edx_2
                    edx_2:eax_11 = mulu.dp.d((&var_1d4)[esi_1], 0x3b9aca00)
                    (&var_1d4)[esi_1] = eax_11 + ecx_3
                    esi_1 += 1
                    ecx_3 = adc.d(edx_2, 0, eax_11 + ecx_3 u< eax_11)
                while (esi_1 != i_53)
                
                edi_2 = var_928
                i_54 = i_48
                
                if (ecx_3 != 0)
                    if (i_54 u>= 0x73)
                        int32_t var_748_1 = 0
                        i_48 = 0
                        _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
                        i_54 = i_48
                    else
                        (&var_1d4)[i_54] = ecx_3
                        i_54 = i_48 + 1
                        i_48 = i_54
                
                esi = var_920
                i_53 = i_54
            
            if (esi == 0)
                i_62 = i_53
            else
                int32_t edx_4 = 0
                
                if (i_54 != 0)
                    do
                        int32_t temp5_1 = (&var_1d4)[edx_4]
                        (&var_1d4)[edx_4] += esi
                        edx_4 += 1
                        esi = adc.d(0, 0, temp5_1 + esi u< temp5_1)
                        i_54 = i_48
                        i_53 = i_54
                    while (edx_4 != i_54)
                
                if (esi == 0)
                    i_62 = i_53
                else if (i_54 u>= 0x73)
                    int32_t var_748_2 = 0
                    i_48 = 0
                    _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
                    i_62 = i_48
                    i_53 = i_62
                else
                    (&var_1d4)[i_54] = esi
                    i_62 = i_48 + 1
                    i_53 = i_62
                    i_48 = i_62
            
            edx_1 = var_930
            esi = 0
            ecx_2 = 0
        
        esi = esi * 0xa + zx.d(*edi_2)
        ecx_2 += 1
        edi_2 += 1
        var_920 = esi
        var_928 = edi_2
        
        if (edi_2 == edx_1)
            break
        
        i_54 = i_53
    
    if (ecx_2 == 0)
        i_61 = i_53
    else
        int32_t edx_5 = 0
        uint32_t eax_17 = divu.dp.d(edx_5:ecx_2, 0xa)
        uint32_t var_93c_1 = eax_17
        uint32_t ecx_4 = modu.dp.d(edx_5:ecx_2, 0xa)
        
        if (eax_17 != 0)
            bool cond:3_1
            
            do
                if (eax_17 u> 0x26)
                    eax_17 = 0x26
                
                uint32_t ecx_5 = zx.d(*((eax_17 << 2) + &data_754ac6))
                uint32_t esi_3 = zx.d(*((eax_17 << 2) + &data_754ac7))
                uint32_t i_55 = ecx_5 + esi_3
                _memset(&var_744, 0, ecx_5 << 2)
                sub_700660(&(&var_744)[ecx_5], 
                    (zx.d(*((eax_17 << 2) + &data_754ac4)) << 2) + &data_7541c0, esi_3 << 2)
                uint32_t i_56
                char* var_b44_5
                void* var_b40_2
                char* eax_24
                char* eax_27
                int32_t ecx_7
                
                if (i_55 u> 1)
                    if (i_62 u> 1)
                        bool c_5 = i_55 u< i_62
                        int32_t* esi_6 = &var_744
                        int32_t* edx_11
                        
                        if (c_5 != 0)
                            edx_11 = &var_1d4
                        else
                            esi_6 = &var_1d4
                            edx_11 = &var_744
                        
                        uint32_t i_66
                        uint32_t i_67
                        
                        if (c_5 == 0)
                            i_67 = i_62
                            i_66 = i_62
                        else
                            i_67 = i_55
                            i_66 = i_67
                        
                        if (c_5 == 0)
                            i_62 = i_55
                        
                        uint32_t i_34 = 0
                        int32_t i_16 = 0
                        i_24 = 0
                        
                        if (i_67 == 0)
                        label_708c8f:
                            i_48 = i_34
                            var_b40_2 = i_34 << 2
                            eax_24 = &var_3a4
                            goto label_708c9f
                        
                        int32_t esi_7 = esi_6 - &var_3a4
                        int32_t var_950_1 = esi_7
                        
                        while (true)
                            int32_t eax_32 = *(&var_3a4 + esi_7 + (i_16 << 2))
                            
                            if (eax_32 != 0)
                                uint32_t i_1 = 0
                                int32_t eax_33 = 0
                                i_11 = 0
                                int32_t i = i_16
                                int32_t var_948_1 = 0
                                
                                if (i_62 != 0)
                                    while (i != 0x73)
                                        if (i == i_34)
                                            (&var_3a4)[i] = 0
                                            i_24 = eax_33 + 1 + i_16
                                            eax_33 = var_948_1
                                        
                                        int32_t eax_37
                                        int32_t edx_12
                                        edx_12:eax_37 = mulu.dp.d(edx_11[eax_33], eax_32)
                                        int32_t eax_38 = eax_37 + i_11
                                        int32_t temp38_1 = (&var_3a4)[i]
                                        (&var_3a4)[i] += eax_38
                                        i_34 = i_24
                                        i_1 = adc.d(adc.d(edx_12, 0, eax_37 + i_11 u< eax_37), 0, 
                                            temp38_1 + eax_38 u< temp38_1)
                                        eax_33 = var_948_1 + 1
                                        i_11 = i_1
                                        i += 1
                                        var_948_1 = eax_33
                                        
                                        if (eax_33 == i_62)
                                            break
                                    
                                    while (i_1 != 0)
                                        if (i == 0x73)
                                            goto label_708d32
                                        
                                        if (i == i_34)
                                            (&var_3a4)[i] = 0
                                            i_24 = i + 1
                                        
                                        int32_t temp40_1 = (&var_3a4)[i]
                                        (&var_3a4)[i] += i_1
                                        i_34 = i_24
                                        i_1 = adc.d(0, 0, temp40_1 + i_1 u< temp40_1)
                                        i += 1
                                
                                if (i == 0x73)
                                label_708d32:
                                    eax_27 = &var_914
                                    int32_t var_918_2 = 0
                                    break
                                
                                i_67 = i_66
                                esi_7 = var_950_1
                            else if (i_16 == i_34)
                                (&var_3a4)[i_16] &= eax_32
                                i_34 = i_16 + 1
                                i_24 = i_34
                            
                            i_16 += 1
                            
                            if (i_16 == i_67)
                                goto label_708c8f
                        
                        goto label_708a6c
                    
                    int32_t edi_6 = var_1d4
                    i_48 = i_55
                    _memcpy_s(&var_1d4, 0x1cc, &var_744, i_55 << 2)
                    
                    if (edi_6 != 0)
                        i_62 = i_48
                        i_56 = 1
                        i_53 = i_62
                        
                        if (edi_6 != 1 && i_62 != 0)
                            ecx_7 = 0
                            int32_t esi_5 = 0
                            
                            do
                                int32_t eax_30
                                int32_t edx_9
                                edx_9:eax_30 = mulu.dp.d(edi_6, (&var_1d4)[esi_5])
                                (&var_1d4)[esi_5] = eax_30 + ecx_7
                                esi_5 += 1
                                ecx_7 = adc.d(edx_9, 0, eax_30 + ecx_7 u< eax_30)
                            while (esi_5 != i_62)
                            
                            goto label_708a31
                    else
                        var_b40_2 = nullptr
                        int32_t var_748_5 = 0
                        i_48 = 0
                        var_b44_5 = &var_744
                        int32_t var_b48_2 = 0x1cc
                    label_708cac:
                        _memcpy_s(&var_1d4, 0x1cc, var_b44_5, var_b40_2)
                        i_56.b = 1
                        i_62 = i_48
                        i_53 = i_62
                else
                    int32_t esi_4 = var_744
                    
                    if (esi_4 == 0)
                        int32_t var_918_1 = 0
                        i_48 = 0
                        var_b40_2 = nullptr
                        eax_24 = &var_914
                    label_708c9f:
                        var_b44_5 = eax_24
                        int32_t var_b48_3 = 0x1cc
                        goto label_708cac
                    
                    if (esi_4 != 1 && i_62 != 0)
                        ecx_7 = 0
                        int32_t edi_5 = 0
                        
                        do
                            int32_t eax_26
                            int32_t edx_7
                            edx_7:eax_26 = mulu.dp.d(esi_4, (&var_1d4)[edi_5])
                            (&var_1d4)[edi_5] = eax_26 + ecx_7
                            edi_5 += 1
                            ecx_7 = adc.d(edx_7, 0, eax_26 + ecx_7 u< eax_26)
                        while (edi_5 != i_62)
                        
                    label_708a31:
                        
                        if (ecx_7 == 0)
                            i_62 = i_48
                            i_56.b = 1
                            i_53 = i_62
                        else
                            i_56 = i_48
                            
                            if (i_56 u>= 0x73)
                                eax_27 = &var_744
                                int32_t var_748_4 = 0
                            label_708a6c:
                                i_48 = 0
                                _memcpy_s(&var_1d4, 0x1cc, eax_27, nullptr)
                                i_56.b = 0
                                i_62 = i_48
                                i_53 = i_62
                            else
                                (&var_1d4)[i_56] = ecx_7
                                i_62 = i_48 + 1
                                i_48 = i_62
                                i_56.b = 1
                                i_53 = i_62
                    else
                        i_56.b = 1
                
                if (i_56.b == 0)
                    goto label_708cf7
                
                uint32_t temp15_1 = eax_17
                eax_17 = var_93c_1 - eax_17
                cond:3_1 = var_93c_1 != temp15_1
                var_93c_1 = eax_17
            while (cond:3_1)
        
        uint32_t i_57
        
        if (ecx_4 == 0)
            i_57 = i_53
        else
            int32_t edi_7 = *((ecx_4 << 2) + &data_754b5c)
            
            if (edi_7 != 0)
                i_57 = i_53
                
                if (edi_7 != 1 && i_57 != 0)
                    int32_t ecx_9 = 0
                    int32_t esi_8 = 0
                    
                    do
                        int32_t eax_46
                        int32_t edx_14
                        edx_14:eax_46 = mulu.dp.d(edi_7, (&var_1d4)[esi_8])
                        (&var_1d4)[esi_8] = eax_46 + ecx_9
                        esi_8 += 1
                        ecx_9 = adc.d(edx_14, 0, eax_46 + ecx_9 u< eax_46)
                    while (esi_8 != i_57)
                    
                    i_57 = i_48
                    
                    if (ecx_9 == 0)
                        i_53 = i_57
                    else
                        if (i_57 u>= 0x73)
                            goto label_708cf7
                        
                        (&var_1d4)[i_57] = ecx_9
                        i_57 = i_48 + 1
                        i_53 = i_57
                        i_48 = i_57
            else
            label_708cf7:
                int32_t var_748_6 = 0
                i_48 = 0
                _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
                i_57 = i_48
                i_53 = i_57
        
        int32_t edx_16 = var_920
        
        if (edx_16 == 0)
            i_61 = i_53
        else
            int32_t ecx_10 = 0
            
            if (i_57 != 0)
                do
                    int32_t temp7_1 = (&var_1d4)[ecx_10]
                    (&var_1d4)[ecx_10] += edx_16
                    i_57 = i_48
                    edx_16 = adc.d(0, 0, temp7_1 + edx_16 u< temp7_1)
                    i_53 = i_57
                    ecx_10 += 1
                while (ecx_10 != i_57)
            
            if (edx_16 == 0)
                i_61 = i_53
            else if (i_57 u>= 0x73)
                int32_t var_748_7 = 0
                i_48 = 0
                _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
                i_61 = i_48
                i_53 = i_61
            else
                (&var_1d4)[i_57] = edx_16
                i_61 = i_48 + 1
                i_53 = i_61
                i_48 = i_61
else
    i_61 = 0

if (ebx_1 == 0)
    goto label_709262

int32_t edx_17 = 0
uint32_t i_18 = divu.dp.d(edx_17:ebx_1, 0xa)
i_11 = i_18
uint32_t ecx_11 = modu.dp.d(edx_17:ebx_1, 0xa)

if (i_18 != 0)
    bool cond:2_1
    
    do
        if (i_18 u> 0x26)
            i_18 = 0x26
        
        uint32_t ecx_12 = zx.d(*((i_18 << 2) + &data_754ac6))
        uint32_t esi_9 = zx.d(*((i_18 << 2) + &data_754ac7))
        uint32_t i_58 = ecx_12 + esi_9
        _memset(&var_744, 0, ecx_12 << 2)
        sub_700660(&(&var_744)[ecx_12], (zx.d(*((i_18 << 2) + &data_754ac4)) << 2) + &data_7541c0, 
            esi_9 << 2)
        uint32_t i_59
        char (* var_b44_8)[0x1cc]
        int32_t ecx_14
        
        if (i_58 u<= 1)
            int32_t edi_10 = var_744
            uint32_t i_63
            
            if (edi_10 == 0)
                int32_t var_b40_5 = 0
                int32_t var_918_3 = 0
                i_48 = 0
                var_b44_8 = &var_914
                int32_t var_b48_5 = 0x1cc
            label_708f0f:
                _memcpy_s(&var_1d4, 0x1cc, var_b44_8, nullptr)
            label_708f17:
                i_63 = i_48
            label_708f1d:
                i_59.b = 1
                i_53 = i_63
                i_61 = i_53
            else if (edi_10 != 1 && i_61 != 0)
                ecx_14 = 0
                int32_t esi_10 = 0
                
                do
                    int32_t eax_58
                    int32_t edx_19
                    edx_19:eax_58 = mulu.dp.d(edi_10, (&var_1d4)[esi_10])
                    (&var_1d4)[esi_10] = eax_58 + ecx_14
                    esi_10 += 1
                    ecx_14 = adc.d(edx_19, 0, eax_58 + ecx_14 u< eax_58)
                while (esi_10 != i_61)
                
            label_709008:
                
                if (ecx_14 == 0)
                    goto label_708f17
                
                i_59 = i_48
                
                if (i_59 u< 0x73)
                    (&var_1d4)[i_59] = ecx_14
                    i_63 = i_48 + 1
                    i_48 = i_63
                    goto label_708f1d
                
                int32_t var_748_10 = 0
                i_48 = 0
                _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
                i_59.b = 0
                i_53 = i_48
                i_61 = i_53
            else
                i_59.b = 1
                i_61 = i_53
        else if (i_61 u> 1)
            bool c_13 = i_58 u< i_61
            int32_t* edx_23 = &var_744
            
            if (c_13 == 0)
                edx_23 = &var_1d4
            
            int32_t* edx_24 = &var_1d4
            
            if (c_13 == 0)
                edx_24 = &var_744
            
            uint32_t i_65
            uint32_t i_68
            
            if (c_13 == 0)
                i_68 = i_61
                i_65 = i_61
            else
                i_68 = i_58
                i_65 = i_68
            
            if (c_13 == 0)
                i_61 = i_58
            
            uint32_t i_39 = 0
            int32_t i_12 = 0
            i_24 = 0
            
            if (i_68 == 0)
            label_7091be:
                i_48 = i_39
                _memcpy_s(&var_1d4, 0x1cc, &var_3a4, i_39 << 2)
                i_59.b = 1
            else
                int32_t eax_63 = edx_23 - &var_3a4
                int32_t var_920_2 = eax_63
                
                while (true)
                    int32_t eax_65 = *(&var_3a4 + eax_63 + (i_12 << 2))
                    
                    if (eax_65 != 0)
                        int32_t eax_66 = 0
                        int32_t i_3 = 0
                        int32_t var_934_2 = 0
                        int32_t i_2 = i_12
                        
                        if (i_61 != 0)
                            while (i_2 != 0x73)
                                if (i_2 == i_39)
                                    (&var_3a4)[i_2] = 0
                                    i_24 = eax_66 + 1 + i_12
                                    eax_66 = var_934_2
                                
                                int32_t eax_70
                                int32_t edx_26
                                edx_26:eax_70 = mulu.dp.d(edx_24[eax_66], eax_65)
                                int32_t eax_71 = eax_70 + i_3
                                int32_t temp33_1 = (&var_3a4)[i_2]
                                (&var_3a4)[i_2] += eax_71
                                eax_66 = var_934_2 + 1
                                i_2 += 1
                                var_934_2 = eax_66
                                i_3 = adc.d(adc.d(edx_26, 0, eax_70 + i_3 u< eax_70), 0, 
                                    temp33_1 + eax_71 u< temp33_1)
                                i_39 = i_24
                                
                                if (eax_66 == i_61)
                                    break
                            
                            while (i_3 != 0)
                                if (i_2 == 0x73)
                                    goto label_709272
                                
                                if (i_2 == i_39)
                                    (&var_3a4)[i_2] = 0
                                    i_24 = i_2 + 1
                                
                                int32_t temp39_1 = (&var_3a4)[i_2]
                                (&var_3a4)[i_2] += i_3
                                i_39 = i_24
                                i_3 = adc.d(0, 0, temp39_1 + i_3 u< temp39_1)
                                i_2 += 1
                        
                        if (i_2 == 0x73)
                        label_709272:
                            int32_t var_918_4 = 0
                            i_48 = 0
                            _memcpy_s(&var_1d4, 0x1cc, &var_914, nullptr)
                            i_59.b = 0
                            break
                        
                        i_68 = i_65
                    else if (i_12 == i_39)
                        (&var_3a4)[i_12] &= eax_65
                        i_39 = i_12 + 1
                        i_24 = i_39
                    
                    eax_63 = var_920_2
                    i_12 += 1
                    
                    if (i_12 == i_68)
                        goto label_7091be
            
            i_61 = i_48
            i_53 = i_61
        else
            int32_t edi_11 = var_1d4
            i_48 = i_58
            _memcpy_s(&var_1d4, 0x1cc, &var_744, i_58 << 2)
            
            if (edi_11 == 0)
                int32_t var_b40_7 = 0
                int32_t var_748_9 = 0
                i_48 = 0
                var_b44_8 = &var_744
                int32_t var_b48_6 = 0x1cc
                goto label_708f0f
            
            uint32_t i_64 = i_48
            i_59 = 1
            i_53 = i_64
            
            if (edi_11 != 1 && i_64 != 0)
                ecx_14 = 0
                int32_t esi_11 = 0
                
                do
                    int32_t eax_61
                    int32_t edx_21
                    edx_21:eax_61 = mulu.dp.d(edi_11, (&var_1d4)[esi_11])
                    (&var_1d4)[esi_11] = eax_61 + ecx_14
                    esi_11 += 1
                    ecx_14 = adc.d(edx_21, 0, eax_61 + ecx_14 u< eax_61)
                while (esi_11 != i_64)
                
                goto label_709008
            
            i_61 = i_53
        
        if (i_59.b == 0)
            int32_t var_748_12 = 0
            i_48 = 0
            int32_t var_b40_9 = 0
            goto label_709329
        
        uint32_t i_27 = i_18
        i_18 = i_11 - i_18
        cond:2_1 = i_11 != i_27
        i_11 = i_18
    while (cond:2_1)

if (ecx_11 == 0)
    goto label_709262

int32_t edi_12 = *((ecx_11 << 2) + &data_754b5c)
int32_t result

if (edi_12 != 0)
    if (edi_12 == 1)
        goto label_709262
    
    if (i_61 == 0)
        goto label_709268
    
    int32_t ecx_15 = 0
    int32_t esi_12 = 0
    
    do
        int32_t eax_79
        int32_t edx_29
        edx_29:eax_79 = mulu.dp.d(edi_12, (&var_1d4)[esi_12])
        (&var_1d4)[esi_12] = eax_79 + ecx_15
        esi_12 += 1
        ecx_15 = adc.d(edx_29, 0, eax_79 + ecx_15 u< eax_79)
    while (esi_12 != i_61)
    
    if (ecx_15 == 0)
        goto label_709254
    
    uint32_t i_60 = i_48
    
    if (i_60 u< 0x73)
        (&var_1d4)[i_60] = ecx_15
        i_61 = i_48 + 1
        i_48 = i_61
        goto label_70925a
    
    int32_t var_748_13 = 0
    i_48 = 0
    int32_t var_b40_10 = 0
label_709329:
    _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
    __crt_strtox::assemble_floating_point_infinity(arg1[0xc2].b, arg2)
    result = 3
else
    int32_t var_748_11 = 0
    i_48 = 0
    _memcpy_s(&var_1d4, 0x1cc, &var_744, nullptr)
label_709254:
    i_61 = i_48
label_70925a:
    i_53 = i_61
label_709262:
    int32_t ecx_19
    
    if (i_61 != 0)
        int32_t var_938_2 = 0
        int32_t eflags_1
        int32_t eax_84
        eax_84, eflags_1 = _bit_scan_reverse((&i_48)[i_61])
        ecx_19 = (i_61 - 1) << 5
    else
    label_709268:
        ecx_19 = 0
    
    int32_t eax_123 = eax_9
    
    if (ecx_19 u>= ((eax_2 - 1) & 0x1d) + 0x19 || eax_123 == 0)
        eax_123.b = eax_123 != 0
        result = __crt_strtox::assemble_floating_point_value_from_big_integer(&i_48, ecx_19, 
            arg1[0xc2].b, eax_123.b, arg2)
    else
        void* edi_13 = var_930
        uint32_t i_42 = 0
        int32_t esi_13 = 0
        uint32_t i_46 = 0
        int32_t ecx_20 = 0
        uint32_t i_30 = 0
        int32_t var_928_2 = 0
        uint32_t var_574[0x1c][0x4]
        
        if (edi_13 != eax_8)
            do
                if (ecx_20 == 9)
                    if (i_42 != 0)
                        int32_t ecx_21 = 0
                        int32_t edi_14 = 0
                        
                        do
                            int32_t eax_87
                            int32_t edx_31
                            edx_31:eax_87 = mulu.dp.d(var_574[0][edi_14], 0x3b9aca00)
                            var_574[0][edi_14] = eax_87 + ecx_21
                            edi_14 += 1
                            ecx_21 = adc.d(edx_31, 0, eax_87 + ecx_21 u< eax_87)
                        while (edi_14 != i_42)
                        
                        esi_13 = var_928_2
                        
                        if (ecx_21 == 0)
                            i_42 = i_30
                        else
                            uint32_t i_49 = i_30
                            
                            if (i_49 u>= 0x73)
                                int32_t var_748_14 = 0
                                i_30 = 0
                                _memcpy_s(&var_574, 0x1cc, &var_744, nullptr)
                                i_42 = i_30
                            else
                                var_574[0][i_49] = ecx_21
                                i_42 = i_30 + 1
                                i_30 = i_42
                        
                        edi_13 = var_930
                    
                    if (esi_13 != 0)
                        int32_t ecx_22 = 0
                        
                        if (i_42 != 0)
                            do
                                int32_t temp17_1 = var_574[0][ecx_22]
                                var_574[0][ecx_22] += esi_13
                                i_42 = i_30
                                esi_13 = adc.d(0, 0, temp17_1 + esi_13 u< temp17_1)
                                ecx_22 += 1
                            while (ecx_22 != i_42)
                        
                        if (esi_13 != 0)
                            if (i_42 u>= 0x73)
                                int32_t var_748_15 = 0
                                i_30 = 0
                                _memcpy_s(&var_574, 0x1cc, &var_744, nullptr)
                                i_42 = i_30
                            else
                                var_574[0][i_42] = esi_13
                                i_42 = i_30 + 1
                                i_30 = i_42
                    
                    esi_13 = 0
                    ecx_20 = 0
                
                esi_13 = esi_13 * 0xa + zx.d(*edi_13)
                ecx_20 += 1
                edi_13 += 1
                var_928_2 = esi_13
                var_930 = edi_13
            while (edi_13 != eax_8)
            
            i_46 = i_42
            
            if (ecx_20 != 0)
                int32_t edx_33 = 0
                uint32_t eax_92 = divu.dp.d(edx_33:ecx_20, 0xa)
                uint32_t var_93c_3 = eax_92
                uint32_t ecx_23 = modu.dp.d(edx_33:ecx_20, 0xa)
                
                if (eax_92 != 0)
                    bool cond:9_1
                    
                    do
                        if (eax_92 u> 0x26)
                            eax_92 = 0x26
                        
                        uint32_t ecx_24 = zx.d(*((eax_92 << 2) + &data_754ac6))
                        uint32_t esi_15 = zx.d(*((eax_92 << 2) + &data_754ac7))
                        uint32_t i_50 = ecx_24 + esi_15
                        _memset(&var_744, 0, ecx_24 << 2)
                        sub_700660(&(&var_744)[ecx_24], 
                            (zx.d(*((eax_92 << 2) + &data_754ac4)) << 2) + &data_7541c0, 
                            esi_15 << 2)
                        uint32_t i_51
                        char (* var_b44_20)[0x1cc]
                        void* var_b40_14
                        char (* eax_99)[0x1cc]
                        int32_t ecx_26
                        
                        if (i_50 u<= 1)
                            int32_t edi_17 = var_744
                            
                            if (edi_17 == 0)
                                int32_t var_918_5 = 0
                                i_30 = 0
                                var_b40_14 = nullptr
                                eax_99 = &var_914
                            label_70983e:
                                var_b44_20 = eax_99
                                int32_t var_b48_9 = 0x1cc
                                goto label_70984b
                            
                            if (edi_17 != 1 && i_42 != 0)
                                ecx_26 = 0
                                int32_t esi_16 = 0
                                
                                do
                                    int32_t eax_101
                                    int32_t edx_35
                                    edx_35:eax_101 = mulu.dp.d(edi_17, var_574[0][esi_16])
                                    var_574[0][esi_16] = eax_101 + ecx_26
                                    esi_16 += 1
                                    ecx_26 = adc.d(edx_35, 0, eax_101 + ecx_26 u< eax_101)
                                while (esi_16 != i_42)
                                
                            label_7095e6:
                                
                                if (ecx_26 == 0)
                                    i_42 = i_30
                                    i_51.b = 1
                                    i_46 = i_42
                                else
                                    i_51 = i_30
                                    
                                    if (i_51 u>= 0x73)
                                        int32_t var_748_17 = 0
                                        i_30 = 0
                                        _memcpy_s(&var_574, 0x1cc, &var_744, nullptr)
                                        i_51.b = 0
                                        i_42 = i_30
                                        i_46 = i_42
                                    else
                                        var_574[0][i_51] = ecx_26
                                        i_42 = i_30 + 1
                                        i_30 = i_42
                                        i_51.b = 1
                                        i_46 = i_42
                            else
                                i_51.b = 1
                        else if (i_42 u> 1)
                            bool c_22 = i_50 u< i_42
                            int32_t* edi_19 = &var_744
                            int32_t* edx_39
                            
                            if (c_22 != 0)
                                edx_39 = &var_574
                            else
                                edi_19 = &var_574
                                edx_39 = &var_744
                            
                            uint32_t i_45 = i_50
                            
                            if (c_22 == 0)
                                i_45 = i_42
                                i_42 = i_50
                            
                            uint32_t i_40 = 0
                            int32_t i_13 = 0
                            i_24 = 0
                            
                            if (i_45 == 0)
                            label_70982e:
                                i_30 = i_40
                                var_b40_14 = i_40 << 2
                                eax_99 = &var_3a4
                                goto label_70983e
                            
                            int32_t edi_20 = edi_19 - &var_3a4
                            int32_t var_94c_3 = edi_20
                            
                            while (true)
                                int32_t eax_106 = *(&var_3a4 + edi_20 + (i_13 << 2))
                                
                                if (eax_106 != 0)
                                    int32_t eax_107 = 0
                                    int32_t i_5 = 0
                                    int32_t var_934_3 = 0
                                    int32_t i_4 = i_13
                                    
                                    if (i_42 != 0)
                                        while (i_4 != 0x73)
                                            if (i_4 == i_40)
                                                (&var_3a4)[i_4] = 0
                                                i_24 = eax_107 + 1 + i_13
                                                eax_107 = var_934_3
                                            
                                            int32_t eax_111
                                            int32_t edx_41
                                            edx_41:eax_111 = mulu.dp.d(edx_39[eax_107], eax_106)
                                            int32_t eax_112 = eax_111 + i_5
                                            int32_t temp46_1 = (&var_3a4)[i_4]
                                            (&var_3a4)[i_4] += eax_112
                                            eax_107 = var_934_3 + 1
                                            i_4 += 1
                                            var_934_3 = eax_107
                                            i_5 = adc.d(adc.d(edx_41, 0, eax_111 + i_5 u< eax_111), 
                                                0, temp46_1 + eax_112 u< temp46_1)
                                            i_40 = i_24
                                            
                                            if (eax_107 == i_42)
                                                break
                                        
                                        while (i_5 != 0)
                                            if (i_4 == 0x73)
                                                goto label_7098fb
                                            
                                            if (i_4 == i_40)
                                                (&var_3a4)[i_4] = 0
                                                i_24 = i_4 + 1
                                            
                                            int32_t temp48_1 = (&var_3a4)[i_4]
                                            (&var_3a4)[i_4] += i_5
                                            i_40 = i_24
                                            i_5 = adc.d(0, 0, temp48_1 + i_5 u< temp48_1)
                                            i_4 += 1
                                    
                                    if (i_4 == 0x73)
                                    label_7098fb:
                                        int32_t var_918_6 = 0
                                        i_30 = 0
                                        _memcpy_s(&var_574, 0x1cc, &var_914, nullptr)
                                        i_51.b = 0
                                        break
                                    
                                    edi_20 = var_94c_3
                                else if (i_13 == i_40)
                                    (&var_3a4)[i_13] &= eax_106
                                    i_40 = i_13 + 1
                                    i_24 = i_40
                                
                                i_13 += 1
                                
                                if (i_13 == i_45)
                                    goto label_70982e
                            
                            i_42 = i_30
                            i_46 = i_42
                        else
                            uint32_t edi_18 = var_574[0][0]
                            i_30 = i_50
                            _memcpy_s(&var_574, 0x1cc, &var_744, i_50 << 2)
                            
                            if (edi_18 != 0)
                                i_42 = i_30
                                i_51 = 1
                                i_46 = i_42
                                
                                if (edi_18 != 1 && i_42 != 0)
                                    ecx_26 = 0
                                    int32_t esi_17 = 0
                                    
                                    do
                                        int32_t eax_104
                                        int32_t edx_37
                                        edx_37:eax_104 = mulu.dp.d(edi_18, var_574[0][esi_17])
                                        var_574[0][esi_17] = eax_104 + ecx_26
                                        esi_17 += 1
                                        ecx_26 = adc.d(edx_37, 0, eax_104 + ecx_26 u< eax_104)
                                    while (esi_17 != i_42)
                                    
                                    goto label_7095e6
                            else
                                var_b40_14 = nullptr
                                int32_t var_748_18 = 0
                                i_30 = 0
                                var_b44_20 = &var_744
                                int32_t var_b48_8 = 0x1cc
                            label_70984b:
                                _memcpy_s(&var_574, 0x1cc, var_b44_20, var_b40_14)
                                i_51.b = 1
                                i_42 = i_30
                                i_46 = i_42
                        
                        if (i_51.b == 0)
                            int32_t var_748_19 = 0
                            i_30 = 0
                            int32_t var_b40_16 = 0
                            goto label_70995d
                        
                        uint32_t temp30_1 = eax_92
                        eax_92 = var_93c_3 - eax_92
                        cond:9_1 = var_93c_3 != temp30_1
                        var_93c_3 = eax_92
                    while (cond:9_1)
                
                if (ecx_23 != 0)
                    int32_t edi_21 = *((ecx_23 << 2) + &data_754b5c)
                    
                    if (edi_21 == 0)
                    label_70993d:
                        int32_t var_b40_17 = 0
                        i_30 = 0
                        int32_t var_748_20 = 0
                    label_70995d:
                        _memcpy_s(&var_574, 0x1cc, &var_744, nullptr)
                        i_42 = i_30
                        i_46 = i_42
                    else if (edi_21 != 1 && i_42 != 0)
                        int32_t ecx_27 = 0
                        int32_t esi_18 = 0
                        
                        do
                            int32_t eax_120
                            int32_t edx_44
                            edx_44:eax_120 = mulu.dp.d(edi_21, var_574[0][esi_18])
                            var_574[0][esi_18] = eax_120 + ecx_27
                            esi_18 += 1
                            ecx_27 = adc.d(edx_44, 0, eax_120 + ecx_27 u< eax_120)
                        while (esi_18 != i_42)
                        
                        if (ecx_27 == 0)
                            i_42 = i_30
                            i_46 = i_42
                        else
                            uint32_t i_52 = i_30
                            
                            if (i_52 u>= 0x73)
                                goto label_70993d
                            
                            var_574[0][i_52] = ecx_27
                            i_42 = i_30 + 1
                            i_30 = i_42
                            i_46 = i_42
                
                int32_t edx_46 = var_928_2
                
                if (edx_46 != 0)
                    int32_t ecx_28 = 0
                    
                    if (i_42 != 0)
                        do
                            int32_t temp22_1 = var_574[0][ecx_28]
                            var_574[0][ecx_28] += edx_46
                            i_42 = i_30
                            edx_46 = adc.d(0, 0, temp22_1 + edx_46 u< temp22_1)
                            i_46 = i_42
                            ecx_28 += 1
                        while (ecx_28 != i_42)
                    
                    if (edx_46 != 0)
                        if (i_42 u>= 0x73)
                            int32_t var_748_21 = 0
                            i_30 = 0
                            _memcpy_s(&var_574, 0x1cc, &var_744, nullptr)
                            i_42 = i_30
                        else
                            var_574[0][i_42] = edx_46
                            i_42 = i_30 + 1
                            i_30 = i_42
                        
                        i_46 = i_42
            
            eax_123 = eax_9
        
        if (*arg1 s< 0)
            eax_123 -= *arg1
        
        int32_t edx_47 = 0
        int32_t var_3a0_1 = 0
        uint32_t eax_124 = divu.dp.d(edx_47:eax_123, 0xa)
        uint32_t edx_48 = modu.dp.d(edx_47:eax_123, 0xa)
        uint32_t i_35 = 1
        var_3a4 = 1
        uint32_t i_23 = 1
        i_24 = 1
        uint32_t var_93c_4 = eax_124
        char var_b2c[0x1cc]
        
        if (eax_124 != 0)
            bool cond:7_1
            
            do
                if (eax_124 u> 0x26)
                    eax_124 = 0x26
                
                uint32_t ecx_30 = zx.d(*((eax_124 << 2) + &data_754ac6))
                uint32_t esi_19 = zx.d(*((eax_124 << 2) + &data_754ac7))
                uint32_t i_19 = ecx_30 + esi_19
                _memset(&var_744, 0, ecx_30 << 2)
                sub_700660(&(&var_744)[ecx_30], 
                    (zx.d(*((eax_124 << 2) + &data_754ac4)) << 2) + &data_7541c0, esi_19 << 2)
                uint32_t i_31
                char (* var_b44_24)[0x1cc]
                uint32_t i_36
                int32_t esi_20
                
                if (i_19 u> 1)
                    uint32_t i_20 = i_23
                    
                    if (i_20 u> 1)
                        bool c_30 = i_19 u< i_20
                        int32_t* esi_22 = &var_744
                        int32_t* edi_26
                        
                        if (c_30 != 0)
                            edi_26 = &var_3a4
                        else
                            esi_22 = &var_3a4
                            edi_26 = &var_744
                        
                        i_11 = i_19
                        
                        if (c_30 == 0)
                            i_11 = i_20
                            i_20 = i_19
                        
                        uint32_t i_41 = 0
                        int32_t i_17 = 0
                        uint32_t i_47 = 0
                        
                        if (i_11 == 0)
                        label_709dc0:
                            i_24 = i_41
                            _memcpy_s(&var_3a4, 0x1cc, &var_914, i_41 << 2)
                            i_31.b = 1
                        else
                            int32_t esi_23 = esi_22 - &var_914
                            int32_t var_94c_4 = esi_23
                            
                            while (true)
                                int32_t eax_137 = *(&var_914 + esi_23 + (i_17 << 2))
                                
                                if (eax_137 != 0)
                                    int32_t i_10 = 0
                                    int32_t eax_138 = 0
                                    int32_t var_928_3 = 0
                                    int32_t i_6 = i_17
                                    
                                    if (i_20 != 0)
                                        while (i_6 != 0x73)
                                            if (i_6 == i_41)
                                                *(&var_914 + (i_6 << 2)) = 0
                                                i_47 = eax_138 + 1 + i_17
                                                eax_138 = var_928_3
                                            
                                            int32_t eax_142
                                            int32_t edx_55
                                            edx_55:eax_142 = mulu.dp.d(edi_26[eax_138], eax_137)
                                            int32_t eax_143 = eax_142 + i_10
                                            int32_t temp43_1 = *(&var_914 + (i_6 << 2))
                                            *(&var_914 + (i_6 << 2)) += eax_143
                                            eax_138 = var_928_3 + 1
                                            i_6 += 1
                                            i_10 = adc.d(
                                                adc.d(edx_55, 0, eax_142 + i_10 u< eax_142), 0, 
                                                temp43_1 + eax_143 u< temp43_1)
                                            i_41 = i_47
                                            var_928_3 = eax_138
                                            
                                            if (eax_138 == i_20)
                                                break
                                        
                                        if (i_10 != 0)
                                            int32_t i_7
                                            
                                            do
                                                if (i_6 == 0x73)
                                                    goto label_709e6e
                                                
                                                if (i_6 == i_41)
                                                    *(&var_914 + (i_6 << 2)) = 0
                                                    i_47 = i_6 + 1
                                                
                                                int32_t temp44_1 = *(&var_914 + (i_6 << 2))
                                                *(&var_914 + (i_6 << 2)) += i_10
                                                i_7 = adc.d(0, 0, temp44_1 + i_10 u< temp44_1)
                                                i_6 += 1
                                                i_10 = i_7
                                                i_41 = i_47
                                            while (i_7 != 0)
                                    
                                    if (i_6 == 0x73)
                                    label_709e6e:
                                        int32_t var_b30_1 = 0
                                        i_24 = 0
                                        _memcpy_s(&var_3a4, 0x1cc, &var_b2c, nullptr)
                                        i_31.b = 0
                                        break
                                    
                                    esi_23 = var_94c_4
                                else if (i_17 == i_41)
                                    *(&var_914 + (i_17 << 2)) &= eax_137
                                    i_41 = i_17 + 1
                                    i_47 = i_41
                                
                                i_17 += 1
                                
                                if (i_17 == i_11)
                                    goto label_709dc0
                        
                        i_35 = i_24
                        i_23 = i_35
                    else
                        int32_t esi_21 = var_3a4
                        i_24 = i_19
                        _memcpy_s(&var_3a4, 0x1cc, &var_744, i_19 << 2)
                        
                        if (esi_21 == 0)
                            int32_t var_b40_21 = 0
                            int32_t var_748_23 = 0
                            i_24 = 0
                            var_b44_24 = &var_744
                            int32_t var_b48_12 = 0x1cc
                            goto label_709ae3
                        
                        uint32_t i_37 = i_24
                        i_31 = 1
                        i_23 = i_37
                        
                        if (esi_21 == 1 || i_37 == 0)
                            i_35 = i_23
                        else
                            esi_20 = 0
                            int32_t edi_25 = 0
                            
                            do
                                int32_t eax_135
                                int32_t edx_52
                                edx_52:eax_135 = mulu.dp.d(esi_21, (&var_3a4)[edi_25])
                                (&var_3a4)[edi_25] = eax_135 + esi_20
                                edi_25 += 1
                                esi_20 = adc.d(edx_52, 0, eax_135 + esi_20 u< eax_135)
                            while (edi_25 != i_37)
                            
                            i_42 = i_46
                        label_709c02:
                            
                            if (esi_20 == 0)
                                goto label_709aeb
                            
                            i_31 = i_24
                            
                            if (i_31 u< 0x73)
                                (&var_3a4)[i_31] = esi_20
                                i_36 = i_24 + 1
                                i_24 = i_36
                                goto label_709af1
                            
                            int32_t var_748_24 = 0
                            i_24 = 0
                            _memcpy_s(&var_3a4, 0x1cc, &var_744, nullptr)
                            i_31.b = 0
                            i_23 = i_24
                            i_35 = i_23
                else if (var_744 != 0)
                    if (var_744 != 1 && i_23 != 0)
                        esi_20 = 0
                        int32_t edi_24 = 0
                        
                        do
                            int32_t eax_132
                            int32_t edx_50
                            edx_50:eax_132 = mulu.dp.d(var_744, (&var_3a4)[edi_24])
                            (&var_3a4)[edi_24] = eax_132 + esi_20
                            edi_24 += 1
                            esi_20 = adc.d(edx_50, 0, eax_132 + esi_20 u< eax_132)
                        while (edi_24 != i_23)
                        
                        goto label_709c02
                    
                    i_31.b = 1
                    i_35 = i_23
                else
                    int32_t var_b40_19 = 0
                    int32_t var_918_7 = 0
                    i_24 = 0
                    var_b44_24 = &var_914
                    int32_t var_b48_11 = 0x1cc
                label_709ae3:
                    _memcpy_s(&var_3a4, 0x1cc, var_b44_24, nullptr)
                label_709aeb:
                    i_36 = i_24
                label_709af1:
                    i_31.b = 1
                    i_23 = i_36
                    i_35 = i_23
                
                if (i_31.b == 0)
                    int32_t var_b30_2 = 0
                    i_24 = 0
                    int32_t var_b40_24 = 0
                    goto label_709f34
                
                uint32_t temp26_1 = eax_124
                eax_124 = var_93c_4 - eax_124
                cond:7_1 = var_93c_4 != temp26_1
                var_93c_4 = eax_124
            while (cond:7_1)
        
        uint32_t i_38
        
        if (edx_48 == 0)
        label_709f5e:
            i_38 = i_23
        label_709f66:
            int32_t esi_25
            
            if (i_42 != 0)
                int32_t var_938_6 = 0
                int32_t eflags_2
                int32_t eax_155
                eax_155, eflags_2 = _bit_scan_reverse((&i_30)[i_42])
                esi_25 = (i_42 - 1) << 5
            else
                esi_25 = 0
            
            int32_t edx_60
            
            if (i_38 != 0)
                int32_t var_938_7 = 0
                int32_t eflags_3
                int32_t eax_158
                eax_158, eflags_3 = _bit_scan_reverse((&i_24)[i_38])
                edx_60 = (i_38 - 1) << 5
            else
                edx_60 = 0
            
            int32_t esi_29 = sbb.d(esi_25, esi_25, esi_25 u< edx_60) & (edx_60 - esi_25)
            int32_t var_930_1 = esi_29
            
            if (esi_29 u> 0)
                int32_t eax_163 = var_930_1 & 0x1f
                uint32_t i_14 = esi_29 u>> 5
                int32_t eax_164 = __allshl(1, 0, 0x20 - eax_163.b)
                int32_t eflags_4
                int32_t ecx_37
                ecx_37, eflags_4 = _bit_scan_reverse((&i_30)[i_42])
                int32_t ecx_38
                
                if (eax_164 == 1)
                    ecx_38 = 0
                else
                    ecx_38 = ecx_37 + 1
                
                uint32_t i_25 = i_14 + i_42
                uint32_t i_28 = i_25
                int32_t eax_167
                eax_167.b = eax_163 u> 0x20 - ecx_38
                char var_941_1 = eax_167.b
                ecx_38.b = i_25 u> 0x73
                
                if (i_25 != 0x73 || eax_167.b == 0)
                    eax_167.b = 0
                else
                    eax_167.b = 1
                
                if (ecx_38.b != 0 || eax_167.b != 0)
                    int32_t var_b30_4 = 0
                    i_30 = 0
                    _memcpy_s(&var_574, 0x1cc, &var_b2c, nullptr)
                    i_42 = i_30
                    i_38 = i_23
                    esi_29 = var_930_1
                else
                    if (i_25 u>= 0x72)
                        i_25 = 0x72
                        i_28 = 0x72
                    
                    uint32_t i_21 = i_25
                    i_11 = i_21
                    
                    if (i_25 != 0xffffffff)
                        uint32_t i_8 = i_14
                        uint32_t esi_31 = i_25 - i_8
                        void* edx_63 = &var_574[0][esi_31]
                        
                        for (; i_21 u>= i_8; i_8 = i_14)
                            int32_t eax_168
                            
                            if (esi_31 u>= i_42)
                                eax_168 = 0
                            else
                                eax_168 = *edx_63
                            
                            int32_t eax_170
                            
                            if (esi_31 - 1 u>= i_42)
                                eax_170 = 0
                            else
                                eax_170 = *(edx_63 - 4)
                            
                            edx_63 -= 4
                            var_574[0][i_11] = (eax_170 & not.d(eax_164 - 1)) u>> (0x20 - eax_163.b)
                                | (eax_168 & (eax_164 - 1)) << eax_163.b
                            i_21 = i_11 - 1
                            esi_31 -= 1
                            i_11 = i_21
                            
                            if (i_21 == 0xffffffff)
                                break
                            
                            i_42 = i_30
                        
                        i_25 = i_28
                    
                    if (i_14 != 0)
                        __builtin_memset(&var_574, 0, i_14 << 2)
                    
                    i_42 = i_25 + 1
                    i_38 = i_23
                    esi_29 = var_930_1
                    
                    if (var_941_1 == 0)
                        i_42 = i_25
                    
                    i_30 = i_42
            
            int32_t edx_65 = ((eax_2 - 1) & 0x1d) + 0x19 - ecx_19
            int32_t var_958_1 = edx_65
            
            if (ecx_19 == 0)
                goto label_70a1bf
            
            if (esi_29 u<= edx_65)
                edx_65 -= esi_29
            label_70a1bf:
                
                if (i_42 u<= i_38)
                    if (i_42 u< i_38)
                        var_930_1 = esi_29 + 1
                    else
                        int32_t ecx_43 = i_42 - 1
                        
                        if (ecx_43 != 0xffffffff)
                            while (var_574[0][ecx_43] == (&var_3a4)[ecx_43])
                                ecx_43 -= 1
                                
                                if (ecx_43 == 0xffffffff)
                                    break
                            
                            if (ecx_43 != 0xffffffff && var_574[0][ecx_43] u<= (&var_3a4)[ecx_43])
                                var_930_1 = esi_29 + 1
                
                int32_t edx_67 = edx_65 & 0x1f
                uint32_t i_15 = edx_65 u>> 5
                int32_t eax_180 = __allshl(1, 0, 0x20 - edx_67.b)
                int32_t eflags_5
                int32_t ecx_46
                ecx_46, eflags_5 = _bit_scan_reverse((&i_30)[i_42])
                int32_t eax_183
                
                if (eax_180 == 1)
                    eax_183 = 0
                else
                    eax_183 = ecx_46 + 1
                
                uint32_t i_26 = i_15 + i_42
                uint32_t i_29 = i_26
                eax_183.b = edx_67 u> 0x20 - eax_183
                char var_941_2 = eax_183.b
                int32_t ecx_47
                ecx_47.b = i_26 u> 0x73
                
                if (i_26 != 0x73 || eax_183.b == 0)
                    eax_183.b = 0
                else
                    eax_183.b = 1
                
                if (ecx_47.b != 0 || eax_183.b != 0)
                    int32_t var_b30_5 = 0
                    i_30 = 0
                    _memcpy_s(&var_574, 0x1cc, &var_b2c, nullptr)
                else
                    if (i_26 u>= 0x72)
                        i_26 = 0x72
                        i_29 = 0x72
                    
                    uint32_t i_22 = i_26
                    i_11 = i_22
                    
                    if (i_26 != 0xffffffff)
                        uint32_t i_9 = i_15
                        uint32_t esi_35 = i_26 - i_9
                        void* edx_68 = &var_574[0][esi_35]
                        
                        for (; i_22 u>= i_9; i_9 = i_15)
                            int32_t eax_184
                            
                            if (esi_35 u>= i_42)
                                eax_184 = 0
                            else
                                eax_184 = *edx_68
                            
                            int32_t eax_186
                            
                            if (esi_35 - 1 u>= i_42)
                                eax_186 = 0
                            else
                                eax_186 = *(edx_68 - 4)
                            
                            edx_68 -= 4
                            var_574[0][i_11] = (eax_186 & not.d(eax_180 - 1)) u>> (0x20 - edx_67.b)
                                | (eax_184 & (eax_180 - 1)) << edx_67.b
                            i_22 = i_11 - 1
                            esi_35 -= 1
                            i_11 = i_22
                            
                            if (i_22 == 0xffffffff)
                                break
                            
                            i_42 = i_30
                        
                        i_26 = i_29
                    
                    if (i_15 != 0)
                        __builtin_memset(&var_574, 0, i_15 << 2)
                    
                    if (var_941_2 == 0)
                        i_30 = i_26
                    else
                        i_30 = i_26 + 1
                
                uint32_t eax_191
                int32_t edx_69
                eax_191, edx_69 = __crt_strtox::divide(&i_30, &i_24)
                int32_t ecx_52 = edx_69
                uint32_t var_940_5 = eax_191
                edx_69.b = i_30 == 0
                int32_t var_928_6 = ecx_52
                i_11.b = edx_69.b
                bool cond:16_1 = ecx_52 == 0
                
                if (ecx_52 == 0)
                    cond:16_1 = eax_191 == 0xffffffff
                
                int32_t esi_36
                
                if (ecx_52 != 0 || eax_191 u> 0xffffffff)
                    int32_t eflags_7
                    int32_t eax_193
                    eax_193, eflags_7 = _bit_scan_reverse(ecx_52)
                    int32_t esi_37
                    
                    esi_37 = cond:16_1 ? 0 : eax_193 + 1
                    
                    esi_36 = esi_37 + 0x20
                else
                    int32_t eflags_6
                    int32_t eax_192
                    eax_192, eflags_6 = _bit_scan_reverse(eax_191)
                    
                    if (eax_191 == 0xffffffff)
                        esi_36 = 0
                    else
                        esi_36 = eax_192 + 1
                
                if (esi_36 u> var_958_1)
                    esi_36 -= var_958_1
                    int32_t eax_195
                    int32_t edx_70
                    
                    if (edx_69.b != 0)
                        eax_195, edx_70 = __allshl(1, 0, esi_36.b)
                        ecx_52 = var_928_6
                        i_11.b = 1
                    
                    if (edx_69.b == 0 || (((eax_195 - 1) & eax_191)
                            | (adc.d(edx_70, 0xffffffff, eax_195 - 1 u< eax_195) & ecx_52)) != 0)
                        i_11.b = 0
                    
                    uint32_t eax_200
                    eax_200, edx_69 = __aullshr(eax_191, ecx_52, esi_36.b)
                    var_940_5 = eax_200
                    var_928_6 = edx_69
                
                int32_t esi_39 = sbb.d(esi_36, esi_36, 0 u< i_53) & var_1d4
                int32_t var_1d0
                int32_t eax_202
                int32_t edx_77
                eax_202, edx_77 = __allshl(esi_39, 
                    adc.d(sbb.d(edx_69, edx_69, 1 u< i_53) & var_1d0, 0, esi_39 u< 0), var_958_1.b)
                int32_t edi_28
                
                if (ecx_19 == 0)
                    edi_28 = 0xffffffff - var_930_1
                else
                    edi_28 = ecx_19 - 2
                
                result = __crt_strtox::assemble_floating_point_value(eax_202 + var_940_5, 
                    adc.d(edx_77, var_928_6, eax_202 + var_940_5 u< eax_202), edi_28, arg1[0xc2].b, 
                    i_11.b, arg2)
            else
                result = __crt_strtox::assemble_floating_point_value_from_big_integer(&i_48, 
                    ecx_19, arg1[0xc2].b, 1, arg2)
        else
            uint32_t i_32 = *((edx_48 << 2) + &data_754b5c)
            uint32_t i_44 = i_32
            
            if (i_32 == 0)
                uint32_t i_43 = i_32
                i_24 = i_32
                _memcpy_s(&var_3a4, 0x1cc, &var_b2c, i_32)
            label_709e5a:
                i_38 = i_24
                i_23 = i_38
                goto label_709f66
            
            if (i_32 == 1 || i_35 == 0)
                goto label_709f5e
            
            int32_t edi_27 = 0
            int32_t esi_24 = 0
            
            do
                int32_t eax_150
                int32_t edx_58
                edx_58:eax_150 = mulu.dp.d(i_32, (&var_3a4)[esi_24])
                (&var_3a4)[esi_24] = eax_150 + edi_27
                i_32 = i_44
                esi_24 += 1
                edi_27 = adc.d(edx_58, 0, eax_150 + edi_27 u< eax_150)
            while (esi_24 != i_35)
            
            if (edi_27 == 0)
                goto label_709e5a
            
            uint32_t i_33 = i_24
            
            if (i_33 u< 0x73)
                (&var_3a4)[i_33] = edi_27
                i_38 = i_24 + 1
                i_23 = i_38
                i_24 = i_38
                goto label_709f66
            
            int32_t var_b30_3 = 0
            i_24 = 0
            int32_t var_b40_25 = 0
        label_709f34:
            _memcpy_s(&var_3a4, 0x1cc, &var_b2c, nullptr)
            __crt_strtox::assemble_floating_point_zero(arg1[0xc2].b, arg2)
            result = 2

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
