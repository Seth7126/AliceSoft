// 函数: sub_55aaf0
// 地址: 0x55aaf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx_2 = arg2
int32_t* esi = *ecx_2
int32_t ebx = 0
uint32_t ebp_3 = (ecx_2[1] - esi + 3) u>> 2
int32_t edi = 0

if (esi u> ecx_2[1])
    ebp_3 = 0

if (ebp_3 != 0)
    do
        int32_t* eax_1 = *esi
        void* ecx = *eax_1
        int32_t eax_2
        
        if (ecx == 0)
            eax_2 = 0
        else if (*(eax_1 + 0x16) == 0)
            int32_t* ecx_1 = *(ecx + 0x118)
            
            if (ecx_1 != 0)
                eax_2 = (*(*ecx_1 + 0x10))()
            else
                eax_2 = 0
        else
            eax_2 = eax_1[0xb]
        
        edi += 1
        ebx += eax_2
        esi = &esi[1]
    while (edi != ebp_3)
    
    ecx_2 = arg2

return (((ecx_2[1] - *ecx_2) s>> 2) - 1) * arg1 + ebx
