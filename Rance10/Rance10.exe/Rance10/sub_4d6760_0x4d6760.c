// 函数: sub_4d6760
// 地址: 0x4d6760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* eax = *(arg1 + 0x1c)
void* var_4 = arg1

if (eax != 0)
    int32_t* esi_1 = *(eax + 0x10)
    int32_t eax_1 = *(eax + 0x14)
    uint32_t ebx_4 = (eax_1 - esi_1 + 3) u>> 2
    int32_t edi_1 = 0
    
    if (esi_1 u> eax_1)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            sub_42ccf0(arg2, *esi_1)
            edi_1 += 1
            esi_1 = &esi_1[1]
        while (edi_1 != ebx_4)
        
        arg1 = var_4

void* result = *(arg1 + 0x20)

if (result != 0)
    result = sub_4da760(result, arg2)
    arg1 = var_4

void* ecx_2 = *(arg1 + 0x24)

if (ecx_2 == 0)
    return result

return sub_4d1ba0(ecx_2, arg2)
