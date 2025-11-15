// 函数: sub_64c7f0
// 地址: 0x64c7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_38
int32_t eax_1 = __security_cookie ^ &var_38
void* ebp = arg1
int32_t i = 0
void* var_1c = ebp
void* ebx = *(ebp + 0x184)
var_38 = ebx
int32_t var_14[0x4]

if (*(ebp + 0x114) s> 0)
    void* ebx_1 = ebp + 0x118
    
    do
        void* edx_1 = *ebx_1
        int32_t ecx_1 = *(edx_1 + 0xc)
        var_14[i] = (*(*(ebp + 4) + 0x20))(ebp, *(var_38 + (*(edx_1 + 4) << 2) + 0x40), 
            *(var_38 + 8) * ecx_1, ecx_1, 0)
        ebx_1 += 4
        i += 1
    while (i s< *(ebp + 0x114))
    
    ebx = var_38

int32_t i_1 = *(ebx + 0x10)
int32_t i_2 = i_1

while (i_1 s< *(ebx + 0x14))
    int32_t j = *(ebx + 0xc)
    int32_t j_1 = j
    
    if (j u< *(ebp + 0x128))
        do
            int32_t k = 0
            int32_t edi = 0
            int32_t k_1 = 0
            
            if (*(ebp + 0x114) s> 0)
                void* ecx_3 = ebp + 0x118
                void* var_24_1 = ecx_3
                
                do
                    void* ebx_2 = *ecx_3
                    int32_t ecx_4 = 0
                    int32_t var_2c_1 = 0
                    int32_t esi_2 = *(ebx_2 + 0x38)
                    
                    if (*(ebx_2 + 0x3c) s> 0)
                        int32_t edx_4 = (esi_2 * j_1) << 7
                        int32_t var_20_1 = edx_4
                        int32_t* ebp_2 = var_14[k] + (i_2 << 2)
                        
                        do
                            int32_t eax_11 = *ebp_2 + edx_4
                            int32_t edx_5 = 0
                            
                            if (esi_2 s> 0)
                                void* ecx_7 = var_38 + (edi << 2) + 0x18
                                
                                do
                                    *ecx_7 = eax_11
                                    ecx_7 += 4
                                    esi_2 = *(ebx_2 + 0x38)
                                    edx_5 += 1
                                    edi += 1
                                    eax_11 -= 0xffffff80
                                while (edx_5 s< esi_2)
                                
                                ecx_4 = var_2c_1
                            
                            edx_4 = var_20_1
                            ecx_4 += 1
                            ebp_2 = &ebp_2[1]
                            var_2c_1 = ecx_4
                        while (ecx_4 s< *(ebx_2 + 0x3c))
                        
                        k = k_1
                        ebp = var_1c
                    
                    k += 1
                    ecx_3 = var_24_1 + 4
                    k_1 = k
                    var_24_1 = ecx_3
                while (k s< *(ebp + 0x114))
                
                j = j_1
            
            if ((*(*(ebp + 0x198) + 4))(ebp, ebx + 0x18) == 0)
                void* eax_15 = var_38
                *(eax_15 + 0xc) = j
                *(eax_15 + 0x10) = i_2
                eax_15.b = 0
                @__security_check_cookie@4(eax_1 ^ &var_38)
                return eax_15
            
            j += 1
            j_1 = j
        while (j u< *(ebp + 0x128))
        
        ebx = var_38
        i_1 = i_2
    
    i_1 += 1
    *(ebx + 0xc) = 0
    i_2 = i_1

*(ebx + 8) += 1
void* ecx_9 = *(ebp + 0x184)

if (*(ebp + 0x114) s<= 1)
    void* eax_18 = *(ebp + 0x118)
    
    if (*(ecx_9 + 8) u>= *(ebp + 0x110) - 1)
        i_1 = *(eax_18 + 0x4c)
    else
        i_1 = *(eax_18 + 0xc)
    
    *(ecx_9 + 0x14) = i_1
else
    *(ecx_9 + 0x14) = 1

*(ecx_9 + 0xc) = 0
i_1.b = 1
*(ecx_9 + 0x10) = 0
@__security_check_cookie@4(eax_1 ^ &var_38)
return i_1
