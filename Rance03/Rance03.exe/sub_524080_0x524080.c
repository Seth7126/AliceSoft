// 函数: sub_524080
// 地址: 0x524080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
bool cond:0 = *(arg1 + 0x80) == 0
*(arg1 + 4) = 0

if (not(cond:0))
    *(arg1 + 0x30) = arg3
    *(arg1 + 0x34) = arg4
    *(arg1 + 0x38) = arg5
    *(arg1 + 0x3c) = arg6
    char eax_5
    int32_t ecx_1
    eax_5, ecx_1 = (*(**(arg1 + 0x80) + 0x28))()
    int32_t var_18_1 = ecx_1
    int32_t var_1c_1 = arg2
    
    if (eax_5 == 0)
        if (sub_522910(arg1 + 8, arg5, arg6, arg7) == 0)
            return 0
        
        sub_522820(arg1 + 0x44)
    else
        *(arg1 + 0x6c) = arg3
        *(arg1 + 0x70) = arg4
        *(arg1 + 0x74) = arg5
        *(arg1 + 0x78) = arg6
        char eax
        int32_t ecx_3
        eax, ecx_3 = sub_522910(arg1 + 8, arg5, arg6, arg7)
        
        if (eax == 0)
            return 0
        
        int32_t var_18_2 = ecx_3
        int32_t var_1c_2 = arg2
        
        if (sub_522910(arg1 + 0x44, arg5, arg6, arg8) == 0)
            return 0
    
    *(arg1 + 4) = 1

return 1
