// 函数: sub_44c530
// 地址: 0x44c530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_6

if (arg1 u> 0x22)
    eax_6.b = 0
    return eax_6

switch (arg1)
    case nullptr
        uint32_t ecx_1
        ecx_1.b = sub_44e220() != 0
        *arg3 = ecx_1
        uint32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 1
        *(data_75d4cc + 0x194) = *arg2
        void* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        *(data_75d4cc + 0x198) = *arg2
        void* eax_5
        eax_5.b = 1
        return eax_5
    case 3
        arg1:3.b = 0xff
        eax_6.b = *arg2
        arg1.b = eax_6.b
        eax_6.b = arg2[1].b
        arg1:1.b = eax_6.b
        eax_6.b = arg2[2].b
        arg1:2.b = eax_6.b
        *(data_75d4cc + 0x19c) = arg1
        void* eax_7
        eax_7.b = 1
        return eax_7
    case 4
        *(data_75d4cc + 0x1a0) = *arg2
        void* eax_9
        eax_9.b = 1
        return eax_9
    case 5
        *(data_75d4cc + 0x1a4) = *arg2
        void* eax_11
        eax_11.b = 1
        return eax_11
    case 6
        arg1:3.b = 0xff
        eax_6.b = *arg2
        arg1.b = eax_6.b
        eax_6.b = arg2[1].b
        arg1:1.b = eax_6.b
        eax_6.b = arg2[2].b
        arg1:2.b = eax_6.b
        *(data_75d4cc + 0x1a8) = arg1
        void* eax_12
        eax_12.b = 1
        return eax_12
    case 7
        *arg3 = zx.d(sub_44cd50(*arg2, arg2[1]))
        uint32_t* eax_14
        eax_14.b = 1
        return eax_14
    case 8
        *arg3 = *(data_75d4cc + 0x2dc)
        uint32_t* eax_16
        eax_16.b = 1
        return eax_16
    case 9
        *arg3 = zx.d(sub_44de20(data_75d4cc, *arg2) != 0)
        uint32_t* eax_19
        eax_19.b = 1
        return eax_19
    case 0xa
        *arg2
        *arg3 = zx.d(sub_44ce20())
        uint32_t* eax_22
        eax_22.b = 1
        return eax_22
    case 0xb
        *arg3 = zx.d(sub_44ce70())
        uint32_t* eax_24
        eax_24.b = 1
        return eax_24
    case 0xc
        *arg3 = zx.d(sub_44df90(*arg2))
        uint32_t* eax_27
        eax_27.b = 1
        return eax_27
    case 0xd
        *arg3 = *(data_75d4cc + 0x2b8)
        uint32_t* eax_29
        eax_29.b = 1
        return eax_29
    case 0xe
        void* ecx_20 = data_75d4cc
        int32_t edx_1 = arg2[1]
        *(ecx_20 + 0x294) = *arg2
        int32_t eax_31
        eax_31.b = 1
        *(ecx_20 + 0x298) = edx_1
        return eax_31
    case 0xf
        void* esi = data_75d4cc
        int32_t ebx
        ebx.b = *arg2 != 0
        
        if (*(esi + 0x2bc) != ebx.b)
            if (ebx.b == 0)
                sub_44eea0(esi + 0x2a8)
            
            *(esi + 0x2bc) = ebx.b
        
        *arg3 = 1
        uint32_t* eax_33
        eax_33.b = 1
        return eax_33
    case 0x10
        *arg3 = zx.d(*(data_75d4cc + 0x2bc))
        uint32_t* eax_35
        eax_35.b = 1
        return eax_35
    case 0x11
        void* ecx_23 = data_75d4cc
        
        if (*(ecx_23 + 0x2bc) != 0)
            *arg3 = zx.d(sub_44f180(ecx_23 + 0x2a8, ecx_23 + 0x29c) != 0)
            uint32_t* eax_39
            eax_39.b = 1
            return eax_39
        
        *arg3 = 1
        uint32_t* eax_36
        eax_36.b = 1
        return eax_36
    case 0x12
        sub_44ceb0()
        int32_t eax_40
        eax_40.b = 1
        return eax_40
    case 0x13
        sub_44cef0(*arg2 != 0)
        int32_t eax_42
        eax_42.b = 1
        return eax_42
    case 0x14
        *arg3 = zx.d(*(data_75d4cc + 0x2f5))
        uint32_t* eax_44
        eax_44.b = 1
        return eax_44
    case 0x15
        *(data_75d4cc + 0x2f4) = *arg2 != 0
        void* eax_46
        eax_46.b = 1
        return eax_46
    case 0x16
        *arg3 = zx.d(*(data_75d4cc + 0x2f4))
        uint32_t* eax_48
        eax_48.b = 1
        return eax_48
    case 0x17
        *(data_75d4cc + 0x2fc) = *arg2 != 0
        void* eax_50
        eax_50.b = 1
        return eax_50
    case 0x18
        *arg3 = zx.d(*(data_75d4cc + 0x2fc))
        uint32_t* eax_52
        eax_52.b = 1
        return eax_52
    case 0x19
        *(data_75d4cc + 0x2fd) = *arg2 != 0
        void* eax_54
        eax_54.b = 1
        return eax_54
    case 0x1a
        *(data_75d4cc + 0x2fe) = *arg2 != 0
        void* eax_56
        eax_56.b = 1
        return eax_56
    case 0x1b
        *arg3 = zx.d(*(data_75d4cc + 0x2fd))
        uint32_t* eax_58
        eax_58.b = 1
        return eax_58
    case 0x1c
        *(data_75d4cc + 0x2ff) = *arg2 != 0
        void* eax_60
        eax_60.b = 1
        return eax_60
    case 0x1d
        *arg3 = zx.d(*(data_75d4cc + 0x2ff))
        uint32_t* eax_62
        eax_62.b = 1
        return eax_62
    case 0x1e
        *arg3 = *(data_75d4cc + 0x308)
        int32_t* eax_64
        eax_64.b = 1
        return eax_64
    case 0x1f
        *arg3 = *(data_75d4cc + 0x30c)
        int32_t* eax_66
        eax_66.b = 1
        return eax_66
    case 0x20
        *arg3 = 0
        eax_6.b = 1
        return eax_6
    case 0x21, 0x22
        eax_6.b = 1
        return eax_6
