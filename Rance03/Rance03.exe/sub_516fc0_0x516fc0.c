// 函数: sub_516fc0
// 地址: 0x516fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = *(arg1 + 0xb0)
int32_t esi = 0
int32_t eax_1 = *(arg1 + 0xb4)
uint32_t edi_3 = (eax_1 - edx + 3) u>> 2

if (edx u> eax_1)
    edi_3 = 0

if (edi_3 != 0)
    do
        void* ecx = *(*edx + 4)
        
        if (ecx != 0)
            int32_t eax_3 = 0
            int32_t var_14_1 = 0
            
            if (arg2 s> 0)
                eax_3 = arg2
            
            if (eax_3 s> 0xff)
                eax_3 = 0xff
            
            int32_t eax_4 = 0
            
            if (arg3 s> 0)
                eax_4 = arg3
            
            if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            int32_t var_1c_1 = eax_4
            void* eax_5 = nullptr
            
            if (arg4 s> 0)
                eax_5 = arg4
            
            if (eax_5 s> 0xff)
                eax_5 = 0xff
            
            void* var_18_1 = eax_5
            *(ecx + 0xac) = eax_3.o
        
        esi += 1
        edx = &edx[1]
    while (esi != edi_3)

void* edi_4 = arg1
int32_t edx_1 = 0
int32_t eax_6 = *(edi_4 + 0xc0)
int32_t* ecx_1 = *(edi_4 + 0xbc)
uint32_t esi_4 = (eax_6 - ecx_1 + 3) u>> 2

if (ecx_1 u> eax_6)
    esi_4 = 0

if (esi_4 != 0)
    do
        void* edi_5 = *(*ecx_1 + 4)
        
        if (edi_5 != 0)
            int32_t eax_8 = 0
            int32_t var_14_2 = 0
            
            if (arg2 s> 0)
                eax_8 = arg2
            
            if (eax_8 s> 0xff)
                eax_8 = 0xff
            
            int32_t eax_9 = 0
            
            if (arg3 s> 0)
                eax_9 = arg3
            
            if (eax_9 s> 0xff)
                eax_9 = 0xff
            
            int32_t var_1c_2 = eax_9
            void* eax_10 = nullptr
            
            if (arg4 s> 0)
                eax_10 = arg4
            
            if (eax_10 s> 0xff)
                eax_10 = 0xff
            
            void* var_18_2 = eax_10
            *(edi_5 + 0xac) = eax_8.o
        
        edx_1 += 1
        ecx_1 = &ecx_1[1]
    while (edx_1 != esi_4)
    
    edi_4 = arg1

void* const result = *(edi_4 + 0xd8)
int32_t edx_2 = 0
int32_t* ecx_2 = *(edi_4 + 0xd4)
uint32_t esi_8 = (result - ecx_2 + 3) u>> 2

if (ecx_2 u> result)
    esi_8 = 0

if (esi_8 != 0)
    do
        result = *ecx_2
        void* edi_6 = *(result + 4)
        
        if (edi_6 != 0)
            int32_t eax_11 = 0
            int32_t var_14_3 = 0
            
            if (arg2 s> 0)
                eax_11 = arg2
            
            if (eax_11 s> 0xff)
                eax_11 = 0xff
            
            int32_t eax_12 = 0
            
            if (arg3 s> 0)
                eax_12 = arg3
            
            if (eax_12 s> 0xff)
                eax_12 = 0xff
            
            int32_t var_1c_3 = eax_12
            result = nullptr
            
            if (arg4 s> 0)
                result = arg4
            
            if (result s> 0xff)
                result = 0xff
            
            void* const result_1 = result
            *(edi_6 + 0xac) = eax_11.o
        
        edx_2 += 1
        ecx_2 = &ecx_2[1]
    while (edx_2 != esi_8)

return result
