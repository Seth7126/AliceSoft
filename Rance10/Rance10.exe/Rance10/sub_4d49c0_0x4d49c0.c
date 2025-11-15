// 函数: sub_4d49c0
// 地址: 0x4d49c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
*(arg1 + 0x134) = 1
int32_t* result = *(arg1 + 0x1c)
int32_t* edi = *(arg1 + 0x18)
int32_t* result_1 = result

if (edi != result)
    do
        void* eax = *edi
        int32_t ebx_1 = 0
        *(eax + 0x3c) = 1
        int32_t* esi_1 = *(eax + 0x10)
        result = *(eax + 0x14)
        uint32_t ebp_4 = (result - esi_1 + 3) u>> 2
        
        if (esi_1 u> result)
            ebp_4 = 0
        
        if (ebp_4 != 0)
            do
                result = *esi_1
                void* ecx = *result
                result[0xd].b = 1
                
                if (ecx != 0)
                    result = sub_451b40(ecx)
                
                ebx_1 += 1
                esi_1 = &esi_1[1]
            while (ebx_1 != ebp_4)
        
        edi = &edi[1]
    while (edi != result_1)

return result
