// 函数: sub_4742d0
// 地址: 0x4742d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_26

if (arg1 u> 0x1f)
    eax_26.b = 0
    return eax_26

switch (arg1)
    case 0
        sub_4785e0(*arg2 != 0)
        void* eax_1
        eax_1.b = 1
        return eax_1
    case 1
        void* ecx_1 = *(data_75d4e4 + 0x93c)
        
        if (ecx_1 != 0)
            *arg3 = sub_46e9a0(ecx_1 + 0x94, *arg2, arg2[1])
            int32_t eax_5
            eax_5.b = 1
            return eax_5
        
    label_474317:
        *arg3 = 0
        int32_t eax_4
        eax_4.b = 1
        return 1
    case 2
        int32_t esi_2 = *arg2
        void* ecx_5 = *(data_75d4e4 + 0x93c)
        
        if (ecx_5 != 0)
            int32_t eax_9
            eax_9.b = sub_46e9a0(ecx_5 + 0x94, esi_2, esi_2) != esi_2
            *arg3 = zx.d(eax_9.b)
            uint32_t* eax_10
            eax_10.b = 1
            return eax_10
        
    label_474352:
        *arg3 = 0
        int32_t* eax_8
        eax_8.b = 1
        return eax_8
    case 3
        arg1.b = arg2[2] != 0
        *arg3 = zx.d(sub_475ce0(*arg2, arg2[1], arg1.b))
        uint32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 4
        *arg3 = zx.d(sub_478620(*arg2, arg2[1]))
        uint32_t* eax_15
        eax_15.b = 1
        return eax_15
    case 5
        *arg2
        *arg3 = zx.d(sub_478700())
        uint32_t* eax_17
        eax_17.b = 1
        return eax_17
    case 6
        *arg3 = zx.d(sub_478730())
        uint32_t* eax_19
        eax_19.b = 1
        return eax_19
    case 7
        void* ecx_16 = *(data_75d4e4 + 0x93c)
        
        if (ecx_16 == 0)
            goto label_474317
        
        *arg3 = sub_46e9a0(ecx_16 + 0x78, *arg2, arg2[1])
        int32_t eax_22
        eax_22.b = 1
        return eax_22
    case 8
        int32_t* ecx_19 = *(data_75d4e4 + 0x93c)
        
        if (ecx_19 == 0)
            goto label_474352
        
        int32_t var_8_4 = *arg2
        *arg3 = zx.d(sub_476220(ecx_19))
        uint32_t* eax_25
        eax_25.b = 1
        return eax_25
    case 9
        eax_26.b = arg2[2] != 0
        uint32_t eax_27 = zx.d(eax_26.b)
        *arg3 = zx.d(sub_478750(eax_27, arg2[1], *arg2, eax_27))
        uint32_t* eax_29
        eax_29.b = 1
        return eax_29
    case 0xa
        *arg3 = zx.d(sub_478840(*arg2))
        uint32_t* eax_31
        eax_31.b = 1
        return eax_31
    case 0xb
        int32_t* ecx_27 = *(data_75d4e4 + 0x93c)
        
        if (ecx_27 == 0)
            goto label_474352
        
        int32_t var_8_6 = *arg2
        *arg3 = zx.d(sub_476380(ecx_27))
        uint32_t* eax_34
        eax_34.b = 1
        return eax_34
    case 0xc
        int32_t* ecx_29 = *(data_75d4e4 + 0x93c)
        
        if (ecx_29 == 0)
            goto label_474352
        
        int32_t var_8_7 = *arg2
        *arg3 = zx.d(sub_476420(ecx_29))
        uint32_t* eax_37
        eax_37.b = 1
        return eax_37
    case 0xd
        int32_t* ecx_31 = *(data_75d4e4 + 0x93c)
        
        if (ecx_31 == 0)
            goto label_474352
        
        int32_t var_8_8 = *arg2
        *arg3 = zx.d(sub_4764a0(ecx_31))
        uint32_t* eax_40
        eax_40.b = 1
        return eax_40
    case 0xe
        *arg3 = zx.d(sub_478860(*arg2, arg2[1]))
        uint32_t* eax_42
        eax_42.b = 1
        return eax_42
    case 0xf
        int32_t* ecx_36 = *(data_75d4e4 + 0x93c)
        
        if (ecx_36 == 0)
            goto label_474317
        
        int32_t var_8_9 = *arg2
        *arg3 = sub_476520(ecx_36)
        int32_t eax_45
        eax_45.b = 1
        return eax_45
    case 0x10
        int32_t* ecx_38 = *(data_75d4e4 + 0x93c)
        
        if (ecx_38 == 0)
            goto label_474352
        
        int32_t var_8_10 = *arg2
        *arg3 = zx.d(sub_476590(ecx_38))
        uint32_t* eax_48
        eax_48.b = 1
        return eax_48
    case 0x11
        int32_t* ecx_40 = *(data_75d4e4 + 0x93c)
        
        if (ecx_40 == 0)
            goto label_474352
        
        int32_t var_8_11 = *arg2
        *arg3 = zx.d(sub_476610(ecx_40))
        uint32_t* eax_51
        eax_51.b = 1
        return eax_51
    case 0x12
        int32_t* ecx_42 = *(data_75d4e4 + 0x93c)
        
        if (ecx_42 == 0)
            goto label_474352
        
        int32_t var_8_12 = *arg2
        *arg3 = zx.d(sub_476690(ecx_42))
        uint32_t* eax_54
        eax_54.b = 1
        return eax_54
    case 0x13
        void* eax_7 = *(data_75d4e4 + 0x93c)
        arg1.b = arg2[3] != 0
        
        if (eax_7 == 0)
            goto label_474352
        
        *arg3 = zx.d(sub_476710(eax_7, arg2[2], *arg2, arg2[1], arg1, arg2[4]))
        uint32_t* eax_57
        eax_57.b = 1
        return eax_57
    case 0x14
        int32_t* ecx_47 = *(data_75d4e4 + 0x93c)
        
        if (ecx_47 == 0)
            goto label_474352
        
        int32_t var_8_14 = *arg2
        *arg3 = zx.d(sub_4767c0(ecx_47))
        uint32_t* eax_60
        eax_60.b = 1
        return eax_60
    case 0x15
        int32_t* ecx_49 = *(data_75d4e4 + 0x93c)
        
        if (ecx_49 == 0)
            goto label_474352
        
        int32_t var_8_15 = *arg2
        *arg3 = zx.d(sub_476840(ecx_49))
        uint32_t* eax_63
        eax_63.b = 1
        return eax_63
    case 0x16
        int32_t* ecx_51 = *(data_75d4e4 + 0x93c)
        
        if (ecx_51 == 0)
            goto label_474352
        
        int32_t var_8_16 = arg2[1]
        *arg3 = zx.d(sub_4768c0(ecx_51, *arg2))
        uint32_t* eax_66
        eax_66.b = 1
        return eax_66
    case 0x17
        int32_t* ecx_53 = *(data_75d4e4 + 0x93c)
        
        if (ecx_53 == 0)
            goto label_474317
        
        int32_t var_8_17 = *arg2
        *arg3 = sub_476940(ecx_53)
        int32_t eax_69
        eax_69.b = 1
        return eax_69
    case 0x18
        int32_t* ecx_55 = *(data_75d4e4 + 0x93c)
        
        if (ecx_55 == 0)
            goto label_474317
        
        int32_t var_8_18 = *arg2
        *arg3 = sub_4769b0(ecx_55)
        int32_t eax_72
        eax_72.b = 1
        return eax_72
    case 0x19
        int32_t* ecx_57 = *(data_75d4e4 + 0x93c)
        
        if (ecx_57 == 0)
            goto label_474317
        
        int32_t var_8_19 = *arg2
        *arg3 = sub_476a20(ecx_57)
        int32_t eax_75
        eax_75.b = 1
        return eax_75
    case 0x1a
        *arg3 = zx.d(sub_4788a0(*arg2))
        uint32_t* eax_77
        eax_77.b = 1
        return eax_77
    case 0x1b
        *arg3 = sub_478960(*arg2)
        uint32_t eax_78
        eax_78.b = 1
        return eax_78
    case 0x1c
        *arg3 = sub_478a30(*arg2)
        void* eax_79
        eax_79.b = 1
        return eax_79
    case 0x1d
        void* ecx_68 = *(data_75d4e4 + 0x938)
        
        if (ecx_68 == 0)
            *arg3 = 0x3f800000
            int32_t* eax_82
            eax_82.b = 1
            return eax_82
        
        if (*(ecx_68 + 0x18) == 0 && *(ecx_68 + 0x19) == 0)
            *arg3 = 0
            int32_t* eax_83
            eax_83.b = 1
            return eax_83
        
        int32_t var_8_20 = *arg2
        *arg3 = sub_477d30(ecx_68 + 4)
        int32_t* eax_84
        eax_84.b = 1
        return eax_84
    case 0x1e
        int32_t eax_86
        uint32_t edx_21
        edx_21:eax_86 = muls.dp.d(arg2[1], *arg2)
        *arg3 = __alldiv(eax_86, edx_21, 0x3e8, 0)
        uint32_t eax_87
        eax_87.b = 1
        return eax_87
    case 0x1f
        int32_t* ecx_72 = arg2
        *arg3 = sub_478b40(*ecx_72, ecx_72[1])
        int32_t eax_88
        eax_88.b = 1
        return eax_88
