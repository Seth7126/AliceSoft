// 函数: sub_60b5b0
// 地址: 0x60b5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ebp = arg2
int32_t ebx = ebp[4]

if (ebx == 0)
    return 0xffffffff

arg2 = nullptr
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x8c) - *(arg1 + 0x88))
int32_t edx_1 = edx s>> 2

if (edx_1 u>> 0x1f != neg.d(edx_1))
    void* esi_1 = *(arg1 + 0x88)
    int32_t edx_4
    void* i
    
    do
        int32_t* edx_2
        
        if (ebp[5] u< 0x10)
            edx_2 = ebp
        else
            edx_2 = *ebp
        
        int32_t* ecx_3
        
        if (*(esi_1 + 0x14) u< 0x10)
            ecx_3 = esi_1
        else
            ecx_3 = *esi_1
        
        int32_t edi_1 = *(esi_1 + 0x10)
        int32_t eax_4 = ebx
        
        if (edi_1 u< ebx)
            eax_4 = edi_1
        
        if (sub_406ac0(eax_4, edx_2, ecx_3, eax_4) == 0 && edi_1 u>= ebx && edi_1 u<= ebx)
            return arg2
        
        esi_1 += 0x18
        i = arg2 + 1
        arg2 = i
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x8c) - *(arg1 + 0x88))
        edx_4 = edx_3 s>> 2
    while (i u< (edx_4 u>> 0x1f) + edx_4)

return 0xffffffff
