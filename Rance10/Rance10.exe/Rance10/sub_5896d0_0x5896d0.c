// 函数: sub_5896d0
// 地址: 0x5896d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (*(arg1 + 0x4c) != 0)
    result.b = *(arg1 + 0x50)
    
    if (result.b == 0)
        result = *(arg2 + 0x220)
        
        if (result == 0)
            result.b = 0
            return result
        
        void* ebx_1 = *(arg1 + 0x4c)
        void* edx_2 = arg2 + 4
        int32_t* ecx = ebx_1 + 8
        void* esi_1 = edx_2 + 0x10
        
        if (*(edx_2 + 0x14) u>= 0x10)
            edx_2 = *edx_2
        
        if (ecx[5] u>= 0x10)
            ecx = *ecx
        
        int32_t esi_2 = *esi_1
        int32_t eax = esi_2
        int32_t edi_2 = ecx[4]
        
        if (edi_2 u< esi_2)
            eax = edi_2
        
        if (sub_406ac0(eax, edx_2, ecx, eax) != 0 || edi_2 u< esi_2 || edi_2 u> esi_2
                || *(ebx_1 + 0x20) != *result)
            result.b = 0
            return result

result.b = 1
return result
