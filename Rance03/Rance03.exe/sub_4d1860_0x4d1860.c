// 函数: sub_4d1860
// 地址: 0x4d1860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x40)
int32_t esi = *(ecx + 0xd8)

if (esi == 0)
    int32_t eax_3 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
    
    if (eax_3 s<= 0)
        esi = 0
    else
        int32_t var_10_1 = eax_3
        void* eax_4 = sub_4a56f0(*(ecx + 0x54))
        
        if (eax_4 == 0)
            esi = 0
        else
            esi = sub_4a2ab0(eax_4)
            
            if (esi == 0)
                esi = 0

int32_t* edi = *(arg1 + 0x3c)
int32_t var_10_2 = esi
int32_t* result = sub_4a55e0(edi)

if (result.b == 0)
    void* edi_3 = *(arg1 + 0x34)
    
    for (int32_t* i = *(edi_3 + 0x28) + 4; i != *(edi_3 + 0x2c); i = &i[1])
        result = (*(**i + 0x2c))(0xffffffff)
else
    int32_t var_10_3 = esi
    result = sub_4a52a0(edi)
    int32_t* result_1 = result
    int32_t* result_2
    
    if (result_1 == 0)
        result_2 = nullptr
    else
        int32_t edi_1 = result_1[2]
        
        if (esi s< edi_1)
            result_2 = nullptr
        else
            result = result_1[1] + edi_1
            
            if (result s<= esi)
                result_2 = nullptr
            else
                result = result_1[3]
                result_2 = result[esi - edi_1]
                
                if (result_2 == 0)
                    result = sub_4e7720(result_1, esi)
                    result_2 = result
    
    int32_t* ecx_8 = result_2[0x17]
    
    if (ecx_8 != 0)
        result = (*(*ecx_8 + 8))(1)
    
    if (ecx_8 != 0 && result == 0xb)
    label_4d1918:
        int32_t var_10_5 = esi
        struct partsengine::CPartsList::VTable** eax_9 = sub_4a52a0(*(arg1 + 0x3c))
        int32_t edi_2
        
        if (eax_9 != 0)
            edi_2 = eax_9[2]
        
        struct IInterface::VTable** vFunc_0
        
        if (eax_9 == 0 || esi s< edi_2 || eax_9[1] + edi_2 s<= esi)
            vFunc_0 = nullptr
        else
            vFunc_0 = eax_9[3][esi - edi_2].vFunc_0
            
            if (vFunc_0 == 0)
                vFunc_0 = sub_4e7720(eax_9, esi)
        
        void* eax_13 = sub_4a4020(vFunc_0)
        return sub_511180(*(arg1 + 0x34), *(eax_13 + 0x34))
    
    int32_t* ecx_9 = result_2[0x17]
    
    if (ecx_9 != 0)
        result = (*(*ecx_9 + 8))(1)
        
        if (result == 0x12)
            goto label_4d1918

return result
