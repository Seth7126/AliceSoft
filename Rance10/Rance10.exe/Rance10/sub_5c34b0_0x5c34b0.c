// 函数: sub_5c34b0
// 地址: 0x5c34b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi_1 = *arg2
int32_t* i = *esi_1
arg2 = i

for (; i != esi_1; i = arg2)
    int32_t eax = *(arg1 + 0x34)
    int32_t ecx
    
    if (&i[4] u< eax)
        ecx = *(arg1 + 0x30)
    
    int32_t* ecx_3
    
    if (&i[4] u>= eax || ecx u> &i[4])
        if (eax == *(arg1 + 0x38))
            sub_404610(arg1 + 0x30, 1)
        
        ecx_3 = *(arg1 + 0x34)
        
        if (ecx_3 != 0)
            *ecx_3 = i[4]
    else
        if (eax == *(arg1 + 0x38))
            sub_404610(arg1 + 0x30, 1)
        
        ecx_3 = *(arg1 + 0x34)
        
        if (ecx_3 != 0)
            *ecx_3 = *(*(arg1 + 0x30) + ((&i[4] - ecx) s>> 2 << 2))
    *(arg1 + 0x34) += 4
    sub_429080(&arg2)

return i
