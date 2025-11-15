// 函数: sub_49f830
// 地址: 0x49f830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char** var_4 = arg1
int32_t eax_1 = arg3 & 0xfff0

if (eax_1 == 0xf120)
    sub_49f640(arg1, arg2)
    return 0

if (eax_1 == 0x9cb0)
    (*(arg1[1] + 0x3c))()
    return 0

if (eax_1 == 0xf020)
    if ((*(arg1[1] + 0x74))() != 0)
        sub_49e170(arg1)
else if (eax_1 == 0xf030)
    sub_49f5c0(arg1, arg2)
    return 0

if ((eax_1 == 0xf140 || eax_1 == 0xf170) && (*(arg1[0x72] + 4))() != 0)
    return 1

return DefWindowProcA(arg2, 0x112, arg3, arg4)
