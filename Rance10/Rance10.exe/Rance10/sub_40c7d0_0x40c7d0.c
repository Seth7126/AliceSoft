// 函数: sub_40c7d0
// 地址: 0x40c7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x10)
int32_t* edi = arg2
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x4ec4ec4f, *(esi + 0x24) - *(esi + 0x20))
int32_t edx_3 = edx_2 s>> 4
sub_6ca100(edi, (edx_3 u>> 0x1f) + edx_3)
int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x4ec4ec4f, *(esi + 0x24) - *(esi + 0x20))
int32_t i = 0
int32_t edx_5 = edx_4 s>> 4

if ((edx_5 u>> 0x1f) + edx_5 s> 0)
    int32_t* ebx_1 = nullptr
    int32_t edx_10
    
    do
        sub_6ca100(edi, *(ebx_1 + *(esi + 0x20)))
        void* eax_11 = *(esi + 0x20) + 4 + ebx_1
        arg2 = *(eax_11 + 0x10)
        int32_t ecx_5 = *(eax_11 + 0x14)
        void* edx_6
        
        if (ecx_5 u< 0x10)
            edx_6 = eax_11
        else
            edx_6 = *eax_11
        
        if (ecx_5 u>= 0x10)
            eax_11 = *eax_11
        
        int32_t var_2c_2 = 0.d
        sub_6ca200(&edi[1], edi[2], eax_11, arg2 + edx_6)
        arg2.b = 0
        sub_4263a0(&edi[1], &arg2)
        void* ecx_12 = *(esi + 0x20) + 0x1c + ebx_1
        int32_t edx_7 = *(ecx_12 + 0x14)
        arg2 = *(ecx_12 + 0x10)
        void* eax_13
        
        if (edx_7 u< 0x10)
            eax_13 = ecx_12
        else
            eax_13 = *ecx_12
        
        if (edx_7 u>= 0x10)
            ecx_12 = *ecx_12
        
        int32_t var_2c_4 = 0.d
        sub_6ca200(&edi[1], edi[2], ecx_12, eax_13 + arg2)
        arg2.b = 0
        sub_4263a0(&edi[1], &arg2)
        int32_t var_14 = 0xffffffff
        int32_t var_10 = 0xffffffff
        void* eax_16 = *(arg1 + 0x10)
        arg2 = *(eax_16 + 4)
        int32_t* ecx_16 = *(eax_16 + 0xc)
        int32_t eax_17
        
        if (ecx_16 != 0)
            eax_17 = (*(*ecx_16 + 0x48))(i)
        else
            eax_17 = 0xffffffff
        
        (**arg2)(&var_14, &var_10, eax_17)
        sub_6ca100(edi, var_14)
        sub_6ca100(edi, var_10)
        ebx_1 = &ebx_1[0xd]
        i += 1
        int32_t eax_19
        int32_t edx_9
        edx_9:eax_19 = muls.dp.d(0x4ec4ec4f, *(esi + 0x24) - *(esi + 0x20))
        edx_10 = edx_9 s>> 4
    while (i s< (edx_10 u>> 0x1f) + edx_10)

int32_t result
result.b = 1
return result
