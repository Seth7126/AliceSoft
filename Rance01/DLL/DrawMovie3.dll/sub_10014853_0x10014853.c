// 函数: sub_10014853
// 地址: 0x10014853
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = 0
int32_t edi
int32_t var_8c = edi
void var_24
void* edi_1 = &var_24
int16_t var_78 = 0
int32_t var_6c = 1
int32_t var_50 = 0
int32_t var_5c = 0
int32_t var_60 = 0
int32_t var_64 = 0
int32_t var_68 = 0
int32_t var_54 = 0
int32_t result_1 = 0
int32_t result

if (arg8 != 0)
    char* edx_1 = arg3
    void* var_58_1 = edx_1
    char** eax_3
    
    while (true)
        eax_3.b = *edx_1
        
        if (eax_3.b != 0x20 && eax_3.b != 9 && eax_3.b != 0xa && eax_3.b != 0xd)
            break
        
        edx_1 = &edx_1[1]
    
    while (true)
        eax_3.b = *edx_1
        edx_1 = &edx_1[1]
        int32_t var_90_1
        bool cond:3_1
        
        switch (ecx)
            case 0
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                label_100148f7:
                    var_90_1 = 3
                    goto label_100148f9
                
                if (eax_3.b != ***(*arg8 + 0xbc))
                    int32_t eax_5 = sx.d(eax_3.b)
                    
                    if (eax_5 == 0x2b)
                        var_78 = 0
                        ecx = 2
                        continue
                    else if (eax_5 == 0x2d)
                        ecx = 2
                        var_78 = -0x8000
                        continue
                    else
                        if (eax_5 != 0x30)
                            edx_1 -= 1
                            break
                        
                        ecx = 1
                        continue
                else
                label_1001490e:
                    ecx = 5
                    continue
            case 1
                ecx.b = eax_3.b
                ecx.b -= 0x31
                var_5c = 1
                
                if (ecx.b u<= 8)
                    goto label_100148f7
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                label_1001495f:
                    ecx = 4
                    continue
                else if (eax_3.b == 0x2b || eax_3.b == 0x2d)
                label_1001498f:
                    edx_1 -= 1
                    ecx = 0xb
                    continue
                else if (eax_3.b == 0x30)
                    ecx = 1
                    continue
                else
                label_1001496f:
                    
                    if (eax_3.b s<= 0x43
                            || (eax_3.b s> 0x45 && (eax_3.b s<= 0x63 || eax_3.b s> 0x65)))
                        edx_1 -= 1
                        break
                    
                    ecx = 6
                    continue
            case 2
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                    goto label_100148f7
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                    goto label_1001490e
                
                if (eax_3.b != 0x30)
                    edx_1 = var_58_1
                    break
                
                ecx = 1
                continue
            case 3
                var_5c = 1
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    if (var_50 u>= 0x19)
                        var_54 += 1
                    else
                        var_50 += 1
                        eax_3.b -= 0x30
                        *edi_1 = eax_3.b
                        edi_1 += 1
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                    goto label_1001495f
                
            label_10014a02:
                
                if (eax_3.b == 0x2b || eax_3.b == 0x2d)
                    goto label_1001498f
                
                goto label_1001496f
            case 4
                var_5c = 1
                var_60 = 1
                
                if (var_50 == 0)
                    while (eax_3.b == 0x30)
                        var_54 -= 1
                        eax_3.b = *edx_1
                        edx_1 = &edx_1[1]
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    if (var_50 u< 0x19)
                        var_50 += 1
                        eax_3.b -= 0x30
                        *edi_1 = eax_3.b
                        edi_1 += 1
                        var_54 -= 1
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                goto label_10014a02
            case 5
                eax_3.b -= 0x30
                var_60 = 1
                
                if (eax_3.b u> 9)
                    edx_1 = var_58_1
                    break
                
                var_90_1 = 4
            label_100148f9:
                ecx = var_90_1
                edx_1 -= 1
                continue
            case 6
                var_58_1 = &edx_1[0xfffffffe]
                void* ecx_17
                ecx_17.b = eax_3.b
                ecx_17.b -= 0x31
                
                if (ecx_17.b u<= 8)
                    var_90_1 = 9
                    goto label_100148f9
                
                int32_t eax_7 = sx.d(eax_3.b)
                
                if (eax_7 == 0x2b)
                label_10014a9a:
                    ecx = 7
                    continue
                else
                    if (eax_7 != 0x2d)
                        cond:3_1 = eax_7 != 0x30
                        goto label_10014a81
                    
                label_10014a8e:
                    var_6c = 0xffffffff
                    ecx = 7
                    continue
            case 7
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                    var_90_1 = 9
                    goto label_100148f9
                
                cond:3_1 = eax_3.b != 0x30
            label_10014a81:
                
                if (cond:3_1)
                    edx_1 = var_58_1
                    break
                
                ecx = 8
                continue
            case 8
                var_64 = 1
                
                while (eax_3.b == 0x30)
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                eax_3.b -= 0x31
                
                if (eax_3.b u<= 8)
                    var_90_1 = 9
                    goto label_100148f9
                
                edx_1 -= 1
                break
            case 9
                var_64 = 1
                int32_t ecx_19 = 0
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    ecx_19 = ecx_19 * 0xa + sx.d(eax_3.b) - 0x30
                    
                    if (ecx_19 s> 0x1450)
                        ecx_19 = 0x1451
                        break
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                var_68 = ecx_19
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                edx_1 -= 1
                break
            case 0xb
                if (arg7 != 0)
                    int32_t eax_9 = sx.d(eax_3.b)
                    var_58_1 = &edx_1[0xffffffff]
                    
                    if (eax_9 == 0x2b)
                        goto label_10014a9a
                    
                    if (eax_9 == 0x2d)
                        goto label_10014a8e
                    
                    edx_1 = &edx_1[0xffffffff]
                    break
                
                ecx = 0xa
                edx_1 -= 1
        
        if (ecx == 0xa)
            break
    
    *arg2 = edx_1
    uint16_t eax_46
    int16_t ecx_31
    uint32_t i_6
    int32_t esi_13
    
    if (var_5c == 0)
        result_1 = 4
    label_10014eee:
        ecx_31 = 0
        eax_46 = 0
        i_6 = 0
        esi_13 = 0
    else
        if (var_50 u> 0x18)
            char var_d
            
            if (var_d s>= 5)
                char var_d_1 = var_d + 1
            
            edi_1 -= 1
            var_54 += 1
            var_50 = 0x18
        
        if (var_50 u<= 0)
            goto label_10014eee
        
        while (true)
            edi_1 -= 1
            
            if (*edi_1 != 0)
                break
            
            var_50 -= 1
            var_54 += 1
        
        int16_t var_40
        sub_10015caf(&var_24, var_50, &var_40)
        int32_t eax_12 = var_68
        
        if (var_6c s< 0)
            eax_12 = neg.d(eax_12)
        
        int32_t eax_13 = eax_12 + var_54
        
        if (var_64 == 0)
            eax_13 += arg5
        
        if (var_60 == 0)
            eax_13 -= arg6
        
        if (eax_13 s> 0x1450)
            esi_13 = 0
            eax_46 = 0x7fff
            i_6 = 0x80000000
            ecx_31 = 0
            result_1 = 2
        else
            if (eax_13 s< 0xffffebb0)
                result_1 = 1
                goto label_10014eee
            
            char* ecx_21 = &(*class CRendererPosPassThru `RTTI Type Descriptor'.name)[4]
            int32_t var_58_2 = eax_13
            int32_t var_3e
            uint32_t i_3
            int32_t var_38
            
            if (eax_13 != 0)
                if (eax_13 s< 0)
                    var_58_2 = neg.d(eax_13)
                    ecx_21 = &data_10021260
                
                if (arg4 == 0)
                    var_40 = 0
                
                if (var_58_2 != 0)
                    while (true)
                        int32_t eax_15 = var_58_2
                        var_58_2 s>>= 3
                        int32_t eax_16 = eax_15 & 7
                        
                        if (eax_16 != 0)
                            void* ebx_1 = eax_16 * 0xc + &ecx_21[0x54]
                            
                            if (*ebx_1 u>= 0x8000)
                                int32_t var_4c = *ebx_1
                                void var_48
                                void* edi_2 = &var_48
                                void* esi_3 = ebx_1 + 4
                                *edi_2 = *esi_3
                                *(edi_2 + 4) = *(esi_3 + 4)
                                var_4c -= 1
                                ebx_1 = &var_4c
                            
                            int32_t var_54_1 = 0
                            int32_t var_30_1 = 0
                            int32_t var_2c = 0
                            uint32_t i_2 = 0
                            int16_t eax_19 = *(ebx_1 + 0xa)
                            int16_t edx_3 = var_38:2.w & 0x7fff
                            int16_t eax_20 = eax_19 & 0x7fff
                            int16_t esi_8 = (eax_19 ^ var_38:2.w) & 0x8000
                            uint32_t ecx_24 = zx.d(eax_20 + edx_3)
                            
                            if (edx_3 u>= 0x7fff || eax_20 u>= 0x7fff || ecx_24.w u> 0xbffd)
                                int32_t eax_42
                                eax_42.b = esi_8 == 0
                                var_3e = 0
                                var_40.d = 0
                                var_38 = ((eax_42 - 1) & 0x80000000) + 0x7fff8000
                            else if (ecx_24.w u> 0x3fbf)
                                if (edx_3 == 0)
                                    ecx_24 += 1
                                
                                if (edx_3 != 0 || (var_38 & 0x7fffffff) != 0 || var_3e != 0
                                        || var_40.d != 0)
                                    if (eax_20 == 0)
                                        ecx_24 += 1
                                    
                                    if (eax_20 != 0 || (*(ebx_1 + 8) & 0x7fffffff) != 0
                                            || *(ebx_1 + 4) != 0 || *ebx_1 != 0)
                                        int32_t var_6c_1 = 0
                                        int32_t* edi_5 = &var_2c
                                        
                                        for (int32_t i = 5; i s> 0; i -= 1)
                                            int32_t j = i
                                            
                                            if (i s> 0)
                                                void* var_60_1 = &__saved_ebp + var_6c_1 * 2 - 0x3c
                                                void* var_64_1 = ebx_1 + 8
                                                
                                                do
                                                    uint32_t edx_6 = zx.d(*var_60_1)
                                                    uint32_t eax_27 = zx.d(*var_64_1)
                                                    var_50 = 0
                                                    int32_t eax_28 = eax_27 * edx_6
                                                    int32_t edx_7 = edi_5[-1]
                                                    int32_t esi_9 = edx_7 + eax_28
                                                    
                                                    if (esi_9 u< edx_7 || esi_9 u< eax_28)
                                                        var_50 = 1
                                                    
                                                    bool cond:5_1 = var_50 == 0
                                                    edi_5[-1] = esi_9
                                                    
                                                    if (not(cond:5_1))
                                                        *edi_5 += 1
                                                    
                                                    var_60_1 += 2
                                                    var_64_1 -= 2
                                                    j -= 1
                                                while (j s> 0)
                                            
                                            edi_5 += 2
                                            var_6c_1 += 1
                                        
                                        int32_t ecx_25 = ecx_24 + 0xc002
                                        
                                        if (ecx_25.w s<= 0)
                                        label_10014da4:
                                            ecx_25 += 0xffff
                                            
                                            if (ecx_25.w s< 0)
                                                uint32_t i_5 = zx.d((neg.d(ecx_25)).w)
                                                ecx_25 += i_5
                                                uint32_t i_1
                                                
                                                do
                                                    if ((var_30_1.b & 1) != 0)
                                                        var_54_1 += 1
                                                    
                                                    uint32_t i_4 = i_2
                                                    i_2 u>>= 1
                                                    int32_t eax_38 = var_30_1 u>> 1 | var_2c << 0x1f
                                                    i_1 = i_5
                                                    i_5 -= 1
                                                    var_2c = var_2c u>> 1 | i_4 << 0x1f
                                                    var_30_1 = eax_38
                                                while (i_1 != 1)
                                                
                                                if (var_54_1 != i_5)
                                                    var_30_1.w |= 1
                                        else
                                            while (i_2 s>= 0)
                                                int32_t esi_10 = var_2c
                                                int32_t eax_29 = var_30_1
                                                var_30_1 <<= 1
                                                ecx_25 += 0xffff
                                                var_2c = (esi_10 * 2) | eax_29 u>> 0x1f
                                                i_2 = (i_2 * 2) | esi_10 u>> 0x1f
                                                
                                                if (ecx_25.w s<= 0)
                                                    break
                                            
                                            if (ecx_25.w s<= 0)
                                                goto label_10014da4
                                        
                                        if (var_30_1.w u> 0x8000 || (var_30_1 & 0x1ffff) == 0x18000)
                                            if (var_30_1 != 0xffffffff)
                                                var_30_1 += 1
                                            else
                                                var_30_1 = 0
                                                
                                                if (var_2c != 0xffffffff)
                                                    var_2c += 1
                                                else
                                                    var_2c = 0
                                                    
                                                    if (i_2:2.w != 0xffff)
                                                        i_2:2.w += 1
                                                    else
                                                        i_2:2.w = 0x8000
                                                        ecx_25 += 1
                                        
                                        if (ecx_25.w u< 0x7fff)
                                            var_40 = var_30_1:2.w
                                            var_3e = var_2c
                                            i_3 = i_2
                                            var_38:2.w = ecx_25.w | esi_8
                                        else
                                            var_3e = 0
                                            int32_t ecx_26
                                            ecx_26.b = esi_8 == 0
                                            var_40.d = 0
                                            var_38 = ((ecx_26 - 1) & 0x80000000) + 0x7fff8000
                                    else
                                        var_38 = 0
                                        var_3e = 0
                                        var_40.d = 0
                                else
                                    var_38:2.w = 0
                            else
                                var_3e = 0
                                var_40.d = 0
                                var_38 = 0
                        
                        if (var_58_2 == 0)
                            break
                        
                        ecx_21 = &ecx_21[0x54]
            
            ecx_31 = var_40
            esi_13 = var_3e
            i_6 = i_3
            eax_46 = (var_38 u>> 0x10).w
    
    *arg1 = ecx_31
    arg1[5] = eax_46 | var_78
    result = result_1
    *(arg1 + 2) = esi_13
    *(arg1 + 6) = i_6
else
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    result = 0

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
