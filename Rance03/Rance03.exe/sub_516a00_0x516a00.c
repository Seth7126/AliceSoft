// 函数: sub_516a00
// 地址: 0x516a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg4
float xmm0 = arg3
float var_10 = xmm0
float var_c = arg2
void* var_8 = arg1

if (*(ebx + 0xc) s<= 0 || *(ebx + 0x10) s<= 0)
    return 

void* edx_1 = arg1 + 0xa4
*(edx_1 + 4) = *(arg1 + 0xa4)
int32_t eax_2 = *(arg1 + 0xb4)
int32_t* esi_1 = *(arg1 + 0xb0)
arg4 = edx_1
uint32_t ebp_4 = (eax_2 - esi_1 + 3) u>> 2
int32_t edi_1 = 0

if (esi_1 u> eax_2)
    ebp_4 = 0

if (ebp_4 != 0)
    do
        int32_t ecx = *esi_1
        
        if (ecx != 0)
            void* var_24_1 = edx_1
            void* var_28_1 = ebx
            sub_516760(ecx, arg2, xmm0)
            xmm0 = var_10
            arg2 = var_c
            edx_1 = arg4
        
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebp_4)
    
    arg1 = var_8

int32_t eax_3 = *(arg1 + 0xc0)
int32_t edi_2 = 0
int32_t* esi_2 = *(arg1 + 0xbc)
uint32_t ebp_8 = (eax_3 - esi_2 + 3) u>> 2

if (esi_2 u> eax_3)
    ebp_8 = 0

if (ebp_8 != 0)
    do
        int32_t ecx_1 = *esi_2
        
        if (ecx_1 != 0)
            void* var_24_2 = edx_1
            void* var_28_2 = ebx
            sub_516760(ecx_1, arg2, xmm0)
        
        xmm0 = var_10
        edi_2 += 1
        arg2 = var_c
        esi_2 = &esi_2[1]
        edx_1 = arg4
    while (edi_2 != ebp_8)
    
    arg1 = var_8

int32_t eax = *(arg1 + 0xd8)
int32_t edi_3 = 0
int32_t* esi_3 = *(arg1 + 0xd4)
uint32_t ebp_12 = (eax - esi_3 + 3) u>> 2

if (esi_3 u> eax)
    ebp_12 = 0

if (ebp_12 == 0)
    return 

do
    int32_t ecx_2 = *esi_3
    
    if (ecx_2 != 0)
        void* var_24_3 = arg4
        void* var_28_3 = ebx
        sub_516760(ecx_2, var_c, var_10)
    
    edi_3 += 1
    esi_3 = &esi_3[1]
while (edi_3 != ebp_12)
