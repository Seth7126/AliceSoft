// 函数: sub_5266e0
// 地址: 0x5266e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (*(arg1 + 4) s<= 0)
    return 

int32_t* esi_1 = arg2

do
    if (*(*(arg1 + 0xc) + (i << 2)) != 0)
        void* eax = esi_1[1]
        int32_t* ebx_2 = *(arg1 + 8) + i
        arg2 = ebx_2
        int32_t ecx
        
        if (&arg2 u< eax)
            ecx = *esi_1
        
        if (&arg2 u>= eax || ecx u> &arg2)
            if (eax == esi_1[2])
                sub_404610(esi_1, 1)
            
            eax = esi_1[1]
            
            if (eax != 0)
                *eax = ebx_2
        else
            if (eax == esi_1[2])
                sub_404610(esi_1, 1)
            
            void** ecx_2 = esi_1[1]
            
            if (ecx_2 != 0)
                *ecx_2 = *(*esi_1 + ((&arg2 - ecx) s>> 2 << 2))
        
        esi_1[1] += 4
    
    i += 1
while (i s< *(arg1 + 4))
