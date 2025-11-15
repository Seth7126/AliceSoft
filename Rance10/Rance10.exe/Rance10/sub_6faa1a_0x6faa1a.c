// 函数: sub_6faa1a
// 地址: 0x6faa1a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_5 = 0
int32_t result = 0
uint32_t (* i)[0x4]
i.b = 0
int32_t* edx = *(arg1 + 0x30)
int32_t* var_c = edx

do
    void* edi_1 = &edx[2]
    
    if (*edi_1 s>= 0xffffffff)
        int32_t* edx_1 = *edx
        i = nullptr
        uint32_t (* i_1)[0x4] = nullptr
        
        if (*(arg1 + 0x28) s> 0)
            int32_t result_1 = result
            
            do
                if (*edx_1 == 0)
                    *arg2 = result_1
                    int32_t eax = *(arg1 + 0x40)
                    int32_t eax_1 = 0
                    
                    if (0 == *edx_1)
                        *edx_1 = arg2
                    else
                        eax_1 = *edx_1
                    
                    if (eax_1 == 0)
                        result = result_1
                        var_5 = 1
                        
                        if (result s>= eax)
                            *(arg1 + 0x40) += 1
                        
                        if (i_1 == *edi_1)
                            *edi_1 = 0xffffffff
                        else
                            *edi_1
                        
                        break
                    
                    i = i_1
                
                i += 1
                edx_1 = &edx_1[1]
                result_1 += 1
                i_1 = i
            while (i s< *(arg1 + 0x28))
        
        edx = var_c
        i.b = var_5
    
    if (i.b == 0)
        if (0xffffffff == *edi_1)
            *edi_1 = 0xfffffffe
        else
            *edi_1
        
        result += *(arg1 + 0x28)
        void* edi_2 = &edx[1]
        
        if (*edi_2 == 0)
            i = nullptr
            
            if (0 == *edi_2)
                *edi_2 = 1
            else
                i = *edi_2
            
            if (i == 0)
                int32_t eax_2 = *(arg1 + 0x28)
                int32_t ecx_1
                ecx_1.b = mulu.dp.d(eax_2, 4) u>> 0x20 != 0
                int32_t var_38_1 = neg.d(ecx_1) | (eax_2 * 4)
                uint32_t (* eax_4)[0x4] = sub_6e8787()
                _memset(eax_4, 0, *(arg1 + 0x28) << 2)
                uint32_t (* ecx_5)[0x4] = sub_6e810c(0xc)
                uint32_t (* var_14_2)[0x4] = ecx_5
                
                if (ecx_5 == 0)
                    ecx_5 = nullptr
                else
                    (*ecx_5)[1] = 0
                    (*ecx_5)[2] = 0xffffffff
                    *ecx_5 = eax_4
                
                int32_t edx_2 = *(arg1 + 0x3c)
                
                if (edx_2 s< *(arg1 + 0x38))
                    (**(arg1 + 0x34))[edx_2] = ecx_5
                    *(arg1 + 0x3c) += 1
                
                *edi_2
                *edi_2 = ecx_5
                edx = var_c
        
        if (*edi_2 == 1)
            int32_t var_20_1 = 0
            int32_t (* var_1c_1)() = sub_6eb74c
            
            do
                void var_28
                Concurrency::details::_SpinWait<1>::_SpinOnce(&var_28)
            while (*edi_2 == 1)
            
            edx = var_c
        
        i.b = var_5
    
    edx = edx[1]
    var_c = edx
while (i.b == 0)

return result
