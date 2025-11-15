// 函数: sub_6eed3c
// 地址: 0x6eed3c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_20 = 0xffffffff
void* ebx = arg1
void* var_10 = ebx
int32_t* edx

if (*(arg2 + 0x68) != 0)
    int32_t eax_1
    eax_1, edx = Concurrency::details::ResourceManager::GetCurrentNodeAndCore(arg1, nullptr)
    var_20 = eax_1

void* eax_2 = *(arg2 + 0x10)
edx.b = 0
int32_t ecx = *(arg2 + 0x14)
int32_t i = 0
int32_t var_c = ecx
char var_5 = 0
int32_t i_2 = 0

if (*(ebx + 0x18) u> 0)
    int32_t* ecx_1 = eax_2 + 8
    
    do
        int32_t j = 0
        int32_t j_3 = 0
        
        if (ecx_1[-1] u> 0)
            int32_t edi_1 = 0
            
            do
                edx = ecx_1[0xa] + edi_1
                
                if (*edx == 1)
                    j = j_3
                    
                    if (arg4 == *edx[5])
                        *edx = 2
                        *ecx_1 += 1
                        var_5 = 1
                
                j += 1
                edi_1 += 0x34
                j_3 = j
            while (j u< ecx_1[-1])
            
            i = i_2
            ebx = var_10
        
        i += 1
        ecx_1 = &ecx_1[0xd]
        i_2 = i
    while (i u< *(ebx + 0x18))
    
    ecx = var_c
    edx.b = var_5

int32_t result = 0

if (edx.b != 0)
    int32_t i_1 = 0
    int32_t i_3 = 0
    
    if (*(ebx + 0x18) u> 0)
        void* eax_4 = var_10
        
        do
            int32_t i_4 = i_1
            int32_t j_4 = i_4
            void* edx_3 = *(ecx + (i_1 << 2)) * 0x34 + eax_2
            int32_t ebx_2 = arg3 - result
            
            if (arg3 != result)
                if (*(edx_3 + 8) u> ebx_2)
                    *(edx_3 + 8) = ebx_2
                
                int32_t j_1 = i_1 + 1
                
                if (j_1 u< *(eax_4 + 0x18))
                    void* edi_2 = var_10
                    
                    do
                        void* eax_6 = *(ecx + (j_1 << 2)) * 0x34 + eax_2
                        
                        if (*(eax_6 + 8) u> ebx_2)
                            *(eax_6 + 8) = ebx_2
                        
                        int32_t eax_8 = *(eax_6 + 8) + *(eax_6 + 0x1c) + *(eax_6 + 0x18)
                        int32_t ecx_6 = *(edx_3 + 0x1c) + *(edx_3 + 0x18) + *(edx_3 + 8)
                        int32_t var_28_1 = eax_8
                        ecx = var_c
                        
                        if (ecx_6 u< eax_8)
                            edx_3 = *(ecx + (j_1 << 2)) * 0x34 + eax_2
                            j_4 = j_1
                        else if (ecx_6 == eax_8 && *(arg2 + 0x68) != 0)
                            int32_t eax_10 = *(ecx + (j_1 << 2))
                            edi_2 = var_10
                            
                            if (eax_10 == var_20)
                                edx_3 = eax_10 * 0x34 + eax_2
                                j_4 = j_1
                        
                        j_1 += 1
                    while (j_1 u< *(edi_2 + 0x18))
                    
                    i_1 = i_3
                
                i_4 = j_4
            
            if (*(edx_3 + 8) u> 0)
                if (*(edx_3 + 4) u> 0)
                    int32_t j_2 = 0
                    int32_t ebx_3 = 0
                    
                    do
                        int32_t* eax_12 = *(edx_3 + 0x30) + ebx_3
                        
                        if (*eax_12 == 2)
                            ecx = var_c
                            
                            if (result u>= arg3)
                                *eax_12 = 1
                            else
                                *eax_12 = 3
                                int32_t* eax_13 = eax_12[5]
                                *eax_13 += 1
                                *(edx_3 + 0x18) += 1
                                
                                if (*(arg2 + 0x68) != 0 && *(ecx + (i_4 << 2)) == var_20)
                                    *(arg2 + 0x68) = 0
                                
                                result += 1
                        
                        j_2 += 1
                        ebx_3 += 0x34
                    while (j_2 u< *(edx_3 + 4))
                    
                    i_1 = i_3
                
                *(edx_3 + 8) = 0
            
            if (i_1 != i_4)
                int32_t ecx_8 = *(ecx + (i_1 << 2))
                *(var_c + (i_1 << 2)) = *(var_c + (i_4 << 2))
                *(var_c + (i_4 << 2)) = ecx_8
            
            eax_4 = var_10
            i_1 += 1
            ecx = var_c
            i_3 = i_1
        while (i_1 u< *(eax_4 + 0x18))
        
        return result

return 0
