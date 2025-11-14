// 函数: sub_5c9020
// 地址: 0x5c9020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t edx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_4)
    eax_4 = arg1[0x5d]
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        eax_4 = ecx[3] u>> 2
        
        if (edx u< eax_4)
            int32_t eax_6
            
            if (ecx[3] != 0)
                eax_6 = ecx[2]
            else
                eax_6 = 0
            
            int32_t* ecx_1 = *(eax_6 + (edx << 2))
            int32_t* result = (arg1[0x5e] - arg1[0x5d]) s>> 2
            
            if (ecx_1 u< result)
                result = arg1[0x5d]
                ecx_1 = result[ecx_1]
                
                if (ecx_1 != 0)
                    if (ecx_1[0x12].b != 0)
                        int32_t* ecx_2
                        int32_t edx_1
                        result, ecx_2, edx_1 = sub_5d7310(ecx_1, (ecx_1[3] u>> 2) - 1)
                        
                        if (result.b == 0)
                            char const* const var_8_2 = "A_POPBACK"
                            return sub_5c24e0(result, edx_1, ecx_2, arg1, 0x6e84fc)
                    
                    return result
            
            char const* const var_8_3 = "A_POPBACK"
            return sub_5c24e0(result, edx, ecx_1, arg1, 0x6e84c4)

char const* const var_8_4 = "A_POPBACK"
return sub_5c24e0(eax_4, edx, ecx, arg1, 0x6e8488)
