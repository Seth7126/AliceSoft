// 函数: sub_412870
// 地址: 0x412870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
*arg2 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - *(arg1 + 0x38))
int32_t edx_3 = edx_2 s>> 2

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    void* eax_4 = *(arg1 + 0x8c)
    void* esi_1 = *(arg1 + 0x38)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - esi_1)
    int32_t edx_5 = edx_4 s>> 2
    int32_t* esi_2 = esi_1 + 0x10
    
    do
        int32_t eax_9
        int32_t edx_6
        edx_6:eax_9 = sx.q(*esi_2 * *(arg1 + 0x88))
        void* eax_12 = ((eax_9 - edx_6) s>> 1) + eax_4 * 2
        
        if (eax_12 s> *arg2)
            *arg2 = eax_12
        
        i += 1
        esi_2 = &esi_2[6]
    while (i s< (edx_5 u>> 0x1f) + edx_5)

int32_t eax_13
int32_t edx_7
edx_7:eax_13 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - *(arg1 + 0x38))
int32_t edx_8 = edx_7 s>> 2
*arg3 = ((edx_8 u>> 0x1f) + edx_8) * *(arg1 + 0x88) + (*(arg1 + 0x8c) << 1)
return arg3
