// 函数: sub_577ba0
// 地址: 0x577ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (; arg2 != arg4; arg2 = &arg2[1])
    void* ecx = arg6
    int32_t* esi_1 = *(ecx + 4)
    
    if (esi_1 u>= *(ecx + 8))
        if (esi_1 != 0)
            *esi_1 = *arg2
            ecx = arg6
        
        *(ecx + 4) += 4
        *(arg6 + 8) = *(ecx + 4)
    else
        *esi_1 = *arg2
        *(arg6 + 4) += 4

arg3[4] = arg6
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg5 != 0)
    _free(arg5)

return arg3
