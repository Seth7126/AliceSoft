// 函数: sub_6a6f50
// 地址: 0x6a6f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x190)

if (eax != 0)
    int32_t ecx = *(arg1 + 0x278)
    
    if (ecx == 0)
        _free(eax)
    else
        ecx(arg1, eax)

bool cond:0 = *(arg1 + 0x194) == 0
*(arg1 + 0x190) = 0

if (not(cond:0))
    int32_t edi_1 = 0
    int32_t ebx_1 = 1 << (8 - (*(arg1 + 0x188)).b)
    
    if (ebx_1 s> 0)
        do
            int32_t eax_2 = *(*(arg1 + 0x194) + (edi_1 << 2))
            
            if (eax_2 != 0)
                int32_t ecx_2 = *(arg1 + 0x278)
                
                if (ecx_2 == 0)
                    _free(eax_2)
                else
                    ecx_2(arg1, eax_2)
            
            edi_1 += 1
        while (edi_1 s< ebx_1)
    
    int32_t eax_3 = *(arg1 + 0x194)
    
    if (eax_3 != 0)
        int32_t ecx_3 = *(arg1 + 0x278)
        
        if (ecx_3 == 0)
            _free(eax_3)
        else
            ecx_3(arg1, eax_3)
    
    *(arg1 + 0x194) = 0

int32_t eax_4 = *(arg1 + 0x198)

if (eax_4 != 0)
    int32_t ecx_4 = *(arg1 + 0x278)
    
    if (ecx_4 == 0)
        _free(eax_4)
    else
        ecx_4(arg1, eax_4)

int32_t eax_5 = *(arg1 + 0x19c)
*(arg1 + 0x198) = 0

if (eax_5 != 0)
    int32_t ecx_5 = *(arg1 + 0x278)
    
    if (ecx_5 == 0)
        eax_5 = _free(eax_5)
    else
        eax_5 = ecx_5(arg1, eax_5)

bool cond:1 = *(arg1 + 0x1a0) == 0
*(arg1 + 0x19c) = 0

if (not(cond:1))
    int32_t edi_2 = 0
    int32_t ebx_2 = 1 << (8 - (*(arg1 + 0x188)).b)
    
    if (ebx_2 s> 0)
        do
            int32_t eax_7 = *(*(arg1 + 0x1a0) + (edi_2 << 2))
            
            if (eax_7 != 0)
                int32_t ecx_7 = *(arg1 + 0x278)
                
                if (ecx_7 == 0)
                    _free(eax_7)
                else
                    ecx_7(arg1, eax_7)
            
            edi_2 += 1
        while (edi_2 s< ebx_2)
    
    eax_5 = *(arg1 + 0x1a0)
    
    if (eax_5 != 0)
        int32_t ecx_8 = *(arg1 + 0x278)
        
        if (ecx_8 == 0)
            eax_5 = _free(eax_5)
        else
            eax_5 = ecx_8(arg1, eax_5)
    
    *(arg1 + 0x1a0) = 0

if (*(arg1 + 0x1a4) != 0)
    int32_t edi_3 = 0
    int32_t ebp_1 = 1 << (8 - (*(arg1 + 0x188)).b)
    
    if (ebp_1 s> 0)
        do
            int32_t eax_9 = *(*(arg1 + 0x1a4) + (edi_3 << 2))
            
            if (eax_9 != 0)
                int32_t ecx_10 = *(arg1 + 0x278)
                
                if (ecx_10 == 0)
                    _free(eax_9)
                else
                    ecx_10(arg1, eax_9)
            
            edi_3 += 1
        while (edi_3 s< ebp_1)
    
    eax_5 = *(arg1 + 0x1a4)
    
    if (eax_5 != 0)
        int32_t ecx_11 = *(arg1 + 0x278)
        
        if (ecx_11 != 0)
            int32_t eax_10 = ecx_11(arg1, eax_5)
            *(arg1 + 0x1a4) = 0
            return eax_10
        
        eax_5 = _free(eax_5)
    
    *(arg1 + 0x1a4) = 0

return eax_5
