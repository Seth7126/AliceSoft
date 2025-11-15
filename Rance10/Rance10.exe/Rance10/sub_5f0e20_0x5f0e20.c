// 函数: sub_5f0e20
// 地址: 0x5f0e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
int32_t* ebx = arg3
int32_t esi_1 = edi - ebx
int32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t i = esi_1 s/ 0x1c

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t i_3 = i
            sub_5f1680(ebx, edi)
            return sub_5f1710(ebx, edi)
        
        int32_t i_1 = i
        int32_t* var_10
        sub_5f13e0(result, ebx, &var_10, edi)
        int32_t eax_1
        int32_t edx_4
        edx_4:eax_1 = sx.q(esi_2)
        int32_t ecx_4 = (eax_1 - edx_4) s>> 1
        int32_t eax_4
        int32_t edx_5
        edx_5:eax_4 = sx.q(ecx_4)
        esi_2 = ecx_4 + ((eax_4 - edx_5) s>> 1)
        int32_t* var_c
        
        if ((var_10 - ebx) s/ 0x1c s>= (edi - var_c) s/ 0x1c)
            sub_5f0e20(esi_2, arg5)
            edi = var_10
        else
            sub_5f0e20(esi_2, arg5)
            ebx = var_c
        
        void* ecx_13 = edi - ebx
        void* edx_14
        edx_14:result = muls.dp.d(0x92492493, ecx_13)
        i = ecx_13 s/ 0x1c
    while (i s> 0x20)

if (i s< 2)
    return result

int32_t i_2 = i
return sub_5f1770(ebx, edi)
