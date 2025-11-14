// 函数: sub_639de0
// 地址: 0x639de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg3
int32_t edi = 0
int32_t* var_20 = ebp
int32_t var_18 = 0

if (ebp[2] s> 0)
    int32_t i = divs.dp.d(sx.q(arg4), arg5)
    int32_t i_1 = i
    
    while (i s< divs.dp.d(sx.q(arg4 + arg7), arg5))
        int32_t j = ebp[0xa]
        int32_t j_3 = j
        int32_t eax_7 = sub_638010(arg6, ebp[9])
        int32_t ebp_3
        int32_t eax_10
        
        if (eax_7 s< 0)
            ebp_3 = 0
            eax_10 = var_20[2]
        label_639ee6:
            int32_t eax_20 = sub_638010(arg6, j)
            
            if (eax_20 s< 0)
                while (j s> 1)
                    j -= 1
                    j_3 = j
                    eax_20 = sub_638010(arg6, j)
                    
                    if (eax_20 s>= 0)
                        goto label_639f15
                
                if (eax_20 s< 0)
                    return 0xffffffff
            
        label_639f15:
            int32_t eax_21
            int32_t ecx_10
            eax_21, ecx_10 = sub_639470(eax_20)
            int32_t j_1 = eax_10 - ebp_3
            
            if (j_1 s> 1)
                int32_t ebx_1 = eax_10
                
                do
                    int32_t edx_10 = j_1 s>> 1
                    int32_t ecx_12 = neg.d(sbb.d(ecx_10, ecx_10, 
                        eax_21 u< *(var_20[5] + ((edx_10 + ebp_3) << 2))))
                    ecx_10 = neg.d(ecx_12) & edx_10
                    ebx_1 -= ecx_10
                    ebp_3 += (ecx_12 - 1) & edx_10
                    j_1 = ebx_1 - ebp_3
                while (j_1 s> 1)
                
                j = j_3
                edi = var_18
                i = i_1
            
            int32_t edx_12 = sx.d(*(var_20[7] + ebp_3))
            
            if (edx_12 s> j)
                sub_6380c0(arg6, j)
                return 0xffffffff
            
            sub_6380c0(arg6, edx_12)
        else
            int32_t ecx_2 = *(ebp[8] + (eax_7 << 2))
            
            if (ecx_2 s< 0)
                ebp_3 = ecx_2 s>> 0xf & 0x7fff
                eax_10 = var_20[2] - (ecx_2 & 0x7fff)
                goto label_639ee6
            
            int32_t ebp_5 = sx.d(*(ebp[7] + ecx_2 - 1)) + arg6[1]
            int32_t edx_4 = arg6[4]
            int32_t ecx_6 = *arg6
            
            if (ecx_6 s<= edx_4 - ((ebp_5 + 7) s>> 3))
                int32_t eax_15
                int32_t edx_5
                edx_5:eax_15 = sx.q(ebp_5)
                arg6[1] = ebp_5 & 7
                int32_t eax_17 = (eax_15 + (edx_5 & 7)) s>> 3
                arg6[3] += eax_17
                *arg6 = eax_17 + ecx_6
                ebp_3 = ecx_2 - 1
            else
                arg6[3] = 0
                ebp_3 = ecx_2 - 1
                *arg6 = edx_4
                arg6[1] = 1
        
        if (ebp_3 == 0xffffffff)
            return 0xffffffff
        
        int32_t edx_13 = *var_20
        ebp = var_20
        int32_t esi_4 = ebp[4] + ((edx_13 * ebp_3) << 2)
        int32_t j_2 = 0
        
        if (edx_13 s> 0)
            do
                int32_t eax_31 = *(arg2 + (edi << 2))
                edi += 1
                *(eax_31 + (i << 2)) = *(esi_4 + (j_2 << 2)) f+ *(eax_31 + (i << 2))
                
                if (edi == arg5)
                    edi = 0
                    i += 1
                
                j_2 += 1
            while (j_2 s< *ebp)
            
            i_1 = i
            var_18 = edi

return 0
