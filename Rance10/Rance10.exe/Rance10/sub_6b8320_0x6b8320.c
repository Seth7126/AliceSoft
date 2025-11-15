// 函数: sub_6b8320
// 地址: 0x6b8320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x1c)

if (esi != 0)
    int32_t i = 0
    
    if (*(esi + 8) s> 0)
        void* ebx_1 = esi + 0x20
        
        do
            int32_t eax_1 = *ebx_1
            
            if (eax_1 != 0)
                _free(eax_1)
            
            i += 1
            ebx_1 += 4
        while (i s< *(esi + 8))
    
    int32_t i_1 = 0
    
    if (*(esi + 0xc) s> 0)
        void* edi_1 = esi + 0x220
        
        do
            int32_t ecx = *edi_1
            
            if (ecx != 0)
                (*((&data_77b074)[*(edi_1 - 0x100)] + 8))(ecx)
            
            i_1 += 1
            edi_1 += 4
        while (i_1 s< *(esi + 0xc))
    
    int32_t i_2 = 0
    
    if (*(esi + 0x10) s> 0)
        void* edi_2 = esi + 0x420
        
        do
            int32_t ecx_1 = *edi_2
            
            if (ecx_1 != 0)
                (*(*((*(edi_2 - 0x100) << 2) + &data_77b06c) + 0xc))(ecx_1)
            
            i_2 += 1
            edi_2 += 4
        while (i_2 s< *(esi + 0x10))
    
    int32_t i_3 = 0
    
    if (*(esi + 0x14) s> 0)
        void* edi_3 = esi + 0x620
        
        do
            int32_t ecx_2 = *edi_3
            
            if (ecx_2 != 0)
                (*(*((*(edi_3 - 0x100) << 2) + &data_77b060) + 0xc))(ecx_2)
            
            i_3 += 1
            edi_3 += 4
        while (i_3 s< *(esi + 0x14))
    
    int32_t i_4 = 0
    
    if (*(esi + 0x18) s> 0)
        void* ecx_3 = nullptr
        void* ebp_1 = esi + 0x720
        void* var_8_1 = nullptr
        
        do
            void* edi_4 = *ebp_1
            
            if (edi_4 != 0 && *(edi_4 + 0x24) != 0)
                int32_t eax_11 = *(edi_4 + 0x20)
                
                if (eax_11 != 0)
                    _free(eax_11)
                
                int32_t eax_12 = *(edi_4 + 8)
                
                if (eax_12 != 0)
                    _free(eax_12)
                
                __builtin_memset(edi_4, 0, 0x28)
                _free(edi_4)
                ecx_3 = var_8_1
            
            int32_t eax_13 = *(esi + 0xb20)
            
            if (eax_13 != 0)
                uint32_t (* edi_5)[0x4] = ecx_3 + eax_13
                uint32_t eax_14 = edi_5[1][0]
                
                if (eax_14 != 0)
                    _free(eax_14)
                
                uint32_t eax_15 = (*edi_5)[5]
                
                if (eax_15 != 0)
                    _free(eax_15)
                
                uint32_t eax_16 = (*edi_5)[6]
                
                if (eax_16 != 0)
                    _free(eax_16)
                
                uint32_t eax_17 = (*edi_5)[7]
                
                if (eax_17 != 0)
                    _free(eax_17)
                
                uint32_t eax_18 = edi_5[2][0]
                
                if (eax_18 != 0)
                    _free(eax_18)
                
                _memset(edi_5, 0, 0x38)
                ecx_3 = var_8_1
            
            i_4 += 1
            ecx_3 += 0x38
            ebp_1 += 4
            var_8_1 = ecx_3
        while (i_4 s< *(esi + 0x18))
    
    int32_t eax_19 = *(esi + 0xb20)
    
    if (eax_19 != 0)
        _free(eax_19)
    
    int32_t i_5 = 0
    
    if (*(esi + 0x1c) s> 0)
        void* ebp_2 = esi + 0xb24
        
        do
            uint32_t (* edi_6)[0x4] = *ebp_2
            
            if (edi_6 != 0)
                _memset(edi_6, 0, 0x208)
                _free(edi_6)
            
            i_5 += 1
            ebp_2 += 4
        while (i_5 s< *(esi + 0x1c))
    
    _free(esi)

__builtin_memset(arg1, 0, 0x20)
return arg1
