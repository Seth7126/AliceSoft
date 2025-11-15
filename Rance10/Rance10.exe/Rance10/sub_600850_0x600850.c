// 函数: sub_600850
// 地址: 0x600850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx

if (arg2 u> 6)
    sub_602420(arg1)
    return arg1

switch (arg2)
    case 0
        void* esi = *arg3
        int32_t* eax_2 = sub_603560(esi)
        int32_t ecx_2
        int32_t edx
        
        if (*(esi + 0x10) != 0x5f)
            edx = arg2
            ecx_2 = arg2
        else
            ecx_2 = *(esi + 0x18)
            edx = *(esi + 0x14)
        
        (*(*eax_2 + 4))(ecx_2, edx)
        *arg1 = 0
        return arg1
    case 1
        void* esi_1 = *arg3
        int32_t* eax_6 = sub_603560(esi_1)
        int32_t ecx_6
        int32_t edx_1
        
        if (*(esi_1 + 0x10) != 0x5f)
            edx_1 = arg2
            ecx_6 = arg2
        else
            ecx_6 = *(esi_1 + 0x18)
            edx_1 = *(esi_1 + 0x14)
        
        (*(*eax_6 + 8))(ecx_6, edx_1)
        *arg1 = 0
        return arg1
    case 2
        arg1[1] = (*(*sub_603560(*arg3) + 0x10))()
        *arg1 = 0xa
        return arg1
    case 3
        uint32_t ecx_18 = (*(*sub_603560(*arg3) + 0x10))() == 0
        *arg1 = 0x2f
        arg1[1] = ecx_18
        return arg1
    case 4
        void* esi_2 = *arg3
        int32_t* eax_16 = sub_603560(esi_2)
        int32_t ecx_21
        int32_t edx_4
        
        if (*(esi_2 + 0x10) != 0x5f)
            edx_4 = arg2
            ecx_21 = arg2
        else
            ecx_21 = *(esi_2 + 0x18)
            edx_4 = *(esi_2 + 0x14)
        
        int32_t ecx_23
        ecx_23.b = (*(*eax_16 + 0x14))(ecx_21, edx_4) != 0
        *arg1 = 0x2f
        arg1[1] = ecx_23
        return arg1
    case 5
        void* esi_3 = *arg3
        int32_t* eax_22 = sub_603560(esi_3)
        int32_t ecx_26
        int32_t edx_6
        
        if (*(esi_3 + 0x10) != 0x5f)
            edx_6 = arg2
            ecx_26 = arg2
        else
            ecx_26 = *(esi_3 + 0x18)
            edx_6 = *(esi_3 + 0x14)
        
        (*(*eax_22 + 0xc))(ecx_26, edx_6)
        *arg1 = 0
        return arg1
    case 6
        (**sub_603560(*arg3))()
        *arg1 = 0
        return arg1
