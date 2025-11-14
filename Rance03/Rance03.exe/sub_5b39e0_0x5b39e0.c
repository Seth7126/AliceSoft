// 函数: sub_5b39e0
// 地址: 0x5b39e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5b3ef0(arg1)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, *(arg2 + 0x58) - *(arg2 + 0x54))
int32_t edx_3 = edx_2 s>> 4
sub_5b3af0(arg1, (edx_3 u>> 0x1f) + edx_3, arg2)
int32_t ecx_2 = *(arg2 + 0x88) - *(arg2 + 0x84)
void* var_14_1 = arg2
int32_t var_18_1 = ecx_2
sub_5b4ce0(*(arg1 + 0x14), *(arg1 + 0x18))
*(arg1 + 0x18) = *(arg1 + 0x14)
sub_5b44d0(arg1 + 0x14, ecx_2 s/ 0x28)
int32_t esi = 0
int32_t eax_6
int32_t edx_7
edx_7:eax_6 = muls.dp.d(0x66666667, *(arg2 + 0x88) - *(arg2 + 0x84))
int32_t edx_8 = edx_7 s>> 4
uint32_t eax_8 = edx_8 u>> 0x1f
int32_t result = eax_8 + edx_8

if (eax_8 != neg.d(edx_8))
    int32_t edi_3 = 0
    
    do
        int32_t eax_9
        int32_t edx_9
        edx_9:eax_9 = muls.dp.d(0x66666667, *(arg2 + 0x88) - *(arg2 + 0x84))
        int32_t edx_10 = edx_9 s>> 4
        int32_t eax_13
        
        if (esi u< (edx_10 u>> 0x1f) + edx_10)
            int32_t eax_14 = *(arg2 + 0x84)
            int32_t eax_15
            int32_t edx_11
            edx_11:eax_15 =
                muls.dp.d(0x2aaaaaab, *(edi_3 + eax_14 + 0x1c) - *(edi_3 + eax_14 + 0x18))
            int32_t edx_12 = edx_11 s>> 3
            eax_13 = (edx_12 u>> 0x1f) + edx_12
        else
            eax_13 = 0
        
        sub_5b3c40(arg1, esi, eax_13, arg2)
        esi += 1
        int32_t eax_18
        int32_t edx_13
        edx_13:eax_18 = muls.dp.d(0x66666667, *(arg2 + 0x88) - *(arg2 + 0x84))
        edi_3 += 0x28
        int32_t edx_14 = edx_13 s>> 4
        result = (edx_14 u>> 0x1f) + edx_14
    while (esi u< result)

return result
