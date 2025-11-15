// 函数: sub_5910a0
// 地址: 0x5910a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** esi = *(arg1 + 0x28)
int32_t edi = *(arg1 + 0x2c)

if (esi != edi)
    int32_t* eax_1 = arg2
    int32_t ecx = eax_1[4]
    int32_t var_4_1 = ecx
    
    while (true)
        int32_t* edx_1
        
        if (eax_1[5] u< 0x10)
            edx_1 = eax_1
        else
            edx_1 = *eax_1
        
        int32_t* var_8_1
        
        if (esi[5] u< 0x10)
            var_8_1 = esi
        else
            var_8_1 = *esi
        
        int32_t ebp_1 = esi[4]
        int32_t eax_3 = ecx
        
        if (ebp_1 u< ecx)
            eax_3 = ebp_1
        
        ecx = var_4_1
        
        if (sub_406ac0(eax_3, edx_1, var_8_1, eax_3) == 0 && ebp_1 u>= ecx && ebp_1 u<= ecx)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = muls.dp.d(0x2aaaaaab, esi - *(arg1 + 0x28))
            int32_t edx_3 = edx_2 s>> 3
            return (edx_3 u>> 0x1f) + edx_3
        
        esi = &esi[0xc]
        
        if (esi == edi)
            break
        
        eax_1 = arg2

return 0xffffffff
