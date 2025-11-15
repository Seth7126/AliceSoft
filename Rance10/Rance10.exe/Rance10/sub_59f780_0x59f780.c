// 函数: sub_59f780
// 地址: 0x59f780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = arg2
int32_t ebp_2 = (eax[1] - *eax) s>> 2
int32_t ebp_3 = ebp_2 - 1
int32_t* var_10 = arg1

if (ebp_2 - 1 s>= 0)
    int32_t temp2_1
    
    do
        int32_t ebx_1 = *(*eax + (ebp_3 << 2))
        int32_t edx_2
        
        if (ebx_1 s>= 0)
            int32_t eax_1
            int32_t edx_1
            edx_1:eax_1 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
            edx_2 = edx_1 s>> 4
        
        if (ebx_1 s< 0 || ebx_1 s>= (edx_2 u>> 0x1f) + edx_2)
            int32_t eax_4
            eax_4.b = 0
            return eax_4
        
        int32_t eax_5 = arg1[1]
        int32_t esi_1 = ebx_1 * 0x34c
        
        if (*(esi_1 + eax_5 + 4) == 6)
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = muls.dp.d(0x4da637d, arg1[2] - eax_5)
            int32_t edx_4 = edx_3 s>> 4
            
            if (ebp_3 s> ebx_1)
                int32_t edx_5 = esi_1
                int32_t i_1 = ebp_3 - ebx_1
                ebp_3 -= i_1
                int32_t i
                
                do
                    int32_t* eax_11 = arg1[1]
                    
                    if (eax_11[((edx_4 u>> 0x1f) - 1 + edx_4) * 0xd3 + 0xcc] == *(eax_11 + edx_5))
                        void* var_8
                        sub_5a41b0(&arg1[1], &var_8, &eax_11[((edx_4 u>> 0x1f) - 1 + edx_4) * 0xd3])
                        edx_5 = esi_1
                    
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        void* var_4
        sub_5a41b0(&arg1[1], &var_4, arg1[1] + esi_1)
        temp2_1 = ebp_3
        ebp_3 -= 1
        eax = arg2
        arg1 = var_10
    while (temp2_1 - 1 s>= 0)

*arg1 += 1
eax.b = 1
return eax
