// 函数: _qsort
// 地址: 0x70cb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
char* ecx = arg1
char* var_108 = ecx
int32_t esi = arg4
int32_t var_104 = esi
int32_t edi
int32_t var_128 = edi
int32_t i_14 = arg3
int32_t i_12 = i_14

if ((ecx != 0 || arg2 == 0) && i_14 != 0 && esi != 0)
    int32_t var_10c = 0
    
    if (arg2 u< 2)
    label_70cf01:
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return eax_1
    
    char* i_9 = (arg2 - 1) * i_14 + ecx
    
    while (true)
        char* i_5 = i_9
        
        while (true)
            if (divu.dp.d(0:(i_9 - ecx), i_14) + 1 u<= 8)
                shortsort(ecx, i_5, i_14, esi)
                goto label_70ced8
            
            char* ebx_4 = ((divu.dp.d(0:(i_9 - ecx), i_14) + 1) u>> 1) * i_14 + ecx
            char* var_114_1 = ebx_4
            
            if (esi(ecx, ebx_4) s> 0)
                swap(var_108, ebx_4, i_14)
            
            if (esi(var_108, i_5) s> 0)
                swap(var_108, i_5, i_14)
            
            if (esi(ebx_4, i_5) s> 0)
                swap(ebx_4, i_5, i_14)
            
            char* i = i_5
            char* i_7 = i
            char* esi_1 = var_108
            int32_t i_10 = i_12
            char* i_4 = i
            char* var_110_1
            
            while (true)
                if (ebx_4 u<= esi_1)
                    goto label_70cd24
                
                do
                    esi_1 = &esi_1[i_10]
                    var_110_1 = esi_1
                    
                    if (esi_1 u>= ebx_4)
                        goto label_70ccf5
                    
                    i = var_104(esi_1, ebx_4)
                    i_10 = i_12
                while (i s<= 0)
                
                if (ebx_4 u<= esi_1)
                label_70ccf5:
                    i = i_5
                label_70cd24:
                    bool cond:1_1
                    
                    do
                        esi_1 = &esi_1[i_10]
                        
                        if (esi_1 u> i)
                            break
                        
                        i_10 = i_12
                        cond:1_1 = var_104(esi_1, ebx_4) s<= 0
                        i = i_5
                    while (cond:1_1)
                    i_7 = i_4
                    var_110_1 = esi_1
                
                while (true)
                    i_10 = i_12
                    i_7 -= i_10
                    
                    if (i_7 u<= ebx_4)
                        break
                    
                    if (var_104(i_7, ebx_4) s<= 0)
                        i_10 = i_12
                        break
                
                esi_1 = var_110_1
                i_4 = i_7
                
                if (i_7 u< esi_1)
                    break
                
                char* i_8 = i_7
                
                if (esi_1 != i_7)
                    char* i_11 = i_7
                    int32_t i_6 = i_10
                    void* ebx_6 = esi_1 - i_7
                    int32_t i_1
                    
                    do
                        i.b = *i_11
                        i_11 = &i_11[1]
                        char ecx_6 = *(ebx_6 + i_11 - 1)
                        *(ebx_6 + i_11 - 1) = i.b
                        i_11[0xffffffff] = ecx_6
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    esi_1 = var_110_1
                    ebx_4 = var_114_1
                    i_10 = i_12
                
                i = i_5
                
                if (ebx_4 == i_7)
                    ebx_4 = esi_1
                    var_114_1 = ebx_4
            
            char* i_13 = &i_7[i_10]
            
            if (ebx_4 u>= i_13)
            label_70ce32:
                int32_t i_2
                
                do
                    i_13 -= i_10
                    
                    if (i_13 u<= var_108)
                        break
                    
                    i_2 = var_104(i_13, ebx_4)
                    i_10 = i_12
                while (i_2 == 0)
                esi_1 = var_110_1
            else
                int32_t i_3
                
                do
                    i_13 -= i_10
                    
                    if (i_13 u<= ebx_4)
                        goto label_70ce32
                    
                    i_3 = var_104(i_13, ebx_4)
                    i_10 = i_12
                while (i_3 == 0)
                
                if (ebx_4 u>= i_13)
                    goto label_70ce32
            
            i_9 = i_5
            int32_t var_f8[0x1e]
            int32_t var_80[0x1e]
            
            if (i_13 - var_108 s< i_9 - esi_1)
                if (esi_1 u< i_9)
                    var_f8[var_10c] = esi_1
                    var_80[var_10c] = i_9
                    var_10c += 1
                
                ecx = var_108
                esi = var_104
                
                if (ecx u< i_13)
                    i_9 = i_13
                    i_14 = i_12
                    break
                
                i_14 = i_12
            label_70ced8:
                eax_1 = var_10c - 1
                bool cond:0_1 = var_10c - 1 s< 0
                var_10c = eax_1
                
                if (cond:0_1)
                    goto label_70cf01
                
                ecx = var_f8[eax_1]
                i_9 = var_80[eax_1]
                var_108 = ecx
                break
            
            if (var_108 u< i_13)
                var_f8[var_10c] = var_108
                var_80[var_10c] = i_13
                var_10c += 1
            
            i_14 = i_12
            
            if (esi_1 u>= i_9)
                esi = var_104
                goto label_70ced8
            
            ecx = esi_1
            esi = var_104
            var_108 = ecx

*__errno() = 0x16
int32_t eax_3 = __invalid_parameter_noinfo()
@__security_check_cookie@4(var_8 ^ &__saved_ebp)
return eax_3
