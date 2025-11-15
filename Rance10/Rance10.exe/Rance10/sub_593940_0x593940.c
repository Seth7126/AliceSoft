// 函数: sub_593940
// 地址: 0x593940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t result
int32_t edx
edx:result = muls.dp.d(0x2aaaaaab, edi - ebx)
int32_t i = (edi - ebx) s/ 0x18

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t i_3 = i
            sub_594800(ebx, edi)
            return sub_594880(ebx, edi)
        
        int32_t i_1 = i
        int32_t* var_10
        sub_5945d0(result, ebx, &var_10, edi)
        int32_t eax_1
        int32_t edx_3
        edx_3:eax_1 = sx.q(esi_2)
        int32_t ecx_4 = (eax_1 - edx_3) s>> 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(ecx_4)
        esi_2 = ecx_4 + ((eax_4 - edx_4) s>> 1)
        int32_t* var_c
        
        if ((var_10 - ebx) s/ 0x18 s>= (edi - var_c) s/ 0x18)
            sub_593940(esi_2, arg5)
            edi = var_10
        else
            sub_593940(esi_2, arg5)
            ebx = var_c
        
        int32_t edx_11
        edx_11:result = muls.dp.d(0x2aaaaaab, edi - ebx)
        i = (edi - ebx) s/ 0x18
    while (i s> 0x20)

if (i s< 2)
    return result

int32_t i_2 = i
return sub_594920(ebx, edi)
