// 函数: sub_5cac70
// 地址: 0x5cac70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, arg1[0x28] - arg1[0x27])
int32_t edx_1 = edx s>> 4
int32_t eax_3

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t ebx_1 = arg1[0x27] + arg2 * 0x48
    
    if (ebx_1 != 0)
        eax_3 = sub_5d57c0(&arg1[0x62])
        
        if (eax_3 != 0)
            int32_t eax_4 = sub_5d5dc0(&arg1[0x5b])
            *(arg1[0x5d] + (eax_4 << 2)) = eax_3
            
            if (sub_5d3920(eax_3, *(ebx_1 + 0x2c), ebx_1 + 0x3c, *(ebx_1 + 0x30)).b != 0
                    && eax_4 u< (arg1[0x5e] - arg1[0x5d]) s>> 2)
                void* ecx_9 = *(arg1[0x5d] + (eax_4 << 2))
                
                if (ecx_9 != 0 && sub_5d3b50(ecx_9, arg3, 2).b != 0
                        && sub_5c0400(arg1, eax_4).b != 0)
                    sub_5c1f40(arg1, 6, arg1[0x82] - arg1[0x83], *(ebx_1 + 4))
                    
                    while (arg1[0x85].b != 0)
                        int16_t* eax_10 = arg1[0x82]
                        uint32_t ecx_12 = zx.d(*eax_10)
                        arg1[0x82] = &eax_10[1]
                        sub_5c1100(arg1, ecx_12)
                    
                    arg1[0x85].b = 1
                    arg1[0x8d] -= 4
                    *arg4 = *arg1[0x8d]
                    int32_t* eax_13
                    eax_13.b = 1
                    return eax_13

eax_3.b = 0
return eax_3
