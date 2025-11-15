// 函数: sub_65a670
// 地址: 0x65a670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x4c]

if (eax == 1)
    void* edi = arg1[0x4d]
    int32_t edx = 0
    arg1[0x51] = *(edi + 0x1c)
    arg1[0x52] = *(edi + 0x20)
    *(edi + 0x44) = *(edi + 0x24)
    int32_t eax_4 = *(edi + 0x20)
    int32_t temp2_1 = *(edi + 0xc)
    uint32_t edx_1 = modu.dp.d(edx:eax_4, temp2_1)
    *(edi + 0x38) = 1
    *(edi + 0x3c) = 1
    *(edi + 0x40) = 1
    
    if (edx_1 == 0)
        edx_1 = *(edi + 0xc)
    
    *(edi + 0x48) = 1
    *(edi + 0x4c) = edx_1
    arg1[0x53] = 1
    arg1[0x54] = 0
    return divu.dp.d(edx:eax_4, temp2_1)

if (eax s<= 0 || eax s> 4)
    *(*arg1 + 0x14) = 0x1b
    *(*arg1 + 0x18) = arg1[0x4c]
    *(*arg1 + 0x1c) = 4
    (**arg1)(arg1)

int32_t edi_1 = arg1[0x62]
int32_t ecx_2 = arg1[0x46] * edi_1
int32_t eax_12 = arg1[7] - 1
arg1[0x53] = 0
int32_t i_1 = 0
int32_t ecx_3 = arg1[0x47]
arg1[0x51] = divs.dp.d(sx.q(eax_12 + ecx_2), ecx_2)
int32_t ecx_4 = ecx_3 * edi_1
int32_t i = divs.dp.d(sx.q(arg1[8] - 1 + ecx_4), ecx_4)
bool cond:1 = arg1[0x4c] s<= 0
arg1[0x52] = i

if (not(cond:1))
    void* ecx_5 = &arg1[0x4d]
    void* var_4_1 = ecx_5
    
    do
        void* ebx_1 = *ecx_5
        uint32_t ecx_6 = *(ebx_1 + 8)
        int32_t eax_21 = *(ebx_1 + 0x24) * ecx_6
        uint32_t edi_2 = *(ebx_1 + 0xc)
        int32_t j = edi_2 * ecx_6
        *(ebx_1 + 0x38) = ecx_6
        *(ebx_1 + 0x3c) = edi_2
        *(ebx_1 + 0x44) = eax_21
        uint32_t edx_6 = modu.dp.d(0:(*(ebx_1 + 0x1c)), ecx_6)
        int32_t eax_23 = *(ebx_1 + 0x20)
        *(ebx_1 + 0x40) = j
        
        if (edx_6 == 0)
            edx_6 = ecx_6
        
        *(ebx_1 + 0x48) = edx_6
        uint32_t edx_8 = modu.dp.d(0:eax_23, edi_2)
        
        if (edx_8 == 0)
            edx_8 = edi_2
        
        *(ebx_1 + 0x4c) = edx_8
        
        if (arg1[0x53] + j s> 0xa)
            *(*arg1 + 0x14) = 0xe
            (**arg1)(arg1)
        
        while (j s> 0)
            j -= 1
            arg1[arg1[0x53] + 0x54] = i_1
            arg1[0x53] += 1
        
        i = i_1 + 1
        ecx_5 = var_4_1 + 4
        i_1 = i
        var_4_1 = ecx_5
    while (i s< arg1[0x4c])

return i
