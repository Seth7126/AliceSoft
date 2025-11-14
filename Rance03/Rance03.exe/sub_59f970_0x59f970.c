// 函数: sub_59f970
// 地址: 0x59f970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi
int32_t var_4 = esi
int32_t eax_83

if (arg1 u> 0x14f)
    eax_83.b = 0
    return eax_83

int32_t var_1c
int32_t* eax_6
int32_t __saved_ebx_133
int32_t edx

switch (arg1)
    case 0
        *arg3 = sub_526cd0(__saved_ebx_133)
        int32_t eax
        eax.b = 1
        return eax
    case 1
        *arg3 = zx.d(sub_526eb0(*arg2))
        uint32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        void* eax_4 = data_75d508
        *arg3 = (*(eax_4 + 0x54) - *(eax_4 + 0x50)) s>> 2
        uint32_t* eax_5
        eax_5.b = 1
        return eax_5
    case 3
        int32_t ecx_5 = *arg2
        
        if (ecx_5 s>= 0)
            void* edx_1 = data_75d508
            
            if (ecx_5 s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
                int32_t eax_9
                eax_9.b = *(*(edx_1 + 0x50) + (ecx_5 << 2)) != 0
                *arg3 = zx.d(eax_9.b)
                uint32_t* eax_10
                eax_10.b = 1
                return eax_10
        
    label_59fa04:
        *arg3 = 0
        uint32_t* eax_11
        eax_11.b = 1
        return eax_11
    case 4
        *arg3 = zx.d(sub_5a2900(*arg2, arg2[1]))
        uint32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 5
        *arg3 = zx.d(sub_5a2950(*arg2))
        uint32_t* eax_15
        eax_15.b = 1
        return eax_15
    case 6, 0x1e, 0x2c, 0x2d, 0x30, 0x53, 0x54, 0x55, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 
            0x62, 0xde, 0xdf, 0xe3, 0xf0, 0x102, 0x103, 0x104, 0x105, 0x10d, 0x10e, 0x10f, 0x12c, 
            0x12d
        *arg3 = 1
        uint32_t* eax_16
        eax_16.b = 1
        return eax_16
    case 7
        sub_5a2990(*arg2)
        int32_t eax_17
        eax_17.b = 1
        return eax_17
    case 8
        *arg3 = sub_5a29f0(*arg2)
        int32_t eax_18
        eax_18.b = 1
        return eax_18
    case 9
        *arg3 = zx.d(sub_5a2a30(*arg2, arg2[1]))
        uint32_t* eax_20
        eax_20.b = 1
        return eax_20
    case 0xa
        *arg3 = zx.d(sub_5a2b00(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_22
        eax_22.b = 1
        return eax_22
    case 0xb
        *arg3 = zx.d(sub_5a2be0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_24
        eax_24.b = 1
        return eax_24
    case 0xc
        *arg3 = zx.d(sub_5a2cc0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_26
        eax_26.b = 1
        return eax_26
    case 0xd
        *arg3 = zx.d(sub_5a2da0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_28
        eax_28.b = 1
        return eax_28
    case 0xe
        *arg3 = zx.d(sub_5a2aa0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_30
        eax_30.b = 1
        return eax_30
    case 0xf
        int32_t __saved_ebx_6 = __saved_ebx_133
        *arg3 = zx.d(sub_5a2e00(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_32
        eax_32.b = 1
        return eax_32
    case 0x10
        *arg3 = zx.d(sub_5a2e60(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_34
        eax_34.b = 1
        return eax_34
    case 0x11
        int32_t __saved_ebx_9 = __saved_ebx_133
        *arg3 = zx.d(sub_5a2f70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_36
        eax_36.b = 1
        return eax_36
    case 0x12
        *arg3 = zx.d(sub_5a2fe0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_38
        eax_38.b = 1
        return eax_38
    case 0x13
        *arg3 = zx.d(sub_5a3030(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_40
        eax_40.b = 1
        return eax_40
    case 0x14
        *arg3 = zx.d(sub_5a3080(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_42
        eax_42.b = 1
        return eax_42
    case 0x15
        *arg3 = zx.d(sub_5a30d0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_44
        eax_44.b = 1
        return eax_44
    case 0x16
        *arg3 = zx.d(sub_5a3120(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_46
        eax_46.b = 1
        return eax_46
    case 0x17
        *arg3 = zx.d(sub_5a3170(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_48
        eax_48.b = 1
        return eax_48
    case 0x18
        *arg3 = sub_5a31c0(*arg2, arg2[1])
        uint32_t* eax_49
        eax_49.b = 1
        return eax_49
    case 0x19
        *arg3 = sub_5a3210(*arg2, arg2[1])
        uint32_t* eax_50
        eax_50.b = 1
        return eax_50
    case 0x1a
        *arg3 = sub_5a3260(*arg2, arg2[1])
        uint32_t* eax_51
        eax_51.b = 1
        return eax_51
    case 0x1b
        *arg3 = zx.d(sub_5a32b0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_53
        eax_53.b = 1
        return eax_53
    case 0x1c
        *arg3 = zx.d(sub_5a3300(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_55
        eax_55.b = 1
        return eax_55
    case 0x1d
        *arg3 = zx.d(sub_5a3350(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_57
        eax_57.b = 1
        return eax_57
    case 0x1f, 0x35, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x97, 0x98, 0x9d, 0xe2, 0xfa, 0x10a, 0x10b, 
            0x10c, 0x13b
        *arg3 = 0
        uint32_t* eax_58
        eax_58.b = 1
        return eax_58
    case 0x20
        *arg3 = zx.d(sub_5a33a0(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_60
        eax_60.b = 1
        return eax_60
    case 0x21
        int32_t __saved_ebx_15 = __saved_ebx_133
        *arg3 = zx.d(sub_5a3470(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4]))
        uint32_t* eax_62
        eax_62.b = 1
        return eax_62
    case 0x22
        int32_t __saved_ebx_17 = __saved_ebx_133
        arg2[3]
        *arg3 = zx.d(sub_5a3500(arg1, arg2[1], *arg2, arg2[2], arg2[4]))
        uint32_t* eax_64
        eax_64.b = 1
        return eax_64
    case 0x23
        *arg3 = zx.d(sub_5a3580(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_66
        eax_66.b = 1
        return eax_66
    case 0x24
        int32_t __saved_ebx_20 = __saved_ebx_133
        arg2[3]
        *arg3 = zx.d(sub_5a35f0(arg1, arg2[1], *arg2, arg2[2], arg2[4]))
        uint32_t* eax_68
        eax_68.b = 1
        return eax_68
    case 0x25
        *arg3 = zx.d(sub_5a3670(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_70
        eax_70.b = 1
        return eax_70
    case 0x26
        int32_t __saved_ebx_23 = __saved_ebx_133
        arg2[3]
        *arg3 = zx.d(sub_5a36e0(arg1, arg2[1], *arg2, arg2[2], arg2[4]))
        uint32_t* eax_72
        eax_72.b = 1
        return eax_72
    case 0x27
        *arg3 = zx.d(sub_5a3760(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_74
        eax_74.b = 1
        return eax_74
    case 0x28
        *arg3 = zx.d(sub_5a37b0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_76
        eax_76.b = 1
        return eax_76
    case 0x29
        *arg3 = zx.d(sub_5a3800(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_78
        eax_78.b = 1
        return eax_78
    case 0x2a
        *arg3 = zx.d(sub_5a3860(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_80
        eax_80.b = 1
        return eax_80
    case 0x2b
        *arg3 = zx.d(sub_5a38b0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_82
        eax_82.b = 1
        return eax_82
    case 0x2e
        eax_83.b = arg2[2] != 0
        uint32_t eax_84 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a3910(eax_84, arg2[1], *arg2, eax_84.b))
        uint32_t* eax_86
        eax_86.b = 1
        return eax_86
    case 0x2f
        eax_83.b = arg2[2] != 0
        uint32_t eax_87 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a3aa0(eax_87, arg2[1], *arg2, eax_87.b))
        uint32_t* eax_89
        eax_89.b = 1
        return eax_89
    case 0x31
        eax_83.b = arg2[2] != 0
        uint32_t eax_90 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a3af0(eax_90, arg2[1], *arg2, eax_90.b))
        uint32_t* eax_92
        eax_92.b = 1
        return eax_92
    case 0x32
        eax_83.b = arg2[2] != 0
        uint32_t eax_93 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a3b40(eax_93, arg2[1], *arg2, eax_93.b))
        uint32_t* eax_95
        eax_95.b = 1
        return eax_95
    case 0x33
        *arg3 = zx.d(sub_5a3960(*arg2, arg2[1]))
        uint32_t* eax_97
        eax_97.b = 1
        return eax_97
    case 0x34
        *arg3 = zx.d(sub_5a39b0(*arg2, arg2[1]))
        uint32_t* eax_99
        eax_99.b = 1
        return eax_99
    case 0x36
        *arg3 = zx.d(sub_5a3a00(*arg2, arg2[1]))
        uint32_t* eax_101
        eax_101.b = 1
        return eax_101
    case 0x37
        *arg3 = zx.d(sub_5a3a50(*arg2, arg2[1]))
        uint32_t* eax_103
        eax_103.b = 1
        return eax_103
    case 0x38
        *arg3 = zx.d(sub_5a3b90(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_105
        eax_105.b = 1
        return eax_105
    case 0x39
        *arg3 = zx.d(sub_5a3c00(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_107
        eax_107.b = 1
        return eax_107
    case 0x3a
        *arg3 = zx.d(sub_5a3d10(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_109
        eax_109.b = 1
        return eax_109
    case 0x3b
        *arg3 = zx.d(sub_5a3df0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_111
        eax_111.b = 1
        return eax_111
    case 0x3c
        *arg3 = sub_5a3c70(*arg2, arg2[1])
        uint32_t eax_112
        eax_112.b = 1
        return eax_112
    case 0x3d
        *arg3 = sub_5a3cc0(*arg2, arg2[1])
        uint32_t* eax_113
        eax_113.b = 1
        return eax_113
    case 0x3e
        *arg3 = zx.d(sub_5a3f30(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_115
        eax_115.b = 1
        return eax_115
    case 0x3f
        *arg3 = zx.d(sub_5a3ee0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_117
        eax_117.b = 1
        return eax_117
    case 0x40
        *arg3 = zx.d(sub_5a3f80(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_119
        eax_119.b = 1
        return eax_119
    case 0x41
        *arg3 = zx.d(sub_5a3fe0(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_121
        eax_121.b = 1
        return eax_121
    case 0x42
        *arg3 = zx.d(sub_5a4040(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_123
        eax_123.b = 1
        return eax_123
    case 0x43
        *arg3 = zx.d(sub_5a4120(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_125
        eax_125.b = 1
        return eax_125
    case 0x44
        *arg3 = zx.d(sub_5a4170(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_127
        eax_127.b = 1
        return eax_127
    case 0x45
        *arg3 = zx.d(sub_5a41c0(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_129
        eax_129.b = 1
        return eax_129
    case 0x46
        *arg3 = zx.d(sub_5a4220(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_131
        eax_131.b = 1
        return eax_131
    case 0x47
        *arg3 = zx.d(sub_5a4280(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_133
        eax_133.b = 1
        return eax_133
    case 0x48
        eax_83.b = arg2[2] != 0
        uint32_t eax_134 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a42d0(eax_134, arg2[1], *arg2, eax_134.b))
        uint32_t* eax_136
        eax_136.b = 1
        return eax_136
    case 0x49
        *arg3 = zx.d(sub_5a4320(*arg2, arg2[1]))
        uint32_t* eax_138
        eax_138.b = 1
        return eax_138
    case 0x4a
        *arg3 = zx.d(sub_5a4370(*arg2, arg2[1]))
        uint32_t* eax_140
        eax_140.b = 1
        return eax_140
    case 0x4b
        eax_83.b = arg2[2] != 0
        uint32_t eax_141 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a43c0(eax_141, arg2[1], *arg2, eax_141.b))
        uint32_t* eax_143
        eax_143.b = 1
        return eax_143
    case 0x4c
        *arg3 = zx.d(sub_5a4410(*arg2, arg2[1]))
        uint32_t* eax_145
        eax_145.b = 1
        return eax_145
    case 0x4d
        *arg3 = zx.d(sub_5a4460(*arg2, arg2[1]))
        uint32_t* eax_147
        eax_147.b = 1
        return eax_147
    case 0x4e
        *arg3 = sub_5a44b0(*arg2, arg2[1])
        uint32_t eax_148
        eax_148.b = 1
        return eax_148
    case 0x4f
        *arg3 = zx.d(sub_5a4500(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_150
        eax_150.b = 1
        return eax_150
    case 0x50
        *arg3 = sub_5a4600(*arg2, arg2[1])
        uint32_t* eax_151
        eax_151.b = 1
        return eax_151
    case 0x51
        *arg3 = zx.d(sub_5a4640(*arg2, arg2[1]))
        uint32_t* eax_153
        eax_153.b = 1
        return eax_153
    case 0x52
        *arg3 = zx.d(sub_5a4640(*arg2, arg2[1]))
        uint32_t* eax_155
        eax_155.b = 1
        return eax_155
    case 0x63
        *arg3 = zx.d(sub_5a4680(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_157
        eax_157.b = 1
        return eax_157
    case 0x64
        *arg3 = sub_5a46f0(arg1, arg2[1], *arg2, arg2[2])
        uint32_t eax_158
        eax_158.b = 1
        return eax_158
    case 0x65
        *arg3 = sub_5a4760(*arg2, arg2[1])
        uint32_t* eax_159
        eax_159.b = 1
        return eax_159
    case 0x66
        *arg3 = zx.d(sub_5a47b0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_161
        eax_161.b = 1
        return eax_161
    case 0x67
        *arg3 = sub_5a4800(*arg2, arg2[1])
        int32_t eax_162
        eax_162.b = 1
        return eax_162
    case 0x68
        *arg3 = zx.d(sub_5a4870(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_164
        eax_164.b = 1
        return eax_164
    case 0x69
        *arg3 = zx.d(sub_5a4990(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_166
        eax_166.b = 1
        return eax_166
    case 0x6a
        *arg3 = sub_5a49f0(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_167
        eax_167.b = 1
        return eax_167
    case 0x6b
        int32_t __saved_ebx_46 = arg2[8]
        int32_t var_c_12 = arg2[7]
        arg2[3]
        int32_t var_10_4 = arg2[6]
        int32_t var_14_1 = arg2[5]
        int32_t var_18_1 = arg2[4]
        int32_t var_1c_1 = arg2[2]
        *arg3 = zx.d(sub_5a4ae0(arg1, arg2[1], *arg2))
        uint32_t* eax_169
        eax_169.b = 1
        return eax_169
    case 0x6c
        *arg3 = zx.d(sub_5a4ba0(*arg2, arg2[1]))
        uint32_t* eax_171
        eax_171.b = 1
        return eax_171
    case 0x6d
        *arg3 = zx.d(sub_5a4bf0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_173
        eax_173.b = 1
        return eax_173
    case 0x6e
        eax_83.b = arg2[3] != 0
        uint32_t eax_174 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a4c80(eax_174, arg2[1], *arg2, arg2[2], eax_174.b))
        uint32_t* eax_176
        eax_176.b = 1
        return eax_176
    case 0x6f
        *arg3 = zx.d(sub_5a4d10(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_178
        eax_178.b = 1
        return eax_178
    case 0x70
        *arg3 = zx.d(sub_5a4dc0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_180
        eax_180.b = 1
        return eax_180
    case 0x71
        *arg3 = zx.d(sub_5a4e60(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_182
        eax_182.b = 1
        return eax_182
    case 0x72
        *arg3 = zx.d(sub_5a4f00(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_184
        eax_184.b = 1
        return eax_184
    case 0x73
        *arg3 = zx.d(sub_5a4fd0(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_186
        eax_186.b = 1
        return eax_186
    case 0x74
        *arg3 = zx.d(sub_5a50a0(arg1, arg2[1], *arg2, arg2[3], arg2[2]))
        uint32_t* eax_188
        eax_188.b = 1
        return eax_188
    case 0x75
        *arg3 = zx.d(sub_5a5130(arg1, arg2[1], *arg2, arg2[3], arg2[2]))
        uint32_t* eax_190
        eax_190.b = 1
        return eax_190
    case 0x76
        *arg3 = zx.d(sub_5a51c0(arg1, arg2[1], *arg2, arg2[3], arg2[2]))
        uint32_t* eax_192
        eax_192.b = 1
        return eax_192
    case 0x77
        *arg3 = sub_5a5250(arg1, arg2[1], *arg2, arg2[2])
        uint32_t* eax_193
        eax_193.b = 1
        return eax_193
    case 0x78
        *arg3 = sub_5a52e0(arg1, arg2[1], *arg2, arg2[2])
        uint32_t* eax_194
        eax_194.b = 1
        return eax_194
    case 0x79
        *arg3 = sub_5a5370(arg1, arg2[1], *arg2, arg2[2])
        uint32_t* eax_195
        eax_195.b = 1
        return eax_195
    case 0x7a
        *arg3 = sub_5a5400(*arg2, arg2[1])
        int32_t eax_196
        eax_196.b = 1
        return eax_196
    case 0x7b
        *arg3 = sub_5a5470(arg1, arg2[1], *arg2, arg2[2])
        uint32_t eax_197
        eax_197.b = 1
        return eax_197
    case 0x7c
        *arg3 = zx.d(sub_5a5500(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_199
        eax_199.b = 1
        return eax_199
    case 0x7d
        *arg3 = zx.d(sub_5a55c0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_201
        eax_201.b = 1
        return eax_201
    case 0x7e
        *arg3 = sub_5a5680(arg1, arg2[1], *arg2, arg2[2])
        uint32_t* eax_202
        eax_202.b = 1
        return eax_202
    case 0x7f
        *arg3 = sub_5a5710(arg1, arg2[1], *arg2, arg2[2])
        uint32_t eax_203
        eax_203.b = 1
        return eax_203
    case 0x80
        *arg3 = zx.d(sub_5a57a0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_205
        eax_205.b = 1
        return eax_205
    case 0x81
        *arg3 = zx.d(sub_5a5830(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_207
        eax_207.b = 1
        return eax_207
    case 0x82
        *arg3 = zx.d(sub_5a5900(arg1, arg2[1], *arg2, arg2[3], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_209
        eax_209.b = 1
        return eax_209
    case 0x83
        *arg3 = zx.d(sub_5a59d0(arg1, arg2[1], *arg2, arg2[3], arg2[2]))
        uint32_t* eax_211
        eax_211.b = 1
        return eax_211
    case 0x84
        *arg3 = zx.d(sub_5a5a60(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_213
        eax_213.b = 1
        return eax_213
    case 0x85
        *arg3 = zx.d(sub_5a5af0(*arg2, arg2[1]))
        uint32_t* eax_215
        eax_215.b = 1
        return eax_215
    case 0x86
        *arg3 = zx.d(sub_5a5bc0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_217
        eax_217.b = 1
        return eax_217
    case 0x87
        *arg3 = sub_5a5c20(*arg2, arg2[1])
        uint32_t eax_218
        eax_218.b = 1
        return eax_218
    case 0x88
        *arg3 = sub_5a5c80(*arg2, arg2[1])
        int32_t eax_219
        eax_219.b = 1
        return eax_219
    case 0x89
        *arg3 = sub_5a5cf0(*arg2, arg2[1])
        int32_t eax_220
        eax_220.b = 1
        return eax_220
    case 0x8a
        *arg3 = sub_5a5d60(*arg2, arg2[1])
        int32_t eax_221
        eax_221.b = 1
        return eax_221
    case 0x8b
        *arg3 = zx.d(sub_5a5dc0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_223
        eax_223.b = 1
        return eax_223
    case 0x8c
        *arg3 = sub_5a5e50(arg1, arg2[1], *arg2, arg2[2])
        uint32_t eax_224
        eax_224.b = 1
        return eax_224
    case 0x8d
        *arg3 = sub_5a5ec0(arg1, arg2[1], *arg2, arg2[2])
        uint32_t eax_225
        eax_225.b = 1
        return eax_225
    case 0x8e
        *arg3 = sub_5a5f30(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_226
        eax_226.b = 1
        return eax_226
    case 0x8f
        *arg3 = zx.d(sub_5a5fc0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_228
        eax_228.b = 1
        return eax_228
    case 0x90
        *arg3 = sub_5a6030(*arg2, arg2[1])
        uint32_t eax_229
        eax_229.b = 1
        return eax_229
    case 0x91
        sub_5a6090(arg1, arg2[1], *arg2, arg2[2])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_230
        eax_230.b = 1
        return eax_230
    case 0x92
        sub_5a6160(arg1, arg2[1], *arg2, arg2[2])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_231
        eax_231.b = 1
        return eax_231
    case 0x93
        int32_t __saved_ebx_78 = arg2[7]
        int32_t var_c_26 = arg2[6]
        int32_t var_10_14 = arg2[5]
        int32_t var_14_7 = arg2[4]
        int32_t var_18_2 = arg2[3]
        int32_t var_1c_2 = arg2[2]
        *arg3 = zx.d(sub_5a6230(arg1, arg2[1], *arg2))
        uint32_t* eax_233
        eax_233.b = 1
        return eax_233
    case 0x94
        *arg3 = zx.d(sub_5a64e0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_235
        eax_235.b = 1
        return eax_235
    case 0x95
        *arg3 = zx.d(sub_5a6550(*arg2, arg2[1]))
        uint32_t* eax_237
        eax_237.b = 1
        return eax_237
    case 0x96
        int32_t __saved_ebx_80 = arg2[9]
        arg2[3]
        arg2[2]
        int32_t var_c_27 = arg2[8]
        int32_t var_10_15 = arg2[7]
        int32_t var_14_8 = arg2[6]
        int32_t var_18_3 = arg2[5]
        int32_t* var_1c_3 = arg2
        int32_t var_1c_4 = arg2[4]
        *arg3 = zx.d(sub_5a65a0(arg1, arg2[1], *arg2))
        uint32_t* eax_239
        eax_239.b = 1
        return eax_239
    case 0x99
        *arg3 = sub_5a6650(*arg2, arg2[1])
        uint32_t* eax_240
        eax_240.b = 1
        return eax_240
    case 0x9a
        *arg3 = zx.d(sub_5a66a0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_242
        eax_242.b = 1
        return eax_242
    case 0x9b
        *arg3 = zx.d(sub_5a66f0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_244
        eax_244.b = 1
        return eax_244
    case 0x9c
        *arg3 = sub_5a6740(*arg2, arg2[1])
        uint32_t* eax_245
        eax_245.b = 1
        return eax_245
    case 0x9e
        *arg3 = zx.d(sub_5a6790(*arg2, arg2[1]))
        uint32_t* eax_247
        eax_247.b = 1
        return eax_247
    case 0x9f
        *arg3 = zx.d(sub_5a6800(*arg2, arg2[1]))
        uint32_t* eax_249
        eax_249.b = 1
        return eax_249
    case 0xa0
        eax_83.b = arg2[2] != 0
        uint32_t eax_250 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a6850(eax_250, arg2[1], *arg2, eax_250.b))
        uint32_t* eax_252
        eax_252.b = 1
        return eax_252
    case 0xa1
        *arg3 = zx.d(sub_5a68a0(*arg2, arg2[1]))
        uint32_t* eax_254
        eax_254.b = 1
        return eax_254
    case 0xa2
        *arg3 = zx.d(sub_5a68f0(*arg2, arg2[1]))
        uint32_t* eax_256
        eax_256.b = 1
        return eax_256
    case 0xa3
        eax_83.b = arg2[2] != 0
        uint32_t eax_257 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a6940(eax_257, arg2[1], *arg2, eax_257.b))
        uint32_t* eax_259
        eax_259.b = 1
        return eax_259
    case 0xa4
        *arg3 = zx.d(sub_5a6990(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_261
        eax_261.b = 1
        return eax_261
    case 0xa5
        *arg3 = zx.d(sub_5a7170(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_263
        eax_263.b = 1
        return eax_263
    case 0xa6
        *arg3 = zx.d(sub_5a71e0(*arg2, arg2[1]))
        uint32_t* eax_265
        eax_265.b = 1
        return eax_265
    case 0xa7
        *arg3 = zx.d(sub_5a7250(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_267
        eax_267.b = 1
        return eax_267
    case 0xa8
        *arg3 = zx.d(sub_5a7360(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_269
        eax_269.b = 1
        return eax_269
    case 0xa9
        *arg3 = zx.d(sub_5a73c0(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_271
        eax_271.b = 1
        return eax_271
    case 0xaa
        *arg3 = zx.d(sub_5a7410(*arg2, arg2[1]))
        uint32_t* eax_273
        eax_273.b = 1
        return eax_273
    case 0xab
        *arg3 = zx.d(sub_5a7470(*arg2, arg2[1]))
        uint32_t* eax_275
        eax_275.b = 1
        return eax_275
    case 0xac
        int32_t ecx_418 = *arg2
        
        if (ecx_418 s>= 0)
            void* edx_138 = data_75d508
            
            if (ecx_418 s< (*(edx_138 + 0x54) - *(edx_138 + 0x50)) s>> 2
                    && (*(edx_138 + 0x50))[ecx_418] != 0)
                *arg3 = 1
                uint32_t* eax_278
                eax_278.b = 1
                return eax_278
        
        goto label_59fa04
    case 0xad
        *arg3 = zx.d(sub_5a74d0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_280
        eax_280.b = 1
        return eax_280
    case 0xae
        int32_t ecx_422 = *arg2
        
        if (ecx_422 s>= 0)
            void* edx_140 = data_75d508
            
            if (ecx_422 s< (*(edx_140 + 0x54) - *(edx_140 + 0x50)) s>> 2)
                eax_6 = *(*(edx_140 + 0x50) + (ecx_422 << 2))
                
                if (eax_6 != 0)
                    *arg2[1] = eax_6[0x12]
                    *arg3 = 1
                    uint32_t* eax_285
                    eax_285.b = 1
                    return eax_285
        
        goto label_59fa04
    case 0xaf
        int32_t ecx_423 = *arg2
        
        if (ecx_423 s>= 0)
            void* edx_141 = data_75d508
            
            if (ecx_423 s< (*(edx_141 + 0x54) - *(edx_141 + 0x50)) s>> 2)
                eax_6 = *(*(edx_141 + 0x50) + (ecx_423 << 2))
                
                if (eax_6 != 0)
                    *arg2[1] = eax_6[0x13]
                    *arg3 = 1
                    uint32_t* eax_290
                    eax_290.b = 1
                    return eax_290
        
        goto label_59fa04
    case 0xb0
        int32_t ecx_424 = *arg2
        
        if (ecx_424 s>= 0)
            void* edx_142 = data_75d508
            
            if (ecx_424 s< (*(edx_142 + 0x54) - *(edx_142 + 0x50)) s>> 2
                    && (*(edx_142 + 0x50))[ecx_424] != 0)
                *arg2[1] = 0
                *arg3 = 1
                uint32_t* eax_293
                eax_293.b = 1
                return eax_293
        
        goto label_59fa04
    case 0xb1
        *arg3 = zx.d(sub_5a7520(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_295
        eax_295.b = 1
        return eax_295
    case 0xb2
        *arg3 = zx.d(sub_5a7630(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_297
        eax_297.b = 1
        return eax_297
    case 0xb3
        *arg3 = zx.d(sub_5a7740(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_299
        eax_299.b = 1
        return eax_299
    case 0xb4
        int32_t __saved_ebx_134
        int32_t __saved_ebx_91 = __saved_ebx_134
        int32_t ecx_434 = *arg2
        __saved_ebx_134.b = arg2[1] != 0
        
        if (ecx_434 s>= 0)
            void* edx_146 = data_75d508
            
            if (ecx_434 s< (*(edx_146 + 0x54) - *(edx_146 + 0x50)) s>> 2)
                int32_t* eax_300 = *(*(edx_146 + 0x50) + (ecx_434 << 2))
                
                if (eax_300 != 0)
                    eax_300[0x14].b = __saved_ebx_134.b
                    *arg3 = 1
                    uint32_t* eax_304
                    eax_304.b = 1
                    return eax_304
        
        *arg3 = 0
        uint32_t* eax_305
        eax_305.b = 1
        return eax_305
    case 0xb5
        int32_t ecx_435 = *arg2
        
        if (ecx_435 s>= 0)
            void* edx_147 = data_75d508
            
            if (ecx_435 s< (*(edx_147 + 0x54) - *(edx_147 + 0x50)) s>> 2)
                eax_6 = *(*(edx_147 + 0x50) + (ecx_435 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x15] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_309
                    eax_309.b = 1
                    return eax_309
        
        goto label_59fa04
    case 0xb6
        int32_t ecx_436 = *arg2
        
        if (ecx_436 s>= 0)
            void* edx_148 = data_75d508
            
            if (ecx_436 s< (*(edx_148 + 0x54) - *(edx_148 + 0x50)) s>> 2)
                eax_6 = *(*(edx_148 + 0x50) + (ecx_436 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x16] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_313
                    eax_313.b = 1
                    return eax_313
        
        goto label_59fa04
    case 0xb7
        int32_t ecx_437 = *arg2
        
        if (ecx_437 s>= 0)
            void* edx_149 = data_75d508
            
            if (ecx_437 s< (*(edx_149 + 0x54) - *(edx_149 + 0x50)) s>> 2)
                eax_6 = *(*(edx_149 + 0x50) + (ecx_437 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x17] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_317
                    eax_317.b = 1
                    return eax_317
        
        goto label_59fa04
    case 0xb8
        *arg3 = zx.d(sub_5a7830(*arg2, arg2[1]))
        uint32_t* eax_319
        eax_319.b = 1
        return eax_319
    case 0xb9
        int32_t ecx_441 = *arg2
        
        if (ecx_441 s>= 0)
            void* edx_151 = data_75d508
            
            if (ecx_441 s< (*(edx_151 + 0x54) - *(edx_151 + 0x50)) s>> 2)
                eax_6 = *(*(edx_151 + 0x50) + (ecx_441 << 2))
                
                if (eax_6 != 0)
                    *arg2[1] = eax_6[0x15]
                    *arg3 = 1
                    uint32_t* eax_324
                    eax_324.b = 1
                    return eax_324
        
        goto label_59fa04
    case 0xba
        int32_t ecx_442 = *arg2
        
        if (ecx_442 s>= 0)
            void* edx_152 = data_75d508
            
            if (ecx_442 s< (*(edx_152 + 0x54) - *(edx_152 + 0x50)) s>> 2)
                eax_6 = *(*(edx_152 + 0x50) + (ecx_442 << 2))
                
                if (eax_6 != 0)
                    *arg2[1] = eax_6[0x16]
                    *arg3 = 1
                    uint32_t* eax_329
                    eax_329.b = 1
                    return eax_329
        
        goto label_59fa04
    case 0xbb
        int32_t ecx_443 = *arg2
        
        if (ecx_443 s>= 0)
            void* edx_153 = data_75d508
            
            if (ecx_443 s< (*(edx_153 + 0x54) - *(edx_153 + 0x50)) s>> 2)
                eax_6 = *(*(edx_153 + 0x50) + (ecx_443 << 2))
                
                if (eax_6 != 0)
                    *arg2[1] = eax_6[0x17]
                    *arg3 = 1
                    uint32_t* eax_334
                    eax_334.b = 1
                    return eax_334
        
        goto label_59fa04
    case 0xbc
        *arg3 = zx.d(sub_5a7870(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_336
        eax_336.b = 1
        return eax_336
    case 0xbd
        *arg3 = zx.d(sub_5a78c0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_338
        eax_338.b = 1
        return eax_338
    case 0xbe
        int32_t ecx_450 = *arg2
        
        if (ecx_450 s>= 0)
            void* edx_155 = data_75d508
            
            if (ecx_450 s< (*(edx_155 + 0x54) - *(edx_155 + 0x50)) s>> 2)
                eax_6 = *(*(edx_155 + 0x50) + (ecx_450 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x32] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_342
                    eax_342.b = 1
                    return eax_342
        
        goto label_59fa04
    case 0xbf
        int32_t ecx_451 = *arg2
        
        if (ecx_451 s>= 0)
            void* edx_156 = data_75d508
            
            if (ecx_451 s< (*(edx_156 + 0x54) - *(edx_156 + 0x50)) s>> 2)
                void* eax_348 = *(*(edx_156 + 0x50) + (ecx_451 << 2))
                
                if (eax_348 != 0)
                    *arg3 = *(eax_348 + 0xc8)
                    uint32_t* eax_349
                    eax_349.b = 1
                    return eax_349
        
        *arg3 = 0
        uint32_t* eax_350
        eax_350.b = 1
        return eax_350
    case 0xc0
        *arg3 = sub_5a7910(*arg2, arg2[1])
        uint32_t* eax_351
        eax_351.b = 1
        return eax_351
    case 0xc1
        *arg3 = sub_5a7960(*arg2, arg2[1])
        uint32_t* eax_352
        eax_352.b = 1
        return eax_352
    case 0xc2
        int32_t ecx_456 = *arg2
        
        if (ecx_456 s>= 0)
            void* edx_159 = data_75d508
            
            if (ecx_456 s< (*(edx_159 + 0x54) - *(edx_159 + 0x50)) s>> 2)
                void* ecx_457 = *(*(edx_159 + 0x50) + (ecx_456 << 2))
                
                if (ecx_457 != 0)
                    *arg3 = *(ecx_457 + 0xa0)
                    uint32_t* eax_358
                    eax_358.b = 1
                    return eax_358
        
        *arg3 = 0
        uint32_t* eax_359
        eax_359.b = 1
        return eax_359
    case 0xc3
        *arg3 = sub_5a7b70(*arg2, arg2[1])
        uint32_t* eax_360
        eax_360.b = 1
        return eax_360
    case 0xc4
        int32_t ecx_461 = *arg2
        
        if (ecx_461 s>= 0)
            void* edx_161 = data_75d508
            
            if (ecx_461 s< (*(edx_161 + 0x54) - *(edx_161 + 0x50)) s>> 2)
                eax_6 = *(*(edx_161 + 0x50) + (ecx_461 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x19] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_364
                    eax_364.b = 1
                    return eax_364
        
        goto label_59fa04
    case 0xc5
        *arg3 = zx.d(sub_5a79b0(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_366
        eax_366.b = 1
        return eax_366
    case 0xc6
        *arg3 = zx.d(sub_5a7a00(*arg2, arg2[1], arg2[2], arg2[3]))
        uint32_t* eax_368
        eax_368.b = 1
        return eax_368
    case 0xc7
        *arg3 =
            zx.d(sub_5a7a50(arg1, edx, *arg2, arg2[1], arg2[2], arg2[3], arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_370
        eax_370.b = 1
        return eax_370
    case 0xc8
        *arg3 = zx.d(sub_5a7ad0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_372
        eax_372.b = 1
        return eax_372
    case 0xc9
        int32_t ecx_474 = *arg2
        
        if (ecx_474 s>= 0)
            void* edx_163 = data_75d508
            
            if (ecx_474 s< (*(edx_163 + 0x54) - *(edx_163 + 0x50)) s>> 2)
                eax_6 = *(*(edx_163 + 0x50) + (ecx_474 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x26] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_376
                    eax_376.b = 1
                    return eax_376
        
        goto label_59fa04
    case 0xca
        int32_t ecx_475 = *arg2
        
        if (ecx_475 s>= 0)
            void* edx_164 = data_75d508
            
            if (ecx_475 s< (*(edx_164 + 0x54) - *(edx_164 + 0x50)) s>> 2)
                eax_6 = *(*(edx_164 + 0x50) + (ecx_475 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x27] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_380
                    eax_380.b = 1
                    return eax_380
        
        goto label_59fa04
    case 0xcb
        *arg3 = zx.d(sub_5a7b20(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_382
        eax_382.b = 1
        return eax_382
    case 0xcc
        int32_t ecx_479 = *arg2
        
        if (ecx_479 s>= 0)
            void* edx_166 = data_75d508
            
            if (ecx_479 s< (*(edx_166 + 0x54) - *(edx_166 + 0x50)) s>> 2)
                eax_6 = *(*(edx_166 + 0x50) + (ecx_479 << 2))
                
                if (eax_6 != 0)
                    eax_6[0x28] = arg2[1]
                    *arg3 = 1
                    uint32_t* eax_386
                    eax_386.b = 1
                    return eax_386
        
        goto label_59fa04
    case 0xcd
        *arg3 = zx.d(sub_5a7be0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_388
        eax_388.b = 1
        return eax_388
    case 0xce
        *arg3 = zx.d(sub_5a7c30(*arg2, arg2[1]))
        uint32_t* eax_390
        eax_390.b = 1
        return eax_390
    case 0xcf
        *arg3 = zx.d(sub_5a7c70(*arg2, arg2[1]))
        uint32_t* eax_392
        eax_392.b = 1
        return eax_392
    case 0xd0
        *arg3 = zx.d(sub_5a7cb0(*arg2, arg2[1]))
        uint32_t* eax_394
        eax_394.b = 1
        return eax_394
    case 0xd1
        arg2[3]
        arg2[2]
        *arg3 = zx.d(sub_5a7cf0(*arg2, arg2[1]))
        uint32_t* eax_396
        eax_396.b = 1
        return eax_396
    case 0xd2
        *arg3 = sub_5a7d50(*arg2)
        uint32_t eax_397
        eax_397.b = 1
        return eax_397
    case 0xd3
        *arg3 = sub_5a7d80(*arg2)
        uint32_t* eax_398
        eax_398.b = 1
        return eax_398
    case 0xd4
        *arg3 = sub_5a7dc0(*arg2)
        uint32_t* eax_399
        eax_399.b = 1
        return eax_399
    case 0xd5
        sub_5a7e00(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        int32_t eax_400
        eax_400.b = 1
        return eax_400
    case 0xd6
        *arg3 = zx.d(sub_5a7e50(*arg2, arg2[1]))
        uint32_t* eax_402
        eax_402.b = 1
        return eax_402
    case 0xd7
        *arg3 = sub_5a7e90(*arg2)
        uint32_t* eax_403
        eax_403.b = 1
        return eax_403
    case 0xd8
        *arg3 = zx.d(sub_5a7ed0(*arg2, arg2[1]))
        uint32_t* eax_405
        eax_405.b = 1
        return eax_405
    case 0xd9
        *arg3 = sub_5a7f10(*arg2)
        uint32_t* eax_406
        eax_406.b = 1
        return eax_406
    case 0xda
        *arg3 = zx.d(sub_5a7f50(*arg2, arg2[1]))
        uint32_t* eax_408
        eax_408.b = 1
        return eax_408
    case 0xdb
        *arg3 = sub_5a7f90(*arg2)
        uint32_t* eax_409
        eax_409.b = 1
        return eax_409
    case 0xdc
        arg2[3]
        arg2[2]
        *arg3 = zx.d(sub_5a7fd0(*arg2, arg2[1]))
        uint32_t* eax_411
        eax_411.b = 1
        return eax_411
    case 0xdd
        *arg3 = zx.d(sub_5a8030(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_413
        eax_413.b = 1
        return eax_413
    case 0xe0
        *arg3 = zx.d(sub_5a8090(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_415
        eax_415.b = 1
        return eax_415
    case 0xe1
        arg2[3]
        *arg3 = zx.d(sub_5a8100(arg1, edx, *arg2, arg2[1], arg2[2], arg2[4], arg2[5]))
        uint32_t* eax_417
        eax_417.b = 1
        return eax_417
    case 0xe4
        int32_t ebp
        *arg3 = zx.d(sub_5270f0(ebp, *arg2, arg2[1]))
        uint32_t* eax_420
        eax_420.b = 1
        return eax_420
    case 0xe5
        *arg3 = sub_5a8160(*arg2)
        uint32_t eax_421
        eax_421.b = 1
        return eax_421
    case 0xe6
        *arg3 = zx.d(sub_5a8370(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_423
        eax_423.b = 1
        return eax_423
    case 0xe7
        *arg3 = sub_5a83c0(*arg2, arg2[1])
        uint32_t eax_424
        eax_424.b = 1
        return eax_424
    case 0xe8
        *arg3 = zx.d(sub_5a8420(*arg2, arg2[1]))
        uint32_t* eax_426
        eax_426.b = 1
        return eax_426
    case 0xe9
        *arg3 = zx.d(sub_5a8460(*arg2, arg2[1]))
        uint32_t* eax_428
        eax_428.b = 1
        return eax_428
    case 0xea
        *arg3 = zx.d(sub_5a8700(*arg2, arg2[1]))
        uint32_t* eax_430
        eax_430.b = 1
        return eax_430
    case 0xeb
        *arg3 = zx.d(sub_5a84a0(*arg2, arg2[1]))
        uint32_t* eax_432
        eax_432.b = 1
        return eax_432
    case 0xec
        *arg3 = zx.d(sub_5a84e0(*arg2, arg2[1]))
        uint32_t* eax_434
        eax_434.b = 1
        return eax_434
    case 0xed
        *arg3 = zx.d(sub_5a8520(*arg2, arg2[1]))
        uint32_t* eax_436
        eax_436.b = 1
        return eax_436
    case 0xee
        *arg3 = zx.d(sub_5a8560(*arg2, arg2[1]))
        uint32_t* eax_438
        eax_438.b = 1
        return eax_438
    case 0xef
        *arg3 = zx.d(sub_5a85a0(*arg2, arg2[1]))
        uint32_t* eax_440
        eax_440.b = 1
        return eax_440
    case 0xf1
        *arg3 = zx.d(sub_5a85e0(*arg2, arg2[1]))
        uint32_t* eax_442
        eax_442.b = 1
        return eax_442
    case 0xf2
        *arg3 = sub_5a81a0(*arg2)
        uint32_t eax_443
        eax_443.b = 1
        return eax_443
    case 0xf3
        *arg3 = sub_5a81d0(*arg2)
        uint32_t eax_444
        eax_444.b = 1
        return eax_444
    case 0xf4
        *arg3 = sub_5a86d0(*arg2)
        uint32_t eax_445
        eax_445.b = 1
        return eax_445
    case 0xf5
        *arg3 = sub_5a8210(*arg2)
        uint32_t eax_446
        eax_446.b = 1
        return eax_446
    case 0xf6
        *arg3 = sub_5a8240(*arg2)
        uint32_t eax_447
        eax_447.b = 1
        return eax_447
    case 0xf7
        *arg3 = sub_5a8270(*arg2)
        uint32_t eax_448
        eax_448.b = 1
        return eax_448
    case 0xf8
        *arg3 = sub_5a82a0(*arg2)
        uint32_t eax_449
        eax_449.b = 1
        return eax_449
    case 0xf9
        *arg3 = sub_5a82d0(*arg2)
        uint32_t eax_450
        eax_450.b = 1
        return eax_450
    case 0xfb
        *arg3 = sub_5a8300(*arg2)
        uint32_t eax_451
        eax_451.b = 1
        return eax_451
    case 0xfc
        *arg3 = zx.d(sub_5a8620(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_453
        eax_453.b = 1
        return eax_453
    case 0xfd
        *arg3 = sub_5a8680(*arg2, arg2[1])
        uint32_t eax_454
        eax_454.b = 1
        return eax_454
    case 0xfe
        *arg3 = sub_5a8740(*arg2)
        uint32_t eax_455
        eax_455.b = 1
        return eax_455
    case 0xff
        *arg3 = sub_5a8330(*arg2)
        uint32_t eax_456
        eax_456.b = 1
        return eax_456
    case 0x100
        *arg3 = zx.d(sub_5a8770(*arg2, arg2[1]))
        uint32_t* eax_458
        eax_458.b = 1
        return eax_458
    case 0x101
        *arg3 = zx.d(sub_5a87b0(*arg2, arg2[1]))
        uint32_t* eax_460
        eax_460.b = 1
        return eax_460
    case 0x106
        *arg3 = sub_5a87f0(*arg2)
        uint32_t eax_461
        eax_461.b = 1
        return eax_461
    case 0x107
        *arg3 = zx.d(sub_5a8820(*arg2, arg2[1]))
        uint32_t* eax_463
        eax_463.b = 1
        return eax_463
    case 0x108
        *arg3 = sub_5a8860(*arg2)
        uint32_t eax_464
        eax_464.b = 1
        return eax_464
    case 0x109
        *arg3 = zx.d(sub_5a8890(*arg2, arg2[1]))
        uint32_t* eax_466
        eax_466.b = 1
        return eax_466
    case 0x110
        *arg3 = zx.d(sub_5a88d0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_468
        eax_468.b = 1
        return eax_468
    case 0x111
        *arg3 = sub_5a89a0(*arg2, arg2[1])
        uint32_t eax_469
        eax_469.b = 1
        return eax_469
    case 0x112
        *arg3 = sub_5a8a10(*arg2, arg2[1])
        uint32_t* eax_470
        eax_470.b = 1
        return eax_470
    case 0x113
        *arg3 = sub_5a8a90(*arg2, arg2[1])
        uint32_t* eax_471
        eax_471.b = 1
        return eax_471
    case 0x114
        *arg3 = sub_5a8ae0(*arg2, arg2[1])
        uint32_t* eax_472
        eax_472.b = 1
        return eax_472
    case 0x115
        *arg3 = sub_5a8b30(*arg2, arg2[1])
        uint32_t* eax_473
        eax_473.b = 1
        return eax_473
    case 0x116
        *arg3 = sub_5a8bb0(*arg2, arg2[1])
        uint32_t* eax_474
        eax_474.b = 1
        return eax_474
    case 0x117
        *arg3 = zx.d(sub_5a8c30(*arg2, arg2[1]))
        uint32_t* eax_476
        eax_476.b = 1
        return eax_476
    case 0x118
        *arg3 = zx.d(sub_5a8ca0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_478
        eax_478.b = 1
        return eax_478
    case 0x119
        *arg3 = zx.d(sub_5a8d70(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_480
        eax_480.b = 1
        return eax_480
    case 0x11a
        *arg3 = zx.d(sub_5a8db0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_482
        eax_482.b = 1
        return eax_482
    case 0x11b
        arg2[3]
        arg2[2]
        *arg3 = zx.d(sub_5a8e20(*arg2, arg2[1]))
        uint32_t* eax_484
        eax_484.b = 1
        return eax_484
    case 0x11c
        *arg3 = zx.d(sub_5a8e80(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_486
        eax_486.b = 1
        return eax_486
    case 0x11d
        *arg3 = zx.d(sub_5a8ef0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_488
        eax_488.b = 1
        return eax_488
    case 0x11e
        eax_83.b = arg2[2] != 0
        uint32_t eax_489 = zx.d(eax_83.b)
        *arg3 = zx.d(sub_5a8f60(eax_489, arg2[1], *arg2, eax_489.b))
        uint32_t* eax_491
        eax_491.b = 1
        return eax_491
    case 0x11f
        *arg3 = sub_5a8fe0(*arg2, arg2[1])
        uint32_t* eax_492
        eax_492.b = 1
        return eax_492
    case 0x120
        *arg3 = zx.d(sub_5a9030(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_494
        eax_494.b = 1
        return eax_494
    case 0x121
        *arg3 = sub_5a9080(*arg2, arg2[1])
        uint32_t* eax_495
        eax_495.b = 1
        return eax_495
    case 0x122
        *arg3 = zx.d(sub_5a90d0(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_497
        eax_497.b = 1
        return eax_497
    case 0x123
        *arg3 = zx.d(sub_5a9120(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_499
        eax_499.b = 1
        return eax_499
    case 0x124
        *arg3 = zx.d(sub_5a91c0(*arg2, arg2[3], arg2[1], arg2[2]))
        uint32_t* eax_501
        eax_501.b = 1
        return eax_501
    case 0x125
        int32_t __saved_ebx_106 = arg2[0xa]
        int32_t var_c_43 = arg2[9]
        arg2[3]
        arg2[2]
        arg2[1]
        var_1c.o = *(arg2 + 0x10)
        *arg3 = zx.d(sub_5a9280(arg1, arg2[8], *arg2))
        uint32_t* eax_503
        eax_503.b = 1
        return eax_503
    case 0x126
        *arg3 = zx.d(sub_5a9360(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_505
        eax_505.b = 1
        return eax_505
    case 0x127
        arg2[3]
        arg2[2]
        arg2[1]
        *arg3 = zx.d(sub_5a9460(arg1, edx, *arg2, arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_507
        eax_507.b = 1
        return eax_507
    case 0x128
        *arg3 = zx.d(sub_5a94f0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_509
        eax_509.b = 1
        return eax_509
    case 0x129
        *arg3 = zx.d(sub_5a96e0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_511
        eax_511.b = 1
        return eax_511
    case 0x12a
        arg2[3]
        arg2[2]
        arg2[1]
        *arg3 = zx.d(sub_5a98d0(arg1, arg2[4], *arg2, arg2[5]))
        uint32_t* eax_513
        eax_513.b = 1
        return eax_513
    case 0x12b
        void* edx_215 = data_75d508
        int32_t ecx_699 = *arg2
        
        if (ecx_699 s>= 0 && ecx_699 s< (*(edx_215 + 0x54) - *(edx_215 + 0x50)) s>> 2)
            void* ecx_700 = (*(edx_215 + 0x50))[ecx_699]
            
            if (ecx_700 != 0)
                *arg3 = zx.d(sub_587260(ecx_700 + 0x10))
                uint32_t* eax_517
                eax_517.b = 1
                return eax_517
        
        goto label_59fa04
    case 0x12e, 0x12f
        *arg3 = 0x3f800000
        uint32_t* eax_518
        eax_518.b = 1
        return eax_518
    case 0x130
        *arg3 = sub_5a9930(*arg2)
        uint32_t* eax_519
        eax_519.b = 1
        return eax_519
    case 0x131
        *arg3 = zx.d(sub_5a9a00(*arg2))
        uint32_t* eax_521
        eax_521.b = 1
        return eax_521
    case 0x132
        *arg3 = zx.d(sub_5a9a40(*arg2, arg2[1], arg2[2]))
        uint32_t* eax_523
        eax_523.b = 1
        return eax_523
    case 0x133
        *arg3 = sub_5a9a90(*arg2, arg2[1])
        uint32_t* eax_524
        eax_524.b = 1
        return eax_524
    case 0x134
        edx.b = arg2[1] != 0
        *arg3 = zx.d(sub_5a9ae0(*arg2, edx.b))
        uint32_t* eax_526
        eax_526.b = 1
        return eax_526
    case 0x135
        int32_t ecx_716 = *arg2
        
        if (ecx_716 s>= 0)
            void* edx_218 = data_75d508
            
            if (ecx_716 s< (*(edx_218 + 0x54) - *(edx_218 + 0x50)) s>> 2)
                eax_6 = *(*(edx_218 + 0x50) + (ecx_716 << 2))
                
                if (eax_6 != 0)
                    eax_6.b = eax_6[0x93].b
                    *arg3 = zx.d(eax_6.b)
                    uint32_t* eax_530
                    eax_530.b = 1
                    return eax_530
        
        goto label_59fa04
    case 0x136
        *arg3 = zx.d(sub_5a9b40(*arg2))
        uint32_t* eax_532
        eax_532.b = 1
        return eax_532
    case 0x137
        int32_t ecx_721 = *arg2
        
        if (ecx_721 s>= 0)
            void* edx_219 = data_75d508
            
            if (ecx_721 s< (*(edx_219 + 0x54) - *(edx_219 + 0x50)) s>> 2)
                void* ecx_722 = (*(edx_219 + 0x50))[ecx_721]
                
                if (ecx_722 != 0)
                    *arg3 = zx.d(sub_5872c0(ecx_722 + 0x10, esi))
                    uint32_t* eax_536
                    eax_536.b = 1
                    return eax_536
        
        goto label_59fa04
    case 0x138
        int32_t ecx_725 = *arg2
        
        if (ecx_725 s>= 0)
            void* edx_220 = data_75d508
            
            if (ecx_725 s< (*(edx_220 + 0x54) - *(edx_220 + 0x50)) s>> 2)
                eax_6 = *(*(edx_220 + 0x50) + (ecx_725 << 2))
                
                if (eax_6 != 0)
                    eax_6.b = *(eax_6 + 0x24d)
                    *arg3 = zx.d(eax_6.b)
                    uint32_t* eax_540
                    eax_540.b = 1
                    return eax_540
        
        goto label_59fa04
    case 0x139
        int32_t ecx_727 = *arg2
        
        if (ecx_727 s>= 0)
            void* edx_221 = data_75d508
            
            if (ecx_727 s< (*(edx_221 + 0x54) - *(edx_221 + 0x50)) s>> 2)
                void* ecx_728 = (*(edx_221 + 0x50))[ecx_727]
                
                if (ecx_728 != 0)
                    *arg3 = zx.d(sub_587310(ecx_728 + 0x10, esi))
                    uint32_t* eax_544
                    eax_544.b = 1
                    return eax_544
        
        goto label_59fa04
    case 0x13a
        *arg3 = zx.d(sub_5a9b80(*arg2, arg2[1]))
        uint32_t* eax_546
        eax_546.b = 1
        return eax_546
    case 0x13c
        *arg3 = sub_5a9c30(*arg2)
        int32_t eax_547
        eax_547.b = 1
        return eax_547
    case 0x13d
        *arg3 = zx.d(sub_5ab640(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_549
        eax_549.b = 1
        return eax_549
    case 0x13e
        *arg3 = zx.d(sub_5a9c60(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_551
        eax_551.b = 1
        return eax_551
    case 0x13f
        *arg3 = zx.d(sub_5ab760(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_553
        eax_553.b = 1
        return eax_553
    case 0x140
        *arg3 = zx.d(sub_5a9d00(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_555
        eax_555.b = 1
        return eax_555
    case 0x141
        *arg3 = zx.d(sub_5abfa0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_557
        eax_557.b = 1
        return eax_557
    case 0x142
        int32_t __saved_ebx_117 = __saved_ebx_133
        *arg3 = zx.d(sub_5aa650(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_559
        eax_559.b = 1
        return eax_559
    case 0x143
        int32_t __saved_ebx_119 = arg2[5]
        *arg3 = zx.d(sub_5ac790(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2))
        uint32_t* eax_561
        eax_561.b = 1
        return eax_561
    case 0x144
        int32_t __saved_ebx_120 = arg2[5]
        *arg3 = zx.d(sub_5ab0c0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2))
        uint32_t* eax_563
        eax_563.b = 1
        return eax_563
    case 0x145
        int32_t __saved_ebx_121 = arg2[5]
        *arg3 = zx.d(sub_5ac840(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2))
        uint32_t* eax_565
        eax_565.b = 1
        return eax_565
    case 0x146
        int32_t __saved_ebx_122 = arg2[5]
        int32_t var_c
        *arg3 = zx.d(sub_5ab330(arg1, arg2[1], *arg2, arg2[2], arg2[3], var_c))
        uint32_t* eax_567
        eax_567.b = 1
        return eax_567
    case 0x147
        *arg3 = zx.d(sub_5acb20(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_569
        eax_569.b = 1
        return eax_569
    case 0x148
        *arg3 = zx.d(sub_5acb90(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_571
        eax_571.b = 1
        return eax_571
    case 0x149
        *arg3 = zx.d(sub_5acc70(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_573
        eax_573.b = 1
        return eax_573
    case 0x14a
        arg2[3]
        int32_t var_18
        int32_t var_14
        *arg3 = zx.d(sub_5aca30(arg1, arg2[1], *arg2, arg2[2], arg2[4], (*(arg2 + 0x14)).d, var_1c, 
            var_18, var_14, arg2[9], arg2[0xa], arg2[0xb]))
        uint32_t* eax_575
        eax_575.b = 1
        return eax_575
    case 0x14b
        *arg3 = zx.d(sub_5acd20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_577
        eax_577.b = 1
        return eax_577
    case 0x14c
        *arg3 = zx.d(sub_5acd70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_579
        eax_579.b = 1
        return eax_579
    case 0x14d
        *arg3 = zx.d(sub_5aceb0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_581
        eax_581.b = 1
        return eax_581
    case 0x14e
        *arg3 = zx.d(sub_5acff0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_583
        eax_583.b = 1
        return eax_583
    case 0x14f
        int32_t __saved_ebx_131 = __saved_ebx_133
        *arg3 = zx.d(sub_5ad150(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_585
        eax_585.b = 1
        return eax_585
