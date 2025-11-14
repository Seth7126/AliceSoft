// 函数: sub_63d910
// 地址: 0x63d910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* esi = *(result + 0x1c)

if (esi != 0)
    void* i = nullptr
    
    if (*(esi + 8) s> 0)
        void* ebx_1 = esi + 0x20
        
        do
            int32_t eax = *ebx_1
            
            if (eax != 0)
                _free(eax)
            
            i += 1
            ebx_1 += 4
        while (i s< *(esi + 8))
    
    int32_t i_1 = 0
    
    if (*(esi + 0xc) s> 0)
        i = esi + 0x220
        
        do
            arg1 = *i
            
            if (arg1 != 0)
                (*((&data_6f86fc)[*(i - 0x100)] + 8))(arg1)
            
            i_1 += 1
            i += 4
        while (i_1 s< *(esi + 0xc))
    
    int32_t i_2 = 0
    
    if (*(esi + 0x10) s> 0)
        i = esi + 0x420
        
        do
            arg1 = *i
            
            if (arg1 != 0)
                (*(*((*(i - 0x100) << 2) + &data_6f27b4) + 0xc))(arg1)
            
            i_2 += 1
            i += 4
        while (i_2 s< *(esi + 0x10))
    
    int32_t i_3 = 0
    
    if (*(esi + 0x14) s> 0)
        i = esi + 0x620
        
        do
            arg1 = *i
            
            if (arg1 != 0)
                (*(*((*(i - 0x100) << 2) + &data_6f86f0) + 0xc))(arg1)
            
            i_3 += 1
            i += 4
        while (i_3 s< *(esi + 0x14))
    
    int32_t i_4 = 0
    
    if (*(esi + 0x18) s> 0)
        arg1 = nullptr
        void* ebp_1 = esi + 0x720
        void* var_8_1 = nullptr
        
        do
            void* edi_2 = *ebp_1
            
            if (edi_2 != 0 && *(edi_2 + 0x24) != 0)
                int32_t eax_10 = *(edi_2 + 0x20)
                
                if (eax_10 != 0)
                    _free(eax_10)
                
                int32_t eax_11 = *(edi_2 + 8)
                
                if (eax_11 != 0)
                    _free(eax_11)
                
                __builtin_memset(edi_2, 0, 0x28)
                _free(edi_2)
                arg1 = var_8_1
            
            int32_t eax_12 = *(esi + 0xb20)
            
            if (eax_12 != 0)
                void* edi_3 = arg1 + eax_12
                int32_t eax_13 = *(edi_3 + 0x10)
                
                if (eax_13 != 0)
                    _free(eax_13)
                
                int32_t eax_14 = *(edi_3 + 0x14)
                
                if (eax_14 != 0)
                    _free(eax_14)
                
                int32_t eax_15 = *(edi_3 + 0x18)
                
                if (eax_15 != 0)
                    _free(eax_15)
                
                int32_t eax_16 = *(edi_3 + 0x1c)
                
                if (eax_16 != 0)
                    _free(eax_16)
                
                int32_t eax_17 = *(edi_3 + 0x20)
                
                if (eax_17 != 0)
                    _free(eax_17)
                
                _memset(edi_3, 0, 0x38)
                arg1 = var_8_1
            
            i_4 += 1
            arg1 += 0x38
            ebp_1 += 4
            var_8_1 = arg1
        while (i_4 s< *(esi + 0x18))
    
    int32_t eax_18 = *(esi + 0xb20)
    
    if (eax_18 != 0)
        _free(eax_18)
    
    int32_t i_5 = 0
    
    if (*(esi + 0x1c) s> 0)
        void* ebp_2 = esi + 0xb24
        
        do
            char* edi_4 = *ebp_2
            
            if (edi_4 != 0)
                _memset(edi_4, 0, 0x208)
                _free(edi_4)
            
            i_5 += 1
            ebp_2 += 4
        while (i_5 s< *(esi + 0x1c))
    
    _free(esi)

__builtin_memset(result, 0, 0x20)
return result
