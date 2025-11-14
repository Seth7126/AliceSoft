// 函数: sub_5697b0
// 地址: 0x5697b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t eax_1 = arg2[1]
    void* ebp_1 = *arg2
    
    if (ebp_1 == eax_1)
        int32_t ecx = arg1[1]
        
        for (void* i = *arg1; i != ecx; i += 0x20)
            *(i + 8) = &sealengine::CFrameAddColor::`vftable'
        
        arg1[1] = *arg1
        return arg1
    
    int32_t* edx_1 = *arg1
    int32_t ecx_3 = (eax_1 - ebp_1) s>> 5
    int32_t ebx_3 = (arg1[1] - edx_1) s>> 5
    
    if (ecx_3 u<= ebx_3)
        int32_t* var_14_1 = arg2
        sub_537dc0(sub_569e10(eax_1, eax_1, ebp_1, edx_1), arg1[1])
        arg1[1] = ((arg2[1] - *arg2) & 0xffffffe0) + *arg1
        return arg1
    
    int32_t eax_12 = (arg1[2] - edx_1) s>> 5
    int32_t* eax_13
    
    if (ecx_3 u> eax_12)
        if (edx_1 != 0)
            sub_537dc0(edx_1, arg1[1])
            j__free(*arg1)
        
        int32_t ecx_9
        eax_13, ecx_9 = sub_54bc80(arg1, (arg2[1] - *arg2) s>> 5)
        
        if (eax_13.b != 0)
            int32_t* var_14_8 = arg2
            int32_t var_18_6 = ecx_9
            arg1[1] = sub_5520b0(eax_13, arg2[1], *arg2, *arg1)
    else
        int32_t* var_14_3 = arg2
        void* ebx_5 = (ebx_3 << 5) + ebp_1
        int32_t ecx_6
        eax_13, ecx_6 = sub_569e10(eax_12, ebx_5, ebp_1, edx_1)
        int32_t* var_14_4 = arg2
        int32_t var_18_4 = ecx_6
        arg1[1] = sub_5520b0(eax_13, arg2[1], ebx_5, arg1[1])

return arg1
