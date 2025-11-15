// 函数: sub_69eeb0
// 地址: 0x69eeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1[0xb]
uint32_t eax_3

do
    eax_3 = arg1[0xb] - 0x106 + ebp
    void* ebx_3 = arg1[0xf] - arg1[0x1d] - arg1[0x1b]
    
    if (arg1[0x1b] u>= eax_3)
        char* ecx = arg1[0xe]
        sub_700660(ecx, &ecx[ebp], ebp - ebx_3)
        int32_t i_3 = arg1[0x13]
        int32_t eax_7 = arg1[0x11]
        arg1[0x1c] -= ebp
        arg1[0x1b] -= ebp
        arg1[0x17] -= ebp
        int32_t i_5 = arg1[0xb]
        int16_t* edx_1 = eax_7 + (i_3 << 1)
        int32_t i
        
        do
            uint32_t eax_8 = zx.d(edx_1[-1])
            edx_1 = &edx_1[-1]
            int16_t eax_9
            
            if (eax_8 u< i_5)
                eax_9 = 0
            else
                eax_9 = eax_8.w - i_5.w
            
            *edx_1 = eax_9
            i = i_3
            i_3 -= 1
        while (i != 1)
        int32_t i_4 = i_5
        int16_t* edx_2 = arg1[0x10] + (i_5 << 1)
        int32_t i_1
        
        do
            uint32_t eax_11 = zx.d(edx_2[-1])
            edx_2 = &edx_2[-1]
            
            if (eax_11 u< i_5)
                eax_3 = 0
            else
                eax_3 = eax_11 - i_5
            
            *edx_2 = eax_3.w
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        ebx_3 += ebp
    
    int32_t* ecx_1 = *arg1
    
    if (ecx_1[1] == 0)
        break
    
    void* eax_12 = sub_69ec00(eax_3, arg1[0x1d] + arg1[0x1b] + arg1[0xe], ecx_1, ebx_3)
    arg1[0x1d] += eax_12
    int32_t edi_1 = arg1[0x5ad]
    eax_3 = arg1[0x1d] + edi_1
    
    if (eax_3 u>= 3)
        void* eax_14 = arg1[0xe]
        int32_t ebx_5 = arg1[0x1b] - edi_1
        char ecx_2 = (arg1[0x16]).b
        uint32_t edx_6 = zx.d(*(eax_14 + ebx_5))
        arg1[0x12] = edx_6
        eax_3 = zx.d(*(eax_14 + ebx_5 + 1))
        arg1[0x12] = (edx_6 << ecx_2 ^ eax_3) & arg1[0x15]
        
        if (edi_1 != 0)
            int32_t i_2
            
            do
                int32_t edx_11 = arg1[0xd] & ebx_5
                int32_t ecx_4 = arg1[0x10]
                int32_t edi_4 =
                    (zx.d(*(arg1[0xe] + ebx_5 + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                int32_t eax_18 = arg1[0x11]
                arg1[0x12] = edi_4
                eax_18.w = *(eax_18 + (edi_4 << 1))
                *(ecx_4 + (edx_11 << 1)) = eax_18.w
                *(arg1[0x11] + (arg1[0x12] << 1)) = ebx_5.w
                ebx_5 += 1
                arg1[0x5ad] -= 1
                i_2 = arg1[0x5ad]
                eax_3 = arg1[0x1d] + i_2
                
                if (eax_3 u< 3)
                    break
            while (i_2 != 0)
    
    if (arg1[0x1d] u>= 0x106)
        break
    
    eax_3 = *arg1
while (*(eax_3 + 4) != 0)

int32_t ecx_6 = arg1[0x5b0]
int32_t ebx_6 = arg1[0xf]

if (ecx_6 u< ebx_6)
    int32_t edi_6 = arg1[0x1d] + arg1[0x1b]
    
    if (ecx_6 u< edi_6)
        void* ebx_7 = ebx_6 - edi_6
        
        if (ebx_7 u> 0x102)
            ebx_7 = 0x102
        
        _memset(arg1[0xe] + edi_6, 0, ebx_7)
        void* eax_23 = ebx_7 + edi_6
        arg1[0x5b0] = eax_23
        return eax_23
    
    eax_3 = edi_6 + 0x102
    
    if (ecx_6 u< eax_3)
        void* ebx_8 = ebx_6 - ecx_6
        void* edi_8 = edi_6 - ecx_6 + 0x102
        
        if (edi_8 u> ebx_8)
            edi_8 = ebx_8
        
        eax_3 = _memset(arg1[0xe] + ecx_6, 0, edi_8)
        arg1[0x5b0] += edi_8

return eax_3
