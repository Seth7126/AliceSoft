// 函数: sub_67ac60
// 地址: 0x67ac60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 1
int32_t ecx = arg4
void* var_4 = arg2

if (ecx s<= 1)
    return 1

int32_t eax = 2
void* ebp = arg2 + 0x2c
int32_t var_c = 2

do
    int32_t edi_1 = 0
    void* esi_1 = nullptr
    
    if (eax s> ecx)
        if (result s> 0)
            void* eax_2 = arg2 + 0x18
            int32_t edx_1 = result
            int32_t i
            
            do
                int32_t ecx_2 = *eax_2
                
                if (ecx_2 s> edi_1)
                    esi_1 = eax_2 - 0x18
                    edi_1 = ecx_2
                
                eax_2 += 0x20
                i = edx_1
                edx_1 -= 1
            while (i != 1)
    else if (result s> 0)
        int32_t* eax_1 = arg2 + 0x1c
        int32_t edx = result
        int32_t i_1
        
        do
            int32_t ecx_1 = *eax_1
            
            if (ecx_1 s> edi_1 && eax_1[-1] s> 0)
                esi_1 = &eax_1[-7]
                edi_1 = ecx_1
            
            eax_1 = &eax_1[8]
            i_1 = edx
            edx -= 1
        while (i_1 != 1)
    
    if (esi_1 == 0)
        break
    
    *(ebp - 8) = *(esi_1 + 4)
    *ebp = *(esi_1 + 0xc)
    *(ebp + 8) = *(esi_1 + 0x14)
    *(ebp - 0xc) = *esi_1
    *(ebp - 4) = *(esi_1 + 8)
    *(ebp + 4) = *(esi_1 + 0x10)
    int32_t ecx_5 = (*(esi_1 + 4) - *esi_1) << 4
    int32_t eax_12 = (*(esi_1 + 0xc) - *(esi_1 + 8)) * 0xc
    int32_t edx_2
    edx_2.b = ecx_5 s<= eax_12
    
    if (ecx_5 s<= eax_12)
        ecx_5 = eax_12
    
    if ((*(esi_1 + 0x14) - *(esi_1 + 0x10)) << 3 s> ecx_5)
        edx_2 = 2
    
    if (edx_2 == 0)
        int32_t eax_30
        int32_t edx_8
        edx_8:eax_30 = sx.q(*(esi_1 + 4) + *esi_1)
        int32_t eax_32 = (eax_30 - edx_8) s>> 1
        *(esi_1 + 4) = eax_32
        *(ebp - 0xc) = eax_32 + 1
    else if (edx_2 == 1)
        int32_t eax_24
        int32_t edx_7
        edx_7:eax_24 = sx.q(*(esi_1 + 0xc) + *(esi_1 + 8))
        int32_t eax_26 = (eax_24 - edx_7) s>> 1
        *(esi_1 + 0xc) = eax_26
        *(ebp - 4) = eax_26 + 1
    else if (edx_2 == 2)
        int32_t eax_18
        int32_t edx_6
        edx_6:eax_18 = sx.q(*(esi_1 + 0x14) + *(esi_1 + 0x10))
        int32_t eax_20 = (eax_18 - edx_6) s>> 1
        *(esi_1 + 0x14) = eax_20
        *(ebp + 4) = eax_20 + 1
    
    sub_67a820(arg3, esi_1)
    sub_67a820(arg3, ebp - 0xc)
    result += 1
    ecx = arg4
    eax = var_c + 2
    arg2 = var_4
    ebp += 0x20
    var_c = eax
while (result s< ecx)

return result
