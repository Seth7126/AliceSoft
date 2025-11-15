// 函数: sub_59f440
// 地址: 0x59f440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t** esi_2 = *(arg1 + 4) + 8
    int32_t ebx_1 = arg2[4]
    int32_t edx_6
    int32_t i
    
    do
        int32_t* edx_4
        
        if (arg2[5] u< 0x10)
            edx_4 = arg2
        else
            edx_4 = *arg2
        
        int32_t* ecx
        
        if (esi_2[5] u< 0x10)
            ecx = esi_2
        else
            ecx = *esi_2
        
        int32_t edi_1 = esi_2[4]
        int32_t eax_4 = ebx_1
        
        if (edi_1 u< ebx_1)
            eax_4 = edi_1
        
        if (sub_406ac0(eax_4, edx_4, ecx, eax_4) == 0 && edi_1 u>= ebx_1 && edi_1 u<= ebx_1)
            return result
        
        esi_2 = &esi_2[0xd3]
        i = result + 1
        result = i
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
        edx_6 = edx_5 s>> 4
    while (i s< (edx_6 u>> 0x1f) + edx_6)

return 0xffffffff
