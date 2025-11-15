// 函数: sub_651a90
// 地址: 0x651a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_a3c
int32_t eax_1 = __security_cookie ^ &var_a3c

if (arg1[0x32] s<= 0)
    *(*arg1 + 0x14) = 0x14
    *(*arg1 + 0x18) = 0
    (**arg1)(arg1)

void* result = arg1[0x33]
void* result_1 = result
void var_a18
char var_18[0xc]

if (*(result + 0x14) != 0 || *(result + 0x18) != 0x3f)
    int32_t ecx_1 = arg1[0x13]
    arg1[0x3f].b = 1
    
    if (ecx_1 s> 0)
        __builtin_memset(&var_a18, 0xffffffff, (ecx_1 & 0xffffff) << 8)
        result = result_1
else
    int32_t ecx = arg1[0x13]
    int32_t eax_6 = 0
    arg1[0x3f].b = 0
    
    if (ecx s> 0)
        do
            if (eax_6 u>= 0xa)
                ___report_rangecheckfailure()
                noreturn
            
            var_18[eax_6] = 0
            eax_6 += 1
        while (eax_6 s< ecx)
    
    result = result_1

int32_t i = 1
int32_t i_3 = 1

if (arg1[0x32] s>= 1)
    do
        int32_t j_4 = *result
        int32_t j_2 = j_4
        
        if (j_4 s<= 0 || j_4 s> 4)
            *(*arg1 + 0x14) = 0x1b
            *(*arg1 + 0x18) = j_4
            *(*arg1 + 0x1c) = 4
            (**arg1)(arg1)
            i = i_3
            result = result_1
        
        int32_t edi_1 = 0
        
        if (j_4 s> 0)
            while (true)
                int32_t ebx_1 = *(result + (edi_1 << 2) + 4)
                
                if (ebx_1 s< 0 || ebx_1 s>= arg1[0x13])
                    *(*arg1 + 0x14) = 0x14
                    *(*arg1 + 0x18) = i
                    (**arg1)(arg1)
                    result = result_1
                
                if (edi_1 s> 0 && ebx_1 s<= *(result + (edi_1 << 2)))
                    *(*arg1 + 0x14) = 0x14
                    *(*arg1 + 0x18) = i_3
                    (**arg1)(arg1)
                
                result = result_1
                edi_1 += 1
                
                if (edi_1 s>= j_2)
                    break
                
                i = i_3
        
        int32_t edx_1 = *(result_1 + 0x14)
        int32_t ecx_5 = *(result_1 + 0x18)
        int32_t eax_20 = *(result_1 + 0x20)
        int32_t ebx_2 = *(result_1 + 0x1c)
        int32_t var_a2c_1 = edx_1
        int32_t var_a28_1 = ecx_5
        
        if (arg1[0x3f].b == 0)
            if (edx_1 != 0 || ecx_5 != 0x3f || ebx_2 != 0 || eax_20 != 0)
                *(*arg1 + 0x14) = 0x12
                *(*arg1 + 0x18) = i_3
                (**arg1)(arg1)
            
            if (j_2 s> 0)
                void* edi_4 = result_1 + 4
                int32_t j
                
                do
                    void* ebx_3 = &var_18[*edi_4]
                    
                    if (*ebx_3 != 0)
                        *(*arg1 + 0x14) = 0x14
                        *(*arg1 + 0x18) = i_3
                        (**arg1)(arg1)
                    
                    edi_4 += 4
                    *ebx_3 = 1
                    j = j_2
                    j_2 -= 1
                while (j != 1)
        else
            int32_t i_4
            
            if (edx_1 u> 0x3f || ecx_5 s< edx_1 || ecx_5 s>= 0x40 || ebx_2 u> 0xa || eax_20 s< 0
                    || eax_20 s> 0xa)
                i_4 = i_3
                *(*arg1 + 0x14) = 0x12
                *(*arg1 + 0x18) = i_4
                (**arg1)(arg1)
                ecx_5 = var_a28_1
                edx_1 = var_a2c_1
            else
                i_4 = i_3
            
            int32_t j_3
            
            if (edx_1 != 0)
                j_3 = j_2
                
                if (j_3 != 1)
                label_651c73:
                    *(*arg1 + 0x14) = 0x12
                    *(*arg1 + 0x18) = i_4
                    (**arg1)(arg1)
                    edx_1 = var_a2c_1
                    j_3 = j_2
            else
                if (ecx_5 != 0)
                    goto label_651c73
                
                j_3 = j_2
            
            if (j_3 s> 0)
                void* eax_30 = result_1 + 4
                void* var_a1c_1 = eax_30
                int32_t j_1
                
                do
                    int32_t __saved_edi
                    void* eax_33 = &(&__saved_edi)[*eax_30 * 0x40 + 0xc]
                    void* var_a24_1 = eax_33
                    
                    if (edx_1 != 0 && *eax_33 s< 0)
                        *(*arg1 + 0x14) = 0x12
                        *(*arg1 + 0x18) = i_4
                        (**arg1)(arg1)
                        eax_33 = var_a24_1
                        edx_1 = var_a2c_1
                    
                    int32_t edi_3 = edx_1
                    
                    if (edx_1 s<= var_a28_1)
                        do
                            int32_t eax_38 = *(eax_33 + (edi_3 << 2))
                            bool cond:2_1
                            
                            if (eax_38 s>= 0)
                                if (ebx_2 == eax_38)
                                    cond:2_1 = eax_20 == ebx_2 - 1
                                    goto label_651cf7
                                
                            label_651d00:
                                *(*arg1 + 0x14) = 0x12
                                *(*arg1 + 0x18) = i_3
                                (**arg1)(arg1)
                            else
                                cond:2_1 = ebx_2 == 0
                            label_651cf7:
                                
                                if (not(cond:2_1))
                                    goto label_651d00
                            *(var_a24_1 + (edi_3 << 2)) = eax_20
                            edi_3 += 1
                            eax_33 = var_a24_1
                        while (edi_3 s<= var_a28_1)
                        
                        edx_1 = var_a2c_1
                    
                    i_4 = i_3
                    eax_30 = var_a1c_1 + 4
                    j_1 = j_2
                    j_2 -= 1
                    var_a1c_1 = eax_30
                while (j_1 != 1)
        
        i = i_3 + 1
        result = result_1 + 0x24
        i_3 = i
        result_1 = result
    while (i s<= arg1[0x32])

if (arg1[0x3f].b == 0)
    int32_t i_1 = 0
    
    if (arg1[0x13] s> 0)
        do
            if (var_18[i_1] == 0)
                *(*arg1 + 0x14) = 0x2e
                result = (**arg1)(arg1)
            
            i_1 += 1
        while (i_1 s< arg1[0x13])
else
    int32_t i_2 = 0
    
    if (arg1[0x13] s> 0)
        void* edi_5 = &var_a18
        
        do
            if (*edi_5 s< 0)
                *(*arg1 + 0x14) = 0x2e
                result = (**arg1)(arg1)
            
            i_2 += 1
            edi_5 += 0x100
        while (i_2 s< arg1[0x13])
        
        @__security_check_cookie@4(eax_1 ^ &var_a3c)
        return result

@__security_check_cookie@4(eax_1 ^ &var_a3c)
return result
