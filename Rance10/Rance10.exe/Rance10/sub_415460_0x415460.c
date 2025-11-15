// 函数: sub_415460
// 地址: 0x415460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_5

switch (*(arg1 + 4) - 0xa)
    case 0, 0x25, 0x52
        *(arg1 + 0x44) = arg3
        *(arg1 + 0x48) = arg4
        eax_5 = *arg2
    label_41549c:
        *(arg1 + 0x4c) = eax_5
        *(arg1 + 0x78) = 1
        eax_5.b = *(arg1 + 0x78)
        return eax_5
    case 1
        *(arg1 + 0x44) = arg3
        *(arg1 + 0x48) = arg4
        arg2 = *arg2
        int32_t* xmm0 = arg2
        *(arg1 + 0x78) = 1
        int32_t* eax_9
        eax_9.b = *(arg1 + 0x78)
        *(arg1 + 0x50) = xmm0
        return eax_9
    case 2, 0xa
        int32_t edx_1 = *arg2
        *(arg1 + 0x44) = edx_1
        char eax_13 = sub_415810(arg1 + 0x54, (*(*arg6 + 4))(edx_1))
        *(arg1 + 0x78) = eax_13
        return eax_13
    case 3, 0xb, 0x4f
        int32_t var_14_2 = arg7
        int32_t eax_15 = *arg2
        *(arg1 + 0x44) = eax_15
        char eax_16 = sub_415890(eax_15, arg1 + 0x6c, arg1 + 8, arg5, arg6, eax_15)
        *(arg1 + 0x78) = eax_16
        return eax_16
    case 8, 9, 0x29, 0x53
        *(arg1 + 0x44) = *arg2
        int32_t* eax_29 = (*(*arg6 + 4))(arg3)
        
        if (sub_4157c0(eax_29, eax_29, arg1 + 0x48, arg4 + 1) == 0)
            return 0
        
        int32_t var_14_6 = *(arg1 + 0x48)
        int32_t* eax_32 = (*(*arg6 + 4))(*(arg1 + 0x44))
        
        if (sub_4157c0(eax_32, eax_32, &arg2, var_14_6) == 0)
            return 0
        
        eax_5 = arg2
        
        if (*(arg1 + 4) != 0x13)
            goto label_41549c
        
        arg2 = eax_5
        int32_t* xmm0_1 = arg2
        *(arg1 + 0x78) = 1
        eax_5.b = *(arg1 + 0x78)
        *(arg1 + 0x50) = xmm0_1
        return eax_5
    case 0x35, 0x39
        int32_t edx_5 = *arg2
        *(arg1 + 0x44) = edx_5
        char eax_23 = sub_415860(arg1 + 0x4c, (*(*arg6 + 4))(edx_5))
        *(arg1 + 0x78) = eax_23
        return eax_23
    case 0x45, 0x46
        int32_t eax_18 = *arg2
        *(arg1 + 0x44) = eax_18
        char eax_19 = sub_415a60(eax_18, arg5, arg1 + 0x6c, arg6, eax_18, arg1 + 4, arg7)
        *(arg1 + 0x78) = eax_19
        return eax_19
    case 0x48
        *(arg1 + 0x44) = *arg2
        int32_t* eax_38 = (*(*arg6 + 4))(arg3)
        
        if (sub_4157c0(eax_38, eax_38, arg1 + 0x48, arg4 + 1) == 0)
            return 0
        
        int32_t var_14_8 = *(arg1 + 0x48)
        int32_t* eax_40 = (*(*arg6 + 4))(*(arg1 + 0x44))
        
        if (sub_4157c0(eax_40, eax_40, &arg2, var_14_8) == 0)
            return 0
        
        int32_t var_14_9 = sub_416c30(arg1 + 0x6c, 1)
        sub_415730(*(arg1 + 0x6c) + 4, sub_419bb0(arg1 + 4))
        *(arg1 + 0x6c)
        sub_415460(&arg2, *(arg1 + 0x44), *(arg1 + 0x48), arg5, arg6, arg7 + 1)
        *(arg1 + 0x78) = 1

uint32_t eax_1
eax_1.b = *(arg1 + 0x78)
return eax_1
