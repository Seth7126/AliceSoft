// 函数: sub_651ff0
// 地址: 0x651ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x45]

if (eax != 1)
    if (eax s<= 0 || eax s> 4)
        *(*arg1 + 0x14) = 0x1b
        *(*arg1 + 0x18) = arg1[0x45]
        *(*arg1 + 0x1c) = 4
        (**arg1)(arg1)
    
    int32_t edi_1 = arg1[0x5b]
    int32_t ecx_2 = arg1[0x40] * edi_1
    int32_t eax_12 = arg1[0x10] - 1
    arg1[0x4c] = 0
    int32_t i_1 = 0
    int32_t ecx_3 = arg1[0x41]
    arg1[0x4a] = divs.dp.d(sx.q(eax_12 + ecx_2), ecx_2)
    int32_t ecx_4 = ecx_3 * edi_1
    bool cond:1_1 = arg1[0x45] s<= 0
    arg1[0x4b] = divs.dp.d(sx.q(arg1[0x11] - 1 + ecx_4), ecx_4)
    
    if (not(cond:1_1))
        void* ecx_5 = &arg1[0x46]
        void* var_4_1 = ecx_5
        int32_t i
        
        do
            void* ebx_1 = *ecx_5
            uint32_t ecx_6 = *(ebx_1 + 8)
            int32_t eax_22 = *(ebx_1 + 0x24) * ecx_6
            uint32_t edi_2 = *(ebx_1 + 0xc)
            int32_t j = edi_2 * ecx_6
            *(ebx_1 + 0x38) = ecx_6
            *(ebx_1 + 0x3c) = edi_2
            *(ebx_1 + 0x44) = eax_22
            uint32_t edx_6 = modu.dp.d(0:(*(ebx_1 + 0x1c)), ecx_6)
            int32_t eax_24 = *(ebx_1 + 0x20)
            *(ebx_1 + 0x40) = j
            
            if (edx_6 == 0)
                edx_6 = ecx_6
            
            *(ebx_1 + 0x48) = edx_6
            uint32_t edx_8 = modu.dp.d(0:eax_24, edi_2)
            
            if (edx_8 == 0)
                edx_8 = edi_2
            
            *(ebx_1 + 0x4c) = edx_8
            
            if (arg1[0x4c] + j s> 0xa)
                *(*arg1 + 0x14) = 0xe
                (**arg1)(arg1)
            
            while (j s> 0)
                j -= 1
                arg1[arg1[0x4c] + 0x4d] = i_1
                arg1[0x4c] += 1
            
            i = i_1 + 1
            ecx_5 = var_4_1 + 4
            i_1 = i
            var_4_1 = ecx_5
        while (i s< arg1[0x45])
else
    void* edi = arg1[0x46]
    arg1[0x4a] = *(edi + 0x1c)
    arg1[0x4b] = *(edi + 0x20)
    *(edi + 0x44) = *(edi + 0x24)
    uint32_t edx_1 = modu.dp.d(0:(*(edi + 0x20)), *(edi + 0xc))
    *(edi + 0x38) = 1
    *(edi + 0x3c) = 1
    *(edi + 0x40) = 1
    
    if (edx_1 == 0)
        edx_1 = *(edi + 0xc)
    
    *(edi + 0x48) = 1
    *(edi + 0x4c) = edx_1
    arg1[0x4c] = 1
    arg1[0x4d] = 0

int32_t result = arg1[0x39]

if (result s> 0)
    int32_t result_1 = arg1[0x4a] * result
    result = 0xffff
    
    if (result_1 s< 0xffff)
        result = result_1
    
    arg1[0x38] = result

return result
