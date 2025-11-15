// 函数: sub_654410
// 地址: 0x654410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

switch (arg1[5] - 0xc8)
    case 0
        (*(arg1[0x6a] + 4))(arg1)
        (*(arg1[6] + 8))(arg1)
        arg1[5] = 0xc9
    label_654457:
        int32_t result = (*arg1[0x6a])(arg1)
        
        if (result == 1)
            sub_654170(arg1)
            arg1[5] = 0xca
        
        return result
    case 1
        goto label_654457
    case 2
        return 1
    case 3, 4, 5, 6, 7, 8, 0xa
        return (*arg1[0x6a])(arg1)

*(*arg1 + 0x14) = 0x15
*(*arg1 + 0x18) = arg1[5]
(**arg1)(arg1)
return 0
