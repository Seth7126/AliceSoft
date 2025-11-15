// 函数: sub_4ed5c0
// 地址: 0x4ed5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

char* eax = *(arg1 + 0x14)
int32_t* ecx = *(arg1 + 0x10)

if (ecx == eax)
    return 

while (*ecx != arg2)
    ecx = &ecx[1]
    
    if (ecx == eax)
        break

if (ecx != eax)
    sub_6feca0(ecx, &ecx[1], eax - &ecx[1])
    *(arg1 + 0x14) -= 4
