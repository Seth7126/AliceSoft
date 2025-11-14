// 函数: sub_435590
// 地址: 0x435590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x30) - *(arg1 + 0x2c))
    int32_t edx_2 = edx_1 s>> 5
    
    if ((edx_2 u>> 0x1f) + edx_2 s> arg3)
        void* esi_3 = arg3 * 0x50 + *(arg1 + 0x2c)
        void* result = sub_439dd0(esi_3)
        
        if (result != 5)
            return result
        
        return sub_439e70(esi_3, *(esi_3 + 0x2c) + 8, arg2)

return 0
