// 函数: sub_4d1ff0
// 地址: 0x4d1ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg4
int32_t var_4
int32_t* var_14_1 = &var_4
int32_t* var_18 = &arg4

if (sub_4dd530(*(arg1 + 0x14), edi) == 0)
    sub_4ce410(*(arg1 + 0xc), edi, var_18, var_14_1)
else
    sub_4dd710(*(arg1 + 0x14), edi, var_18, var_14_1)

int32_t esi_2 = *(*(arg1 + 0x10) + 0x20) - 1
int32_t ecx_4

switch (esi_2)
    case 1, 4, 7
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(arg4)
        ecx_4 = neg.d((eax_4 - edx_1) s>> 1)
    case 2, 5, 8
        ecx_4 = neg.d(arg4)
    default
        ecx_4 = 0

*arg2 = neg.d(ecx_4)

switch (esi_2)
    case 3, 4, 5
        int32_t eax_10
        int32_t edx_2
        edx_2:eax_10 = sx.q(var_4)
        *arg3 = neg.d(neg.d((eax_10 - edx_2) s>> 1))
        return arg3
    case 6, 7, 8
        *arg3 = neg.d(neg.d(var_4))
        return arg3

*arg3 = 0
return arg3
