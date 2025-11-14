// 函数: sub_530b20
// 地址: 0x530b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_530cc0(arg1)

if (arg2[1] != 0)
    int32_t* eax = *arg2
    int32_t* i = *eax
    
    if (i != eax)
        do
            void* eax_1 = i[5]
            int32_t* var_24_1 = arg2
            sub_533b00(arg1 + 4, *(arg1 + 8), *(eax_1 + 4), *(eax_1 + 8))
            
            if (*(i + 0xd) == 0)
                int32_t* i_2 = i[2]
                
                if (*(i_2 + 0xd) != 0)
                    int32_t* i_4 = i[1]
                    
                    if (*(i_4 + 0xd) == 0)
                        while (i == i_4[2])
                            i = i_4
                            i_4 = i_4[1]
                            
                            if (*(i_4 + 0xd) != 0)
                                break
                    
                    i = i_4
                else
                    i = i_2
                    int32_t* i_3 = *i
                    
                    while (*(i_3 + 0xd) == 0)
                        i = i_3
                        i_3 = *i
        while (i != *arg2)
    
    int32_t* edi_1 = *arg2
    int32_t* xmm1_1 = 0x7f7fffff
    int32_t xmm5_1 = 0xff7fffff
    int32_t xmm6_1 = 0x7f7fffff
    arg2 = 0x7f7fffff
    int32_t xmm7_1 = -0x800001
    int32_t* i_1 = *edi_1
    
    while (i_1 != edi_1)
        int32_t* var_10
        int32_t var_c
        int32_t var_8
        int32_t var_4
        sub_530580(i_1[5], &var_10, &var_c, &var_8, &var_4)
        int32_t* xmm0_1 = var_10
        xmm1_1 = arg2
        
        if (not(xmm1_1 f<= xmm0_1))
            xmm1_1 = xmm0_1
            arg2 = xmm1_1
        
        int32_t xmm0_2 = var_c
        
        if (not(xmm0_2 f<= xmm5_1))
            xmm5_1 = xmm0_2
        
        int32_t xmm0_3 = var_8
        
        if (not(xmm6_1 f<= xmm0_3))
            xmm6_1 = xmm0_3
        
        int32_t xmm0_4 = var_4
        
        if (not(xmm0_4 f<= xmm7_1))
            xmm7_1 = xmm0_4
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0xd) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0xd) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0xd) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0xd) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    
    int32_t eax_4 = *(arg1 + 0x30) * *(arg1 + 0x2c)
    *(arg1 + 0x1c) = xmm1_1
    *(arg1 + 0x20) = xmm5_1
    *(arg1 + 0x24) = xmm6_1
    *(arg1 + 0x28) = xmm7_1
    sub_533450(arg1 + 0x10, eax_4)
    sub_5313a0(arg1, arg1 + 4)
    sub_5325e0(arg1)

int32_t result
result.b = 1
return result
