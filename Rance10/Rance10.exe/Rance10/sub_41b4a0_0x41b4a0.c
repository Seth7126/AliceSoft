// 函数: sub_41b4a0
// 地址: 0x41b4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 4
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
void* result = sub_6ca100(ebp, i_1)

if (i_1 s> 0)
    int32_t esi_1 = 0
    int32_t i
    
    do
        void** eax_4 = *(arg1 + 8) + esi_1
        arg2 = eax_4[4]
        int32_t ecx_2 = eax_4[5]
        void** edx_4
        
        if (ecx_2 u< 0x10)
            edx_4 = eax_4
        else
            edx_4 = *eax_4
        
        if (ecx_2 u>= 0x10)
            eax_4 = *eax_4
        
        int32_t var_20_1 = 0.d
        sub_6ca200(ebp + 4, *(ebp + 8), eax_4, arg2 + edx_4)
        arg2.b = 0
        sub_4263a0(ebp + 4, &arg2)
        char* ecx_10 = *(arg1 + 8) + 0x30 + esi_1
        int32_t edx_5 = *(ecx_10 + 0x14)
        arg2 = *(ecx_10 + 0x10)
        char* eax_6
        
        if (edx_5 u< 0x10)
            eax_6 = ecx_10
        else
            eax_6 = *ecx_10
        
        if (edx_5 u>= 0x10)
            ecx_10 = *ecx_10
        
        int32_t var_20_3 = 0.d
        sub_6ca200(ebp + 4, *(ebp + 8), ecx_10, eax_6 + arg2)
        arg2.b = 0
        result = sub_4263a0(ebp + 4, &arg2)
        esi_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
