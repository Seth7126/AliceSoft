// 函数: sub_5935f0
// 地址: 0x5935f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edi = arg2
int32_t* ebx = arg3
char* result
int32_t edx
edx:result = muls.dp.d(0x2aaaaaab, edi - ebx)
int32_t i = (edi - ebx) s/ 0xc

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t i_3 = i
            sub_594090(ebx, edi)
            return sub_594110(ebx, edi)
        
        int32_t i_1 = i
        int32_t* var_10
        sub_593e60(result, ebx, &var_10, edi)
        int32_t eax_1
        int32_t edx_3
        edx_3:eax_1 = sx.q(esi_2)
        int32_t ecx_4 = (eax_1 - edx_3) s>> 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(ecx_4)
        esi_2 = ecx_4 + ((eax_4 - edx_4) s>> 1)
        int32_t* var_c
        
        if ((var_10 - ebx) s/ 0xc s>= (edi - var_c) s/ 0xc)
            sub_5935f0(esi_2, arg5)
            edi = var_10
        else
            sub_5935f0(esi_2, arg5)
            ebx = var_c
        
        int32_t edx_11
        edx_11:result = muls.dp.d(0x2aaaaaab, edi - ebx)
        i = (edi - ebx) s/ 0xc
    while (i s> 0x20)

if (i s< 2)
    return result

int32_t i_2 = i
return sub_5941b0(ebx, edi)
