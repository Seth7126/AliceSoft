// 函数: sub_679fe0
// 地址: 0x679fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
void* ebp = *(arg1 + 0x1c0)

if (*(arg1 + 0x64) s<= 0)
    return 

int32_t** edi_1 = ebp + 0x34

do
    int32_t j = edi_1[-5]
    int32_t eax_1 = 0
    int32_t* eax
    
    if (i s> 0)
        void* ecx = ebp + 0x20
        
        while (j != *ecx)
            eax_1 += 1
            ecx += 4
            
            if (eax_1 s>= i)
                goto label_67a01a
        
        eax = *(ebp + (eax_1 << 2) + 0x34)
    
    if (i s<= 0 || eax == 0)
    label_67a01a:
        eax = sub_679f70(arg1, j)
    
    *edi_1 = eax
    i += 1
    edi_1 = &edi_1[1]
while (i s< *(arg1 + 0x64))
