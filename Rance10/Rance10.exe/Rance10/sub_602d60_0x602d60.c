// 函数: sub_602d60
// 地址: 0x602d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = arg2
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0

if (sub_602be0(arg1) == 0)
    void* esi_2
    
    if (sub_602ce0(arg1) == 0)
        if (sub_602c60(arg1) != 0)
            esi_2 = arg3
            goto label_602dee
        
        if (arg2 == 0x5f)
            esi_2 = arg3
            int32_t edx_2 = *(esi_2 + 8)
            int32_t ecx_2 = *(*(esi_2 + 4) + (edx_2 << 2) - 4)
            *(esi_2 + 8) = edx_2 - 1
            arg1[1] = ecx_2
            goto label_602dee
        
        if (arg2 != 0)
            *arg1 = 0xffffffff
    else
        esi_2 = arg3
        int32_t edx_1 = *(esi_2 + 8)
        int32_t ecx_1 = *(*(esi_2 + 4) + (edx_1 << 2) - 4)
        *(esi_2 + 8) = edx_1 - 1
        arg1[3] = ecx_1
    label_602dee:
        int32_t ecx_3 = *(esi_2 + 8)
        int32_t edx_3 = *(*(esi_2 + 4) + (ecx_3 << 2) - 4)
        *(esi_2 + 8) = ecx_3 - 1
        arg1[2] = edx_3
else
    int32_t ecx = *(arg3 + 8)
    int32_t edx = *(*(arg3 + 4) + (ecx << 2) - 4)
    *(arg3 + 8) = ecx - 1
    arg1[1] = edx

if (sub_4199e0(arg1) != 0 && sub_602c60(arg1) != 0)
    void* ecx_5 = data_7fcbb4
    
    if (ecx_5 != 0)
        sub_621d30(ecx_5, arg1[2])

return arg1
