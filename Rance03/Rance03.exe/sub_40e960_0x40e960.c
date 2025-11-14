// 函数: sub_40e960
// 地址: 0x40e960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_c = arg1
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi

switch (*(arg1 + 4) - 0xa)
    case 0, 0x25
        *(arg1 + 0x3c) = arg3
        *(arg1 + 0x40) = arg4
        *(arg1 + 0x44) = *arg2
        *(arg1 + 0x70) = 1
        int32_t eax_5
        eax_5.b = *(arg1 + 0x70)
        return eax_5
    case 1
        *(arg1 + 0x3c) = arg3
        *(arg1 + 0x40) = arg4
        *(arg1 + 0x48) = *arg2
        *(arg1 + 0x70) = 1
        int32_t eax_9
        eax_9.b = *(arg1 + 0x70)
        return eax_9
    case 2, 0xa
        int32_t edx_1 = *arg2
        *(arg1 + 0x3c) = edx_1
        char eax_13 = sub_40ec10(arg1 + 0x4c, (*(*arg6 + 4))(edx_1))
        *(arg1 + 0x70) = eax_13
        return eax_13
    case 3, 0xb
        int32_t eax_15 = *arg2
        *(arg1 + 0x3c) = eax_15
        char eax_16 = sub_40ec90(eax_15, arg1 + 0x64, arg1 + 0xc, arg5, arg6, eax_15)
        *(arg1 + 0x70) = eax_16
        return eax_16
    case 4, 5, 6, 7, 0xc, 0xd, 0xe, 0xf, 0x28, 0x2a
        int32_t ecx_3 = *arg2
        *(arg1 + 0x3c) = ecx_3
        int32_t eax_19 = (*(*arg6 + 0x24))(ecx_3)
        int32_t var_24_1 = *(arg1 + 0x3c)
        *(arg1 + 8) = eax_19
        char eax_20 = sub_40ee60(eax_19, arg5, arg1 + 0x64, arg6, var_24_1, arg1 + 4)
        *(arg1 + 0x70) = eax_20
        return eax_20
    case 8, 9, 0x29
        *(arg1 + 0x3c) = *arg2
        int32_t* eax_30 = (*(*arg6 + 4))(arg3)
        
        if (sub_40ebc0(eax_30, eax_30, arg1 + 0x40, arg4 + 1) == 0)
            return 0
        
        int32_t var_1c_6 = *(arg1 + 0x40)
        int32_t* eax_33 = (*(*arg6 + 4))(*(arg1 + 0x3c))
        
        if (sub_40ebc0(eax_33, eax_33, &var_c, var_1c_6) == 0)
            return 0
        
        if (*(arg1 + 4) == 0x13)
            uint32_t xmm0 = var_c
            *(arg1 + 0x70) = 1
            char eax_31 = *(arg1 + 0x70)
            *(arg1 + 0x48) = xmm0
            return eax_31
        
        *(arg1 + 0x44) = var_c
        *(arg1 + 0x70) = 1
    case 0x35
        int32_t edx_5 = *arg2
        *(arg1 + 0x3c) = edx_5
        char eax_24 = sub_40ec60(arg1 + 0x44, (*(*arg6 + 4))(edx_5))
        *(arg1 + 0x70) = eax_24
        return eax_24

uint32_t eax_1
eax_1.b = *(arg1 + 0x70)
return eax_1
