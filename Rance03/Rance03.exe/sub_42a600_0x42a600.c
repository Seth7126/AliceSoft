// 函数: sub_42a600
// 地址: 0x42a600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = zx.d(arg2.w)
uint32_t esi_1 = arg2 u>> 0x10

if (ebx s> 0 && esi_1 s> 0)
    sub_42a930(arg1, ebx)
    sub_42acd0(arg1)
    sub_42b030(arg1)
    int32_t eax_2 = (*(arg1[0x21] + 0x14))()
    arg1[0x6a] = eax_2
    arg1[0x6b] = esi_1 - eax_2
    sub_42b4c0(arg1)
    
    if (arg1[0x40] s>= 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
        int32_t edx_2 = edx_1 s>> 3
        
        if (arg1[0x40] s< (edx_2 u>> 0x1f) + edx_2)
            int32_t eax_8 = (*(arg1[0x21] + 0x14))()
            MoveWindow((***(arg1[0x3d] + arg1[0x40] * 0x24))(0, eax_8, ebx, esi_1 - eax_8, 1))

return 0
