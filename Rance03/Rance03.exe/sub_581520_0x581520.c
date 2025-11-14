// 函数: sub_581520
// 地址: 0x581520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
sub_5815a0(arg1)

if (sub_5815f0(arg1, arg2, arg3) != 0 && sub_5818e0(arg1, arg2, arg3) != 0)
    char eax
    int32_t ecx_4
    eax, ecx_4 = sub_581a80(arg1, arg2, arg3)
    
    if (eax != 0)
        int32_t* esi_1 = *(arg1 + 0x48)
        
        if (esi_1 == *(arg1 + 0x4c))
            return 1
        
        while (true)
            if (*esi_1 != 0 && sub_581520(arg2, arg3) == 0)
                return 0
            
            esi_1 = &esi_1[1]
            
            if (esi_1 == *(arg1 + 0x4c))
                return 1

return 0
