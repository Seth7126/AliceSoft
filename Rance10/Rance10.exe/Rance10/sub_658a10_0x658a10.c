// 函数: sub_658a10
// 地址: 0x658a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_148
uint32_t var_4 = __security_cookie ^ &var_148
bool cond:0 = arg1[0x3f] == 0
void* ebp = arg1[0x6c]
int32_t* var_108 = arg1
uint32_t result

if (not(cond:0) && *(ebp + 0x2c) == 0)
    result = sub_658400(arg1)
    
    if (result.b == 0)
        @__security_check_cookie@4(var_4 ^ &var_148)
        return result

if (*(ebp + 0x28) != 0)
label_658da9:
    *(ebp + 0x2c) -= 1
    result.b = 1
else
    int32_t eax_1 = arg1[0x5f]
    char ecx_4 = (arg1[0x61]).b
    int32_t ebp_1 = *(ebp + 0xc)
    int32_t eax_2 = 0xffffffff << ecx_4
    int32_t edx_1 = 1 << ecx_4
    int32_t* ecx_5 = arg1[6]
    int32_t edx_2 = arg1[0x63]
    int32_t var_134 = *ecx_5
    int32_t eax_4 = ecx_5[1]
    int32_t* var_124_1 = arg1
    int32_t ebx_1 = arg1[0x5e]
    int32_t var_138_1 = edx_2
    int32_t esi_1 = *(ebp + 0x10)
    int32_t eax_6 = *(ebp + 0x40)
    uint32_t var_144_1 = *(ebp + 0x14)
    int32_t ecx_7 = *arg2
    int32_t i_1 = 0
    var_148 = ecx_7
    int32_t var_110_1 = eax_6
    int32_t i_2 = 0
    
    if (var_144_1 != 0)
        goto label_658d11
    
    while (true)
        int32_t var_12c
        int32_t var_128
        int32_t eax_7
        int32_t edx_4
        
        if (esi_1 s>= 8)
        label_658b2c:
            edx_4 = var_110_1
            uint32_t eax_10 = zx.d((ebp_1 s>> (esi_1.b - 8)).b)
            int32_t ecx_10 = *(edx_4 + (eax_10 << 2) + 0x90)
            
            if (ecx_10 == 0)
                eax_7 = 9
            label_658b5f:
                result = sub_658310(eax_7, ebp_1, &var_134, esi_1, edx_4, eax_7)
                
                if (result s>= 0)
                    ebp_1 = var_12c
                    esi_1 = var_128
                    goto label_658b79
            else
                result = zx.d(*(eax_10 + edx_4 + 0x490))
                esi_1 -= ecx_10
            label_658b79:
                int32_t edx_7 = result s>> 4
                int32_t eax_11 = result & 0xf
                int32_t var_140_1 = edx_7
                int32_t var_10c_1 = eax_11
                
                if (eax_11 == 0)
                    if (edx_7 == 0xf)
                    label_658bf3:
                        int32_t ecx_15 = var_148
                        
                        do
                            eax_6 = *(var_138_1 + (ebx_1 << 2))
                            int16_t* edi_1 = ecx_15 + (eax_6 << 1)
                            
                            if (*(ecx_15 + (eax_6 << 1)) == 0)
                                int32_t temp1_1 = edx_7
                                edx_7 -= 1
                                var_140_1 = edx_7
                                
                                if (temp1_1 - 1 s< 0)
                                    break
                            else
                                if (esi_1 s< 1)
                                    if (sub_6581f0(eax_6, ebp_1, &var_134, esi_1, 1).b == 0)
                                        goto label_658dc7
                                    
                                    ebp_1 = var_12c
                                    esi_1 = var_128
                                
                                esi_1 -= 1
                                eax_6 = ebp_1 s>> esi_1.b
                                
                                if ((eax_6.b & 1) != 0)
                                    uint32_t ecx_18 = zx.d(*edi_1)
                                    eax_6 = sx.d(ecx_18.w)
                                    
                                    if ((edx_1 & eax_6) == 0)
                                        if (ecx_18.w s< 0)
                                            eax_6 = eax_2 + ecx_18
                                        else
                                            eax_6 = ecx_18 + edx_1
                                        
                                        *edi_1 = eax_6.w
                                
                                ecx_15 = var_148
                                edx_7 = var_140_1
                            
                            ebx_1 += 1
                        while (ebx_1 s<= eax_1)
                        
                        i_1 = i_2
                        
                        if (var_10c_1 != 0)
                            int32_t edx_11 = var_148
                            eax_6 = *(var_138_1 + (ebx_1 << 2))
                            int32_t var_104[0x40]
                            var_104[i_1] = eax_6
                            i_1 += 1
                            i_2 = i_1
                            *(edx_11 + (eax_6 << 1)) = var_10c_1.w
                        
                        ebx_1 += 1
                        
                        if (ebx_1 s<= eax_1)
                            continue
                        
                        goto label_658d7f
                    
                    uint32_t eax_22 = 1 << edx_7.b
                    var_144_1 = eax_22
                    
                    if (edx_7 == 0)
                        goto label_658d05
                    
                    if (esi_1 s>= edx_7)
                        goto label_658cee
                    
                    if (sub_6581f0(eax_22, ebp_1, &var_134, esi_1, edx_7).b != 0)
                        ebp_1 = var_12c
                        esi_1 = var_128
                        edx_7 = var_140_1
                    label_658cee:
                        esi_1 -= edx_7
                        var_144_1 += ebp_1 s>> esi_1.b & *((edx_7 << 2) + &data_76e550)
                        eax_22 = var_144_1
                    label_658d05:
                        
                        if (eax_22 == 0)
                        label_658d7f:
                            int32_t* edx_15 = var_108
                            *edx_15[6] = var_134
                            *(edx_15[6] + 4) = eax_4
                            *(ebp + 0xc) = ebp_1
                            *(ebp + 0x10) = esi_1
                            *(ebp + 0x14) = var_144_1
                            goto label_658da9
                        
                        ecx_7 = var_148
                        
                        while (true)
                            edx_2 = var_138_1
                        label_658d11:
                            int32_t eax_26 = *(edx_2 + (ebx_1 << 2))
                            int16_t* edi_2 = ecx_7 + (eax_26 << 1)
                            
                            if (*(ecx_7 + (eax_26 << 1)) != 0)
                                if (esi_1 s< 1)
                                    if (sub_6581f0(eax_26, ebp_1, &var_134, esi_1, 1).b == 0)
                                        break
                                    
                                    ebp_1 = var_12c
                                    esi_1 = var_128
                                
                                esi_1 -= 1
                                
                                if (((ebp_1 s>> esi_1.b).b & 1) != 0)
                                    int16_t ecx_25 = *edi_2
                                    
                                    if ((edx_1 & sx.d(ecx_25)) == 0)
                                        int16_t eax_30
                                        
                                        if (ecx_25 s< 0)
                                            eax_30 = eax_2.w + ecx_25
                                        else
                                            eax_30 = ecx_25 + edx_1.w
                                        
                                        *edi_2 = eax_30
                                
                                ecx_7 = var_148
                            
                            ebx_1 += 1
                            
                            if (ebx_1 s> eax_1)
                                var_144_1 -= 1
                                goto label_658d7f
                        
                    label_658dc7:
                        i_1 = i_2
                else
                    if (eax_11 != 1)
                        int32_t* ecx_12 = var_108
                        *(*ecx_12 + 0x14) = 0x79
                        eax_11 = (*(*ecx_12 + 4))(ecx_12, 0xffffffff)
                    
                    if (esi_1 s>= 1)
                        goto label_658bce
                    
                    if (sub_6581f0(eax_11, ebp_1, &var_134, esi_1, 1).b != 0)
                        ebp_1 = var_12c
                        esi_1 = var_128
                    label_658bce:
                        edx_7 = var_140_1
                        esi_1 -= 1
                        int32_t eax_17 = eax_2
                        
                        if (((ebp_1 s>> esi_1.b).b & 1) != 0)
                            eax_17 = edx_1
                        
                        var_10c_1 = eax_17
                        goto label_658bf3
        else if (sub_6581f0(eax_6, ebp_1, &var_134, esi_1, 0).b != 0)
            esi_1 = var_128
            ebp_1 = var_12c
            
            if (esi_1 s>= 8)
                goto label_658b2c
            
            edx_4 = var_110_1
            eax_7 = 1
            goto label_658b5f
        
        if (i_1 != 0)
            int32_t ecx_30 = var_148
            int32_t i
            
            do
                *(ecx_30 + ((&var_108)[i_1] << 1)) = 0
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result.b = 0
        break

@__security_check_cookie@4(var_4 ^ &var_148)
return result
