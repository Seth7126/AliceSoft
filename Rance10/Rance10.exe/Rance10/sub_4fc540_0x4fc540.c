// 函数: sub_4fc540
// 地址: 0x4fc540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg2
int32_t edx = arg2[1]
int32_t* eax_3

if (eax == edx)
label_4fc55f:
    eax_3 = *(arg1 + 8)
else
    while (true)
        int32_t* ecx = *eax
        
        if (*(ecx + 5) != 0)
            eax_3 = ecx
            break
        
        eax = &eax[1]
        
        if (eax == edx)
            goto label_4fc55f

void* eax_4 = *eax_3

if (*(eax_4 + 0x40) != 0)
    void* eax_1 = *(eax_4 + 0x50)
    void* ecx_1 = *(eax_1 + 0x7c)
    
    if (ecx_1 != 0)
        int32_t eax_2 = sub_4f03d0(ecx_1)
        *(arg1 + 0xc) = eax_2
        return eax_2
    
    eax_4 = *(eax_1 + 0x40)
    *(arg1 + 0xc) = eax_4

return eax_4
