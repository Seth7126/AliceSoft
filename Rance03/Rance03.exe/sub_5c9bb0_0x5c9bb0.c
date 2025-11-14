// 函数: sub_5c9bb0
// 地址: 0x5c9bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg2
int32_t ebp = *(ecx + 0xc)

if (ebp u< 1)
    int32_t eax
    int32_t* ecx_2
    int32_t edx
    eax, ecx_2, edx = sub_5d5e80(&arg1[0x5b], arg5)
    
    if (eax.b != 0)
        int32_t ecx_3 = arg1[0x8b]
        int32_t edi_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2
        
        if (edi_2 + 1 u>= ecx_3)
            sub_64ad90(&arg1[0x89], ecx_3 * 2)
            arg1[0x8d] = arg1[0x8a] + (edi_2 << 2)
        
        *arg1[0x8d] = 0xffffffff
        int32_t* eax_6
        eax_6.b = 1
        arg1[0x8d] += 4
        return eax_6
    
    sub_5c24e0(eax, edx, ecx_2, arg1, 0x6e8d50)
    int32_t* eax_1
    eax_1.b = 0
    return eax_1

int32_t edx_1

if (ebp != 0)
    edx_1 = *(ecx + 8)
else
    edx_1 = 0

int32_t edi_3 = arg3
arg2 = edx_1

if (edi_3 s< 0)
    edi_3 = 0

int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (arg5 u< eax_9)
    eax_9 = *(arg1[0x5d] + (arg5 << 2))
    
    if (eax_9 != 0)
        uint32_t ebp_1
        
        if (arg6 == 0)
            if (*(ecx + 0x48) != 0)
                ebp_1 = ebp u>> 2
            else
                ebp_1 = 0
        
        int32_t ebp_2
        
        if (arg6 != 0 || edi_3 s>= arg4)
        label_5c9d4b:
            ebp_2 = 0xffffffff
        else
            while (true)
                if (edi_3 s>= ebp_1)
                    goto label_5c9d4b
                
                void* edx_2 = *(edx_1 + (edi_3 << 2))
                int32_t eax_13 = (arg1[0x5e] - arg1[0x5d]) s>> 2
                
                if (edx_2 u>= eax_13)
                label_5c9d2f:
                    int32_t var_14_2 = 0x6e8d9c
                    sub_5c2400(eax_13, edx_2, ecx, arg1, "A_FIND")
                    int32_t eax_17
                    eax_17.b = 0
                    return eax_17
                
                eax_13 = arg1[0x5d]
                edx_2 = *(eax_13 + (edx_2 << 2))
                
                if (edx_2 == 0)
                    goto label_5c9d2f
                
                char* edx_3
                
                if (*(edx_2 + 0xc) != 0)
                    edx_3 = *(edx_2 + 8)
                else
                    edx_3 = nullptr
                
                char* eax_14 = sub_5d3d10(eax_9)
                int32_t eax_16
                
                while (true)
                    ecx.b = *eax_14
                    char temp1_1 = *edx_3
                    bool c_1 = ecx.b u< temp1_1
                    
                    if (ecx.b == temp1_1)
                        if (ecx.b == 0)
                            eax_16 = 0
                            break
                        
                        ecx.b = eax_14[1]
                        char temp2_1 = edx_3[1]
                        c_1 = ecx.b u< temp2_1
                        
                        if (ecx.b == temp2_1)
                            eax_14 = &eax_14[2]
                            edx_3 = &edx_3[2]
                            
                            if (ecx.b != 0)
                                continue
                            
                            eax_16 = 0
                            break
                    
                    eax_16 = sbb.d(eax_14, eax_14, c_1) | 1
                    break
                
                if (eax_16 == 0)
                    ebp_2 = edi_3
                    break
                
                edi_3 += 1
                
                if (edi_3 s>= arg4)
                    goto label_5c9d4b
                
                edx_1 = arg2
        
        int32_t eax_18
        int32_t* ecx_6
        int32_t edx_4
        eax_18, ecx_6, edx_4 = sub_5d5e80(&arg1[0x5b], arg5)
        
        if (eax_18.b == 0)
            return sub_5c24e0(eax_18, edx_4, ecx_6, arg1, 0x6e8dc8)
        
        int32_t ecx_7 = arg1[0x8b]
        int32_t edi_6 = (arg1[0x8d] - arg1[0x8a]) s>> 2
        
        if (edi_6 + 1 u>= ecx_7)
            sub_64ad90(&arg1[0x89], ecx_7 * 2)
            arg1[0x8d] = arg1[0x8a] + (edi_6 << 2)
        
        *arg1[0x8d] = ebp_2
        int32_t* eax_24
        eax_24.b = 1
        arg1[0x8d] += 4
        return eax_24

int32_t var_14_5 = 0x6e8d2c
sub_5c2400(eax_9, edx_1, ecx, arg1, "A_FIND")
int32_t eax_25
eax_25.b = 0
return eax_25
