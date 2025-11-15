// 函数: sub_4dafb0
// 地址: 0x4dafb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* esi = *(arg1 + 0x38)
void* var_4 = arg1
uint32_t ebp_3 = (*(arg1 + 0x3c) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(arg1 + 0x3c))
    ebp_3 = 0

int32_t* edx = arg2

if (ebp_3 != 0)
    do
        void* ebx_1 = *esi
        void* ecx = *(ebx_1 + 0xc)
        
        if (ecx != 0)
            char eax_1 = sub_4090e0(ecx + 0xc, edx)
            edx = arg2
            
            if (eax_1 == 0)
                *(ebx_1 + 0x20) = arg3
        
        edi += 1
        esi = &esi[1]
    while (edi != ebp_3)
    
    arg1 = var_4

int32_t* esi_1 = *(arg1 + 0x2c)
int32_t edi_1 = 0
uint32_t ebp_7 = (*(arg1 + 0x30) - esi_1 + 3) u>> 2

if (esi_1 u> *(arg1 + 0x30))
    ebp_7 = 0

if (ebp_7 != 0)
    do
        void* ebx_2 = *esi_1
        void* ecx_2 = *(ebx_2 + 0xc)
        
        if (ecx_2 != 0 && sub_4090e0(ecx_2 + 0xc, edx) == 0)
            *(ebx_2 + 0x14) = arg3
        
        edx = arg2
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebp_7)
    
    arg1 = var_4

int32_t result = *(arg1 + 0x24)
int32_t edi_2 = 0
void** esi_2 = *(arg1 + 0x20)
uint32_t ebp_11 = (result - esi_2 + 3) u>> 2

if (esi_2 u> result)
    ebp_11 = 0

if (ebp_11 != 0)
    do
        void* ebx_3 = *esi_2
        void* ecx_4 = *(ebx_3 + 0x10)
        
        if (ecx_4 != 0)
            result = sub_4090e0(ecx_4 + 0xc, arg2)
            
            if (result.b == 0)
                result.b = arg3
                *(ebx_3 + 0x30) = result.b
        
        edi_2 += 1
        esi_2 = &esi_2[1]
    while (edi_2 != ebp_11)

return result
