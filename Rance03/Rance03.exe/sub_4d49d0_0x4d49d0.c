// 函数: sub_4d49d0
// 地址: 0x4d49d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (*(arg1 + 0x4c) == 0)
    return 

*(arg1 + 0x4c) = 0
void* eax_2

if (arg2 == 0)
    eax_2 = nullptr
else
    eax_2 = arg2 - 8

if (*(eax_2 + 0xa4) == 0)
    sub_49e1d0(eax_2, 1)
    *(arg1 + 0x4c) = 1
    return 

int32_t eax = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2
int32_t edi_1 = 0
var_4 = eax

if (eax s> 0)
    do
        int32_t esi_1
        
        if (edi_1 s< 0 || (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2 s<= edi_1)
            esi_1 = 0
        else
            esi_1 = *(*(arg1 + 0x34) + (edi_1 << 2))
        
        int32_t* ebp_1 = *(arg1 + 0x48)
        int32_t var_18_1 = esi_1
        
        if (sub_4a55e0(ebp_1).b != 0)
            int32_t var_18_2 = esi_1
            struct partsengine::CPartsList::VTable** eax_10 = sub_4a52a0(ebp_1)
            int32_t ebp_2
            
            if (eax_10 != 0)
                ebp_2 = eax_10[2]
            
            struct IInterface::VTable** vFunc_0
            
            if (eax_10 == 0 || esi_1 s< ebp_2 || eax_10[1] + ebp_2 s<= esi_1)
                vFunc_0 = nullptr
            else
                vFunc_0 = eax_10[3][esi_1 - ebp_2].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_10, esi_1)
            
            eax = sub_4a3a10(vFunc_0)
            
            if (eax_2 != eax)
                sub_49e1d0(eax, 0)
        
        edi_1 += 1
    while (edi_1 s< var_4)

*(arg1 + 0x4c) = 1
