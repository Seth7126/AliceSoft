// 函数: sub_51a030
// 地址: 0x51a030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 8)
int32_t* edx = *(arg1 + 4)

if (edx != eax)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == eax)
            break
    
    if (edx != eax)
        sub_6feca0(edx, &edx[1], eax - &edx[1])
        *(arg1 + 8) -= 4
        *(arg1 + 0x10) = 1

void* result = sub_404370(arg1 + 4, &arg2)
*(arg1 + 0x10) = 1
return result
