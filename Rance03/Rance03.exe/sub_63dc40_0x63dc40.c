// 函数: sub_63dc40
// 地址: 0x63dc40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax
int32_t edx
eax, edx = sub_638110(arg2, 0x20)

if (eax s>= 0)
    int32_t ecx_2 = *(arg2 + 0x10) - 8
    
    if (eax s<= ecx_2)
        char* eax_2 = sub_69cb1c(eax + 1, edx, ecx_2, eax + 1, 1)
        arg1[3] = eax_2
        sub_63d7b0(eax_2, eax_2, arg2, eax)
        void* eax_3 = sub_638110(arg2, 0x20)
        
        if (eax_3 s>= 0)
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(*(arg2 + 4) + 7)
            int32_t edx_3 = edx_2 & 7
            int32_t eax_8 = (eax_6 + edx_3) s>> 3
            int32_t ecx_8 = (*(arg2 + 0x10) - eax_8 - *arg2) s>> 2
            
            if (eax_3 s<= ecx_8)
                arg1[2] = eax_3
                int32_t eax_9
                int32_t ecx_9
                int32_t edx_4
                eax_9, ecx_9, edx_4 = sub_69cb1c(eax_8, edx_3, ecx_8, eax_3 + 1, 4)
                *arg1 = eax_9
                int32_t i = 0
                arg1[1] = sub_69cb1c(eax_9, edx_4, ecx_9, eax_3 + 1, 4)
                
                if (arg1[2] s> 0)
                    do
                        void* eax_11 = sub_638110(arg2, 0x20)
                        
                        if (eax_11 s< 0)
                            goto label_63dd53
                        
                        int32_t eax_14
                        int32_t edx_5
                        edx_5:eax_14 = sx.q(*(arg2 + 4) + 7)
                        int32_t edx_6 = edx_5 & 7
                        int32_t ecx_13 = *(arg2 + 0x10) - ((eax_14 + edx_6) s>> 3) - *arg2
                        
                        if (eax_11 s> ecx_13)
                            goto label_63dd53
                        
                        *(arg1[1] + (i << 2)) = eax_11
                        int32_t eax_19 = sub_69cb1c(eax_11 + 1, edx_6, ecx_13, eax_11 + 1, 1)
                        *(*arg1 + (i << 2)) = eax_19
                        sub_63d7b0(eax_19, *(*arg1 + (i << 2)), arg2, eax_11)
                        i += 1
                    while (i s< arg1[2])
                
                if (sub_638110(arg2, 1) == 1)
                    return 0

label_63dd53:
sub_63d8b0(arg1)
return 0xffffff7b
