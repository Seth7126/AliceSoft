// 函数: sub_5c9490
// 地址: 0x5c9490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t eax_1 = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* eax_4 = *(arg1 + 0x234)
int32_t var_4 = ecx
void* eax_5 = *eax_4
void* var_8 = eax_5
int32_t eax_6
uint32_t ecx_2
int32_t edx
eax_6, ecx_2, edx = sub_5c9230(arg1, eax_5, ecx, "A_INSERT")

if (eax_6 == 0)
    return eax_6

if (*(eax_6 + 0x48) != 0)
    ecx_2 = *(eax_6 + 0xc) u>> 2
    
    if (ecx_2 != 0)
        if (edi s< 0)
            edi = 0
        else if (edi s> ecx_2 - 1)
            edi = ecx_2 - 1
        
        uint32_t eax_9 = ecx_2 + 1
        
        if (eax_9 s> 0)
            eax_9, ecx_2, edx = sub_64aeb0(eax_6 + 4, eax_9 << 2)
            
            if (eax_9.b != 0)
                int32_t edx_1
                
                if (*(eax_6 + 0xc) != 0)
                    edx_1 = *(eax_6 + 8)
                else
                    edx_1 = 0
                
                uint32_t ecx_5
                
                if (*(eax_6 + 0x48) != 0)
                    ecx_5 = *(eax_6 + 0xc) u>> 2
                else
                    ecx_5 = 0
                
                for (int32_t i = ecx_5 - 1; i s> edi; i -= 1)
                    *(edx_1 + (i << 2)) = *(edx_1 + (i << 2) - 4)
                
                *(edx_1 + (edi << 2)) = eax_1
                return eax_1
        
        int32_t var_20_2 = 0x6e895c
        return sub_5c2400(eax_9, edx, ecx_2, arg1, "A_INSERT")

void* edi_1 = var_8
int32_t eax_15 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (edi_1 u< eax_15)
    eax_15 = *(arg1 + 0x174)
    void* edi_2 = *(eax_15 + (edi_1 << 2))
    
    if (edi_2 != 0)
        uint32_t eax_16
        int32_t ecx_8
        int32_t edx_2
        eax_16, ecx_8, edx_2 = sub_5d3550(edi_2, var_4, &var_8)
        
        if (eax_16.b == 0)
            int32_t var_20_4 = 0x6e8860
            return sub_5c2400(eax_16, edx_2, ecx_8, arg1, "A_INSERT")
        
        int32_t eax_18 = *(edi_2 + 0x24)
        
        if (eax_18 s< 0)
            int32_t var_20_11 = 0x6e8888
            return sub_5c2400(eax_18, edx_2, ecx_8, arg1, "A_INSERT")
        
        int32_t eax_19
        int32_t edx_3
        eax_19, edx_3 = sub_5bda60(arg1 + 0x48, eax_18)
        
        if (eax_19 == 0)
            int32_t var_20_6 = 0x6e88b0
            return sub_5c2400(eax_19, edx_3, arg1 + 0x48, arg1, "A_INSERT")
        
        var_4 = 1
        uint32_t eax_21
        int32_t ecx_11
        int32_t edx_4
        eax_21, ecx_11, edx_4 = sub_5d4340(eax_6, 1, &var_4, 0)
        
        if (eax_21.b == 0)
            int32_t var_20_7 = 0x6e88d8
            return sub_5c2400(eax_21, edx_4, ecx_11, arg1, "A_INSERT")
        
        int32_t* edi_3
        
        if (*(eax_6 + 0xc) != 0)
            edi_3 = *(eax_6 + 8)
        else
            edi_3 = nullptr
        
        void* eax_24 = sub_5d4280(eax_6) - 0xa
        
        if (eax_24 u<= 0x35)
            eax_24 = zx.d(*(eax_24 + &lookup_table_5c971c))
            
            switch (eax_24)
                case nullptr
                    *edi_3 = eax_1
                    return eax_1
                case 1
                    int32_t eax_25
                    int32_t ecx_14
                    int32_t edx_5
                    eax_25, ecx_14, edx_5 = sub_5d5e80(arg1 + 0x16c, *edi_3)
                    
                    if (eax_25.b == 0)
                        int32_t var_20_9 = 0x6e88fc
                        return sub_5c2400(eax_25, edx_5, ecx_14, arg1, "A_INSERT")
                    
                    *edi_3 = eax_1
                    return eax_1
        
        int32_t var_20_10 = 0x6e892c
        return sub_5c2400(eax_24, edx_4, eax_6, arg1, "A_INSERT")

int32_t var_20_12 = 0x6e8834
return sub_5c2400(eax_15, edx, ecx_2, arg1, "A_INSERT")
