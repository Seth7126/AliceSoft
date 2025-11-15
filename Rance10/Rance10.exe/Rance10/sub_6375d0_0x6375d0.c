// 函数: sub_6375d0
// 地址: 0x6375d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* edx = arg4
int16_t* esi = edx
bool cond:0_1

if (edx == arg5)
label_63761f:
    cond:0_1 = arg6 == arg7
else
    while (true)
        int16_t* eax = arg6
        cond:0_1 = eax == arg7
        
        if (eax == arg7)
            break
        
        arg6 = &eax[1]
        void arg_14
        
        if (sub_636540(&arg_14, *edx, *eax) == 0)
            goto label_637626
        
        edx = &edx[1]
        
        if (edx == arg5)
            goto label_63761f

if (cond:0_1)
    esi = edx

label_637626:
*arg3 = esi
return arg3
