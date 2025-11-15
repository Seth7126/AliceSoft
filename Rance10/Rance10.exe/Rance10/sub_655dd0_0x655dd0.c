// 函数: sub_655dd0
// 地址: 0x655dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_38
int32_t eax_1 = __security_cookie ^ &var_38
void* ebp = arg1
int32_t i = 0
void* var_1c = ebp
void* ebx = *(ebp + 0x1a0)
var_38 = ebx
int32_t var_14[0x4]

if (*(ebp + 0x130) s> 0)
    void* ebx_1 = ebp + 0x134
    
    do
        void* edx_1 = *ebx_1
        int32_t ecx_1 = *(edx_1 + 0xc)
        var_14[i] = (*(*(ebp + 4) + 0x20))(ebp, *(var_38 + (*(edx_1 + 4) << 2) + 0x48), 
            *(ebp + 0x80) * ecx_1, ecx_1, 1)
        ebx_1 += 4
        i += 1
    while (i s< *(ebp + 0x130))
    
    ebx = var_38

int32_t i_1 = *(ebx + 0x18)
int32_t i_2 = i_1

while (i_1 s< *(ebx + 0x1c))
    int32_t j = *(ebx + 0x14)
    int32_t j_1 = j
    
    if (j u< *(ebp + 0x144))
        do
            int32_t k = 0
            int32_t edi = 0
            int32_t k_1 = 0
            
            if (*(ebp + 0x130) s> 0)
                void* ecx_3 = ebp + 0x134
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
                            int32_t eax_10 = *ebp_2 + edx_4
                            int32_t edx_5 = 0
                            
                            if (esi_2 s> 0)
                                void* ecx_7 = var_38 + (edi << 2) + 0x20
                                
                                do
                                    *ecx_7 = eax_10
                                    ecx_7 += 4
                                    esi_2 = *(ebx_2 + 0x38)
                                    edx_5 += 1
                                    edi += 1
                                    eax_10 -= 0xffffff80
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
                while (k s< *(ebp + 0x130))
                
                j = j_1
            
            if ((*(*(ebp + 0x1b0) + 4))(ebp, ebx + 0x20) == 0)
                void* eax_15 = var_38
                *(eax_15 + 0x14) = j
                *(eax_15 + 0x18) = i_2
                @__security_check_cookie@4(eax_1 ^ &var_38)
                return 0
            
            j += 1
            j_1 = j
        while (j u< *(ebp + 0x144))
        
        ebx = var_38
        i_1 = i_2
    
    i_1 += 1
    *(ebx + 0x14) = 0
    i_2 = i_1

*(ebp + 0x80) += 1
int32_t edx_6 = *(ebp + 0x80)
int32_t eax_14 = *(ebp + 0x128)

if (edx_6 u>= eax_14)
    (*(*(ebp + 0x1a8) + 0xc))(ebp)
    @__security_check_cookie@4(eax_1 ^ &var_38)
    return 4

void* ecx_9 = *(ebp + 0x1a0)

if (*(ebp + 0x130) s<= 1)
    void* eax_18 = *(ebp + 0x134)
    int32_t eax_19
    
    if (edx_6 u>= eax_14 - 1)
        eax_19 = *(eax_18 + 0x4c)
    else
        eax_19 = *(eax_18 + 0xc)
    
    *(ecx_9 + 0x1c) = eax_19
else
    *(ecx_9 + 0x1c) = 1

*(ecx_9 + 0x14) = 0
*(ecx_9 + 0x18) = 0
@__security_check_cookie@4(eax_1 ^ &var_38)
return 3
