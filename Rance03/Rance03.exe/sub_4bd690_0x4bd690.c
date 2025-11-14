// 函数: sub_4bd690
// 地址: 0x4bd690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 4)

if (eax == *(arg1 + 8))
    return eax

int32_t edi = *(arg1 + 8)
int32_t* esi = eax
int32_t edx = *esi

if (esi != edi)
    eax = arg2
    
    do
        int32_t ecx = esi[3]
        
        if (eax s< esi[2])
            break
        
        if (eax == ecx)
            _mm_cvtepi32_ps(zx.o(esi[1]))
            return eax
        
        if (eax s< ecx)
            sub_4bebf0(esi, eax)
            int32_t ecx_2 = *esi
            int32_t eax_2 = esi[1] - ecx_2
            _mm_cvtepi32_ps(zx.o(eax_2))
            _mm_cvtepi32_ps(zx.o(ecx_2))
            return eax_2
        
        edx = esi[1]
        esi = &esi[0x17]
    while (esi != edi)

_mm_cvtepi32_ps(zx.o(edx))
return eax
