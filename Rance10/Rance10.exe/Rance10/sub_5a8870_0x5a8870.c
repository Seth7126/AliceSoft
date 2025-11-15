// 函数: sub_5a8870
// 地址: 0x5a8870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x28)
int32_t ecx = *(arg1 + 0x2c)
int32_t* var_18 = eax
int32_t var_14 = ecx

while (eax != ecx)
    int32_t* edx_1 = *eax
    int32_t* esi_1 = *edx_1
    int32_t edi_1 = edx_1[1]
    
    if (esi_1 != edi_1)
        do
            if (sub_5aca10(*esi_1, arg2) == 0)
                return 0
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_1)
        
        eax = var_18
        ecx = var_14
    
    int32_t** esi_2 = edx_1[7]
    int32_t edi_2 = edx_1[8]
    
    if (esi_2 != edi_2)
        do
            if (sub_57b130(*esi_2, arg2) == 0)
                return 0
            
            esi_2 = &esi_2[1]
        while (esi_2 != edi_2)
        
        eax = var_18
        ecx = var_14
    
    eax = &eax[1]
    var_18 = eax

*(arg1 + 4) = 1
void* result
result.b = 1
return result
