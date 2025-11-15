// 函数: sub_655b80
// 地址: 0x655b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1
void* esi = *(ecx + 0x1a0)
int32_t edx_1 = *(ecx + 0x144) - 1
int32_t eax_1 = *(ecx + 0x128) - 1
void* var_20 = esi
int32_t i = *(esi + 0x18)
int32_t var_10 = edx_1
int32_t i_1 = i

while (i s< *(esi + 0x1c))
    int32_t edi_1 = *(esi + 0x14)
    int32_t var_34_1 = edi_1
    
    if (edi_1 u<= edx_1)
        void* ebp_1 = esi + 0x20
        void* var_4_1 = ebp_1
        
        do
            if (*(ecx + 0x190) != 0)
                _memset(*ebp_1, 0, *(ecx + 0x14c) << 7)
                ecx = arg1
            
            if ((*(*(ecx + 0x1b0) + 4))(ecx, ebp_1) == 0)
                *(var_20 + 0x14) = edi_1
                *(var_20 + 0x18) = i
                return 0
            
            ecx = arg1
            int32_t j = 0
            int32_t ebp_2 = 0
            int32_t j_1 = 0
            int32_t var_38_1 = 0
            
            if (*(ecx + 0x130) s> 0)
                void* esi_1 = ecx + 0x134
                void* var_14_1 = esi_1
                
                do
                    void* esi_2 = *esi_1
                    
                    if (*(esi_2 + 0x34) != 0)
                        int32_t edx_2 = *(esi_2 + 4)
                        int32_t eax_8 = *(*(ecx + 0x1b4) + (edx_2 << 2) + 4)
                        int32_t edi_2
                        
                        if (edi_1 u>= var_10)
                            edi_2 = *(esi_2 + 0x48)
                        else
                            edi_2 = *(esi_2 + 0x38)
                        
                        int32_t ebx_1 = *(esi_2 + 0x44) * var_34_1
                        int32_t var_28_1 = edi_2
                        int32_t var_1c_1 = ebx_1
                        int32_t edx_3 = *(arg2 + (edx_2 << 2)) + ((*(esi_2 + 0x28) * i) << 2)
                        ecx = arg1
                        int32_t k = 0
                        int32_t var_2c_1 = edx_3
                        int32_t k_1 = 0
                        
                        if (*(esi_2 + 0x3c) s> 0)
                            do
                                int32_t ebp_4 = var_38_1
                                
                                if (*(ecx + 0x80) u< eax_1 || k + i_1 s< *(esi_2 + 0x4c))
                                    if (edi_2 s> 0)
                                        void* edi_3 = var_20 + 0x20 + (ebp_4 << 2)
                                        int32_t ebp_5 = var_28_1
                                        int32_t temp0_1
                                        
                                        do
                                            eax_8(ecx, esi_2, *edi_3, edx_3, ebx_1)
                                            ebx_1 += *(esi_2 + 0x24)
                                            edi_3 += 4
                                            ecx = arg1
                                            edx_3 = var_2c_1
                                            temp0_1 = ebp_5
                                            ebp_5 -= 1
                                        while (temp0_1 != 1)
                                        ebp_4 = var_38_1
                                    
                                    ebx_1 = var_1c_1
                                
                                ebp_2 = ebp_4 + *(esi_2 + 0x38)
                                edi_2 = var_28_1
                                var_38_1 = ebp_2
                                edx_3 += *(esi_2 + 0x28) << 2
                                k = k_1 + 1
                                var_2c_1 = edx_3
                                k_1 = k
                            while (k s< *(esi_2 + 0x3c))
                        
                        edi_1 = var_34_1
                        i = i_1
                        j = j_1
                    else
                        ebp_2 += *(esi_2 + 0x40)
                        var_38_1 = ebp_2
                    
                    j += 1
                    esi_1 = var_14_1 + 4
                    j_1 = j
                    var_14_1 = esi_1
                while (j s< *(ecx + 0x130))
            
            edx_1 = var_10
            edi_1 += 1
            ebp_1 = var_4_1
            var_34_1 = edi_1
        while (edi_1 u<= edx_1)
        
        esi = var_20
    
    i += 1
    *(esi + 0x14) = 0
    i_1 = i

*(ecx + 0x80) += 1
*(ecx + 0x88) += 1

if (*(ecx + 0x80) u>= *(ecx + 0x128))
    (*(*(ecx + 0x1a8) + 0xc))(ecx)
    return 4

sub_655aa0(ecx)
return 3
