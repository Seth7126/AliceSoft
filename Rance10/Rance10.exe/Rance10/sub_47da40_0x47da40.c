// 函数: sub_47da40
// 地址: 0x47da40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const result

if (*(arg1 + 4) != 0)
    int32_t* esi_1 = *(arg1 + 8)
    result = *(arg1 + 0xc)
    uint32_t ebx
    ebx.b = 0
    uint32_t ebp_4 = (result - esi_1 + 3) u>> 2
    int32_t edi_1 = 0
    
    if (esi_1 u> result)
        ebp_4 = 0
    
    if (ebp_4 != 0)
        do
            void* ecx = *esi_1
            char var_5 = 0
            
            if (sub_47de70(ecx, &var_5).b != 0)
                ebx = zx.d(ebx.b)
                
                if (var_5 != 0)
                    ebx = 1
            
            edi_1 += 1
            esi_1 = &esi_1[1]
        while (edi_1 != ebp_4)
    
    int32_t* ecx_1 = *(arg1 + 0x14)
    
    if (ecx_1 != 0 && ebx.b != 0)
        (**ecx_1)(1)
    
    void* ecx_2 = *(arg1 + 0x18)
    
    if (ecx_2 != 0 && ebx.b != 0)
        sub_47e450(ecx_2)

result.b = 1
return result
