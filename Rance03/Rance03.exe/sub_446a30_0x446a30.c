// 函数: sub_446a30
// 地址: 0x446a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x18) == 0)
    return 0

void* var_24_1 = arg1
struct apeg::CBitReader::VTable* const var_c = &apeg::CBitReader::`vftable'
int32_t var_8_1 = arg4
int32_t var_4_1 = 0
*arg3 = sub_443460(&var_c)
int32_t var_4_2 = var_4_1 + 1
arg4.b = sub_443540(&var_c, 1) != 0
int32_t edi_1 = sub_443540(&var_c, 3)
int32_t var_10_1 = edi_1
int32_t var_4_3 = var_4_1 + 8
sub_446320(arg1 + 0x1c)
uint32_t esi_4 = 0

if (*(arg1 + 0x14) u> 0)
    while (true)
        if (sub_446380(arg1 + 0x1c, &var_c, edi_1) == 0)
            return 0
        
        char eax
        
        if ((*(arg1 + 0x44) & 1) == 0)
            int32_t* eax_5 = *(arg1 + 0x18)
            
            if (sub_443e10(arg2, esi_4, arg1 + 0x1c) == 0)
                return 0
            
            int32_t edx_1
            edx_1.b = arg4.b != 0
            eax = sub_443fb0(arg2, esi_4, eax_5, *(arg1 + 0x34) * (edx_1 + 1), 
                *(arg1 + 0x38) * (edx_1 + 1))
        else
            eax = sub_443e10(arg2, esi_4, arg1 + 0x1c)
        
        if (eax == 0)
            return 0
        
        int32_t* eax_8 = *(arg1 + 0x48)
        
        if (eax_8 != 0)
            *(arg1 + 0x28) = 0x80
            int32_t edi_3 = 0
            *(arg1 + 0x2c) = 0x80
            *(arg1 + 0x30) = 0x80
            *(arg1 + 0x34) = 0
            *(arg1 + 0x38) = 0
            *(arg1 + 0x3c) = 0
            *(arg1 + 0x40) = 0
            
            if (eax_8 != 0)
                do
                    esi_4 += 1
                    
                    if (sub_443ee0(arg2, esi_4, *(arg1 + 0x18)) == 0)
                        return 0
                    
                    edi_3 += 1
                while (edi_3 u< eax_8)
        
        esi_4 += 1
        
        if (esi_4 u>= *(arg1 + 0x14))
            break
        
        edi_1 = var_10_1

*(*(arg1 + 0x18) + 0x30) = 0
*(arg2 + 0x30) = 1
*(arg1 + 0x18) = arg2
void* result
result.b = 1
return result
