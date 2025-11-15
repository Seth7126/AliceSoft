// 函数: sub_4d89f0
// 地址: 0x4d89f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg1 + 0x14)
int32_t* edx = *(arg1 + 0x10)
int32_t ecx = 0
uint32_t edi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    edi_3 = 0

if (edi_3 != 0)
    int32_t ebx
    ebx.b = arg2
    
    do
        result = *edx
        void* esi_1 = *result
        
        if (esi_1 != 0)
            result[5].b = ebx.b
            *(esi_1 + 0x18) = ebx.b
        
        ecx += 1
        edx = &edx[1]
    while (ecx != edi_3)

return result
