// 函数: sub_6f614d
// 地址: 0x6f614d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = arg1
int32_t i = 0
void* var_1c = eax
int32_t i_1 = 0

if (*(eax + 0xc0) u> 0)
    int32_t ebx_1 = 0
    int32_t var_18_1 = 0
    
    do
        int32_t j = 0
        void* ecx_1 = *(eax + 0x10) + ebx_1
        int32_t j_1 = 0
        void* var_c_1 = ecx_1
        
        if (*(ecx_1 + 4) u> 0)
            int32_t edx = 0
            int32_t var_8_1 = 0
            
            do
                void* ebx_2 = *(*(ecx_1 + 0x30) + edx + 0x10)
                void* const k
                
                if (ebx_2 == 0)
                    k = nullptr
                else
                    k = *(ebx_2 + 0x38)
                
                if (k != 0)
                    do
                        void* const k_1 = k
                        
                        if (k == *(*(ecx_1 + 0x30) + edx + 0x10))
                            k = nullptr
                        else
                            k = *(k + 0x38)
                        
                        int32_t* edi_1 = *(k_1 + 0x1c)
                        sub_6fcd24(edi_1)
                        int32_t esi_1 = *(*edi_1 + 0x24)
                        j_sub_4033e0()
                        esi_1()
                        ecx_1 = var_c_1
                        edx = var_8_1
                    while (k != 0)
                    
                    j = j_1
                
                j += 1
                edx += 0x34
                j_1 = j
                var_8_1 = edx
            while (j u< *(ecx_1 + 4))
            
            eax = var_1c
            i = i_1
            ebx_1 = var_18_1
        
        i += 1
        ebx_1 += 0x34
        i_1 = i
        var_18_1 = ebx_1
    while (i u< *(eax + 0xc0))

return operator new(*(eax + 0x38))
