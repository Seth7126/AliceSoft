// 函数: sub_627fc0
// 地址: 0x627fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *arg2
int32_t edi_2 = arg2[2] + arg2[1] + edx
int32_t eax
int32_t eax_1 = sub_629750(eax, edx, arg1, 0x186a0, edi_2)

if (eax_1 != 0 && sub_629750(eax_1, arg2[1], &arg1[1], 0x186a0, edi_2) != 0)
    int32_t edx_2 = arg2[3]
    int32_t ebp_3 = arg2[5] + edx_2 + arg2[4]
    int32_t eax_4 = *arg2
    int32_t eax_5 = arg2[1]
    int32_t eax_6 = sub_629750(eax_5, edx_2, &arg1[2], 0x186a0, ebp_3)
    
    if (eax_6 != 0 && sub_629750(eax_6, arg2[4], &arg1[3], 0x186a0, ebp_3) != 0)
        int32_t eax_9 = eax_4 + arg2[3]
        int32_t edx_4 = arg2[6]
        int32_t ebp_6 = arg2[8] + edx_4 + arg2[7]
        int32_t eax_11 = eax_5 + arg2[4]
        int32_t eax_12 = sub_629750(eax_11, edx_4, &arg1[4], 0x186a0, ebp_6)
        
        if (eax_12 != 0)
            int32_t eax_13 = sub_629750(eax_12, arg2[7], &arg1[5], 0x186a0, ebp_6)
            
            if (eax_13 != 0)
                int32_t edi_4 = edi_2 + ebp_3 + ebp_6
                int32_t ebp_8 = eax_11 + arg2[7]
                int32_t eax_14 = sub_629750(eax_13, eax_9 + arg2[6], &arg1[6], 0x186a0, edi_4)
                
                if (eax_14 != 0)
                    int32_t eax_15 = sub_629750(eax_14, ebp_8, &arg1[7], 0x186a0, edi_4)
                    int32_t eax_16 = neg.d(eax_15)
                    return sbb.d(eax_16, eax_16, eax_15 != 0) + 1

return 1
