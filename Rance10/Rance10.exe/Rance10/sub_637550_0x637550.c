// 函数: sub_637550
// 地址: 0x637550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* edx = arg4
int16_t* esi = edx
bool cond:0_1

if (edx == arg5)
label_6375b4:
    cond:0_1 = arg6 == arg7
else
    while (true)
        int16_t* eax = arg6
        cond:0_1 = eax == arg7
        
        if (eax == arg7)
            break
        
        arg6 = &eax[1]
        
        if ((*(**(arg8 + 4) + 0x20))(zx.d(*edx)) != (*(**(arg8 + 4) + 0x20))(zx.d(*eax)))
            goto label_6375bc
        
        edx = &edx[1]
        
        if (edx == arg5)
            goto label_6375b4

if (cond:0_1)
    esi = edx

label_6375bc:
*arg3 = esi
return arg3
