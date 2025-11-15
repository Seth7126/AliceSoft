// 函数: sub_479d50
// 地址: 0x479d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t temp0 = divs.dp.d(sx.q(arg4), arg7)
int32_t k_3 = divs.dp.d(sx.q(arg5), arg8)
int32_t j_3 = divs.dp.d(sx.q(arg4), temp0)
arg4 = divs.dp.d(sx.q(arg5), k_3)
int32_t* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_15
int32_t edx_5
edx_5:eax_15 = sx.q((*(*arg1 + 0x1c))())
int32_t eax_21
int32_t edx_8
edx_8:eax_21 = sx.q((*(*arg1 + 0x1c))() * k_3)
int32_t eax_27
int32_t edx_10
edx_10:eax_27 = sx.q((*(*arg1 + 0x1c))() * k_3)
int32_t* ebx_1 = (*(*arg6 + 8))(0, 0)
int32_t result
int32_t edx_14
edx_14:result = sx.q((*(*arg6 + 0x1c))())
int32_t j_2 = j_3

if (arg4 s> 0)
    int32_t eax_34 = (((eax_27 + (edx_10 & 3)) s>> 2) - j_3 * temp0) << 2
    int32_t eax_35 = ((((edx_14 & 3) + result) s>> 2) - j_2) << 2
    int32_t ecx_14 = eax_34
    result = arg4
    int32_t edi_2 = eax_35
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t k_2 = k_3
            int32_t eax_37 = (temp0 - ((eax_21 + (edx_8 & 3)) s>> 2)) << 2
            int32_t j_1 = j_2
            int32_t edx_16 = eax_37
            arg1 = j_1
            int32_t j
            
            do
                if (k_2 s> 0)
                    int32_t k_1 = k_2
                    int32_t k
                    
                    do
                        if (temp0 s> 0)
                            int32_t ecx_15 = temp0
                            int32_t temp5_1
                            
                            do
                                *esi = *ebx_1
                                esi = &esi[1]
                                temp5_1 = ecx_15
                                ecx_15 -= 1
                            while (temp5_1 != 1)
                        
                        esi = &esi[((eax_15 + (edx_5 & 3)) s>> 2) - temp0]
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    j_1 = arg1
                    k_2 = k_3
                    edx_16 = eax_37
                
                esi += edx_16
                ebx_1 = &ebx_1[1]
                j = j_1
                j_1 -= 1
                arg1 = j_1
            while (j != 1)
            result = arg4
            j_2 = j_3
            ecx_14 = eax_34
            edi_2 = eax_35
        
        esi += ecx_14
        ebx_1 += edi_2
        i = result
        result -= 1
        arg4 = result
    while (i != 1)

return result
