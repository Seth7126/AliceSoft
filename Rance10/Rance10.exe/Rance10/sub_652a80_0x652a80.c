// 函数: sub_652a80
// 地址: 0x652a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[5] != 0x64)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

arg1[0x14] = arg2
arg1[0x3a].b = 0
arg1[0x3c].b = 0

if (arg2 u> 7)
    *(*arg1 + 0x14) = 0xb
    return (**arg1)(arg1)

int32_t* eax_13
int32_t* eax_22
int32_t* ecx_3

switch (arg2)
    case 0
        int32_t eax_5 = arg1[9]
        arg1[0x13] = eax_5
        
        if (eax_5 s< 1 || eax_5 s> 0xa)
            *(*arg1 + 0x14) = 0x1b
            *(*arg1 + 0x18) = arg1[0x13]
            *(*arg1 + 0x1c) = 0xa
            eax_5 = (**arg1)(arg1)
        
        int32_t i = 0
        
        if (arg1[0x13] s<= 0)
            return eax_5
        
        int32_t edx = 0
        int32_t* eax_12
        
        do
            eax_12 = arg1[0x15] + edx
            edx += 0x58
            *eax_12 = i
            i += 1
            eax_12[2] = 1
            eax_12[3] = 1
            eax_12[4] = 0
            eax_12[5] = 0
            eax_12[6] = 0
        while (i s< arg1[0x13])
        
        return eax_12
    case 1
        eax_13 = arg1[0x15]
        arg1[0x3a].b = 1
        arg1[0x13] = 1
        *eax_13 = 1
    label_652b5d:
        eax_13[2] = 1
        eax_13[3] = 1
        goto label_652b6b
    case 2
        int32_t* ecx_1 = arg1[0x15]
        arg1[0x3c].b = 1
        arg1[0x13] = 3
        *ecx_1 = 0x52
        ecx_1[2] = 1
        ecx_1[3] = 1
        ecx_1[4] = 0
        int32_t eax_14
        eax_14.b = arg1[0x3d] == 1
        ecx_1[5] = eax_14
        int32_t eax_15
        eax_15.b = arg1[0x3d] == 1
        ecx_1[6] = eax_15
        void* eax_16 = arg1[0x15]
        *(eax_16 + 0x58) = 0x47
        *(eax_16 + 0x60) = 1
        *(eax_16 + 0x64) = 1
        *(eax_16 + 0x68) = 0
        *(eax_16 + 0x6c) = 0
        *(eax_16 + 0x70) = 0
        ecx_3 = arg1[0x15] + 0xb0
        *ecx_3 = 0x42
    label_652c09:
        ecx_3[2] = 1
        ecx_3[3] = 1
        ecx_3[4] = 0
        int32_t eax_17
        eax_17.b = arg1[0x3d] == 1
        ecx_3[5] = eax_17
        int32_t eax_18
        eax_18.b = arg1[0x3d] == 1
        ecx_3[6] = eax_18
        return eax_18
    case 3
        int32_t* eax_19 = arg1[0x15]
        arg1[0x3a].b = 1
        arg1[0x13] = 3
        *eax_19 = 1
        eax_19[2] = 2
        eax_19[3] = 2
        eax_19[4] = 0
        eax_19[5] = 0
        eax_19[6] = 0
        void* eax_20 = arg1[0x15]
        *(eax_20 + 0x58) = 2
        __builtin_memcpy(eax_20 + 0x60, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        eax_22 = arg1[0x15] + 0xb0
        *eax_22 = 3
        __builtin_memcpy(&eax_22[2], 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        return eax_22
    case 4
        int32_t* eax_23 = arg1[0x15]
        arg1[0x3c].b = 1
        arg1[0x13] = 4
        *eax_23 = 0x43
        eax_23[2] = 1
        eax_23[3] = 1
        eax_23[4] = 0
        eax_23[5] = 0
        eax_23[6] = 0
        void* eax_24 = arg1[0x15]
        *(eax_24 + 0x58) = 0x4d
        *(eax_24 + 0x60) = 1
        *(eax_24 + 0x64) = 1
        *(eax_24 + 0x68) = 0
        *(eax_24 + 0x6c) = 0
        *(eax_24 + 0x70) = 0
        int32_t* eax_26 = arg1[0x15] + 0xb0
        *eax_26 = 0x59
        eax_26[2] = 1
        eax_26[3] = 1
        eax_26[4] = 0
        eax_26[5] = 0
        eax_26[6] = 0
        eax_13 = arg1[0x15] + 0x108
        *eax_13 = 0x4b
        goto label_652b5d
    case 5
        int32_t* eax_28 = arg1[0x15]
        arg1[0x3c].b = 1
        arg1[0x13] = 4
        *eax_28 = 1
        eax_28[2] = 2
        eax_28[3] = 2
        eax_28[4] = 0
        eax_28[5] = 0
        eax_28[6] = 0
        void* eax_29 = arg1[0x15]
        *(eax_29 + 0x58) = 2
        __builtin_memcpy(eax_29 + 0x60, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        int32_t* eax_31 = arg1[0x15] + 0xb0
        *eax_31 = 3
        __builtin_memcpy(&eax_31[2], 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        eax_13 = arg1[0x15] + 0x108
        *eax_13 = 4
        eax_13[2] = 2
        eax_13[3] = 2
    label_652b6b:
        eax_13[4] = 0
        eax_13[5] = 0
        eax_13[6] = 0
        return eax_13
    case 6
        int32_t* ecx_4 = arg1[0x15]
        arg1[0x3a].w = 0x201
        arg1[0x13] = 3
        *ecx_4 = 0x72
        ecx_4[2] = 1
        ecx_4[3] = 1
        ecx_4[4] = 0
        int32_t eax_33
        eax_33.b = arg1[0x3d] == 1
        ecx_4[5] = eax_33
        int32_t eax_34
        eax_34.b = arg1[0x3d] == 1
        ecx_4[6] = eax_34
        void* eax_35 = arg1[0x15]
        *(eax_35 + 0x58) = 0x67
        *(eax_35 + 0x60) = 1
        *(eax_35 + 0x64) = 1
        *(eax_35 + 0x68) = 0
        *(eax_35 + 0x6c) = 0
        *(eax_35 + 0x70) = 0
        ecx_3 = arg1[0x15] + 0xb0
        *ecx_3 = 0x62
        goto label_652c09
    case 7
        int32_t* eax_36 = arg1[0x15]
        arg1[0x3a].w = 0x201
        arg1[0x13] = 3
        *eax_36 = 1
        eax_36[2] = 2
        eax_36[3] = 2
        eax_36[4] = 0
        eax_36[5] = 0
        eax_36[6] = 0
        void* eax_37 = arg1[0x15]
        *(eax_37 + 0x58) = 0x22
        __builtin_memcpy(eax_37 + 0x60, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        eax_22 = arg1[0x15] + 0xb0
        *eax_22 = 0x23
        __builtin_memcpy(&eax_22[2], 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        return eax_22
