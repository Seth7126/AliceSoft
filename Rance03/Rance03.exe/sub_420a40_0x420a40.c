// 函数: sub_420a40
// 地址: 0x420a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1

if (arg2 s>= 0)
    int32_t ecx = data_75d5c4
    int32_t eax_1
    int32_t edx
    edx:eax_1 = muls.dp.d(0x2aaaaaab, data_75d5c8 - ecx)
    int32_t edx_1 = edx s>> 2
    
    if (arg2 s< (edx_1 u>> 0x1f) + edx_1)
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_401ff0(arg1, ecx + arg2 * 0x18, 0, 0xffffffff)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
return arg1
