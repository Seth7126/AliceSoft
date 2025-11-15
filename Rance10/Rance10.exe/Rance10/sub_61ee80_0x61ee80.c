// 函数: sub_61ee80
// 地址: 0x61ee80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1

if (arg3 s>= 0)
    int32_t edi_1 = *arg1
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2aaaaaab, arg1[1] - edi_1)
    int32_t edx_2 = edx_1 s>> 1
    
    if (arg3 s< (edx_2 u>> 0x1f) + edx_2)
        sub_61eef0(arg2, edi_1 + arg3 * 0xc)
        return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
