// 函数: sub_551310
// 地址: 0x551310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg3 = arg2
arg3[1] = arg2

if (arg2 != arg4)
    for (int32_t* i = arg2 + 4; i != arg4; i = &i[1])
        int32_t xmm0_1 = **arg3
        
        if (&i[1] != arg4)
            int32_t xmm1_2 = i[1]
            int32_t xmm2_1 = *i
            
            if (xmm2_1 f<= xmm1_2)
                if (not(xmm0_1 f<= xmm2_1))
                    *arg3 = i
                
                if (not(xmm1_2 f< *arg3[1]))
                    arg3[1] = &i[1]
            else
                if (not(xmm0_1 f<= xmm1_2))
                    *arg3 = &i[1]
                
                if (not(xmm2_1 f< *arg3[1]))
                    arg3[1] = i
            
            i = &i[1]
        else
            int32_t xmm1_1 = *i
            
            if (not(xmm0_1 f<= xmm1_1))
                *arg3 = i
            else if (not(xmm1_1 f< *arg3[1]))
                arg3[1] = i

return arg3
