// 函数: sub_4e7d90
// 地址: 0x4e7d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
int32_t var_4 = 0
sub_4e1d40(arg5, arg4, &var_8, &var_4, *(arg1 + 0x1e4), *(arg1 + 0x1e8))
int32_t edi_2 = arg3 - var_4 - 6
int32_t* eax_1 = *(arg1 + 0x1dc) - 1

switch (eax_1)
    case nullptr
        *arg6 = 3
        *arg7 = 3
        return arg7
    case 1
        int32_t eax_5
        int32_t edx
        edx:eax_5 = sx.q(arg2 - var_8 - 6)
        *arg6 = ((eax_5 - edx) s>> 1) + 3
        *arg7 = 3
        return arg7
    case 2
        *arg6 = arg2 - var_8 - 3
        *arg7 = 3
        return arg7
    case 3
        int32_t eax_13
        int32_t edx_1
        edx_1:eax_13 = sx.q(edi_2)
        *arg6 = 3
        *arg7 = ((eax_13 - edx_1) s>> 1) + 3
        return ((eax_13 - edx_1) s>> 1) + 3
    case 4
        int32_t eax_18
        int32_t edx_2
        edx_2:eax_18 = sx.q(arg2 - var_8 - 6)
        *arg6 = ((eax_18 - edx_2) s>> 1) + 3
        int32_t eax_23
        int32_t edx_3
        edx_3:eax_23 = sx.q(edi_2)
        *arg7 = ((eax_23 - edx_3) s>> 1) + 3
        return ((eax_23 - edx_3) s>> 1) + 3
    case 5
        *arg6 = arg2 - var_8 - 3
        int32_t eax_29
        int32_t edx_4
        edx_4:eax_29 = sx.q(edi_2)
        *arg7 = ((eax_29 - edx_4) s>> 1) + 3
        return ((eax_29 - edx_4) s>> 1) + 3
    case 6
        *arg6 = 3
        *arg7 = edi_2 + 3
        return arg7
    case 7
        int32_t eax_36
        int32_t edx_5
        edx_5:eax_36 = sx.q(arg2 - var_8 - 6)
        *arg6 = ((eax_36 - edx_5) s>> 1) + 3
        *arg7 = edi_2 + 3
        return arg7
    case 8
        *arg6 = arg2 - var_8 - 3
        eax_1 = arg7
        *eax_1 = edi_2 + 3

return eax_1
