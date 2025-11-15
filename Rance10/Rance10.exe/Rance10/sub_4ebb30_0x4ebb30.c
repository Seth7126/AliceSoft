// 函数: sub_4ebb30
// 地址: 0x4ebb30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0xa8)
int32_t edx_1 = neg.d(esi)
int32_t ecx
int32_t ecx_1

if ((sbb.d(edx_1, edx_1, esi != 0) & (esi + 0xc)) != arg2)
    ecx = *(arg1 + 0xa0)
    ecx_1 = neg.d(ecx)

if ((sbb.d(edx_1, edx_1, esi != 0) & (esi + 0xc)) == arg2
        || (sbb.d(ecx_1, ecx_1, ecx != 0) & (ecx + 0xc)) == arg2)
    int32_t eax_2
    int32_t edx_4
    edx_4:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1c4) - *(arg1 + 0x1c0))
    int32_t edx_5 = edx_4 s>> 2
    
    if (edx_5 u>> 0x1f != neg.d(edx_5))
        void* ecx_6 = *(arg1 + 0xac)
        
        if (*(ecx_6 + 0xaa) == 0 || *(ecx_6 + 0xab) == 0)
            sub_502ce0(sub_4ef320(ecx_6), *(arg1 + 0x1cc))
            *(*(arg1 + 0xac) + 0xaa) = 1
            return sub_4cbd50(arg1 + 0xc, arg3, arg2)

int32_t esi_1 = neg.d(esi)
int32_t ecx_9
int32_t ecx_10

if ((sbb.d(esi_1, esi_1, esi != 0) & (esi + 0xc)) != arg2)
    ecx_9 = *(arg1 + 0xa0)
    ecx_10 = neg.d(ecx_9)

if ((sbb.d(esi_1, esi_1, esi != 0) & (esi + 0xc)) == arg2
        || (sbb.d(ecx_10, ecx_10, ecx_9 != 0) & (ecx_9 + 0xc)) == arg2)
    void* eax_11 = *(arg1 + 0xac)
    
    if (*(eax_11 + 0xaa) != 0 && *(eax_11 + 0xab) != 0)
        *(eax_11 + 0xaa) = 0

return sub_4cbd50(arg1 + 0xc, arg3, arg2)
