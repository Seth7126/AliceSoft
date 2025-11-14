// 函数: sub_5c1100
// 地址: 0x5c1100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = arg2
uint32_t ecx = zx.d(eax.w)
int32_t* edi
int32_t* var_10 = edi

if (ecx u<= 0x101)
    eax = zx.d(lookup_table_5c1e3c[ecx])
    int32_t* eax_82
    
    switch (eax)
        case 0
            return sub_5c2ef0(arg1)
        case 1
            arg1[0x8d] -= 4
            return eax
        case 2
            return sub_5c3020(arg1)
        case 3
            return sub_5c3170(arg1)
        case 4
            return sub_5c32a0(arg1)
        case 5
            return sub_5c3300(arg1)
        case 6
            void* ecx_8 = arg1[0x8d]
            int32_t eax_9 = neg.d(*(ecx_8 - 4))
            *(ecx_8 - 4) = eax_9
            return eax_9
        case 7
            void* ecx_9 = arg1[0x8d]
            int32_t eax_10
            eax_10.b = *(ecx_9 - 4) == 0
            *(ecx_9 - 4) = eax_10
            return eax_10
        case 8
            return sub_5c3560(arg1)
        case 9
            arg1[0x8d] -= 4
            int32_t* eax_12 = arg1[0x8d]
            int32_t eax_13 = *eax_12
            eax_12[-1] += eax_13
            return eax_13
        case 0xa
            arg1[0x8d] -= 4
            int32_t* eax_14 = arg1[0x8d]
            int32_t eax_15 = *eax_14
            eax_14[-1] -= eax_15
            return eax_15
        case 0xb
            arg1[0x8d] -= 4
            int32_t* eax_16 = arg1[0x8d]
            int32_t eax_18 = *eax_16 * eax_16[-1]
            eax_16[-1] = eax_18
            return eax_18
        case 0xc
            arg1[0x8d] -= 4
            int32_t edi_15 = *arg1[0x8d]
            
            if (edi_15 == 0)
            label_5c124b:
                void* eax_20 = arg1[0x8d]
                *(eax_20 - 4) = 0
                return eax_20
            
            void* ecx_14 = arg1[0x8d]
            int32_t temp0 = divs.dp.d(sx.q(*(ecx_14 - 4)), edi_15)
            *(ecx_14 - 4) = temp0
            return temp0
        case 0xd
            arg1[0x8d] -= 4
            int32_t* eax_24 = arg1[0x8d]
            int32_t edi_18 = *eax_24
            
            if (edi_18 == 0)
                goto label_5c124b
            
            int32_t eax_26
            int32_t edx_3
            edx_3:eax_26 = sx.q(eax_24[-1])
            eax_24[-1] = mods.dp.d(edx_3:eax_26, edi_18)
            return divs.dp.d(edx_3:eax_26, edi_18)
        case 0xe
            return sub_5c35c0(arg1)
        case 0xf
            return sub_5c3630(arg1)
        case 0x10
            return sub_5c36a0(arg1)
        case 0x11
            return sub_5c3710(arg1)
        case 0x12
            return sub_5c3780(arg1)
        case 0x13
            arg1[0x8d] -= 4
            int32_t* edx_5 = arg1[0x8d]
            int32_t eax_33 = edx_5[-1]
            int32_t ecx_21
            ecx_21.b = eax_33 s< *edx_5
            edx_5[-1] = ecx_21
            return eax_33
        case 0x14
            arg1[0x8d] -= 4
            int32_t* edx_6 = arg1[0x8d]
            int32_t eax_34 = edx_6[-1]
            int32_t ecx_22
            ecx_22.b = eax_34 s> *edx_6
            edx_6[-1] = ecx_22
            return eax_34
        case 0x15
            arg1[0x8d] -= 4
            int32_t* edx_7 = arg1[0x8d]
            int32_t eax_35 = edx_7[-1]
            int32_t ecx_23
            ecx_23.b = eax_35 s<= *edx_7
            edx_7[-1] = ecx_23
            return eax_35
        case 0x16
            arg1[0x8d] -= 4
            int32_t* edx_8 = arg1[0x8d]
            int32_t eax_36 = edx_8[-1]
            int32_t ecx_24
            ecx_24.b = eax_36 s>= *edx_8
            edx_8[-1] = ecx_24
            return eax_36
        case 0x17
            arg1[0x8d] -= 4
            int32_t* edx_9 = arg1[0x8d]
            int32_t eax_37 = edx_9[-1]
            int32_t ecx_25
            ecx_25.b = eax_37 != *edx_9
            edx_9[-1] = ecx_25
            return eax_37
        case 0x18
            arg1[0x8d] -= 4
            int32_t* edx_10 = arg1[0x8d]
            int32_t eax_38 = edx_10[-1]
            int32_t ecx_26
            ecx_26.b = eax_38 == *edx_10
            edx_10[-1] = ecx_26
            return eax_38
        case 0x19
            return sub_5c37f0(arg1)
        case 0x1a
            return sub_5c3c00(arg1)
        case 0x1b
            return sub_5c3ca0(arg1)
        case 0x1c
            return sub_5c3d40(arg1)
        case 0x1d
            return sub_5c3de0(arg1)
        case 0x1e
            return sub_5c3e90(arg1)
        case 0x1f
            return sub_5c3f50(arg1)
        case 0x20
            return sub_5c4010(arg1)
        case 0x21
            return sub_5c40d0(arg1)
        case 0x22
            return sub_5c4190(arg1)
        case 0x23
            return sub_5c4250(arg1)
        case 0x24
            return sub_5c5980(arg1)
        case 0x25
            return sub_5c5a40(arg1)
        case 0x26
            return sub_5c5b20(arg1)
        case 0x27
            return sub_5c5c00(arg1)
        case 0x28
            return sub_5c5ce0(arg1)
        case 0x29
            return sub_5c4310(arg1)
        case 0x2a
            return sub_5c43c0(arg1)
        case 0x2b
            int32_t eax_52 = arg1[0x82]
            arg1[0x82] = arg1[0x83] + *eax_52
            return eax_52
        case 0x2c
            return sub_5c4690(arg1)
        case 0x2d
            return sub_5c46d0(arg1)
        case 0x2e
            return sub_5c4710(arg1, 0)
        case 0x2f
            return sub_5c48a0(arg1)
        case 0x30
            return sub_5c4d20(arg1)
        case 0x31
            return sub_5c4dc0(arg1)
        case 0x32
            return sub_5c4e60(arg1)
        case 0x33
            return sub_5c4ec0(arg1)
        case 0x34
            return sub_5c5dd0(arg1)
        case 0x35
            return sub_5c5e40(arg1)
        case 0x36
            return sub_5c5ec0(arg1)
        case 0x37
            return sub_5c5f40(arg1)
        case 0x38
            return sub_5c5fc0(arg1)
        case 0x39
            return sub_5c6060(arg1)
        case 0x3a
            return sub_5c60e0(arg1)
        case 0x3b
            return sub_5c6160(arg1)
        case 0x3c
            return sub_5c61e0(arg1)
        case 0x3d
            return sub_5c6260(arg1)
        case 0x3e
            return sub_5c62e0(arg1)
        case 0x3f
            return sub_5c6360(arg1)
        case 0x40
            return sub_5c65b0(arg1)
        case 0x41
            arg1[0x8d] -= 4
            int32_t* ecx_71
            int32_t edx_11
            eax_82, ecx_71, edx_11 = sub_5d5e80(&arg1[0x5b], *arg1[0x8d])
            
            if (eax_82.b == 0)
                return sub_5c24e0(eax_82, edx_11, ecx_71, arg1, 0x6e71b8)
            
            return eax_82
        case 0x42
            return sub_5c66d0(arg1)
        case 0x43
            return sub_5c6870(arg1)
        case 0x44
            return sub_5c6ae0(arg1)
        case 0x45
            return sub_5c6d40(arg1)
        case 0x46
            return sub_5c6c70(arg1)
        case 0x47
            arg1[0x8d] -= 4
            int32_t* ecx_82
            int32_t edx_12
            eax_82, ecx_82, edx_12 = sub_5d5e80(&arg1[0x5b], *arg1[0x8d])
            
            if (eax_82.b == 0)
                return sub_5c24e0(eax_82, edx_12, ecx_82, arg1, 0x6e8018)
            
            return eax_82
        case 0x48
            return sub_5c8330(arg1)
        case 0x49
            return sub_5c83d0(arg1)
        case 0x4a
            return sub_5c8550(arg1)
        case 0x4b
            return sub_5c86f0(arg1)
        case 0x4c
            return sub_5c87e0(arg1)
        case 0x4d
            return sub_5c88e0(arg1)
        case 0x4e
            return sub_5c89f0(arg1)
        case 0x4f
            return sub_5c8b80(arg1)
        case 0x50
            return sub_5cb1e0(arg1)
        case 0x51
            return sub_5cb290(arg1)
        case 0x52
            return sub_5cb320(arg1)
        case 0x53
            return sub_5ce170(arg1)
        case 0x54
            return sub_5c3360(arg1)
        case 0x55
            return sub_5c4980(arg1)
        case 0x56
            return sub_5cb4a0(arg1)
        case 0x57
            return sub_5cb570(arg1)
        case 0x58
            return sub_5cb670(arg1)
        case 0x59
            return sub_5cb770(arg1)
        case 0x5a
            return sub_5cb840(arg1)
        case 0x5b
            return sub_5cd8f0(arg1)
        case 0x5c
            return sub_5cda30(arg1)
        case 0x5d
            return sub_5c2f60(arg1)
        case 0x5e
            return sub_5c72f0(arg1)
        case 0x5f
            return sub_5c7480(arg1)
        case 0x60
            return sub_5c5810(arg1)
        case 0x61
            return sub_5c3950(arg1)
        case 0x62
            return sub_5ce570(arg1)
        case 0x63
            return sub_5c6df0(arg1)
        case 0x64
            return sub_5c6f30(arg1)
        case 0x65
            return sub_5c7070(arg1)
        case 0x66
            return sub_5c71b0(arg1)
        case 0x67
            return sub_5c73b0(arg1)
        case 0x68
            return sub_5c7570(arg1)
        case 0x69
            return sub_5ce800(arg1)
        case 0x6a
            return sub_5ce890(arg1)
        case 0x6b
            return sub_5ce8e0(arg1)
        case 0x6c
            return sub_5c8d80(arg1)
        case 0x6d
            return sub_5c4530(arg1)
        case 0x6e
            return sub_5c4590(arg1)
        case 0x6f
            return sub_5ce950(arg1)
        case 0x70
            return sub_5ce9a0(arg1)
        case 0x71
            return sub_5cb6f0(arg1)
        case 0x72
            return sub_5c3a60(arg1)
        case 0x73
            return sub_5c3b40(arg1)
        case 0x74
            return sub_5c33c0(arg1)
        case 0x75
            return sub_5c3480(arg1)
        case 0x76
            return sub_5c4fa0(arg1)
        case 0x77
            return sub_5c8e10(arg1)
        case 0x78
            return sub_5c9020(arg1)
        case 0x79
            return sub_5c7660(arg1)
        case 0x7a
            return sub_5c9100(arg1)
        case 0x7b
            return sub_5c92e0(arg1)
        case 0x7c
            return sub_5c9490(arg1)
        case 0x7d
            return sub_5c4f30(arg1)
        case 0x7e
            return sub_5c7740(arg1)
        case 0x7f
            return sub_5c78c0(arg1)
        case 0x80
            return sub_5ca0e0(arg1)
        case 0x81
            return sub_5c63d0(arg1)
        case 0x82
            return sub_5c7d40(arg1, edi)
        case 0x83
            return sub_5c6930(arg1)
        case 0x84
            return sub_5c80f0(arg1)
        case 0x85
            return sub_5c84a0(arg1)
        case 0x86
            return sub_5c8080(arg1)
        case 0x87
            return sub_5c7a30(arg1)
        case 0x88
            return sub_5c7b90(arg1)
        case 0x89
            return sub_5c9760(arg1)
        case 0x8a
            return sub_5cb160(arg1)
        case 0x8b
            return sub_5ca190(arg1)
        case 0x8c
            return sub_5ceb80(arg1)
        case 0x8d
            return sub_5cec60(arg1)
        case 0x8e
            return sub_5cee90(arg1)
        case 0x8f
            return sub_5cf180(arg1)
        case 0x90
            return sub_5cf220(arg1)
        case 0x91
            return sub_5cf2d0(arg1)
        case 0x92
            return sub_5cf360(arg1)
        case 0x93
            return sub_5cf3b0(arg1)
        case 0x94
            return sub_5cf4b0(arg1)
        case 0x95
            return sub_5cf580(arg1)
        case 0x96
            return sub_5cf650(arg1)
        case 0x97
            return sub_5cf690(arg1)
        case 0x98
            return sub_5cf7c0(arg1)
        case 0x99
            return sub_5ced40(arg1)
        case 0x9a
            return sub_5cf890(arg1)
        case 0x9b
            return sub_5cf930(arg1)

uint32_t var_14_2 = ecx
int32_t edx
return sub_5c24e0(eax, edx, ecx, arg1, 0x6e6448)
