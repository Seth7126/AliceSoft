// 函数: sub_5594e0
// 地址: 0x5594e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t xmm0 = *(arg1 + 0x58)
int32_t xmm1 = *(arg2 + 0x58)
int32_t eax

if (not(xmm0 f<= xmm1))
    eax.b = 1
    return eax

if (not(xmm1 f<= xmm0))
    eax.b = 0
    return eax

int32_t edi = *(arg1 + 0x50)
void* esi = nullptr
void* ebx = nullptr

if (edi s>= 0 && edi s< (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2)
    esi = *(*(arg1 + 0x38) + (edi << 2))

int32_t edi_1 = *(arg2 + 0x50)

if (edi_1 s>= 0 && edi_1 s< (*(arg2 + 0x3c) - *(arg2 + 0x38)) s>> 2)
    ebx = *(*(arg2 + 0x38) + (edi_1 << 2))

int32_t esi_1

if (esi == 0)
    esi_1 = 0
else
    esi_1 = *(esi + 0x30)

int32_t eax_9

if (ebx == 0)
    eax_9 = 0
else
    eax_9 = *(ebx + 0x30)

if (esi_1 u>= eax_9)
    if (esi_1 u> eax_9)
        eax_9.b = 0
        return eax_9
    
    eax_9 = *(arg1 + 0xc)
    int32_t esi_2 = *(arg2 + 0xc)
    
    if (eax_9 s>= esi_2)
        if (eax_9 s> esi_2)
            eax_9.b = 0
            return eax_9
        
        int32_t xmm1_1 = *(arg1 + 0x10)
        int32_t xmm0_1 = *(arg2 + 0x10)
        
        if (not(xmm0_1 f> xmm1_1))
            if (xmm1_1 f> xmm0_1)
            label_5595c0:
                int32_t xmm0_5 = *(arg1 + 0x10)
                int32_t xmm1_4 = *(arg2 + 0x10)
                
                if (not(xmm0_5 f> xmm1_4) && not(xmm1_4 f> xmm0_5))
                    int32_t xmm0_6 = *(arg1 + 0x14)
                    int32_t xmm1_5 = *(arg2 + 0x14)
                    
                    if (not(xmm0_6 f> xmm1_5) && not(xmm1_5 f> xmm0_6))
                        int32_t xmm0_7 = *(arg1 + 0x18)
                        int32_t xmm1_6 = *(arg2 + 0x18)
                        
                        if (not(xmm0_7 f> xmm1_6) && not(xmm1_6 f> xmm0_7))
                            *(arg1 + 0x1c)
                
                eax_9.b = 0
                return eax_9
            
            int32_t xmm1_2 = *(arg1 + 0x14)
            int32_t xmm0_2 = *(arg2 + 0x14)
            
            if (not(xmm0_2 f> xmm1_2))
                if (xmm1_2 f> xmm0_2)
                    goto label_5595c0
                
                int32_t xmm1_3 = *(arg1 + 0x18)
                int32_t xmm0_3 = *(arg2 + 0x18)
                
                if (not(xmm0_3 f> xmm1_3)
                        && (xmm1_3 f> xmm0_3 || not(*(arg2 + 0x1c) f> *(arg1 + 0x1c))))
                    goto label_5595c0

eax_9.b = 1
return eax_9
