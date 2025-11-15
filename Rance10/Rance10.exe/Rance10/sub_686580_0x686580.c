// 函数: sub_686580
// 地址: 0x686580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x2c8)
int32_t* edx = *(arg1 + 0x2c4)

if (edx != eax)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == eax)
            break
    
    if (edx != eax)
        sub_6feca0(edx, &edx[1], eax - &edx[1])
        *(arg1 + 0x2c8) -= 4
        char* eax_2
        eax_2.b = 1
        return eax_2

eax.b = 0
return eax
