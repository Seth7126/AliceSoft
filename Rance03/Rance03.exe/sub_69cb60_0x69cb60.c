// 函数: sub_69cb60
// 地址: 0x69cb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
char* ecx = arg1
char* var_104 = ecx
int32_t ebx = arg4
int32_t var_108 = ebx
int32_t i_14 = arg3
int32_t i_12 = i_14

if ((ecx != 0 || arg2 == 0) && i_14 != 0 && ebx != 0)
    if (arg2 u< 2)
    label_69cea6:
        sub_69a5bc(var_8 ^ &__saved_ebp)
        return eax_1
    
    int32_t var_10c_1 = 0
    char* i_9 = (arg2 - 1) * i_14 + ecx
    
    while (true)
        char* i_5 = i_9
        
        while (true)
            if (divu.dp.d(0:(i_9 - ecx), i_14) + 1 u<= 8)
                sub_69ceb0(ecx, i_5, i_14, ebx)
                goto label_69ce7f
            
            char* edi_4 = ((divu.dp.d(0:(i_9 - ecx), i_14) + 1) u>> 1) * i_14 + ecx
            char* var_114_1 = edi_4
            
            if (ebx(ecx, edi_4) s> 0)
                sub_69cf30(var_104, edi_4, i_14)
            
            if (ebx(var_104, i_5) s> 0)
                sub_69cf30(var_104, i_5, i_14)
            
            if (ebx(edi_4, i_5) s> 0)
                sub_69cf30(edi_4, i_5, i_14)
            
            char* i = i_5
            char* i_6 = i
            char* esi = var_104
            int32_t i_10 = i_12
            char* i_4 = i
            char* var_110_1
            
            while (true)
                if (edi_4 u<= esi)
                    goto label_69ccec
                
                do
                    esi = &esi[i_10]
                    var_110_1 = esi
                    
                    if (esi u>= edi_4)
                        goto label_69ccc5
                    
                    i = var_108(esi, edi_4)
                    i_10 = i_12
                while (i s<= 0)
                
                if (edi_4 u<= esi)
                label_69ccc5:
                    i = i_5
                label_69ccec:
                    bool cond:1_1
                    
                    do
                        esi = &esi[i_10]
                        
                        if (esi u> i)
                            break
                        
                        i_10 = i_12
                        cond:1_1 = var_108(esi, edi_4) s<= 0
                        i = i_5
                    while (cond:1_1)
                    i_6 = i_4
                    var_110_1 = esi
                
                while (true)
                    i_10 = i_12
                    i_6 -= i_10
                    
                    if (i_6 u<= edi_4)
                        break
                    
                    if (var_108(i_6, edi_4) s<= 0)
                        i_10 = i_12
                        break
                
                esi = var_110_1
                i_4 = i_6
                
                if (i_6 u< esi)
                    break
                
                char* i_8 = i_6
                
                if (esi != i_6)
                    char* i_11 = i_6
                    int32_t i_7 = i_10
                    void* edi_6 = esi - i_6
                    int32_t i_1
                    
                    do
                        i.b = *i_11
                        i_11 = &i_11[1]
                        char ecx_3 = *(edi_6 + i_11 - 1)
                        *(edi_6 + i_11 - 1) = i.b
                        i_11[0xffffffff] = ecx_3
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    esi = var_110_1
                    edi_4 = var_114_1
                    i_10 = i_12
                
                i = i_5
                
                if (edi_4 == i_6)
                    edi_4 = esi
                    var_114_1 = edi_4
            
            char* i_13 = &i_6[i_10]
            
            if (edi_4 u>= i_13)
            label_69cdd9:
                int32_t i_2
                
                do
                    i_13 -= i_10
                    
                    if (i_13 u<= var_104)
                        break
                    
                    i_2 = var_108(i_13, edi_4)
                    i_10 = i_12
                while (i_2 == 0)
                esi = var_110_1
            else
                int32_t i_3
                
                do
                    i_13 -= i_10
                    
                    if (i_13 u<= edi_4)
                        goto label_69cdd9
                    
                    i_3 = var_108(i_13, edi_4)
                    i_10 = i_12
                while (i_3 == 0)
                
                if (edi_4 u>= i_13)
                    goto label_69cdd9
            
            i_9 = i_5
            int32_t var_f8[0x1e]
            int32_t var_80[0x1e]
            
            if (i_13 - var_104 s< i_9 - esi)
                if (esi u< i_9)
                    var_f8[var_10c_1] = esi
                    var_80[var_10c_1] = i_9
                    var_10c_1 += 1
                
                ecx = var_104
                i_14 = i_12
                
                if (ecx u< i_13)
                    i_9 = i_13
                    ebx = var_108
                    break
                
                ebx = var_108
            label_69ce7f:
                eax_1 = var_10c_1 - 1
                bool cond:0_1 = var_10c_1 - 1 s< 0
                var_10c_1 = eax_1
                
                if (cond:0_1)
                    goto label_69cea6
                
                ecx = var_f8[eax_1]
                i_9 = var_80[eax_1]
                var_104 = ecx
                break
            
            if (var_104 u< i_13)
                var_f8[var_10c_1] = var_104
                var_80[var_10c_1] = i_13
                var_10c_1 += 1
            
            ebx = var_108
            
            if (esi u>= i_9)
                i_14 = i_12
                goto label_69ce7f
            
            ecx = esi
            i_14 = i_12
            var_104 = ecx

*__errno() = 0x16
int32_t eax_3 = __invalid_parameter_noinfo()
sub_69a5bc(var_8 ^ &__saved_ebp)
return eax_3
