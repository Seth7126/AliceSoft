// 函数: sub_581e30
// 地址: 0x581e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 4
int32_t i = 0

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    void* ecx = *(arg1 + 0x20)
    int32_t* esi_1 = ecx + 0x1c
    int32_t edx_5
    
    do
        if (*esi_1 == arg3)
            *(arg2 + 0x14) = 0xf
            *(arg2 + 0x10) = 0
            *arg2 = 0
            sub_401ff0(arg2, ecx + i * 0x28 + 4, 0, 0xffffffff)
            return arg2
        
        i += 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0x24) - *(arg1 + 0x20))
        esi_1 = &esi_1[0xa]
        edx_5 = edx_4 s>> 4
    while (i s< (edx_5 u>> 0x1f) + edx_5)

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
