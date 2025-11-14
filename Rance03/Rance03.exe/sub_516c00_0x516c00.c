// 函数: sub_516c00
// 地址: 0x516c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
int32_t* eax = *(arg1 + 0xb4)
int32_t* edx = *(arg1 + 0xb0)
uint32_t ebx_3 = (eax - edx + 3) u>> 2

if (edx u> eax)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* i = *edx
        
        if (arg2 == 0)
            eax.b = 0
        else
            int32_t ecx = *(arg1 + 0xa8)
            eax = *(arg1 + 0xa4)
            
            if (eax == ecx)
                eax.b = 1
            else
                while (*eax != i)
                    eax = &eax[1]
                    
                    if (eax == ecx)
                        break
                
                if (eax != ecx)
                    eax.b = 0
                else
                    eax.b = 1
        
        void* ecx_1 = *(i + 4)
        
        if (ecx_1 != 0)
            *(ecx_1 + 0x2c) = eax.b
        
        edi += 1
        edx = &edx[1]
    while (edi != ebx_3)

int32_t* eax_1 = *(arg1 + 0xc0)
int32_t* ecx_2 = *(arg1 + 0xbc)
int32_t edi_1 = 0
uint32_t ebx_7 = (eax_1 - ecx_2 + 3) u>> 2

if (ecx_2 u> eax_1)
    ebx_7 = 0

if (ebx_7 != 0)
    do
        void* i_1 = *ecx_2
        
        if (arg2 == 0)
            eax_1.b = 0
        else
            int32_t edx_1 = *(arg1 + 0xa8)
            eax_1 = *(arg1 + 0xa4)
            
            if (eax_1 == edx_1)
                eax_1.b = 1
            else
                while (*eax_1 != i_1)
                    eax_1 = &eax_1[1]
                    
                    if (eax_1 == edx_1)
                        break
                
                if (eax_1 != edx_1)
                    eax_1.b = 0
                else
                    eax_1.b = 1
        
        void* edx_2 = *(i_1 + 4)
        
        if (edx_2 != 0)
            *(edx_2 + 0x2c) = eax_1.b
        
        edi_1 += 1
        ecx_2 = &ecx_2[1]
    while (edi_1 != ebx_7)

int32_t* result = *(arg1 + 0xd8)
int32_t* ecx_3 = *(arg1 + 0xd4)
int32_t edi_2 = 0
uint32_t ebx_12 = (result - ecx_3 + 3) u>> 2

if (ecx_3 u> result)
    ebx_12 = 0

if (ebx_12 != 0)
    do
        void* i_2 = *ecx_3
        
        if (arg2 == 0)
            result.b = 0
        else
            int32_t edx_3 = *(arg1 + 0xa8)
            result = *(arg1 + 0xa4)
            
            if (result == edx_3)
                result.b = 1
            else
                while (*result != i_2)
                    result = &result[1]
                    
                    if (result == edx_3)
                        break
                
                if (result != edx_3)
                    result.b = 0
                else
                    result.b = 1
        
        void* edx_4 = *(i_2 + 4)
        
        if (edx_4 != 0)
            *(edx_4 + 0x2c) = result.b
        
        edi_2 += 1
        ecx_3 = &ecx_3[1]
    while (edi_2 != ebx_12)

return result
