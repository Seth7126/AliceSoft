// 函数: sub_625860
// 地址: 0x625860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx

if (*(arg1 + 0x14) != 0)
    ecx = *(arg1 + 0x10)
else
    ecx = nullptr

char i = *ecx
int32_t edx = arg2

while (i != 0)
    if (edx s<= 0)
        edx.b = *ecx
        
        if ((edx.b u< 0x81 || edx.b u> 0x9f) && edx.b + 0x20 u> 0xf)
            return zx.d(edx.b)
        
        return zx.d(edx.b) << 8 | zx.d(ecx[1])
    
    if (i u< 0x81)
        if (i + 0x20 u<= 0xf)
            ecx = &ecx[1]
    else if (i u<= 0x9f || i + 0x20 u<= 0xf)
        ecx = &ecx[1]
    
    i = ecx[1]
    ecx = &ecx[1]
    edx -= 1

return 0
