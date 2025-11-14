// 函数: sub_556630
// 地址: 0x556630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t eax_1 = arg2[1]
    int128_t* ebp_1 = *arg2
    
    if (ebp_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int128_t* ecx = *arg1
    int32_t edx_3 = (eax_1 - ebp_1) s>> 6
    int32_t ebx_3 = (arg1[1] - ecx) s>> 6
    
    if (edx_3 u<= ebx_3)
        int32_t* var_14_1 = arg2
        sub_556770(eax_1, eax_1, ebp_1, ecx)
        arg1[1] = ((arg2[1] - *arg2) & 0xffffffc0) + *arg1
        return arg1
    
    int32_t eax_11 = (arg1[2] - ecx) s>> 6
    int128_t* eax_12
    
    if (edx_3 u> eax_11)
        if (ecx != 0)
            j__free(ecx)
        
        int32_t ecx_6
        eax_12, ecx_6 = sub_556710(arg1, (arg2[1] - *arg2) s>> 6)
        
        if (eax_12.b != 0)
            int32_t* var_14_6 = arg2
            int32_t var_18_4 = ecx_6
            arg1[1] = sub_544680(eax_12, arg2[1], *arg2, *arg1)
    else
        int32_t* var_14_2 = arg2
        void* ebx_5 = &ebp_1[ebx_3 * 4]
        int32_t ecx_3
        eax_12, ecx_3 = sub_556770(eax_11, ebx_5, ebp_1, ecx)
        int32_t* var_14_3 = arg2
        int32_t var_18_3 = ecx_3
        arg1[1] = sub_544680(eax_12, arg2[1], ebx_5, arg1[1])

return arg1
