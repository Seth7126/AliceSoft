// 函数: sub_42baf0
// 地址: 0x42baf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg2 = 1
*arg3 = 1
char* i_2 = *(arg1 + 8)
char* i = i_2
int32_t ecx = *(arg1 + 0xc)
char* i_1 = i_2

if (i_1 != ecx)
    while (*i_1 != 0xa)
        i = i_1
        i_1 -= 1
        
        if (i_1 == ecx)
            break

if (i != i_2)
    do
        ecx.b = *i
        
        if (ecx.b u< 0x81 || ecx.b u> 0x9f)
            ecx.b += 0x20
            
            if (ecx.b u<= 0xf)
                i = &i[1]
        else
            i = &i[1]
        
        *arg3 += 1
        i = &i[1]
    while (i != *(arg1 + 8))

int32_t ecx_1 = *(arg1 + 8)
int32_t ecx_2 = ecx_1 - *(arg1 + 0xc)

if (ecx_1 - *(arg1 + 0xc) s>= 0)
    i = (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2
    
    if (i s> ecx_2)
        int32_t eax_3 = *(*(arg1 + 0x24) + (ecx_2 << 2))
        *arg2 = eax_3
        return eax_3

*arg2 = 0xffffffff
return i
