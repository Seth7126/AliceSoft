// 函数: sub_651ee0
// 地址: 0x651ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[0x33]

if (ecx == 0)
    if (arg1[0x13] s> 4)
        *(*arg1 + 0x14) = 0x1b
        *(*arg1 + 0x18) = arg1[0x13]
        *(*arg1 + 0x1c) = 4
        (**arg1)(arg1)
    
    int32_t eax_15 = arg1[0x13]
    int32_t i = 0
    arg1[0x45] = eax_15
    
    if (eax_15 s> 0)
        int32_t edx_2 = 0
        void* edi_1 = &arg1[0x46]
        
        do
            edi_1 += 4
            i += 1
            *(edi_1 - 4) = arg1[0x15] + edx_2
            edx_2 += 0x58
        while (i s< arg1[0x13])
else
    int32_t i_1 = 0
    int32_t* ebx_1 = ecx + *(arg1[0x5e] + 0x1c) * 0x24
    arg1[0x45] = *ebx_1
    
    if (*ebx_1 s> 0)
        void* ecx_1 = &arg1[0x46]
        void* edx_1 = &ebx_1[1]
        
        do
            int32_t eax_5 = *edx_1 * 0x58
            edx_1 += 4
            i_1 += 1
            ecx_1 += 4
            *(ecx_1 - 4) = eax_5 + arg1[0x15]
        while (i_1 s< *ebx_1)
    
    if (arg1[0x3f].b != 0)
        arg1[0x57] = ebx_1[5]
        arg1[0x58] = ebx_1[6]
        arg1[0x59] = ebx_1[7]
        int32_t result = ebx_1[8]
        arg1[0x5a] = result
        return result

int32_t eax_18 = arg1[0x5b]
arg1[0x57] = 0
arg1[0x59] = 0
arg1[0x5a] = 0
arg1[0x58] = eax_18 * eax_18 - 1
return eax_18 * eax_18 - 1
