// 函数: ?PrepareReceiversForCoreTransfer@ResourceManager@details@Concurrency@@AAEII@Z
// 地址: 0x6ee315
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = arg2
void* edi = arg1
int32_t ecx = 0
void* var_14 = edi

if (result_1 != 0)
    if (0 u>= result_1)
        goto label_6ee356
    
    while (true)
        int32_t edx_1 = *(edi + 0x5c)
        void* ebx_1 = *(edx_1 + (ecx << 2))
        
        if (*(ebx_1 + 4) == 0)
            result_1 -= 1
            *(edx_1 + (ecx << 2)) = *(edx_1 + (result_1 << 2))
            *(*(edi + 0x5c) + (result_1 << 2)) = ebx_1
            
            if (ecx u< result_1)
                continue
        
        arg2 = result_1
    label_6ee356:
        *(*(*(edi + 0x5c) + (ecx << 2)) + 0x28) = 0
        *(*(*(edi + 0x5c) + (ecx << 2)) + 0x2c) = 0
        void* eax_8 = *(*(edi + 0x5c) + (ecx << 2))
        ecx += 1
        *(eax_8 + 0x20) = 1
        
        if (ecx u>= result_1)
            break

int32_t ecx_1 = 0
int32_t result = result_1

if (result_1 != 0)
    if (0 u>= result_1)
        goto label_6ee3d9
    
    while (true)
        void* eax_10 = *(*(edi + 0x5c) + (ecx_1 << 2))
        
        if (*(eax_10 + 0x28) == 0)
            int32_t i = 0
            
            if (*(edi + 0x18) u> 0)
                int32_t* edx_3 = *(*(eax_10 + 0x10) + 0x10) + 0x1c
                
                do
                    int32_t eax_12 = *edx_3
                    
                    if (eax_12 != 0 && eax_12 u< edx_3[-6])
                        void* eax_14 = *(*(edi + 0x5c) + (ecx_1 << 2))
                        *(eax_14 + 0x28) += 1
                    
                    i += 1
                    edx_3 = &edx_3[0xd]
                while (i u< *(edi + 0x18))
            
            int32_t edx_4 = *(edi + 0x5c)
            void* ebx_2 = *(edx_4 + (ecx_1 << 2))
            
            if (*(ebx_2 + 0x28) == 0)
                result_1 -= 1
                *(edx_4 + (ecx_1 << 2)) = *(edx_4 + (result_1 << 2))
                *(*(edi + 0x5c) + (result_1 << 2)) = ebx_2
            
            if (ecx_1 u< result_1)
                continue
        
        arg2 = result_1
    label_6ee3d9:
        ecx_1 += 1
        
        if (ecx_1 u>= result_1)
            break

int32_t ebx_3 = 0
int32_t var_10 = 0

if (result_1 != 0)
    do
        int32_t eax_17 = ebx_3 + 1
        int32_t edx_5 = eax_17
        
        if (eax_17 u< result_1)
            int32_t ecx_2 = *(edi + 0x5c)
            int32_t edi_1 = ebx_3
            int32_t var_1c_1 = ecx_2
            int32_t ebx_4 = ebx_3 << 2
            
            do
                if (*(*(ecx_2 + (edx_5 << 2)) + 0x28) u< *(*(ebx_4 + ecx_2) + 0x28))
                    edi_1 = edx_5
                    ebx_4 = edx_5 << 2
                
                ecx_2 = var_1c_1
                edx_5 += 1
            while (edx_5 u< result_1)
            
            ebx_3 = var_10
            edi = var_14
            
            if (ebx_3 != edi_1)
                int32_t ecx_4 = *(edi + 0x5c)
                int32_t edx_6 = *(ecx_4 + (ebx_3 << 2))
                *(ecx_4 + (ebx_3 << 2)) = *(ecx_4 + (edi_1 << 2))
                *(*(edi + 0x5c) + (edi_1 << 2)) = edx_6
        
        void* ecx_6 = *(*(edi + 0x5c) + (ebx_3 << 2))
        void* eax_24 = *(ecx_6 + 0x10)
        int32_t edx_7 = *(eax_24 + 0x10)
        int32_t eax_25 = *(eax_24 + 0x14)
        int32_t i_1 = 0
        int32_t var_18_1 = eax_25
        int32_t i_2 = 0
        
        if (*(ecx_6 + 0x28) u> 0)
            do
                int32_t eax_26 = *(eax_25 + (i_1 << 2))
                int32_t i_3 = i_1
                int32_t eax_30 = i_1 + 1
                int32_t j = eax_30
                
                if (eax_30 u< *(edi + 0x18))
                    void* ebx_6 = eax_26 * 0x34 + edx_7
                    int32_t edi_2 = i_1
                    int32_t edx_8 = edx_7
                    
                    do
                        void* eax_32 = *(eax_25 + (j << 2)) * 0x34 + edx_8
                        int32_t eax_33 = *(eax_32 + 0x1c)
                        
                        if (eax_33 != 0)
                            if (eax_33 u< *(eax_32 + 4))
                                int32_t eax_34 = *(ebx_6 + 0x1c)
                                
                                if (eax_34 == 0 || eax_34 u>= *(ebx_6 + 4)
                                        || *(eax_32 + 0x1c) u> eax_34)
                                    ebx_6 = eax_32
                                    edi_2 = j
                            
                            edx_8 = edx_7
                        
                        j += 1
                    while (j u< *(edi + 0x18))
                    
                    ebx_3 = var_10
                    edi = var_14
                    
                    if (i_2 != edi_2)
                        *(eax_25 + (i_2 << 2)) = *(eax_25 + (edi_2 << 2))
                        *(eax_25 + (edi_2 << 2)) = eax_26
                
                i_1 = eax_30
                i_2 = i_1
            while (i_1 u< *(*(*(edi + 0x5c) + (ebx_3 << 2)) + 0x28))
            
            result_1 = arg2
        
        ebx_3 = eax_17
        var_10 = ebx_3
    while (ebx_3 u< result_1)

return result
