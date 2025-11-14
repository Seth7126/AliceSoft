// 函数: sub_4c9bb0
// 地址: 0x4c9bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1

if (arg2 != 0)
    int32_t* ebx_1 = result + 8
    int32_t* eax = *ebx_1
    int32_t* i = *eax
    
    if (i != eax)
        int32_t* ebp_1 = arg2 + 0x104
        void* edx_1 = arg2 + 0x104
        int32_t* var_4_1 = ebp_1
        
        do
            int32_t ebx_2 = i[0xa]
            int32_t var_20_1 = ebx_2
            int32_t ebp_2
            
            if (sub_4a55e0(ebp_1) == 0)
                ebp_2 = 0xffffffff
            else
                int32_t var_20_2 = ebx_2
                struct partsengine::CPartsList::VTable** eax_2 = sub_4a52a0(ebp_1)
                
                if (eax_2 == 0)
                    ebp_2 = 0xffffffff
                else
                    int32_t eax_3 = eax_2[2]
                    struct IInterface::VTable** vFunc_0
                    
                    if (ebx_2 s< eax_3 || eax_2[1] + eax_3 s<= ebx_2)
                        vFunc_0 = nullptr
                    label_4c9c37:
                        
                        if (vFunc_0 == 0)
                            ebp_2 = 0xffffffff
                        else
                            ebp_2 = vFunc_0[0x1d]
                    else
                        vFunc_0 = eax_2[3][ebx_2 - eax_3].vFunc_0
                        
                        if (vFunc_0 == 0)
                            vFunc_0 = sub_4e7720(eax_2, ebx_2)
                            goto label_4c9c37
                        
                        ebp_2 = vFunc_0[0x1d]
            
            int32_t eax_5 = arg3[1]
            int32_t var_c = ebp_2
            int32_t ecx_7
            
            if (&var_c u< eax_5)
                ecx_7 = *arg3
            
            if (&var_c u>= eax_5 || ecx_7 u> &var_c)
                if (eax_5 == arg3[2])
                    sub_415950(arg3, 1)
                
                int32_t* eax_8 = arg3[1]
                
                if (eax_8 != 0)
                    *eax_8 = ebp_2
            else
                if (eax_5 == arg3[2])
                    sub_415950(arg3, 1)
                
                int32_t* ecx_9 = arg3[1]
                
                if (ecx_9 != 0)
                    *ecx_9 = *(*arg3 + ((&var_c - ecx_7) s>> 2 << 2))
            
            arg3[1] += 4
            int32_t var_20_4 = ebx_2
            void* eax_9 = sub_4a56f0(edx_1)
            
            if (eax_9 == 0)
            label_4c9cc6:
                int32_t var_20_6 = ebx_2
                struct partsengine::CPartsList::VTable** eax_10 = sub_4a52a0(edx_1)
                
                if (eax_10 != 0)
                    sub_4e7980(eax_10, ebx_2)
            else
                eax_9.b = *(eax_9 + 0x49c)
                
                if (eax_9.b == 0)
                    goto label_4c9cc6
                
                int32_t var_20_5 = ebx_2
                sub_455870(0x6e0698)
            
            if (*(i + 0xd) == 0)
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0xd) != 0)
                    int32_t* i_3 = i[1]
                    
                    if (*(i_3 + 0xd) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0xd) != 0)
                                break
                    
                    i = i_3
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    while (*(i_2 + 0xd) == 0)
                        i = i_2
                        i_2 = *i
            
            ebp_1 = var_4_1
            ebx_1 = result + 8
        while (i != *ebx_1)
    
    sub_418220(*(*ebx_1 + 4))
    void* eax_12 = *ebx_1
    void* result_1 = result
    *(eax_12 + 4) = eax_12
    int32_t* eax_13 = *ebx_1
    *eax_13 = eax_13
    void* eax_14 = *ebx_1
    *(eax_14 + 8) = eax_14
    ebx_1[1] = 0
    sub_418220(*(*(result_1 + 0x10) + 4))
    void* eax_16 = *(result_1 + 0x10)
    *(eax_16 + 4) = eax_16
    int32_t* eax_17 = *(result_1 + 0x10)
    *eax_17 = eax_17
    result = *(result_1 + 0x10)
    *(result + 8) = result
    *(result_1 + 0x14) = 0

return result
