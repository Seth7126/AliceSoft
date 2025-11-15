// 函数: sub_71edad
// 地址: 0x71edad
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_974 = edi
void var_798
int32_t mxcsr =
    x48fbfdd4::scoped_fp_state_reset::operator[]::scoped_fp_state_reset::scoped_fp_state_reset(
    &var_798)
int32_t eax_2
eax_2.b = 0x2d

if ((arg1 & 0x80000000) == 0)
    eax_2.b = 0x20

*arg3 = sx.d(eax_2.b)
arg3[2] = arg4
int32_t arg_4
int32_t edi_2 = arg_4
void* result
void* ecx_46
uint32_t edx_41
void* const var_978

if ((arg1 & 0x7ff00000) != 0 || (edi_2 | (arg1 & 0xfffff)) != 0)
    int32_t eax_8 = __acrt_fp_classify(&arg_4)
    
    if (eax_8 != 0)
        arg3[1] = 1
    
    if (eax_8 == 1)
        var_978 = "1#INF"
        goto label_720109
    
    if (eax_8 == 2)
        var_978 = "1#QNAN"
        goto label_720109
    
    if (eax_8 == 3)
        var_978 = "1#SNAN"
        goto label_720109
    
    if (eax_8 == 4)
        var_978 = "1#IND"
        goto label_720109
    
    int32_t var_788_1 = 0
    arg_4 = edi_2
    arg1 &= 0x7fffffff
    long double x87_r7_1 = fconvert.t(arg_4.q)
    double var_76c_1 = fconvert.d(x87_r7_1)
    int32_t edi_3 = var_76c_1:4.d
    uint32_t ecx_10 = edi_3 u>> 0x14
    int32_t eax_17 = ecx_10 & 0x7ff
    char edx
    int32_t esi_2
    
    if (eax_17 != 0)
        edx = 0
        esi_2 = 0x100000
        eax_17 = 0
    else
        edx = 1
        esi_2 = 0
    
    int32_t ebx_1 = var_76c_1.d
    int32_t edi_5 = adc.d(edi_3 & 0xfffff, esi_2, ebx_1 + eax_17 u< ebx_1)
    int32_t eax_18
    eax_18.b = edx != 0
    int32_t esi_4 = (ecx_10 & 0x7ff) - 0x434 + eax_18 + 1
    int32_t ecx_12
    int16_t x87control
    int16_t x87control_1
    int80_t st0_1
    st0_1, ecx_12, x87control_1 = sub_7211f0(mxcsr, x87control, x87_r7_1)
    int32_t var_978_2 = ecx_12
    int32_t var_97c = ecx_12
    var_97c.q = fconvert.d(st0_1)
    int32_t eax_20 = sub_7218a0(sub_721300(mxcsr, x87control_1, var_97c))
    int32_t var_770_1 = eax_20
    
    if (eax_20 == 0x7fffffff || eax_20 == 0x80000000)
        var_770_1 = 0
    
    int32_t var_1d4 = ebx_1 + eax_17
    int32_t var_1d0_1 = edi_5
    void* ebx_3
    ebx_3.b = edi_5 != 0
    void* result_15 = ebx_3 + 1
    void* result_2 = result_15
    int32_t var_574
    char* var_3a8
    uint32_t var_3a4[0x1c][0x4]
    
    if (esi_4 s< 0)
        if (esi_4 != 0xfffffc02)
            var_574 = 0
            int32_t var_570_4 = 0x100000
            int32_t var_578_6 = 2
        
        char* eax_62
        
        if (esi_4 == 0xfffffc02 || result_15 != 2)
        label_71f456:
            var_76c_1:4.d = 0
            int32_t eflags_4
            int32_t eax_64
            eax_64, eflags_4 = _bit_scan_reverse((&result_2)[result_15])
            int32_t eax_65
            eax_65.b = 0x20 u< 1
            char var_749_4 = eax_65.b
            int32_t ecx_34
            ecx_34.b = result_15 u> 0x73
            
            if (result_15 != 0x73 || eax_65.b == 0)
                eax_65.b = 0
            else
                eax_65.b = 1
            
            if (ecx_34.b != 0 || eax_65.b != 0)
                int32_t var_578_7 = 0
                result_2 = nullptr
                _memcpy_s(&var_1d4, 0x1cc, &var_574, nullptr)
            else
                void* result_7 = 0x72
                
                if (result_15 u< 0x72)
                    result_7 = result_15
                
                if (result_7 != 0xffffffff)
                    void* result_22 = result_7
                    void* edi_18 = &(&var_1d4)[result_7]
                    void* var_758_2 = edi_18
                    
                    while (true)
                        int32_t var_754_4
                        
                        if (result_22 u>= result_15)
                            var_754_4 = 0
                        else
                            var_754_4 = *edi_18
                        
                        int32_t edx_10
                        
                        if (result_22 - 1 u>= result_15)
                            edx_10 = 0
                        else
                            edx_10 = *(edi_18 - 4)
                        
                        edi_18 -= 4
                        result_22 -= 1
                        *var_758_2 = edx_10 u>> 0x1f ^ (var_754_4 * 2)
                        var_758_2 -= 4
                        
                        if (result_22 == 0xffffffff)
                            break
                        
                        result_15 = result_2
                
                if (var_749_4 == 0)
                    result_2 = result_7
                else
                    result_2 = result_7 + 1
            
            uint32_t ebx_5 = (1 - esi_4) u>> 5
            _memset(&var_574, 0, ebx_5 << 2)
            (&var_574)[ebx_5] = 1 << ((1 - esi_4).b & 0x1f)
            eax_62 = ebx_5 + 1
        else
            int32_t edx_3 = 0
            
            while (true)
                if (*(&var_574 + edx_3) != *(&var_1d4 + edx_3))
                    goto label_71f456
                
                edx_3 += 4
                
                if (edx_3 == 8)
                    var_76c_1:4.d = 0
                    int32_t eflags_3
                    int32_t eax_52
                    eax_52, eflags_3 = _bit_scan_reverse(edi_5)
                    int32_t esi_11 = 2
                    void var_1cc
                    void* var_758_1 = &var_1cc
                    void* edi_15 = &var_1cc
                    
                    while (true)
                        int32_t var_754_3
                        
                        if (esi_11 u>= result_15)
                            var_754_3 = 0
                        else
                            var_754_3 = *edi_15
                        
                        int32_t edx_6
                        
                        if (esi_11 - 1 u>= result_15)
                            edx_6 = 0
                        else
                            edx_6 = *(edi_15 - 4)
                        
                        edi_15 -= 4
                        esi_11 -= 1
                        *var_758_1 = edx_6 u>> 0x1e ^ var_754_3 << 2
                        var_758_1 -= 4
                        
                        if (esi_11 == 0xffffffff)
                            break
                        
                        result_15 = result_2
                    
                    void* const eax_59
                    eax_59.b = 0x20 u< 2
                    result_2 = eax_59 + 2
                    uint32_t edi_17 = (2 - esi_4) u>> 5
                    char var_75c_3 = (2 - esi_4).b
                    _memset(&var_574, 0, edi_17 << 2)
                    (&var_574)[edi_17] = 1 << (var_75c_3 & 0x1f)
                    eax_62 = edi_17 + 1
                    break
        
        char* var_578_8 = eax_62
        var_3a8 = eax_62
        _memcpy_s(&var_3a4, 0x1cc, &var_574, eax_62 << 2)
    else
        var_574 = 0
        int32_t var_570_1 = 0x100000
        int32_t var_578_1 = 2
        
        if (result_15 != 2)
        label_71f16a:
            int32_t eax_40 = (esi_4 + 1) & 0x1f
            uint32_t edi_10 = (esi_4 + 1) u>> 5
            int32_t eax_41 = __allshl(1, 0, 0x20 - eax_40.b)
            var_76c_1:4.d = 0
            int32_t eflags_2
            int32_t ecx_24
            ecx_24, eflags_2 = _bit_scan_reverse((&result_2)[result_15])
            void* result_13 = result_15 + edi_10
            void* result_16 = result_13
            int32_t eax_44
            eax_44.b = eax_40 u> 0x20
            char var_749_2 = eax_44.b
            int32_t ecx_25
            ecx_25.b = result_13 u> 0x73
            
            if (result_13 != 0x73 || eax_44.b == 0)
                eax_44.b = 0
            else
                eax_44.b = 1
            
            if (ecx_25.b != 0 || eax_44.b != 0)
                int32_t var_578_4 = 0
                result_2 = nullptr
                _memcpy_s(&var_1d4, 0x1cc, &var_574, nullptr)
            else
                if (result_13 u>= 0x72)
                    result_13 = 0x72
                    result_16 = 0x72
                
                void* result_20 = result_13
                void* result_24 = result_20
                
                if (result_13 != 0xffffffff)
                    void* esi_10 = result_13 - edi_10
                    void* ecx_26 = &(&var_1d4)[esi_10]
                    void* var_760_2 = ecx_26
                    
                    while (result_20 u>= edi_10)
                        int32_t edi_11
                        
                        if (esi_10 u>= result_15)
                            edi_11 = 0
                        else
                            edi_11 = *ecx_26
                        
                        int32_t eax_46
                        
                        if (esi_10 - 1 u>= result_15)
                            eax_46 = 0
                        else
                            eax_46 = *(ecx_26 - 4)
                        
                        ecx_26 = var_760_2 - 4
                        var_760_2 = ecx_26
                        (&var_1d4)[result_24] = (edi_11 & (eax_41 - 1)) << eax_40.b
                            | (eax_46 & not.d(eax_41 - 1)) u>> (0x20 - eax_40.b)
                        result_20 = result_24 - 1
                        esi_10 -= 1
                        result_24 = result_20
                        
                        if (result_20 == 0xffffffff)
                            break
                        
                        result_15 = result_2
                    
                    result_13 = result_16
                
                if (edi_10 != 0)
                    __builtin_memset(&var_1d4, 0, edi_10 << 2)
                
                if (var_749_2 == 0)
                    result_2 = result_13
                else
                    result_2 = result_13 + 1
            
            int32_t var_570_3 = 0
            var_574 = 2
            int32_t var_578_5 = 1
            var_3a8 = 1
            int32_t var_978_4 = 4
        else
            int32_t ecx_14 = 0
            
            while (true)
                if (*(&var_574 + ecx_14) != *(&var_1d4 + ecx_14))
                    goto label_71f16a
                
                ecx_14 += 4
                
                if (ecx_14 == 8)
                    int32_t eax_24 = (esi_4 + 2) & 0x1f
                    uint32_t esi_6 = (esi_4 + 2) u>> 5
                    int32_t eax_25 = __allshl(1, 0, 0x20 - eax_24.b)
                    var_76c_1:4.d = 0
                    int32_t eflags_1
                    int32_t ecx_16
                    ecx_16, eflags_1 = _bit_scan_reverse(edi_5)
                    int32_t ecx_17
                    
                    if (eax_25 == 1)
                        ecx_17 = 0
                    else
                        ecx_17 = ecx_16 + 1
                    
                    void* result_12 = esi_6 + 2
                    void* result_17 = result_12
                    int32_t eax_28
                    eax_28.b = eax_24 u> 0x20 - ecx_17
                    char var_749_1 = eax_28.b
                    ecx_17.b = result_12 u> 0x73
                    
                    if (result_12 != 0x73 || eax_28.b == 0)
                        eax_28.b = 0
                    else
                        eax_28.b = 1
                    
                    if (ecx_17.b != 0 || eax_28.b != 0)
                        int32_t var_578_2 = 0
                        result_2 = nullptr
                        _memcpy_s(&var_1d4, 0x1cc, &var_574, nullptr)
                    else
                        if (result_12 u>= 0x72)
                            result_12 = 0x72
                            result_17 = 0x72
                        
                        void* result_21 = result_12
                        void* result_23 = result_21
                        
                        if (result_12 != 0xffffffff)
                            void* esi_8 = result_12 - esi_6
                            void* eax_29 = &(&var_1d4)[esi_8]
                            void* var_750_2 = eax_29
                            
                            while (result_21 u>= esi_6)
                                int32_t edi_6
                                
                                if (esi_8 u>= result_15)
                                    edi_6 = 0
                                else
                                    edi_6 = *eax_29
                                
                                int32_t eax_32
                                
                                if (esi_8 - 1 u>= result_15)
                                    eax_32 = 0
                                else
                                    eax_32 = *(var_750_2 - 4)
                                
                                (&var_1d4)[result_23] =
                                    (eax_32 & not.d(eax_25 - 1)) u>> (0x20 - eax_24.b)
                                    | (edi_6 & (eax_25 - 1)) << eax_24.b
                                result_21 = result_23 - 1
                                esi_8 -= 1
                                eax_29 = var_750_2 - 4
                                result_23 = result_21
                                var_750_2 = eax_29
                                
                                if (result_21 == 0xffffffff)
                                    break
                                
                                result_15 = result_2
                            
                            result_12 = result_17
                        
                        if (esi_6 != 0)
                            __builtin_memset(&var_1d4, 0, esi_6 << 2)
                        
                        if (var_749_1 == 0)
                            result_2 = result_12
                        else
                            result_2 = result_12 + 1
                    
                    int32_t var_570_2 = 0
                    var_574 = 4
                    int32_t var_578_3 = 1
                    var_3a8 = 1
                    int32_t var_978_3 = 4
                    break
        
        _memcpy_s(&var_3a4, 0x1cc, &var_574, 4)
    
    int32_t edx_13 = 0
    int32_t var_778_3 = 0xa
    char var_964[0x1cc]
    int32_t var_744[0x73]
    
    if (var_770_1 s< 0)
        int32_t eax_115 = neg.d(var_770_1)
        uint32_t eax_116 = divu.dp.d(edx_13:eax_115, 0xa)
        uint32_t var_758_4 = eax_116
        uint32_t ecx_40 = modu.dp.d(edx_13:eax_115, 0xa)
        
        if (eax_116 != 0)
            bool cond:16_1
            
            do
                if (eax_116 u> 0x26)
                    eax_116 = 0x26
                
                uint32_t ecx_41 = zx.d(*((eax_116 << 2) + &data_754ac6))
                uint32_t esi_20 = zx.d(*((eax_116 << 2) + &data_754ac7))
                _memset(&var_574, 0, ecx_41 << 2)
                sub_700660(&(&var_574)[ecx_41], 
                    (zx.d(*((eax_116 << 2) + &data_754ac4)) << 2) + &data_7541c0, esi_20 << 2)
                void* result_8 = ecx_41 + esi_20
                void* result_3 = result_8
                void* result_4
                int32_t ecx_42
                
                if (result_8 u<= 1)
                    int32_t edi_30 = var_574
                    
                    if (edi_30 == 0)
                    label_71fada:
                        int32_t var_968_4 = 0
                        result_2 = nullptr
                        _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                        result_4.b = 1
                    else if (edi_30 == 1 || result_2 == 0)
                        result_4.b = 1
                    else
                        ecx_42 = 0
                        var_76c_1:4.d = result_2
                        int32_t i = 0
                        
                        do
                            void* eax_127
                            int32_t edx_28
                            edx_28:eax_127 = mulu.dp.d(edi_30, (&var_1d4)[i])
                            (&var_1d4)[i] = eax_127 + ecx_42
                            i += 1
                            ecx_42 = adc.d(edx_28, 0, eax_127 + ecx_42 u< eax_127)
                        while (i != var_76c_1:4.d)
                        
                    label_71fb38:
                        
                        if (ecx_42 == 0)
                            result_4.b = 1
                        else
                            result_4 = result_2
                            
                            if (result_4 u>= 0x73)
                            label_71fe16:
                                int32_t var_968_5 = 0
                                result_2 = nullptr
                                _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                                result_4.b = 0
                            else
                                (&var_1d4)[result_4] = ecx_42
                                result_2 += 1
                                result_4.b = 1
                else if (result_2 u> 1)
                    int32_t* edi_32 = &var_574
                    result_4.b = result_8 u< result_2
                    int32_t* edx_32
                    
                    if (result_4.b != 0)
                        edx_32 = &var_1d4
                    else
                        edi_32 = &var_1d4
                        edx_32 = &var_574
                    
                    if (result_4.b == 0)
                        result_8 = result_2
                    
                    void* result_18 = result_8
                    
                    if (result_4.b != 0)
                        result_3 = result_2
                    
                    void* result_14 = nullptr
                    void* i_9 = nullptr
                    void* result_19 = nullptr
                    
                    if (result_8 != 0)
                        int32_t edi_33 = edi_32 - &var_744
                        int32_t var_788_3 = edi_33
                        
                        while (true)
                            int32_t eax_135 = *(&var_744 + edi_33 + (i_9 << 2))
                            var_76c_1:4.d = eax_135
                            
                            if (eax_135 != 0)
                                void* eax_136 = nullptr
                                int32_t i_2 = 0
                                void* i_1 = i_9
                                void* var_760_4 = nullptr
                                
                                if (result_3 != 0)
                                    while (i_1 != 0x73)
                                        if (i_1 == result_14)
                                            var_744[i_1] = 0
                                            result_19 = eax_136 + 1 + i_9
                                            eax_136 = var_760_4
                                        
                                        int32_t eax_140
                                        int32_t edx_34
                                        edx_34:eax_140 = mulu.dp.d(edx_32[eax_136], var_76c_1:4.d)
                                        int32_t eax_141 = eax_140 + i_2
                                        int32_t temp28_1 = var_744[i_1]
                                        var_744[i_1] += eax_141
                                        eax_136 = var_760_4 + 1
                                        i_1 += 1
                                        var_760_4 = eax_136
                                        i_2 = adc.d(adc.d(edx_34, 0, eax_140 + i_2 u< eax_140), 0, 
                                            temp28_1 + eax_141 u< temp28_1)
                                        result_14 = result_19
                                        
                                        if (eax_136 == result_3)
                                            break
                                    
                                    while (i_2 != 0)
                                        if (i_1 == 0x73)
                                            goto label_71fe16
                                        
                                        if (i_1 == result_14)
                                            var_744[i_1] = 0
                                            result_19 = i_1 + 1
                                        
                                        int32_t temp31_1 = var_744[i_1]
                                        var_744[i_1] += i_2
                                        result_14 = result_19
                                        i_2 = adc.d(0, 0, temp31_1 + i_2 u< temp31_1)
                                        i_1 += 1
                                
                                if (i_1 == 0x73)
                                    break
                                
                                edi_33 = var_788_3
                                result_8 = result_18
                            else if (i_9 == result_14)
                                var_744[i_9] &= eax_135
                                result_14 = i_9 + 1
                                result_19 = result_14
                            
                            i_9 += 1
                            
                            if (i_9 == result_8)
                                goto label_71fd54
                        
                        goto label_71fe16
                    
                label_71fd54:
                    result_2 = result_14
                    _memcpy_s(&var_1d4, 0x1cc, &var_744, result_14 << 2)
                    result_4.b = 1
                else
                    int32_t edi_31 = var_1d4
                    result_2 = result_8
                    _memcpy_s(&var_1d4, 0x1cc, &var_574, result_8 << 2)
                    
                    if (edi_31 == 0)
                        goto label_71fada
                    
                    if (edi_31 != 1 && result_2 != 0)
                        ecx_42 = 0
                        var_76c_1:4.d = result_2
                        int32_t i_3 = 0
                        
                        do
                            void* eax_132
                            int32_t edx_30
                            edx_30:eax_132 = mulu.dp.d(edi_31, (&var_1d4)[i_3])
                            (&var_1d4)[i_3] = eax_132 + ecx_42
                            i_3 += 1
                            ecx_42 = adc.d(edx_30, 0, eax_132 + ecx_42 u< eax_132)
                        while (i_3 != var_76c_1:4.d)
                        
                        goto label_71fb38
                    
                    result_4.b = 1
                
                if (result_4.b == 0)
                    int32_t var_968_6 = 0
                    result_2 = nullptr
                    int32_t var_978_17 = 0
                    goto label_71fe67
                
                uint32_t temp19_1 = eax_116
                eax_116 = var_758_4 - eax_116
                cond:16_1 = var_758_4 != temp19_1
                var_758_4 = eax_116
            while (cond:16_1)
        
        if (ecx_40 != 0)
            int32_t eax_148 = *((ecx_40 << 2) + &data_754b5c)
            var_76c_1:4.d = eax_148
            
            if (eax_148 == 0)
            label_71fe54:
                int32_t var_978_18 = 0
                result_2 = nullptr
                int32_t var_968_7 = 0
            label_71fe67:
                _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
            else if (eax_148 != 1)
                void* result_9 = result_2
                
                if (result_9 != 0)
                    int32_t edi_34 = 0
                    int32_t esi_21 = 0
                    
                    do
                        int32_t eax_149
                        int32_t edx_37
                        edx_37:eax_149 = mulu.dp.d(eax_148, (&var_1d4)[esi_21])
                        (&var_1d4)[esi_21] = eax_149 + edi_34
                        eax_148 = var_76c_1:4.d
                        esi_21 += 1
                        edi_34 = adc.d(edx_37, 0, eax_149 + edi_34 u< eax_149)
                    while (esi_21 != result_9)
                    
                    if (edi_34 != 0)
                        void* result_5 = result_2
                        
                        if (result_5 u>= 0x73)
                            goto label_71fe54
                        
                        (&var_1d4)[result_5] = edi_34
                        result_2 += 1
    else
        uint32_t eax_75 = divu.dp.d(edx_13:var_770_1, 0xa)
        uint32_t var_774_3 = eax_75
        uint32_t ecx_36 = modu.dp.d(edx_13:var_770_1, 0xa)
        var_76c_1:4.d = ecx_36
        
        if (eax_75 != 0)
            while (true)
                if (eax_75 u> 0x26)
                    eax_75 = 0x26
                
                uint32_t ecx_37 = zx.d(*((eax_75 << 2) + &data_754ac6))
                uint32_t esi_16 = zx.d(*((eax_75 << 2) + &data_754ac7))
                _memset(&var_574, 0, ecx_37 << 2)
                sub_700660(&(&var_574)[ecx_37], 
                    (zx.d(*((eax_75 << 2) + &data_754ac4)) << 2) + &data_7541c0, esi_16 << 2)
                char* ecx_38 = ecx_37 + esi_16
                char* var_764_1 = ecx_38
                char* eax_83
                void* eax_84
                int32_t ecx_39
                
                if (ecx_38 u<= 1)
                    int32_t edi_23 = var_574
                    
                    if (edi_23 == 0)
                        eax_84 = nullptr
                        int32_t var_748_1 = 0
                        var_3a8 = nullptr
                    label_71f921:
                        _memcpy_s(&var_3a4, 0x1cc, &var_744, eax_84)
                        eax_83.b = 1
                    else if (edi_23 == 1 || var_3a8 == 0)
                        eax_83.b = 1
                    else
                        char* eax_85 = var_3a8
                        ecx_39 = 0
                        int32_t esi_17 = 0
                        
                        do
                            void* eax_87
                            int32_t edx_15
                            edx_15:eax_87 = mulu.dp.d(edi_23, var_3a4[0][esi_17])
                            var_3a4[0][esi_17] = eax_87 + ecx_39
                            esi_17 += 1
                            ecx_39 = adc.d(edx_15, 0, eax_87 + ecx_39 u< eax_87)
                        while (esi_17 != eax_85)
                        
                    label_71f779:
                        
                        if (ecx_39 == 0)
                            eax_83.b = 1
                        else
                            eax_83 = var_3a8
                            
                            if (eax_83 u< 0x73)
                                var_3a4[0][eax_83] = ecx_39
                                var_3a8 = &var_3a8[1]
                                eax_83.b = 1
                            else
                                int32_t var_578_11 = 0
                                var_3a8 = nullptr
                                int32_t var_978_10 = 0
                                _memcpy_s(&var_3a4, 0x1cc, &var_574, nullptr)
                                eax_83.b = 0
                else if (var_3a8 u> 1)
                    int32_t* edi_25 = &var_574
                    eax_83.b = ecx_38 u< var_3a8
                    int32_t* edx_19
                    
                    if (eax_83.b != 0)
                        edx_19 = &var_3a4
                    else
                        edi_25 = &var_3a4
                        edx_19 = &var_574
                    
                    if (eax_83.b == 0)
                        ecx_38 = var_3a8
                    
                    char* var_758_3 = ecx_38
                    
                    if (eax_83.b != 0)
                        var_764_1 = var_3a8
                    
                    char* edx_20 = nullptr
                    void* i_8 = nullptr
                    char* var_748_2 = nullptr
                    
                    if (ecx_38 == 0)
                    label_71f918:
                        var_3a8 = edx_20
                        eax_84 = edx_20 << 2
                        goto label_71f921
                    
                    int32_t edi_26 = edi_25 - &var_744
                    int32_t var_788_2 = edi_26
                    
                    while (true)
                        int32_t eax_97 = *(&var_744 + edi_26 + (i_8 << 2))
                        
                        if (eax_97 != 0)
                            void* eax_98 = nullptr
                            int32_t i_5 = 0
                            void* i_4 = i_8
                            void* var_750_4 = nullptr
                            
                            if (var_764_1 != 0)
                                while (i_4 != 0x73)
                                    if (i_4 == edx_20)
                                        var_744[i_4] = 0
                                        var_748_2 = eax_98 + 1 + i_8
                                        eax_98 = var_750_4
                                    
                                    int32_t eax_102
                                    int32_t edx_22
                                    edx_22:eax_102 = mulu.dp.d(edx_19[eax_98], eax_97)
                                    int32_t eax_103 = eax_102 + i_5
                                    int32_t temp30_1 = var_744[i_4]
                                    var_744[i_4] += eax_103
                                    eax_98 = var_750_4 + 1
                                    i_4 += 1
                                    var_750_4 = eax_98
                                    i_5 = adc.d(adc.d(edx_22, 0, eax_102 + i_5 u< eax_102), 0, 
                                        temp30_1 + eax_103 u< temp30_1)
                                    edx_20 = var_748_2
                                    
                                    if (eax_98 == var_764_1)
                                        break
                                
                                while (i_5 != 0)
                                    if (i_4 == 0x73)
                                        goto label_71f983
                                    
                                    if (i_4 == edx_20)
                                        var_744[i_4] = 0
                                        var_748_2 = i_4 + 1
                                    
                                    int32_t temp32_1 = var_744[i_4]
                                    var_744[i_4] += i_5
                                    edx_20 = var_748_2
                                    i_5 = adc.d(0, 0, temp32_1 + i_5 u< temp32_1)
                                    i_4 += 1
                            
                            if (i_4 == 0x73)
                            label_71f983:
                                int32_t var_968_2 = 0
                                var_3a8 = nullptr
                                int32_t var_978_12 = 0
                                break
                            
                            edi_26 = var_788_2
                            ecx_38 = var_758_3
                        else if (i_8 == edx_20)
                            var_744[i_8] &= eax_97
                            edx_20 = i_8 + 1
                            var_748_2 = edx_20
                        
                        i_8 += 1
                        
                        if (i_8 == ecx_38)
                            goto label_71f918
                    
                    _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
                    eax_83.b = 0
                else
                    uint32_t edi_24 = var_3a4[0][0]
                    var_3a8 = ecx_38
                    _memcpy_s(&var_3a4, 0x1cc, &var_574, ecx_38 << 2)
                    
                    if (edi_24 != 0)
                        if (edi_24 != 1 && var_3a8 != 0)
                            char* eax_91 = var_3a8
                            ecx_39 = 0
                            int32_t esi_18 = 0
                            
                            do
                                void* eax_93
                                int32_t edx_17
                                edx_17:eax_93 = mulu.dp.d(edi_24, var_3a4[0][esi_18])
                                var_3a4[0][esi_18] = eax_93 + ecx_39
                                esi_18 += 1
                                ecx_39 = adc.d(edx_17, 0, eax_93 + ecx_39 u< eax_93)
                            while (esi_18 != eax_91)
                            
                            goto label_71f779
                        
                        eax_83.b = 1
                    else
                        int32_t var_578_10 = 0
                        var_3a8 = nullptr
                        _memcpy_s(&var_3a4, 0x1cc, &var_574, nullptr)
                        eax_83.b = 1
                
                if (eax_83.b == 0)
                    int32_t var_968_3 = 0
                    var_3a8 = nullptr
                    int32_t var_978_13 = 0
                    goto label_71f9c1
                
                uint32_t temp22_1 = eax_75
                eax_75 = var_774_3 - eax_75
                bool cond:17_1 = var_774_3 != temp22_1
                var_774_3 = eax_75
                
                if (not(cond:17_1))
                    ecx_36 = var_76c_1:4.d
                    break
        
        if (ecx_36 != 0)
            int32_t edi_27 = *((ecx_36 << 2) + &data_754b5c)
            
            if (edi_27 == 0)
            label_71f972:
                int32_t var_968_1 = 0
                var_3a8 = nullptr
                int32_t var_978_11 = 0
            label_71f9c1:
                _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
            else if (edi_27 != 1)
                char* eax_110 = var_3a8
                var_76c_1:4.d = eax_110
                
                if (eax_110 != 0)
                    int32_t esi_19 = 0
                    int32_t i_6 = 0
                    
                    do
                        int32_t eax_112
                        int32_t edx_25
                        edx_25:eax_112 = mulu.dp.d(edi_27, var_3a4[0][i_6])
                        var_3a4[0][i_6] = eax_112 + esi_19
                        i_6 += 1
                        esi_19 = adc.d(edx_25, 0, eax_112 + esi_19 u< eax_112)
                    while (i_6 != var_76c_1:4.d)
                    
                    if (esi_19 != 0)
                        char* eax_114 = var_3a8
                        
                        if (eax_114 u>= 0x73)
                            goto label_71f972
                        
                        var_3a4[0][eax_114] = esi_19
                        var_3a8 = &var_3a8[1]
    void* edi_36 = arg4
    void* esi_22 = edi_36
    void* result_10 = result_2
    void* var_750_6 = esi_22
    
    if (result_10 != 0)
        int32_t esi_23 = 0
        int32_t edi_35 = 0
        int32_t edx_40
        
        do
            int32_t eax_152
            int32_t edx_39
            edx_39:eax_152 = mulu.dp.d((&var_1d4)[edi_35], 0xa)
            (&var_1d4)[edi_35] = eax_152 + esi_23
            edx_40 = adc.d(edx_39, 0, eax_152 + esi_23 u< eax_152)
            edi_35 += 1
            esi_23 = edx_40
        while (edi_35 != result_10)
        
        var_76c_1:4.d = esi_23
        esi_22 = var_750_6
        
        if (esi_23 != 0)
            void* result_11 = result_2
            
            if (result_11 u>= 0x73)
                int32_t var_968_8 = 0
                result_2 = nullptr
                _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
            else
                (&var_1d4)[result_11] = edx_40
                result_2 += 1
        
        edi_36 = esi_22
    
    uint32_t eax_155 = __crt_strtox::divide(&result_2, &var_3a8)
    edx_41 = 0xa
    int32_t eax_162
    
    if (eax_155 == 0xa)
        var_770_1 += 1
        esi_22 = edi_36 + 1
        char* eax_156 = var_3a8
        *edi_36 = 0x31
        var_750_6 = esi_22
        
        if (eax_156 != 0)
            int32_t edi_37 = 0
            int32_t ecx_44 = 0
            
            do
                int32_t eax_158
                int32_t edx_42
                edx_42:eax_158 = mulu.dp.d(var_3a4[0][ecx_44], 0xa)
                var_3a4[0][ecx_44] = eax_158 + edi_37
                ecx_44 += 1
                edi_37 = adc.d(edx_42, 0, eax_158 + edi_37 u< eax_158)
                edx_41 = 0xa
            while (ecx_44 != eax_156)
            
            esi_22 = var_750_6
            
            if (edi_37 != 0)
                char* eax_160 = var_3a8
                
                if (eax_160 u>= 0x73)
                    int32_t var_968_9 = 0
                    var_3a8 = nullptr
                    edx_41 = _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
                else
                    var_3a4[0][eax_160] = edi_37
                    var_3a8 = &var_3a8[1]
        
        eax_162 = var_770_1
    else if (eax_155 != 0)
        eax_155.b += 0x30
        esi_22 = edi_36 + 1
        *edi_36 = eax_155.b
        var_750_6 = esi_22
        eax_162 = var_770_1
    else
        eax_162 = var_770_1 - 1
    
    arg3[1] = eax_162
    ecx_46 = arg2 + 1
    
    if (eax_162 s>= 0 && ecx_46 u<= 0x7fffffff)
        ecx_46 += eax_162
    
    void* eax_164 = arg5 - 1
    
    if (eax_164 u>= ecx_46)
        eax_164 = ecx_46
    
    result = eax_164 + arg4
    void* result_1 = result
    
    if (esi_22 != result)
        do
            result = result_2
            
            if (result == 0)
                break
            
            int32_t edi_38 = 0
            int32_t ecx_47 = 0
            
            do
                int32_t eax_166
                int32_t edx_44
                edx_44:eax_166 = mulu.dp.d((&var_1d4)[ecx_47], 0x3b9aca00)
                (&var_1d4)[ecx_47] = eax_166 + edi_38
                ecx_47 += 1
                edi_38 = adc.d(edx_44, 0, eax_166 + edi_38 u< eax_166)
            while (ecx_47 != result)
            
            if (edi_38 != 0)
                void* result_6 = result_2
                
                if (result_6 u>= 0x73)
                    int32_t var_968_10 = 0
                    result_2 = nullptr
                    _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                else
                    (&var_1d4)[result_6] = edi_38
                    result_2 += 1
            
            result = __crt_strtox::divide(&result_2, &var_3a8)
            char* i_7 = 8
            ecx_46 = result_1 - var_750_6
            
            do
                int32_t edx_46 = 0
                uint32_t temp1_3 = modu.dp.d(edx_46:result, var_778_3)
                result = divu.dp.d(edx_46:result, var_778_3)
                edx_41.b = temp1_3.b + 0x30
                
                if (ecx_46 u>= i_7)
                    *(i_7 + var_750_6) = edx_41.b
                
                i_7 -= 1
            while (i_7 != 0xffffffff)
            
            if (ecx_46 u> 9)
                ecx_46 = 9
            
            esi_22 = var_750_6 + ecx_46
            var_750_6 = esi_22
        while (esi_22 != result_1)
    
    *esi_22 = 0
else
    var_978 = &data_758670
    arg3[1] = 0
label_720109:
    result, ecx_46, edx_41 = _strcpy_s(arg4, arg5, var_978)
    
    if (result != 0)
        int32_t var_988_4
        __builtin_memset(&var_988_4, 0, 0x14)
        __invoke_watson()
        noreturn
char var_790

if (var_790 != 0)
    result = _fesetenv(&var_798, edx_41, ecx_46, &var_798)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
