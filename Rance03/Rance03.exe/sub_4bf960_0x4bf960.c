// 函数: sub_4bf960
// 地址: 0x4bf960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t eax_1 = arg2[1]
    int32_t* ebp_1 = *arg2
    
    if (ebp_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int32_t* ecx = *arg1
    int32_t edx_3 = (arg1[1] - ecx) s>> 3
    int32_t esi_3 = (eax_1 - ebp_1) s>> 3
    
    if (esi_3 u<= edx_3)
        sub_4c0840(eax_1, eax_1, ebp_1, ecx)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        return arg1
    
    int32_t eax_9 = (arg1[2] - ecx) s>> 3
    int32_t* eax_10
    
    if (esi_3 u> eax_9)
        if (ecx != 0)
            j__free(ecx)
        
        int32_t ecx_9
        eax_10, ecx_9 = sub_4bf480(arg1, (arg2[1] - *arg2) s>> 3)
        
        if (eax_10.b != 0)
            int32_t* var_14_6 = arg2
            int32_t var_18_2 = ecx_9
            arg1[1] = sub_4c1730(eax_10, arg2[1], *arg2, *arg1)
    else
        void* esi_5 = &ebp_1[edx_3 * 2]
        int32_t ecx_6
        eax_10, ecx_6 = sub_4c0840(eax_9, esi_5, ebp_1, ecx)
        int32_t* var_14_3 = arg2
        int32_t var_18_1 = ecx_6
        arg1[1] = sub_4c1730(eax_10, arg2[1], esi_5, arg1[1])

return arg1
