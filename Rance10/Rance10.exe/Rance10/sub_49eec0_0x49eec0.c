// 函数: sub_49eec0
// 地址: 0x49eec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::CSize::VTable* const var_c = &common::CSize::`vftable'
int32_t var_8 = *arg3 - *arg2
int32_t var_4 = *arg5 - *arg4
struct common::CSize::VTable* var_18
sub_49da60(&var_18, &var_c)

if (arg6 - 1 u> 7)
    return arg6

int32_t var_14
int32_t var_10
int32_t eax_4

switch (arg6)
    case 1, 2
        eax_4.b = arg6 == 1
        return sub_49f260(arg1, &var_18, eax_4.b, arg2, arg3, arg4, arg5)
    case 3, 6
        eax_4.b = arg6 == 3
        return sub_49f380(arg1, &var_18, eax_4.b, arg2, arg3, arg4, arg5)
    case 4
        *(arg1 + 0x60)
        int32_t var_40_2 = &var_18
        
        if (divs.dp.d(sx.q(*(arg1 + 0x64) * var_14), *(arg1 + 0x60)) s< var_10)
            sub_49f2f0(arg1, var_40_2, 1, arg2, arg3, arg4, arg5)
            return sub_49f1b0(arg2, arg3)
        
        sub_49f1d0(arg1, var_40_2, 1, arg2, arg3, arg4, arg5)
        return sub_49f190(arg4, arg5)
    case 5
        *(arg1 + 0x60)
        
        if (divs.dp.d(sx.q(*(arg1 + 0x64) * var_14), *(arg1 + 0x60)) s< var_10)
            return sub_49f380(arg1, &var_18, 1, arg2, arg3, arg4, arg5)
        
        sub_49f1d0(arg1, &var_18, 0, arg2, arg3, arg4, arg5)
        return sub_49f190(arg4, arg5)
    case 7
        *(arg1 + 0x60)
        
        if (divs.dp.d(sx.q(*(arg1 + 0x64) * var_14), *(arg1 + 0x60)) s>= var_10)
            return sub_49f260(arg1, &var_18, 1, arg2, arg3, arg4, arg5)
        
        sub_49f2f0(arg1, &var_18, 0, arg2, arg3, arg4, arg5)
        return sub_49f1b0(arg2, arg3)
    case 8
        *(arg1 + 0x60)
        char var_3c_1 = 0
        
        if (divs.dp.d(sx.q(*(arg1 + 0x64) * var_14), *(arg1 + 0x60)) s< var_10)
            return sub_49f380(arg1, &var_18, var_3c_1, arg2, arg3, arg4, arg5)
        
        return sub_49f260(arg1, &var_18, var_3c_1, arg2, arg3, arg4, arg5)
