// 函数: sub_5f3040
// 地址: 0x5f3040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    void* ebp_2 = arg2 + 4
    void* var_c_1 = ebp_2
    
    do
        if (sub_5f3ed0(&result_2[5], ebp_2) != 0)
            result_2 = result_2[2]
        else if (sub_5f3f70(&result_2[5], ebp_2) != 0)
        label_5f310e:
            result = result_2
            result_2 = *result_2
            result_1 = result
        else
            void* ebx = &result_2[0xc]
            int32_t* edi_2 = arg2 + 0x20
            int32_t ecx_2 = edi_2[4]
            int32_t* edx_1
            
            if (edi_2[5] u< 0x10)
                edx_1 = edi_2
            else
                edx_1 = *edi_2
            
            int32_t ebp_3 = *(ebx + 0x10)
            int32_t* var_4_1
            
            if (*(ebx + 0x14) u< 0x10)
                var_4_1 = ebx
            else
                var_4_1 = *ebx
            
            int32_t eax_4 = ecx_2
            
            if (ebp_3 u< ecx_2)
                eax_4 = ebp_3
            
            int32_t eax_5 = sub_405190(eax_4, edx_1, var_4_1, eax_4)
            bool cond:2_1 = eax_5 s< 0
            
            if (eax_5 != 0)
                goto label_5f30db
            
            int32_t ecx_4 = edi_2[4]
            
            if (ebp_3 u>= ecx_4)
                eax_5.b = ebp_3 != ecx_4
                cond:2_1 = eax_5 s< 0
            label_5f30db:
                
                if (cond:2_1)
                    goto label_5f3118
                
                int32_t var_4_2 = ebp_3
                
                if (*(ebx + 0x14) u>= 0x10)
                    ebx = *ebx
                
                int32_t ebp_4 = edi_2[4]
                
                if (edi_2[5] u>= 0x10)
                    edi_2 = *edi_2
                
                int32_t eax_6 = ebp_3
                
                if (ebp_4 u< ebp_3)
                    eax_6 = ebp_4
                
                sub_405190(eax_6, ebx, edi_2, eax_6)
                ebp_2 = var_c_1
                goto label_5f310e
            
        label_5f3118:
            ebp_2 = var_c_1
            result = result_1
            result_2 = result_2[2]
    while (*(result_2 + 0xd) == 0)

return result
