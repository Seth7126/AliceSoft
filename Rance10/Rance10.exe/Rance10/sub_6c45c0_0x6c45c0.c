// 函数: sub_6c45c0
// 地址: 0x6c45c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = 0

if (arg6 != 0)
    ecx = arg5

void* esi = nullptr

if (arg6 != 0)
    esi = arg7

void* eax_1 = "(.x"[*(arg2 + (ecx << 2))]
int32_t eax_3 = "(.x"[*(arg2 + (esi << 2))]
int32_t result_1 = *(arg4 + (arg6 << 2))
int32_t edi_1 = *(arg4 + (esi << 2))
int32_t ecx_1 = *(arg4 + (ecx << 2))
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(result_1)
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(ecx_1)
int32_t esi_2 = ((edx & 3) + eax_6) s>> 2
int32_t edx_5 = esi_2 - ((eax_8 + (edx_2 & 3)) s>> 2)
int32_t eax_12
int32_t edx_6
edx_6:eax_12 = sx.q(ecx_1)
int32_t eax_15 = ((eax_12 - edx_6) s>> 1) + edx_5
int32_t eax_17
int32_t edx_7
edx_7:eax_17 = sx.q(edi_1)
int32_t eax_19
int32_t edx_9
edx_9:eax_19 = sx.q(result_1)
int32_t eax_22
int32_t edx_10
edx_10:eax_22 = sx.q(edi_1)
int32_t eax_24 = (eax_22 - edx_10) s>> 1
int32_t ebx_3 = ((eax_19 - edx_9) s>> 1) - (((edx_7 & 3) + eax_17) s>> 2) + esi_2
int32_t edx_11 = 0
int32_t esi_3 = eax_24 + ebx_3
arg4 = esi_3

if (edx_5 s> 0)
    edx_11 = edx_5
    __builtin_memset(arg3, 0, edx_5 << 2)

int32_t edi_4 = eax_15
int32_t ecx_5 = 0

if (edx_11 s< edi_4)
    if (edi_4 - edx_11 s>= 4)
        void* eax_29 = arg3 + 8 + (edx_11 << 2)
        void* ecx_7 = eax_1 + 8
        int32_t i_2 = ((edi_4 - edx_11 - 4) u>> 2) + 1
        int32_t edi_3 = i_2 << 2
        edx_11 += edi_3
        edi_4 = eax_15
        int32_t i
        
        do
            float xmm0_1 = *(ecx_7 - 8)
            ecx_7 += 0x10
            float xmm0_2 = xmm0_1 f* *(eax_29 - 8)
            eax_29 += 0x10
            *(eax_29 - 0x18) = xmm0_2
            *(eax_29 - 0x14) = *(ecx_7 - 0x14) f* *(eax_29 - 0x14)
            *(eax_29 - 0x10) = *(ecx_7 - 0x10) f* *(eax_29 - 0x10)
            *(eax_29 - 0xc) = *(ecx_7 - 0xc) f* *(eax_29 - 0xc)
            i = i_2
            i_2 -= 1
        while (i != 1)
        esi_3 = arg4
        ecx_5 = edi_3
    
    if (edx_11 s< edi_4)
        void* eax_31 = eax_1 + (ecx_5 << 2)
        
        do
            eax_31 += 4
            *(arg3 + (edx_11 << 2)) = *(arg3 + (edx_11 << 2)) f* *(eax_31 - 4)
            edx_11 += 1
        while (edx_11 s< edi_4)

int32_t edi_6 = eax_24 - 1

if (ebx_3 s< esi_3)
    if (esi_3 - ebx_3 s>= 4)
        void* ecx_9 = arg3 + 8 + (ebx_3 << 2)
        int32_t i_3 = ((esi_3 - ebx_3 - 4) u>> 2) + 1
        void* edx_14 = eax_3 - 8 + (edi_6 << 2)
        int32_t eax_34 = i_3 << 2
        ebx_3 += eax_34
        edi_6 -= eax_34
        int32_t i_1
        
        do
            float xmm0_11 = *(edx_14 + 8)
            edx_14 -= 0x10
            float xmm0_12 = xmm0_11 f* *(ecx_9 - 8)
            ecx_9 += 0x10
            *(ecx_9 - 0x18) = xmm0_12
            *(ecx_9 - 0x14) = *(edx_14 + 0x14) f* *(ecx_9 - 0x14)
            *(ecx_9 - 0x10) = *(ecx_9 - 0x10) f* *(edx_14 + 0x10)
            *(ecx_9 - 0xc) = *(edx_14 + 0xc) f* *(ecx_9 - 0xc)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        esi_3 = arg4
    
    if (ebx_3 s< esi_3)
        void* eax_36 = eax_3 + (edi_6 << 2)
        
        do
            eax_36 -= 4
            *(arg3 + (ebx_3 << 2)) = *(arg3 + (ebx_3 << 2)) f* *(eax_36 + 4)
            ebx_3 += 1
        while (ebx_3 s< esi_3)

int32_t result = result_1

if (ebx_3 s< result)
    int32_t eax_37 = result - ebx_3
    result = 0
    __builtin_memset((ebx_3 << 2) + arg3, 0, eax_37 << 2)

return result
