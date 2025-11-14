// 函数: sub_5c88e0
// 地址: 0x5c88e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* eax = *(arg1 + 0x234)
int32_t ebx = *(eax - 4)
int32_t edx = *(eax - 8)
void* ecx = *(eax - 0xc)
*(arg1 + 0x234) = eax - 0xc
int32_t eax_4 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (ecx u< eax_4)
    eax_4 = *(arg1 + 0x174)
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        eax_4 = *(ecx + 0xc) u>> 2
        
        if (edx u< eax_4)
            int32_t ecx_1
            
            if (*(ecx + 0xc) != 0)
                ecx_1 = *(ecx + 8)
            else
                ecx_1 = 0
            
            void* ecx_3 = *(ecx_1 + (edx << 2))
            
            if (ecx_3 == 0xffffffff)
                char const* const var_14 = "NULL"
                return sub_5c2400(eax_4, edx, ecx_3, arg1, "A_NUMOF")
            
            int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
            
            if (ecx_3 u< eax_9)
                eax_9 = *(arg1 + 0x174)
                ecx_3 = *(eax_9 + (ecx_3 << 2))
                
                if (ecx_3 != 0)
                    uint32_t eax_10
                    int32_t ecx_4
                    int32_t edx_1
                    eax_10, ecx_4, edx_1 = sub_5d4f40(ecx_3, ebx, &var_4)
                    
                    if (eax_10.b != 0)
                        return sub_5ddf10(arg1 + 0x220, var_4)
                    
                    int32_t var_14_2 = 0x6e7ff0
                    return sub_5c2400(eax_10, edx_1, ecx_4, arg1, "A_NUMOF")
            
            int32_t var_14_4 = 0x6e7fc8
            return sub_5c2400(eax_9, edx, ecx_3, arg1, "A_NUMOF")

int32_t var_14_5 = 0x6e7f64
return sub_5c2400(eax_4, edx, ecx, arg1, "A_NUMOF")
