// 函数: sub_446490
// 地址: 0x446490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
struct apeg::CBlockDecoder::VTable* const var_8 = &apeg::CBlockDecoder::`vftable'
int32_t edi = 0
void* ebx = arg1 + 0x30
int32_t var_4 = *(arg1 + 4)

while (true)
    void* const var_1c = *(arg1 + 8)
    int32_t var_18
    
    if (sub_446bc0(&var_18, ebp) == 0)
        break
    
    *(arg1 + 0xc) += var_18
    
    if (sub_443b70(&var_8, ebx, ebp, var_1c, *(arg1 + 0xc) << 3) == 0)
        break
    
    edi += 1
    ebx -= 0xffffff80
    
    if (edi s>= 4)
        int32_t eax_6 = *(arg1 + 8)
        int32_t edx_2 = *(ebp + 8)
        void* ecx_3 = edx_2 & 7
        int32_t* eax_7 = *(ebp + 4)
        var_1c = ecx_3
        var_18 = 0
        int32_t ebx_1 = *eax_7
        int32_t* edx_3 = *(ebp + 4)
        uint32_t ebx_3 = (edx_2 + 8) u>> 3
        uint32_t edi_2 = zx.d(*((edx_2 u>> 3) + ebx_1)) << (ecx_3.b + 0x18)
        
        if (ebx_3 + 1 u< edx_3[1] - *edx_3)
            void* const eax_12 = var_1c
            edi_2 |= zx.d(*(ebx_1 + ebx_3 + 1)) << (eax_12.b + 8)
                | zx.d(*(ebx_1 + ebx_3)) << (eax_12 + 0x10).b
        else if (ebx_3 u< edx_3[1] - *edx_3)
            edi_2 |= zx.d(*(*edx_3 + ebx_3)) << (var_1c + 0x10).b
        
        int32_t eax_21
        int32_t edi_3
        
        if (edi_2 s>= 0)
            eax_21 = 2
            edi_3 = edi_2 u>> 0x1e & 1
        else if ((edi_2 & 0x40000000) == 0)
            edi_3 = 2
            eax_21 = 2
        else if ((edi_2 & 0x20000000) == 0)
            edi_3 = 3
            eax_21 = 3
        else
            eax_21 = sub_446fa0(&var_18, edi_2)
            edi_3 = var_18
        
        *(ebp + 8) += eax_21
        int32_t ebx_4 = 0
        var_18 = *(ebp + 8)
        
        if (edi_3 s> 0)
            int32_t ebp_1 = 0
            
            do
                int32_t edx_9 = var_18 + ebp_1
                int32_t* ecx_6
                ecx_6.b = 7
                int32_t eax_24
                eax_24.b = edx_9.b
                ebx_4 *= 2
                eax_24.b &= 7
                ecx_6.b = 7 - eax_24.b
                eax_24.b = *((edx_9 u>> 3) + *eax_7)
                eax_24.b u>>= ecx_6.b
                
                if ((eax_24.b & 1) != 0)
                    ebx_4 |= 1
                
                ebp_1 += 1
            while (ebp_1 u< edi_3)
            
            ebp = arg2
            *(ebp + 8) = var_18 + edi_3
            
            if ((ebx_4 & 1 << (edi_3.b - 1)) == 0)
                ebx_4 = (ebx_4 + 1) | 0xffffffff << edi_3.b
        
        *(arg1 + 0x10) += ebx_4
        
        if (sub_443b70(&var_8, arg1 + 0x230, ebp, eax_6, *(arg1 + 0x10) << 3) != 0)
            int32_t eax_32 = *(arg1 + 8)
            int32_t edx_11 = *(ebp + 8)
            int32_t ecx_13 = edx_11 & 7
            void** eax_33 = *(ebp + 4)
            var_18 = ecx_13
            var_1c = nullptr
            void* ebx_6 = *eax_33
            int32_t* edx_12 = *(ebp + 4)
            uint32_t ebx_8 = (edx_11 + 8) u>> 3
            uint32_t edi_6 = zx.d(*((edx_11 u>> 3) + ebx_6)) << (ecx_13.b + 0x18)
            
            if (ebx_8 + 1 u< edx_12[1] - *edx_12)
                char eax_38 = var_18.b
                edi_6 |= zx.d(*(ebx_6 + ebx_8 + 1)) << (eax_38 + 8)
                    | zx.d(*(ebx_6 + ebx_8)) << (eax_38 + 0x10)
            else if (ebx_8 u< edx_12[1] - *edx_12)
                edi_6 |= zx.d(*(*edx_12 + ebx_8)) << (var_18.b + 0x10)
            
            int32_t eax_47
            void* const edi_7
            
            if (edi_6 s>= 0)
                eax_47 = 2
                edi_7 = edi_6 u>> 0x1e & 1
            else if ((edi_6 & 0x40000000) == 0)
                edi_7 = 2
                eax_47 = 2
            else if ((edi_6 & 0x20000000) == 0)
                edi_7 = 3
                eax_47 = 3
            else
                eax_47 = sub_446fa0(&var_1c, edi_6)
                edi_7 = var_1c
            
            *(ebp + 8) += eax_47
            void* ebx_9 = *(ebp + 8)
            int32_t eax_48
            
            if (edi_7 s<= 0)
                eax_48 = 0
            else
                eax_48 = sub_443540(ebp, edi_7)
                *(ebp + 8) = ebx_9 + edi_7
                
                if ((eax_48 & 1 << (edi_7.b - 1)) == 0)
                    eax_48 = (eax_48 + 1) | 0xffffffff << edi_7.b
            
            *(arg1 + 0x14) += eax_48
            
            if (sub_443b70(&var_8, arg1 + 0x2b0, ebp, eax_32, *(arg1 + 0x14) << 3) != 0)
                return 1
        
        break

return 0
