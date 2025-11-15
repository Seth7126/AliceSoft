// 函数: sub_5accb0
// 地址: 0x5accb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
sub_57c210(&arg1[0x15a])
int32_t* result

if (arg2 s>= 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t ebp_1 = arg2 * 0x34c
        int32_t* ebp_2 = ebp_1 + arg3[1]
        
        if (ebp_1 != neg.d(arg3[1]))
            if (ebp_2[1] != 6)
                return sub_5acdd0(arg1, arg2, arg3, arg4)
            
            int32_t* i = arg2 + 1
            int32_t eax_3
            int32_t edx_3
            edx_3:eax_3 = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
            int32_t edx_4 = edx_3 s>> 4
            
            if (i s< (edx_4 u>> 0x1f) + edx_4)
                int32_t edi_1 = i * 0x34c
                int32_t edx_8
                
                do
                    if (edi_1 s< 0)
                        goto label_5acdc4
                    
                    int32_t eax_6
                    int32_t edx_5
                    edx_5:eax_6 = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
                    int32_t edx_6 = edx_5 s>> 4
                    
                    if (i s>= (edx_6 u>> 0x1f) + edx_6)
                        goto label_5acdc4
                    
                    void* eax_9 = arg3[1]
                    
                    if (eax_9 == neg.d(edi_1))
                        goto label_5acdc4
                    
                    if ((eax_9 + edi_1)[0xcc] != *ebp_2)
                        break
                    
                    if (sub_5acdd0(arg1, i, arg3, arg4).b == 0)
                        goto label_5acdc4
                    
                    i += 1
                    int32_t eax_10
                    int32_t edx_7
                    edx_7:eax_10 = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
                    edi_1 += 0x34c
                    edx_8 = edx_7 s>> 4
                while (i s< (edx_8 u>> 0x1f) + edx_8)
            
            result.b = 1
            return result

label_5acdc4:
result.b = 0
return result
