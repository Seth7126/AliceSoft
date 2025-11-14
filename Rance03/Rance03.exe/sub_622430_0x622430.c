// 函数: sub_622430
// 地址: 0x622430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_5 = arg1[0xb]
void* eax_3

do
    eax_3 = arg1[0xb] - 0x106 + i_5
    void* edi_3 = arg1[0xf] - arg1[0x1d] - arg1[0x1b]
    
    if (arg1[0x1b] u>= eax_3)
        int32_t* ecx = arg1[0xe]
        sub_69d850(ecx, ecx + i_5, i_5)
        int32_t i_3 = arg1[0x13]
        int32_t eax_5 = arg1[0x11]
        arg1[0x1c] -= i_5
        arg1[0x1b] -= i_5
        arg1[0x17] -= i_5
        int16_t* ecx_1 = eax_5 + (i_3 << 1)
        int32_t i
        
        do
            uint32_t eax_6 = zx.d(ecx_1[-1])
            ecx_1 = &ecx_1[-1]
            int16_t eax_7
            
            if (eax_6 u< i_5)
                eax_7 = 0
            else
                eax_7 = eax_6.w - i_5.w
            
            *ecx_1 = eax_7
            i = i_3
            i_3 -= 1
        while (i != 1)
        void* i_4 = i_5
        int16_t* ecx_2 = arg1[0x10] + (i_5 << 1)
        void* i_1
        
        do
            uint32_t eax_9 = zx.d(ecx_2[-1])
            ecx_2 = &ecx_2[-1]
            
            if (eax_9 u< i_5)
                eax_3 = nullptr
            else
                eax_3 = eax_9 - i_5
            
            *ecx_2 = eax_3.w
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        edi_3 += i_5
    
    int32_t* ecx_3 = *arg1
    
    if (ecx_3[1] == 0)
        break
    
    void* eax_10 = sub_622180(eax_3, arg1[0x1d] + arg1[0x1b] + arg1[0xe], ecx_3, edi_3)
    arg1[0x1d] += eax_10
    int32_t edi_4 = arg1[0x5ad]
    eax_3 = arg1[0x1d] + edi_4
    
    if (eax_3 u>= 3)
        void* eax_12 = arg1[0xe]
        int32_t ebp_2 = arg1[0x1b] - edi_4
        char ecx_4 = (arg1[0x16]).b
        uint32_t edx_4 = zx.d(*(eax_12 + ebp_2))
        arg1[0x12] = edx_4
        eax_3 = zx.d(*(eax_12 + ebp_2 + 1))
        arg1[0x12] = (edx_4 << ecx_4 ^ eax_3) & arg1[0x15]
        
        if (edi_4 != 0)
            int32_t i_2
            
            do
                int32_t edx_9 = arg1[0xd] & ebp_2
                int32_t ecx_6 = arg1[0x10]
                int32_t edi_7 =
                    (zx.d(*(arg1[0xe] + ebp_2 + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                int32_t eax_16 = arg1[0x11]
                arg1[0x12] = edi_7
                eax_16.w = *(eax_16 + (edi_7 << 1))
                *(ecx_6 + (edx_9 << 1)) = eax_16.w
                *(arg1[0x11] + (arg1[0x12] << 1)) = ebp_2.w
                ebp_2 += 1
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

int32_t ecx_8 = arg1[0x5b0]
int32_t ebx = arg1[0xf]

if (ecx_8 u< ebx)
    void* edi_9 = arg1[0x1d] + arg1[0x1b]
    
    if (ecx_8 u< edi_9)
        void* ebx_1 = ebx - edi_9
        
        if (ebx_1 u> 0x102)
            ebx_1 = 0x102
        
        _memset(arg1[0xe] + edi_9, 0, ebx_1)
        void* eax_21 = ebx_1 + edi_9
        arg1[0x5b0] = eax_21
        return eax_21
    
    eax_3 = edi_9 + 0x102
    
    if (ecx_8 u< eax_3)
        void* ebx_2 = ebx - ecx_8
        void* edi_11 = edi_9 - ecx_8 + 0x102
        
        if (edi_11 u> ebx_2)
            edi_11 = ebx_2
        
        eax_3 = _memset(arg1[0xe] + ecx_8, 0, edi_11)
        arg1[0x5b0] += edi_11

return eax_3
