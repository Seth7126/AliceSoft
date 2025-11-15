// 函数: sub_5b7190
// 地址: 0x5b7190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (; arg2 != arg4; arg2 += 0xc)
    void* ecx = arg6
    int64_t* esi_1 = *(ecx + 4)
    
    if (esi_1 u>= *(ecx + 8))
        if (esi_1 != 0)
            *esi_1 = *arg2
            esi_1[1].d = arg2[1].d
            ecx = arg6
        
        *(ecx + 4) += 0xc
        *(arg6 + 8) = *(ecx + 4)
    else
        *esi_1 = *arg2
        esi_1[1].d = arg2[1].d
        *(arg6 + 4) += 0xc

arg3[4] = arg6
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg5 != 0)
    _free(arg5)

return arg3
