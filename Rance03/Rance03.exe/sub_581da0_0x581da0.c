// 函数: sub_581da0
// 地址: 0x581da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    void* ebp_1 = *(arg1 + 0x20)
    int32_t* esi_1 = ebp_1 + 0x1c
    int32_t edx_5
    
    do
        if (*esi_1 == 1)
            int32_t edx_6 = i * 5
            *arg2 = *(ebp_1 + (edx_6 << 3) + 0x20)
            arg2[1] = *(ebp_1 + (edx_6 << 3) + 0x24)
            return arg2
        
        i += 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0x24) - ebp_1)
        esi_1 = &esi_1[0xa]
        edx_5 = edx_4 s>> 4
    while (i s< (edx_5 u>> 0x1f) + edx_5)

*arg2 = 0x3f800000
arg2[1] = 0x3f800000
return arg2
