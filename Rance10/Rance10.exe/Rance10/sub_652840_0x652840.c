// 函数: sub_652840
// 地址: 0x652840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0xa]

if (eax u> 7)
    *(*arg1 + 0x14) = 0xa
    return (**arg1)(arg1)

switch (eax)
    case 0
        return sub_652a80(arg1, 0) __tailcall
    case 1
        return sub_652a80(arg1, 1) __tailcall
    case 2, 3
        return sub_652a80(arg1, 3) __tailcall
    case 4
        return sub_652a80(arg1, 4) __tailcall
    case 5
        return sub_652a80(arg1, 5) __tailcall
    case 6
        if (arg1[5] != 0x64)
            *(*arg1 + 0x14) = 0x15
            *(*arg1 + 0x18) = arg1[5]
            (**arg1)(arg1)
        
        int32_t* ecx_6 = arg1[0x15]
        arg1[0x14] = 6
        arg1[0x3c].b = 0
        arg1[0x3a].w = 0x201
        arg1[0x13] = 3
        *ecx_6 = 0x72
        ecx_6[2] = 1
        ecx_6[3] = 1
        ecx_6[4] = 0
        int32_t eax_10
        eax_10.b = arg1[0x3d] == 1
        ecx_6[5] = eax_10
        int32_t eax_11
        eax_11.b = arg1[0x3d] == 1
        ecx_6[6] = eax_11
        void* eax_12 = arg1[0x15]
        *(eax_12 + 0x58) = 0x67
        *(eax_12 + 0x60) = 1
        *(eax_12 + 0x64) = 1
        *(eax_12 + 0x68) = 0
        *(eax_12 + 0x6c) = 0
        *(eax_12 + 0x70) = 0
        int32_t* ecx_8 = arg1[0x15] + 0xb0
        *ecx_8 = 0x62
        ecx_8[2] = 1
        ecx_8[3] = 1
        ecx_8[4] = 0
        int32_t eax_13
        eax_13.b = arg1[0x3d] == 1
        ecx_8[5] = eax_13
        int32_t eax_14
        eax_14.b = arg1[0x3d] == 1
        ecx_8[6] = eax_14
        return eax_14
    case 7
        if (arg1[5] != 0x64)
            *(*arg1 + 0x14) = 0x15
            *(*arg1 + 0x18) = arg1[5]
            (**arg1)(arg1)
        
        int32_t* eax_19 = arg1[0x15]
        arg1[0x14] = 7
        arg1[0x3c].b = 0
        arg1[0x3a].w = 0x201
        arg1[0x13] = 3
        *eax_19 = 1
        eax_19[2] = 2
        eax_19[3] = 2
        eax_19[4] = 0
        eax_19[5] = 0
        eax_19[6] = 0
        void* eax_20 = arg1[0x15]
        *(eax_20 + 0x58) = 0x22
        __builtin_memcpy(eax_20 + 0x60, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        int32_t* eax_22 = arg1[0x15] + 0xb0
        *eax_22 = 0x23
        __builtin_memcpy(&eax_22[2], 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        return eax_22
