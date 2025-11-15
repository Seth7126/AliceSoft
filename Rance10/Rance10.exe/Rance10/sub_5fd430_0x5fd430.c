// 函数: sub_5fd430
// 地址: 0x5fd430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
void* ebx = arg3
void* esi_1 = edi - ebx
int32_t result
void* edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t i = esi_1 s/ 0x38

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t i_3 = i
            sub_5fda90(ebx, edi)
            return sub_5fdbc0(ebx, edi)
        
        int32_t i_1 = i
        int32_t var_10
        sub_5fd730(result, ebx, &var_10, edi)
        int32_t eax_1
        int32_t edx_4
        edx_4:eax_1 = sx.q(esi_2)
        int32_t ecx_4 = (eax_1 - edx_4) s>> 1
        int32_t eax_4
        int32_t edx_5
        edx_5:eax_4 = sx.q(ecx_4)
        esi_2 = ecx_4 + ((eax_4 - edx_5) s>> 1)
        void* var_c
        
        if ((var_10 - ebx) s/ 0x38 s>= (edi - var_c) s/ 0x38)
            sub_5fd430(esi_2, arg5)
            edi = var_10
        else
            sub_5fd430(esi_2, arg5)
            ebx = var_c
        
        void* ecx_13 = edi - ebx
        void* edx_14
        edx_14:result = muls.dp.d(0x92492493, ecx_13)
        i = ecx_13 s/ 0x38
    while (i s> 0x20)

if (i s< 2)
    return result

int32_t i_2 = i
return sub_5fdc20(ebx, edi)
