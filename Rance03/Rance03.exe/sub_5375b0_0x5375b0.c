// 函数: sub_5375b0
// 地址: 0x5375b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x178) - *(arg1 + 0x174))
    int32_t edx_4 = edx_3 s>> 2
    
    if (arg3 s< (edx_4 u>> 0x1f) + edx_4)
        void** ecx_1 = *(arg1 + 0x174) + arg3 * 0x18
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_401ff0(arg2, ecx_1, 0, 0xffffffff)
        return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
