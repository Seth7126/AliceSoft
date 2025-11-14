// 函数: sub_6336e0
// 地址: 0x6336e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax_1 = arg2
void* edx_1 = *(arg1 + 4) + eax_1
char* esi = arg3
void* result_1 = nullptr
void* ebx = &eax_1[1]
uint32_t ebp = zx.d(*esi)
void* esi_1 = &esi[1]
char ecx_1 = *eax_1 + ebp.b
arg2 = ebp
*eax_1 = ecx_1
void* result = edx_1 - ebx

if (ebx u> edx_1)
    result = nullptr

void* result_2 = result

if (result != 0)
    do
        uint32_t eax_3 = zx.d(*esi_1)
        uint32_t ecx_2 = zx.d(ecx_1)
        uint32_t edi_2 = eax_3 - ebp
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(edi_2)
        uint32_t esi_4 = ecx_2 - ebp
        int32_t ebp_3 = (eax_5 ^ edx_2) - edx_2
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = sx.q(esi_4)
        int32_t eax_9 = (eax_7 ^ edx_3) - edx_3
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = sx.q(esi_4 + edi_2)
        
        if (eax_9 s< ebp_3)
            ebp_3 = eax_9
            ecx_2 = eax_3
        
        esi_1 += 1
        ebp = eax_3
        
        if ((eax_11 ^ edx_4) - edx_4 s< ebp_3)
            ecx_2 = arg2
        
        ecx_1 = ecx_2.b + *ebx
        arg2 = ebp
        result = result_1 + 1
        *ebx = ecx_1
        ebx += 1
        result_1 = result
    while (result u< result_2)

return result
