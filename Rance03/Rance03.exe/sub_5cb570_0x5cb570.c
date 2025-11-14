// 函数: sub_5cb570
// 地址: 0x5cb570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[0x82]
int32_t edi = *eax
arg1[0x82] = &eax[1]
arg1[0x8d] -= 4
int32_t* ecx_1 = arg1[0x40] - arg1[0x3f]
int32_t ebx = *arg1[0x8d]
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, ecx_1)
int32_t edx_1 = edx s>> 2
int32_t eax_6 = ecx_1 s/ 0x18

if (edi u< eax_6)
    eax_6 = arg1[0x3f]
    ecx_1 = eax_6 + edi * 0x18
    
    if (ecx_1 != 0)
        int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (ebx u< eax_9)
            eax_9 = *(arg1[0x5d] + (ebx << 2))
            
            if (eax_9 != 0)
                char* eax_11
                
                if (*(eax_9 + 0xc) != 0)
                    eax_11 = *(eax_9 + 8)
                else
                    eax_11 = nullptr
                
                int32_t var_4
                
                if (sub_5db930(ecx_1, &var_4, eax_11) != 0)
                    arg1[0x82] = arg1[0x83] + var_4
                
                int32_t* result
                int32_t* ecx_4
                int32_t edx_2
                result, ecx_4, edx_2 = sub_5d5e80(&arg1[0x5b], ebx)
                
                if (result.b != 0)
                    return result
                
                return sub_5c24e0(result, edx_2, ecx_4, arg1, 0x6e92f0)
        
        return sub_5c24e0(eax_9, edx_1, ecx_1, arg1, 0x6e9264)

return sub_5c24e0(eax_6, edx_1, ecx_1, arg1, 0x6e9298)
