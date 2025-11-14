// 函数: sub_43db80
// 地址: 0x43db80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u> 0x13)
    int32_t eax_46
    eax_46.b = 0
    return eax_46

uint32_t ecx_13

switch (arg1)
    case 0
        void* edi = data_75d4c4
        int32_t var_c = sub_43f340(edi + 8)
        sub_43f250(edi + 8)
        *(edi + 0x18) = 1
        int32_t** eax
        eax.b = 1
        return eax
    case 1
        sub_43df00(*arg2, arg2[1])
        int32_t eax_1
        eax_1.b = 1
        return eax_1
    case 2
        sub_441e20()
        void* eax_2
        eax_2.b = 1
        return eax_2
    case 3
        sub_43e8e0(data_75d4c4 + 4)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 1
        return eax_3
    case 4
        sub_43dfd0(*arg2)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_4
        eax_4.b = 1
        return eax_4
    case 5
        *(data_75d4c4 + 0x18) = *arg2 != 0
        void* eax_6
        eax_6.b = 1
        return eax_6
    case 6
        *arg3 = zx.d(*(data_75d4c4 + 0x18))
        uint32_t* eax_8
        eax_8.b = 1
        return eax_8
    case 7
        void* esi_1 = data_75d4c4
        int32_t eax_10 = sub_43e1b0(*(*(esi_1 + 8) + 4) + 8)
        ecx_13 = *(esi_1 + 0xc)
        
        if (eax_10 != 0)
            goto label_43ddc9
        
        *arg3 = ecx_13 - 1
        uint32_t* eax_11
        eax_11.b = 1
        return eax_11
    case 8
        int32_t i_2 = *arg2
        int32_t* eax_15 = **(data_75d4c4 + 8)
        
        if (i_2 s> 0)
            int32_t i
            
            do
                eax_15 = *eax_15
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        *arg3 = sub_43e1b0(&eax_15[2])
        uint32_t eax_16
        eax_16.b = 1
        return eax_16
    case 9
        sub_43e0a0(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_17
        eax_17.b = 1
        return eax_17
    case 0xa
        int32_t i_3 = *arg2
        int32_t* eax_21 = **(data_75d4c4 + 8)
        
        if (i_3 s> 0)
            int32_t i_1
            
            do
                eax_21 = *eax_21
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        int32_t eax_22
        int32_t edx_2
        edx_2:eax_22 = muls.dp.d(0x2aaaaaab, eax_21[7] - eax_21[6])
        int32_t edx_3 = edx_2 s>> 2
        *arg3 = (edx_3 u>> 0x1f) + edx_3
        uint32_t* eax_23
        eax_23.b = 1
        return eax_23
    case 0xb
        sub_43e0e0(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_24
        eax_24.b = 1
        return eax_24
    case 0xc
        *arg3 = zx.d(sub_43ea40(data_75d4c4 + 4, *arg2))
        uint32_t* eax_27
        eax_27.b = 1
        return eax_27
    case 0xd
        int32_t __saved_edi_4 = *arg2
        *arg3 = zx.d(sub_43eeb0(data_75d4c4 + 4))
        uint32_t* eax_30
        eax_30.b = 1
        return eax_30
    case 0xe
        *arg3 = zx.d(sub_4418c0(data_75d4c4 + 0x20, *arg2))
        uint32_t* eax_33
        eax_33.b = 1
        return eax_33
    case 0xf
        *arg3 = *(data_75d4c4 + 0x28)
        uint32_t* eax_35
        eax_35.b = 1
        return eax_35
    case 0x10
        *arg3 = zx.d(sub_441990(data_75d4c4 + 0x20, *arg2, arg2[1]))
        uint32_t* eax_38
        eax_38.b = 1
        return eax_38
    case 0x11
        sub_441860(data_75d4c4 + 0x20)
        void* eax_39
        eax_39.b = 1
        return eax_39
    case 0x12
        *arg3 = zx.d(sub_4419e0(data_75d4c4 + 0x20, *arg2))
        uint32_t* eax_42
        eax_42.b = 1
        return eax_42
    case 0x13
        int32_t __saved_edi_8 = *arg2
        ecx_13 = zx.d(sub_441af0(data_75d4c4 + 0x20))
    label_43ddc9:
        *arg3 = ecx_13
        uint32_t* eax_45
        eax_45.b = 1
        return eax_45
