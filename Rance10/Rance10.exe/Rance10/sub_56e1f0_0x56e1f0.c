// 函数: sub_56e1f0
// 地址: 0x56e1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t edi_2 = (arg2[1] - *arg2) s>> 6
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edi_2 != 0)
    if (edi_2 u> 0x3ffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    void* eax_1
    int32_t ecx
    eax_1, ecx = sub_56e3a0(edi_2)
    *arg1 = eax_1
    int32_t var_10_2 = ecx
    int32_t* var_14_1 = arg2
    arg1[1] = eax_1
    arg1[2] = (edi_2 << 6) + *arg1
    int32_t var_18_1 = ecx
    arg1[1] = sub_56e470(eax_1, arg2[1], *arg2, *arg1)

return arg1
