// 函数: sub_4e86d0
// 地址: 0x4e86d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
uint32_t* eax

if (arg1 u> 0x232)
    eax.b = 0
    return eax

int32_t ecx
int32_t ecx_348
int32_t edx_54
int32_t ebx
long double x87_r0

switch (arg1)
    case nullptr
        sub_4a98e0(*arg2)
        struct partsengine::CPartsList::VTable** eax_2
        eax_2.b = 1
        return eax_2
    case 1
        sub_4a9940(*arg2)
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    case 2
        *arg3 = sub_4e7cb0(data_75d4fc + 0x19c)
        uint32_t eax_5
        eax_5.b = 1
        return eax_5
    case 3
        int32_t var_2c_3 = *arg2
        *arg3 = zx.d(sub_4a55e0(data_75d4fc + 0x178))
        uint32_t* eax_8
        eax_8.b = 1
        return eax_8
    case 4
        *arg3 = sub_4ed8d0(*arg2)
        int32_t* eax_9
        eax_9.b = 1
        return eax_9
    case 5
        sub_4a99d0(*arg2, arg2[1])
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    case 6
        void* esi_7 = data_75d4fc
        *(esi_7 + 0x1c8) = sub_4a8700(esi_7 + 0x174, *arg2)
        void* eax_13
        eax_13.b = 1
        return eax_13
    case 7
        *arg3 = sub_4a85f0(data_75d4fc + 0x174)
        uint32_t eax_14
        eax_14.b = 1
        return eax_14
    case 8
        *arg3 = sub_4a8650(data_75d4fc + 0x174, *arg2)
        int32_t eax_16
        eax_16.b = 1
        return eax_16
    case 9
        int32_t var_2c_7 = *arg2
        *arg3 = sub_4a8690(data_75d4fc + 0x174)
        uint32_t eax_18
        eax_18.b = 1
        return eax_18
    case 0xa
        void* eax_19 = data_75d4fc
        *arg3 = (*(eax_19 + 0x1c0) - *(eax_19 + 0x1bc)) s>> 2
        uint32_t* eax_20
        eax_20.b = 1
        return eax_20
    case 0xb
        void* ecx_24 = *(*(data_75d4fc + 0x1b8) + 4)
        
        if (ecx_24 != 0)
            *arg3 = *(ecx_24 + 0x2c)
            uint32_t* eax_24
            eax_24.b = 1
            return eax_24
        
    label_4e8851:
        *arg3 = 0
        uint32_t* eax_23
        eax_23.b = 1
        return eax_23
    case 0xc
        int32_t var_18 = 1
        int32_t* ebx_1 = *arg2
        void* eax_26 = data_75d4fc
        int32_t edi_14 = (arg2[2] != 0).d
        int32_t esi_15 = (arg2[1] != 0).d
        sub_4d6240(*(eax_26 + 0x1f4), ebx_1, esi_15, edi_14, &var_18)
        sub_4d6240(eax_26 + 0x74, ebx_1, esi_15, edi_14, &var_18)
        int32_t eax_27
        eax_27.b = 1
        return eax_27
    case 0xd
        sub_4d62b0(data_75d4fc + 0x74)
        int32_t eax_28
        eax_28.b = 1
        return eax_28
    case 0xe
        sub_4ed930(ecx)
        int32_t eax_29
        eax_29.b = 1
        return eax_29
    case 0xf
        *arg3 = sub_4ed980()
        uint32_t eax_30
        eax_30.b = 1
        return eax_30
    case 0x10
        sub_4a9a70()
        int32_t eax_31
        eax_31.b = 1
        return eax_31
    case 0x11
        sub_4a9ac0()
        int32_t eax_32
        eax_32.b = 1
        return eax_32
    case 0x12
        void* ecx_32 = data_75d4fc
        
        if (*(ecx_32 + 0x78) == 0)
        label_4e8935:
            *arg3 = 0
            uint32_t* eax_33
            eax_33.b = 1
            return eax_33
        
        if (*(ecx_32 + 0x94) s>= *(ecx_32 + 0x98))
            *arg3 = zx.d(sub_4a5760(ecx_32 + 0x178))
            uint32_t* eax_37
            eax_37.b = 1
            return eax_37
        
        *arg3 = 1
        uint32_t* eax_35
        eax_35.b = 1
        return eax_35
    case 0x13
        void* esi_25 = data_75d4fc
        
        if (*(esi_25 + 0x78) == 0)
            eax.b = 1
            return eax
        
        sub_4d66d0(esi_25 + 0x74)
        sub_4a62e0(esi_25 + 0x178, sub_4e7830)
        int32_t* eax_38
        eax_38.b = 1
        return eax_38
    case 0x14
        void* ecx_37 = data_75d4fc
        int32_t edx_1 = *arg2
        void* eax_40 = *(ecx_37 + 0x1f4)
        ebx.b = arg2[1] != 0
        *(eax_40 + 0x18) = ebx.b
        *(eax_40 + 0x14) = edx_1
        eax_40.b = 1
        *(ecx_37 + 0x8c) = ebx.b
        *(ecx_37 + 0x88) = edx_1
        return eax_40
    case 0x15
        ecx.b = *arg2 != 0
        sub_4ed9e0(ecx.b)
        void* eax_42
        eax_42.b = 1
        return eax_42
    case 0x16
        arg2[1]
        *arg3 = zx.d(sub_4eda20(*arg2))
        uint32_t* eax_44
        eax_44.b = 1
        return eax_44
    case 0x17
        sub_4edae0(*arg2)
        char* eax_45
        eax_45.b = 1
        return eax_45
    case 0x18
        int32_t* ecx_44 = data_75d4fc + 0x1cc
        
        if (ecx_44[5] u>= 0x10)
            ecx_44 = *ecx_44
        
        (*(**arg2 + 4))(ecx_44)
        int32_t eax_48
        eax_48.b = 1
        return eax_48
    case 0x19
        *arg3 = sub_4edbb0()
        uint32_t eax_49
        eax_49.b = 1
        return eax_49
    case 0x1a
        sub_4edc10()
        void* eax_50
        eax_50.b = 1
        return eax_50
    case 0x1b
        int32_t ecx_47 = arg2[1]
        sub_4d6970(data_75d4fc + 0x74, ecx_47, ecx_47, arg2[2], arg2[3])
        int32_t eax_52
        eax_52.b = 1
        return eax_52
    case 0x1c
        sub_4edc50(*arg2, arg2[1])
        int32_t eax_53
        eax_53.b = 1
        return eax_53
    case 0x1d
        *arg3 = zx.d(sub_4edd10(*arg2))
        uint32_t* eax_55
        eax_55.b = 1
        return eax_55
    case 0x1e
        *arg3 = zx.d(sub_4eddb0(*arg2))
        uint32_t* eax_57
        eax_57.b = 1
        return eax_57
    case 0x1f
        *arg3 = zx.d(sub_4ede80(*arg2, arg2[1]))
        uint32_t* eax_59
        eax_59.b = 1
        return eax_59
    case 0x20
        *arg3 = zx.d(sub_4edf40(*arg2, arg2[1]))
        uint32_t* eax_61
        eax_61.b = 1
        return eax_61
    case 0x21
        *arg3 = zx.d(sub_4ee0c0(*arg2, arg2[1]))
        uint32_t* eax_63
        eax_63.b = 1
        return eax_63
    case 0x22
        *arg3 = zx.d(sub_4ee200(*arg2, arg2[1]))
        uint32_t* eax_65
        eax_65.b = 1
        return eax_65
    case 0x23
        *arg3 = zx.d(sub_4ee340(*arg2, arg2[1]))
        uint32_t* eax_67
        eax_67.b = 1
        return eax_67
    case 0x24
        *arg3 = zx.d(sub_4ee480(*arg2))
        uint32_t* eax_69
        eax_69.b = 1
        return eax_69
    case 0x25
        *arg3 = zx.d(sub_4ee550(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_71
        eax_71.b = 1
        return eax_71
    case 0x26
        *arg3 = zx.d(sub_4ee680(*arg2, arg2[1]))
        uint32_t* eax_73
        eax_73.b = 1
        return eax_73
    case 0x27
        *arg3 = zx.d(sub_4ee770(*arg2))
        uint32_t* eax_75
        eax_75.b = 1
        return eax_75
    case 0x28
        *arg3 = sub_4ee840(*arg2)
        uint32_t eax_76
        eax_76.b = 1
        return eax_76
    case 0x29
        *arg3 = zx.d(sub_4ee8f0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_78
        eax_78.b = 1
        return eax_78
    case 0x2a
        *arg3 = zx.d(sub_4eea00(*arg2, arg2[1]))
        uint32_t* eax_80
        eax_80.b = 1
        return eax_80
    case 0x2b
        *arg3 = zx.d(sub_4eeaf0(*arg2, arg2[1]))
        uint32_t* eax_82
        eax_82.b = 1
        return eax_82
    case 0x2c
        *arg3 = sub_4eebb0(*arg2, arg2[1])
        uint32_t eax_83
        eax_83.b = 1
        return eax_83
    case 0x2d
        sub_4eecd0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_84
        eax_84.b = 1
        return eax_84
    case 0x2e
        sub_4eede0(*arg2, arg2[1])
        void* eax_85
        eax_85.b = 1
        return eax_85
    case 0x2f
        sub_4eeef0(*arg2, arg2[1])
        void* eax_86
        eax_86.b = 1
        return eax_86
    case 0x30
        sub_4eefc0(*arg2)
        void* eax_87
        eax_87.b = 1
        return eax_87
    case 0x31
        *arg3 = zx.d(sub_4ef080(*arg2, arg2[1]))
        uint32_t* eax_89
        eax_89.b = 1
        return eax_89
    case 0x32
        sub_4ef170(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_90
        eax_90.b = 1
        return eax_90
    case 0x33
        sub_4ef2e0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_91
        eax_91.b = 1
        return eax_91
    case 0x34
        *arg3 = zx.d(sub_4ef430(*arg2, arg2[1]))
        uint32_t* eax_93
        eax_93.b = 1
        return eax_93
    case 0x35
        *arg3 = sub_4ef520(*arg2, arg2[1])
        int32_t eax_94
        eax_94.b = 1
        return eax_94
    case 0x36
        sub_4ef660(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_95
        eax_95.b = 1
        return eax_95
    case 0x37
        *arg3 = sub_4ef7e0(*arg2, arg2[1])
        uint32_t eax_96
        eax_96.b = 1
        return eax_96
    case 0x38
        sub_4ef900(*arg2, arg2[1])
        void* eax_97
        eax_97.b = 1
        return eax_97
    case 0x39
        sub_4ef9c0(*arg2, arg2[1])
        void* eax_98
        eax_98.b = 1
        return eax_98
    case 0x3a
        *arg3 = zx.d(sub_4efa90(*arg2, arg2[1]))
        uint32_t* eax_100
        eax_100.b = 1
        return eax_100
    case 0x3b
        *arg3 = sub_4efb60(*arg2)
        uint32_t eax_101
        eax_101.b = 1
        return eax_101
    case 0x3c
        *arg3 = sub_4efc10(*arg2, arg2[1])
        uint32_t eax_102
        eax_102.b = 1
        return eax_102
    case 0x3d
        sub_4efcf0()
        int32_t* eax_103
        eax_103.b = 1
        return eax_103
    case 0x3e
        sub_4efd40()
        int32_t* eax_104
        eax_104.b = 1
        return eax_104
    case 0x3f
        void* ecx_139 = data_75d4fc
        int32_t* eax_105 = *(ecx_139 + 0x134)
        
        if (eax_105 == *(ecx_139 + 0x138))
            goto label_4e8851
        
        *arg3 = *(*eax_105 + 4)
        uint32_t* eax_107
        eax_107.b = 1
        return eax_107
    case 0x40
        void* ecx_141 = data_75d4fc
        int32_t* eax_108 = *(ecx_141 + 0x134)
        
        if (eax_108 != *(ecx_141 + 0x138))
            *arg3 = *(*eax_108 + 8)
            uint32_t* eax_111
            eax_111.b = 1
            return eax_111
        
        *arg3 = 0xffffffff
        uint32_t* eax_109
        eax_109.b = 1
        return eax_109
    case 0x41
        *arg3 = sub_4d6dc0(data_75d4fc + 0x74, *arg2)
        uint32_t eax_113
        eax_113.b = 1
        return eax_113
    case 0x42
        void* ecx_146 = data_75d4fc
        int32_t* eax_114 = *(ecx_146 + 0x134)
        
        if (eax_114 == *(ecx_146 + 0x138))
            goto label_4e8851
        
        *arg3 = *(*eax_114 + 0xc)
        uint32_t* eax_116
        eax_116.b = 1
        return eax_116
    case 0x43
        *arg3 = sub_4efd90()
        int32_t eax_117
        eax_117.b = 1
        return eax_117
    case 0x44
        *arg3 = sub_4a9c10(*arg2)
        uint32_t eax_119
        eax_119.b = 1
        return eax_119
    case 0x45
        *arg3 = sub_4a9c70(*arg2)
        uint32_t eax_121
        eax_121.b = 1
        return eax_121
    case 0x46
        *arg3 = sub_4a9cd0(*arg2)
        uint32_t* eax_123
        eax_123.b = 1
        return eax_123
    case 0x47
        *arg3 = zx.d(sub_4a9d30(*arg2))
        uint32_t* eax_126
        eax_126.b = 1
        return eax_126
    case 0x48
        eax = arg2
        int32_t* esi_80 = eax[1]
        
        if (esi_80 == 0)
            eax.b = 1
            return eax
        
        void* ecx_154 = sub_4d6cb0(data_75d4fc + 0x74, *eax)
        
        if (*(ecx_154 + 0x14) u>= 0x10)
            ecx_154 = *ecx_154
        
        (*(*esi_80 + 4))(ecx_154)
        int32_t eax_129
        eax_129.b = 1
        return eax_129
    case 0x49
        sub_4efdd0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_130
        eax_130.b = 1
        return eax_130
    case 0x4a
        sub_4efe30(*arg2)
        struct partsengine::CPartsList::VTable** eax_131
        eax_131.b = 1
        return eax_131
    case 0x4b
        *arg3 = zx.d(sub_4efec0(*arg2))
        uint32_t* eax_133
        eax_133.b = 1
        return eax_133
    case 0x4c
        sub_4eff20(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_134
        eax_134.b = 1
        return eax_134
    case 0x4d
        *arg3 = zx.d(sub_4eff80(*arg2))
        uint32_t* eax_136
        eax_136.b = 1
        return eax_136
    case 0x4e
        sub_4effe0(arg1, arg2[1], *arg2, arg2[2])
        struct partsengine::CPartsList::VTable** eax_137
        eax_137.b = 1
        return eax_137
    case 0x4f
        *arg3 = sub_4f0040(*arg2, arg2[1])
        uint32_t eax_138
        eax_138.b = 1
        return eax_138
    case 0x50
        sub_4f00b0(*arg2, arg2[1], arg2[2])
        struct partsengine::CPartsList::VTable** eax_139
        eax_139.b = 1
        return eax_139
    case 0x51
        sub_4f0150(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_140
        eax_140.b = 1
        return eax_140
    case 0x52
        *arg3 = sub_4f01c0(*arg2)
        uint32_t* eax_141
        eax_141.b = 1
        return eax_141
    case 0x53
        *arg3 = sub_4f0220(*arg2)
        uint32_t* eax_142
        eax_142.b = 1
        return eax_142
    case 0x54
        *arg3 = sub_4f0290(*arg2)
        uint32_t eax_143
        eax_143.b = 1
        return eax_143
    case 0x55
        *arg3 = sub_4f02f0(*arg2)
        uint32_t* eax_144
        eax_144.b = 1
        return eax_144
    case 0x56
        *arg3 = sub_4f0350(*arg2)
        uint32_t* eax_145
        eax_145.b = 1
        return eax_145
    case 0x57
        *arg3 = sub_4f03b0(*arg2)
        uint32_t eax_146
        eax_146.b = 1
        return eax_146
    case 0x58
        *arg3 = sub_4f0450(*arg2)
        uint32_t eax_147
        eax_147.b = 1
        return eax_147
    case 0x59
        sub_4f04b0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        struct partsengine::CPartsList::VTable** eax_148
        eax_148.b = 1
        return eax_148
    case 0x5a
        *arg3 = sub_4f0530(*arg2, arg2[1], x87_r0)
        uint32_t* eax_149
        eax_149.b = 1
        return eax_149
    case 0x5b
        *arg3 = sub_4f05b0(*arg2, arg2[1], x87_r0)
        uint32_t* eax_150
        eax_150.b = 1
        return eax_150
    case 0x5c
        sub_4f0630(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_151
        eax_151.b = 1
        return eax_151
    case 0x5d
        *arg3 = sub_4f0690(*arg2)
        uint32_t eax_152
        eax_152.b = 1
        return eax_152
    case 0x5e
        sub_4f06f0(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_153
        eax_153.b = 1
        return eax_153
    case 0x5f
        *arg3 = zx.d(sub_4f0750(*arg2))
        uint32_t* eax_155
        eax_155.b = 1
        return eax_155
    case 0x60
        sub_4f07b0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_156
        eax_156.b = 1
        return eax_156
    case 0x61
        *arg3 = sub_4f0820(*arg2)
        uint32_t eax_157
        eax_157.b = 1
        return eax_157
    case 0x62
        *arg3 = sub_4f0880(*arg2)
        uint32_t eax_158
        eax_158.b = 1
        return eax_158
    case 0x63
        *arg3 = sub_4f08e0(*arg2)
        uint32_t eax_159
        eax_159.b = 1
        return eax_159
    case 0x64
        *arg3 = sub_4f0940(*arg2, arg2[1])
        uint32_t eax_160
        eax_160.b = 1
        return eax_160
    case 0x65
        *arg3 = sub_4f09a0(*arg2, arg2[1])
        uint32_t eax_161
        eax_161.b = 1
        return eax_161
    case 0x66
        sub_4f0a00(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_162
        eax_162.b = 1
        return eax_162
    case 0x67
        *arg3 = zx.d(sub_4f0a70(*arg2))
        uint32_t* eax_164
        eax_164.b = 1
        return eax_164
    case 0x68
        sub_4f0ad0(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_165
        eax_165.b = 1
        return eax_165
    case 0x69
        *arg3 = zx.d(sub_4f0b40(*arg2))
        uint32_t* eax_167
        eax_167.b = 1
        return eax_167
    case 0x6a
        sub_4f0ba0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_168
        eax_168.b = 1
        return eax_168
    case 0x6b
        *arg3 = sub_4f0c40(*arg2)
        uint32_t eax_169
        eax_169.b = 1
        return eax_169
    case 0x6c
        sub_4f0ca0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        struct partsengine::CPartsList::VTable** eax_170
        eax_170.b = 1
        return eax_170
    case 0x6d
        *arg3 = sub_4f0d10(*arg2)
        uint32_t eax_171
        eax_171.b = 1
        return eax_171
    case 0x6e
        *arg3 = sub_4f0d70(*arg2)
        uint32_t eax_172
        eax_172.b = 1
        return eax_172
    case 0x6f
        *arg3 = sub_4f0dd0(*arg2)
        uint32_t eax_173
        eax_173.b = 1
        return eax_173
    case 0x70
        sub_4f0e30(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        struct partsengine::CPartsList::VTable** eax_174
        eax_174.b = 1
        return eax_174
    case 0x71
        *arg3 = sub_4f0ea0(*arg2)
        uint32_t eax_175
        eax_175.b = 1
        return eax_175
    case 0x72
        *arg3 = sub_4f0f00(*arg2)
        uint32_t eax_176
        eax_176.b = 1
        return eax_176
    case 0x73
        *arg3 = sub_4f0f60(*arg2)
        uint32_t eax_177
        eax_177.b = 1
        return eax_177
    case 0x74
        sub_4f0fc0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_178
        eax_178.b = 1
        return eax_178
    case 0x75
        *arg3 = sub_4f1030(*arg2)
        uint32_t eax_179
        eax_179.b = 1
        return eax_179
    case 0x76
        sub_4f1090(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_180
        eax_180.b = 1
        return eax_180
    case 0x77
        sub_4f1110(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_181
        eax_181.b = 1
        return eax_181
    case 0x78
        *arg3 = sub_4f1190(*arg2)
        uint32_t* eax_182
        eax_182.b = 1
        return eax_182
    case 0x79
        *arg3 = sub_4f11f0(*arg2)
        uint32_t* eax_183
        eax_183.b = 1
        return eax_183
    case 0x7a
        sub_4f1250(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_184
        eax_184.b = 1
        return eax_184
    case 0x7b
        sub_4f12d0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_185
        eax_185.b = 1
        return eax_185
    case 0x7c
        sub_4f1350(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_186
        eax_186.b = 1
        return eax_186
    case 0x7d
        *arg3 = sub_4f13d0(*arg2)
        uint32_t* eax_187
        eax_187.b = 1
        return eax_187
    case 0x7e
        *arg3 = sub_4f1430(*arg2)
        uint32_t* eax_188
        eax_188.b = 1
        return eax_188
    case 0x7f
        *arg3 = sub_4f1490(*arg2)
        uint32_t* eax_189
        eax_189.b = 1
        return eax_189
    case 0x80
        sub_4f14f0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4])
        struct partsengine::CPartsList::VTable** eax_190
        eax_190.b = 1
        return eax_190
    case 0x81
        *arg3 = sub_4f1590(*arg2)
        uint32_t eax_191
        eax_191.b = 1
        return eax_191
    case 0x82
        *arg3 = sub_4f15f0(*arg2)
        uint32_t eax_192
        eax_192.b = 1
        return eax_192
    case 0x83
        *arg3 = sub_4f1650(*arg2)
        uint32_t eax_193
        eax_193.b = 1
        return eax_193
    case 0x84
        *arg3 = sub_4f16b0(*arg2)
        uint32_t eax_194
        eax_194.b = 1
        return eax_194
    case 0x85
        sub_4f1710(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_195
        eax_195.b = 1
        return eax_195
    case 0x86
        *arg3 = sub_4f1770(*arg2)
        uint32_t eax_196
        eax_196.b = 1
        return eax_196
    case 0x87
        sub_4f17d0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_197
        eax_197.b = 1
        return eax_197
    case 0x88
        *arg3 = sub_4f1860(*arg2)
        uint32_t eax_198
        eax_198.b = 1
        return eax_198
    case 0x89
        sub_4f18c0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_199
        eax_199.b = 1
        return eax_199
    case 0x8a
        sub_4f1930(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_200
        eax_200.b = 1
        return eax_200
    case 0x8b
        *arg3 = sub_4f19a0(*arg2)
        uint32_t eax_201
        eax_201.b = 1
        return eax_201
    case 0x8c
        *arg3 = sub_4f1a00(*arg2)
        uint32_t eax_202
        eax_202.b = 1
        return eax_202
    case 0x8d
        sub_4f1a60(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_203
        eax_203.b = 1
        return eax_203
    case 0x8e
        *arg3 = sub_4f1ad0(*arg2)
        uint32_t eax_204
        eax_204.b = 1
        return eax_204
    case 0x8f
        sub_4f1b30(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_205
        eax_205.b = 1
        return eax_205
    case 0x90
        *arg3 = sub_4f1ba0(*arg2)
        uint32_t eax_206
        eax_206.b = 1
        return eax_206
    case 0x91
        sub_4f1c00(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_207
        eax_207.b = 1
        return eax_207
    case 0x92
        *arg3 = sub_4f1c70(*arg2)
        uint32_t eax_208
        eax_208.b = 1
        return eax_208
    case 0x93
        sub_4f1cd0(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_209
        eax_209.b = 1
        return eax_209
    case 0x94
        *arg3 = zx.d(sub_4f1d40(*arg2))
        uint32_t* eax_211
        eax_211.b = 1
        return eax_211
    case 0x95
        sub_4f1da0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_212
        eax_212.b = 1
        return eax_212
    case 0x96
        *arg3 = sub_4f1e10(*arg2)
        uint32_t eax_213
        eax_213.b = 1
        return eax_213
    case 0x97
        ecx_348 = arg2[1]
        edx_54 = *arg2
        
        if (ecx_348 != 0)
            goto label_4e97db
        
        eax = sub_4a8750(data_75d4fc + 0x174, edx_54)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4a64b0(&eax[0x13])
        int32_t eax_215
        eax_215.b = 1
        return eax_215
    case 0x98
        *arg3 = sub_4f1e70(*arg2)
        uint32_t eax_216
        eax_216.b = 1
        return eax_216
    case 0x99
        *arg3 = zx.d(sub_4f1ed0(*arg2, arg2[1]))
        uint32_t* eax_218
        eax_218.b = 1
        return eax_218
    case 0x9a
        sub_4f1f50(*arg2)
        struct partsengine::CPartsList::VTable** eax_219
        eax_219.b = 1
        return eax_219
    case 0x9b
        edx_54 = arg2[1]
        ecx_348 = *arg2
    label_4e97db:
        sub_4f1fb0(ecx_348, edx_54)
        struct partsengine::CPartsList::VTable** eax_220
        eax_220.b = 1
        return eax_220
    case 0x9c
        sub_4f2040(arg1, arg2[1], *arg2, arg2[2])
        struct partsengine::CPartsList::VTable** eax_221
        eax_221.b = 1
        return eax_221
    case 0x9d
        sub_4f20b0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_222
        eax_222.b = 1
        return eax_222
    case 0x9e
        *arg3 = sub_4f2110(*arg2)
        int32_t eax_223
        eax_223.b = 1
        return eax_223
    case 0x9f
        *arg3 = sub_4f2180(*arg2, arg2[1])
        int32_t eax_224
        eax_224.b = 1
        return eax_224
    case 0xa0
        *arg3 = sub_4f21e0(*arg2, arg2[1])
        uint32_t eax_225
        eax_225.b = 1
        return eax_225
    case 0xa1
        arg2[3]
        arg2[2]
        arg2[1]
        int32_t* var_34_5 = arg2
        sub_4f2260(arg1, arg2[5], *arg2, arg2[4], arg2[6], arg2[7])
        struct partsengine::CPartsList::VTable** eax_226
        eax_226.b = 1
        return eax_226
    case 0xa2
        sub_4f2380(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_227
        eax_227.b = 1
        return eax_227
    case 0xa3
        sub_4f2470(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        struct partsengine::CPartsList::VTable** eax_228
        eax_228.b = 1
        return eax_228
    case 0xa4
        sub_4f2570(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        struct partsengine::CPartsList::VTable** eax_229
        eax_229.b = 1
        return eax_229
    case 0xa5
        *arg3 = zx.d(sub_4f2670(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_231
        eax_231.b = 1
        return eax_231
    case 0xa6
        *arg3 = zx.d(sub_4f27b0(*arg2, arg2[1]))
        uint32_t* eax_233
        eax_233.b = 1
        return eax_233
    case 0xa7
        arg2[3]
        arg2[2]
        arg2[1]
        int32_t* var_34_11 = arg2
        sub_4f2820(arg1, arg2[5], *arg2, arg2[4], arg2[6], arg2[7])
        struct partsengine::CPartsList::VTable** eax_234
        eax_234.b = 1
        return eax_234
    case 0xa8
        arg2[3]
        arg2[2]
        arg2[1]
        int32_t* var_34_13 = arg2
        sub_4f2940(arg1, arg2[5], *arg2, arg2[4], arg2[6], arg2[7])
        struct partsengine::CPartsList::VTable** eax_235
        eax_235.b = 1
        return eax_235
    case 0xa9
        sub_4f2a60(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_236
        eax_236.b = 1
        return eax_236
    case 0xaa
        arg2[2]
        arg2[1]
        sub_4f2b50(arg1, arg2[3], *arg2, arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_237
        eax_237.b = 1
        return eax_237
    case 0xab
        arg2[2]
        arg2[1]
        sub_4f2ca0(arg1, arg2[3], *arg2, arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_238
        eax_238.b = 1
        return eax_238
    case 0xac
        arg2[2]
        arg2[1]
        sub_4f2df0(arg1, arg2[3], *arg2, arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_239
        eax_239.b = 1
        return eax_239
    case 0xad
        arg2[2]
        arg2[1]
        sub_4f2f40(arg1, arg2[3], *arg2, arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_240
        eax_240.b = 1
        return eax_240
    case 0xae
        arg2[2]
        arg2[1]
        sub_4f3090(arg1, arg2[3], *arg2, arg2[4], arg2[5])
        struct partsengine::CPartsList::VTable** eax_241
        eax_241.b = 1
        return eax_241
    case 0xaf
        sub_4f31e0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4])
        struct partsengine::CPartsList::VTable** eax_242
        eax_242.b = 1
        return eax_242
    case 0xb0
        sub_4f3250(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_243
        eax_243.b = 1
        return eax_243
    case 0xb1
        *arg3 = zx.d(sub_4f32c0(*arg2))
        uint32_t* eax_245
        eax_245.b = 1
        return eax_245
    case 0xb2
        sub_4f3320(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_246
        eax_246.b = 1
        return eax_246
    case 0xb3
        *arg3 = zx.d(sub_4f3390(*arg2))
        uint32_t* eax_248
        eax_248.b = 1
        return eax_248
    case 0xb4
        sub_4f33f0(arg1, arg2[1] != 0, *arg2, arg2[2])
        struct partsengine::CPartsList::VTable** eax_249
        eax_249.b = 1
        return eax_249
    case 0xb5
        *arg3 = zx.d(sub_4f3470(*arg2, arg2[1]))
        uint32_t* eax_251
        eax_251.b = 1
        return eax_251
    case 0xb6
        sub_4f34e0(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_252
        eax_252.b = 1
        return eax_252
    case 0xb7
        *arg3 = zx.d(sub_4f3550(*arg2))
        uint32_t* eax_254
        eax_254.b = 1
        return eax_254
    case 0xb8
        sub_4f35b0(arg1, arg2[1], *arg2, arg2[2])
        struct partsengine::CPartsList::VTable** eax_255
        eax_255.b = 1
        return eax_255
    case 0xb9
        sub_4f36c0(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_256
        eax_256.b = 1
        return eax_256
    case 0xba
        sub_4f37b0(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_257
        eax_257.b = 1
        return eax_257
    case 0xbb
        *arg3 = zx.d(sub_4f3820(*arg2))
        uint32_t* eax_259
        eax_259.b = 1
        return eax_259
    case 0xbc
        sub_4f3880(*arg2, arg2[1] != 0)
        struct partsengine::CPartsList::VTable** eax_260
        eax_260.b = 1
        return eax_260
    case 0xbd
        *arg3 = zx.d(sub_4f38f0(*arg2))
        uint32_t* eax_262
        eax_262.b = 1
        return eax_262
    case 0xbe
        sub_4f3950(*arg2)
        struct partsengine::CPartsList::VTable** eax_263
        eax_263.b = 1
        return eax_263
    case 0xbf
        sub_4f39b0(*arg2, arg2[1])
        struct partsengine::CPartsList::VTable** eax_264
        eax_264.b = 1
        return eax_264
    case 0xc0
        sub_4f3a20(*arg2)
        struct partsengine::CPartsList::VTable** eax_265
        eax_265.b = 1
        return eax_265
    case 0xc1
        sub_4f3a80(arg1, arg2[1], *arg2, arg2[2])
        void* eax_266
        eax_266.b = 1
        return eax_266
    case 0xc2
        sub_4f3ad0(*arg2, arg2[1] != 0)
        void* eax_267
        eax_267.b = 1
        return eax_267
    case 0xc3
        eax = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            goto label_4e8935
        
        eax.b = eax[0x26].b
        *arg3 = zx.d(eax.b)
        uint32_t* eax_269
        eax_269.b = 1
        return eax_269
    case 0xc4
        sub_4f3b10(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_270
        eax_270.b = 1
        return eax_270
    case 0xc5
        void* eax_272 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_272 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_272 + 0x9c)
        uint32_t* eax_273
        eax_273.b = 1
        return eax_273
    case 0xc6
        void* eax_275 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_275 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_275 + 0xa0)
        uint32_t* eax_276
        eax_276.b = 1
        return eax_276
    case 0xc7
        void* eax_278 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_278 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_278 + 0xa4)
        uint32_t* eax_279
        eax_279.b = 1
        return eax_279
    case 0xc8
        int32_t var_2c_55 = ecx
        int32_t* var_3c_4 = arg2
        sub_4f3b70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_280
        eax_280.b = 1
        return eax_280
    case 0xc9
        int32_t var_2c_57 = arg2[0xa]
        sub_4f3c20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_281
        eax_281.b = 1
        return eax_281
    case 0xca
        sub_4f3d10(*arg2, arg2[1])
        int32_t* eax_282
        eax_282.b = 1
        return eax_282
    case 0xcb
        int32_t* esi_212 = arg2[1]
        eax = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_472 = &eax[0x37]
        
        if (eax[0x3c] u>= 0x10)
            ecx_472 = *ecx_472
        
        (*(*esi_212 + 4))(ecx_472)
        int32_t eax_285
        eax_285.b = 1
        return eax_285
    case 0xcc
        sub_4f3dc0(*arg2, arg2[1])
        int32_t* eax_286
        eax_286.b = 1
        return eax_286
    case 0xcd
        int32_t* esi_215 = arg2[1]
        eax = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_478 = &eax[0x55]
        
        if (eax[0x5a] u>= 0x10)
            ecx_478 = *ecx_478
        
        (*(*esi_215 + 4))(ecx_478)
        int32_t eax_289
        eax_289.b = 1
        return eax_289
    case 0xce
        sub_4f3e70(*arg2, arg2[1])
        int32_t* eax_290
        eax_290.b = 1
        return eax_290
    case 0xcf
        int32_t* esi_218 = arg2[1]
        eax = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_484 = &eax[0x73]
        
        if (eax[0x78] u>= 0x10)
            ecx_484 = *ecx_484
        
        (*(*esi_218 + 4))(ecx_484)
        int32_t eax_293
        eax_293.b = 1
        return eax_293
    case 0xd0
        sub_4f3f20(*arg2, arg2[1])
        void* eax_294
        eax_294.b = 1
        return eax_294
    case 0xd1
        void* eax_296 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_296 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_296 + 0x1e4)
        uint32_t* eax_297
        eax_297.b = 1
        return eax_297
    case 0xd2
        sub_4f3f60(*arg2, arg2[1])
        void* eax_298
        eax_298.b = 1
        return eax_298
    case 0xd3
        void* eax_300 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_300 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_300 + 0x1e8)
        uint32_t* eax_301
        eax_301.b = 1
        return eax_301
    case 0xd4
        sub_4f3fa0(*arg2, arg2[1])
        void* eax_302
        eax_302.b = 1
        return eax_302
    case 0xd5
        void* eax_304 = sub_4a87c0(data_75d4fc + 0x174, *arg2)
        
        if (eax_304 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_304 + 0x1ec)
        uint32_t* eax_305
        eax_305.b = 1
        return eax_305
    case 0xd6
        sub_4f3fe0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_306
        eax_306.b = 1
        return eax_306
    case 0xd7
        *arg3 = sub_4f4030(*arg2)
        uint32_t eax_307
        eax_307.b = 1
        return eax_307
    case 0xd8
        *arg3 = sub_4f4070(*arg2)
        uint32_t eax_308
        eax_308.b = 1
        return eax_308
    case 0xd9
        int32_t var_c
        var_c.b = arg2[1] != 0
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_49e1d0(eax, var_c)
        int32_t eax_310
        eax_310.b = 1
        return eax_310
    case 0xda
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            goto label_4e8935
        
        eax.b = eax[0x29].b
        *arg3 = zx.d(eax.b)
        uint32_t* eax_312
        eax_312.b = 1
        return eax_312
    case 0xdb
        sub_4f40b0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_313
        eax_313.b = 1
        return eax_313
    case 0xdc
        void* eax_315 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_315 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_315 + 0xa8)
        uint32_t* eax_316
        eax_316.b = 1
        return eax_316
    case 0xdd
        void* eax_318 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_318 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_318 + 0xac)
        uint32_t* eax_319
        eax_319.b = 1
        return eax_319
    case 0xde
        void* eax_321 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_321 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_321 + 0xb0)
        uint32_t* eax_322
        eax_322.b = 1
        return eax_322
    case 0xdf
        int32_t var_2c_75 = ecx
        int32_t* var_3c_7 = arg2
        sub_4f4110(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_323
        eax_323.b = 1
        return eax_323
    case 0xe0
        int32_t var_2c_77 = arg2[0xa]
        sub_4f41c0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_324
        eax_324.b = 1
        return eax_324
    case 0xe1
        sub_4f42b0(*arg2, arg2[1])
        int32_t* eax_325
        eax_325.b = 1
        return eax_325
    case 0xe2
        int32_t* esi_238 = arg2[1]
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_534 = &eax[0x3a]
        
        if (eax[0x3f] u>= 0x10)
            ecx_534 = *ecx_534
        
        (*(*esi_238 + 4))(ecx_534)
        int32_t eax_328
        eax_328.b = 1
        return eax_328
    case 0xe3
        sub_4f4360(*arg2, arg2[1])
        int32_t* eax_329
        eax_329.b = 1
        return eax_329
    case 0xe4
        int32_t* esi_241 = arg2[1]
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_540 = &eax[0x64]
        
        if (eax[0x69] u>= 0x10)
            ecx_540 = *ecx_540
        
        (*(*esi_241 + 4))(ecx_540)
        int32_t eax_332
        eax_332.b = 1
        return eax_332
    case 0xe5
        sub_4f4410(*arg2, arg2[1])
        int32_t* eax_333
        eax_333.b = 1
        return eax_333
    case 0xe6
        int32_t* esi_244 = arg2[1]
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_546 = &eax[0x8e]
        
        if (eax[0x93] u>= 0x10)
            ecx_546 = *ecx_546
        
        (*(*esi_244 + 4))(ecx_546)
        int32_t eax_336
        eax_336.b = 1
        return eax_336
    case 0xe7
        sub_4f44c0(*arg2, arg2[1])
        void* eax_337
        eax_337.b = 1
        return eax_337
    case 0xe8
        void* eax_339 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_339 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_339 + 0x250)
        uint32_t* eax_340
        eax_340.b = 1
        return eax_340
    case 0xe9
        sub_4f4500(*arg2, arg2[1] != 0)
        void* eax_341
        eax_341.b = 1
        return eax_341
    case 0xea
        eax = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            goto label_4e8935
        
        eax.b = eax[0x95].b
        *arg3 = zx.d(eax.b)
        uint32_t* eax_343
        eax_343.b = 1
        return eax_343
    case 0xeb
        sub_4f4540(*arg2, arg2[1])
        void* eax_344
        eax_344.b = 1
        return eax_344
    case 0xec
        void* eax_346 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_346 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_346 + 0x258)
        uint32_t* eax_347
        eax_347.b = 1
        return eax_347
    case 0xed
        sub_4f4580(*arg2, arg2[1])
        void* eax_348
        eax_348.b = 1
        return eax_348
    case 0xee
        void* eax_350 = sub_4a8820(data_75d4fc + 0x174, *arg2)
        
        if (eax_350 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_350 + 0x25c)
        uint32_t* eax_351
        eax_351.b = 1
        return eax_351
    case 0xef
        sub_4f45c0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_352
        eax_352.b = 1
        return eax_352
    case 0xf0
        sub_4f4620(*arg2, arg2[1])
        void* eax_353
        eax_353.b = 1
        return eax_353
    case 0xf1
        sub_4f4660(*arg2, arg2[1])
        void* eax_354
        eax_354.b = 1
        return eax_354
    case 0xf2
        void* eax_356 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_356 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_356 + 0xf0)
        uint32_t* eax_357
        eax_357.b = 1
        return eax_357
    case 0xf3
        void* eax_359 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_359 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_359 + 0xf4)
        uint32_t* eax_360
        eax_360.b = 1
        return eax_360
    case 0xf4
        sub_4f46a0(*arg2, arg2[1])
        int32_t* eax_361
        eax_361.b = 1
        return eax_361
    case 0xf5
        sub_4f46f0(*arg2, arg2[1])
        int32_t* eax_362
        eax_362.b = 1
        return eax_362
    case 0xf6
        int32_t esi_261 = arg2[1]
        eax = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        int32_t var_2c_92 = esi_261
        sub_4aaa40(&eax[0x2d])
        int32_t* eax_364
        eax_364.b = 1
        return eax_364
    case 0xf7
        int32_t xmm0_20 = arg2[1]
        eax = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4aab20(&eax[0x2d], xmm0_20)
        float* eax_366
        eax_366.b = 1
        return eax_366
    case 0xf8
        int32_t esi_264 = arg2[1]
        eax = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0 || eax[0x42] == esi_264)
            eax.b = 1
            return eax
        
        eax[0x42] = esi_264
        eax.b = 1
        return eax
    case 0xf9
        void* eax_369 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_369 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_369 + 0xf8)
        uint32_t* eax_370
        eax_370.b = 1
        return eax_370
    case 0xfa
        void* eax_372 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_372 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_372 + 0xfc)
        uint32_t* eax_373
        eax_373.b = 1
        return eax_373
    case 0xfb
        void* eax_375 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_375 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_375 + 0x100)
        uint32_t* eax_376
        eax_376.b = 1
        return eax_376
    case 0xfc
        void* eax_378 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_378 != 0)
            *arg3 = *(eax_378 + 0x104)
            uint32_t* eax_380
            eax_380.b = 1
            return eax_380
        
        *arg3 = 0
        uint32_t* eax_379
        eax_379.b = 1
        return eax_379
    case 0xfd
        void* eax_382 = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax_382 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_382 + 0x108)
        uint32_t* eax_383
        eax_383.b = 1
        return eax_383
    case 0xfe
        sub_4f4740(*arg2, arg2[1])
        int32_t* eax_384
        eax_384.b = 1
        return eax_384
    case 0xff
        int32_t* esi_273 = arg2[1]
        eax = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_610 = &eax[0x43]
        
        if (eax[0x48] u>= 0x10)
            ecx_610 = *ecx_610
        
        (*(*esi_273 + 4))(ecx_610)
        int32_t eax_387
        eax_387.b = 1
        return eax_387
    case 0x100
        sub_4f47f0(*arg2, arg2[1])
        int32_t* eax_388
        eax_388.b = 1
        return eax_388
    case 0x101
        int32_t* esi_276 = arg2[1]
        eax = sub_4a8880(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        void* ecx_616 = &eax[0x61]
        
        if (eax[0x66] u>= 0x10)
            ecx_616 = *ecx_616
        
        (*(*esi_276 + 4))(ecx_616)
        int32_t eax_391
        eax_391.b = 1
        return eax_391
    case 0x102
        sub_4f48a0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_392
        eax_392.b = 1
        return eax_392
    case 0x103
        sub_4f4900(*arg2, arg2[1])
        void* eax_393
        eax_393.b = 1
        return eax_393
    case 0x104
        sub_4f4940(*arg2, arg2[1])
        void* eax_394
        eax_394.b = 1
        return eax_394
    case 0x105
        *arg3 = sub_4f4980(*arg2)
        uint32_t eax_395
        eax_395.b = 1
        return eax_395
    case 0x106
        *arg3 = sub_4f49b0(*arg2)
        uint32_t eax_396
        eax_396.b = 1
        return eax_396
    case 0x107
        sub_4f49e0(*arg2, arg2[1])
        int32_t* eax_397
        eax_397.b = 1
        return eax_397
    case 0x108
        sub_4f4a30(*arg2, arg2[1])
        int32_t* eax_398
        eax_398.b = 1
        return eax_398
    case 0x109
        arg2[1]
        sub_4f4a80(*arg2)
        int32_t* eax_399
        eax_399.b = 1
        return eax_399
    case 0x10a
        sub_4f4ab0(*arg2, arg2[1])
        void* eax_400
        eax_400.b = 1
        return eax_400
    case 0x10b
        sub_4f4af0(*arg2, arg2[1])
        void* eax_401
        eax_401.b = 1
        return eax_401
    case 0x10c
        *arg3 = sub_4f4b20(*arg2)
        uint32_t eax_402
        eax_402.b = 1
        return eax_402
    case 0x10d
        *arg3 = sub_4f4b50(*arg2)
        uint32_t eax_403
        eax_403.b = 1
        return eax_403
    case 0x10e
        *arg3 = sub_4f4b80(*arg2)
        uint32_t eax_404
        eax_404.b = 1
        return eax_404
    case 0x10f
        *arg3 = sub_4f4bb0(*arg2)
        uint32_t* eax_405
        eax_405.b = 1
        return eax_405
    case 0x110
        *arg3 = sub_4f4be0(*arg2)
        uint32_t eax_406
        eax_406.b = 1
        return eax_406
    case 0x111
        sub_4f4c10(*arg2, arg2[1])
        int32_t* eax_407
        eax_407.b = 1
        return eax_407
    case 0x112
        sub_4f4cc0(*arg2, arg2[1])
        void* eax_408
        eax_408.b = 1
        return eax_408
    case 0x113
        sub_4f4d00(*arg2, arg2[1])
        int32_t* eax_409
        eax_409.b = 1
        return eax_409
    case 0x114
        sub_4f4db0(*arg2, arg2[1])
        void* eax_410
        eax_410.b = 1
        return eax_410
    case 0x115
        sub_4f4df0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_411
        eax_411.b = 1
        return eax_411
    case 0x116
        int32_t var_2c_106 = ecx
        int32_t* var_3c_10 = arg2
        sub_4f4e40(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_412
        eax_412.b = 1
        return eax_412
    case 0x117
        int32_t var_2c_108 = arg2[0xa]
        sub_4f4ef0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_413
        eax_413.b = 1
        return eax_413
    case 0x118
        sub_4f4fe0(*arg2, arg2[1] != 0)
        void* eax_414
        eax_414.b = 1
        return eax_414
    case 0x119
        *arg3 = zx.d(sub_4f5020(*arg2))
        uint32_t* eax_416
        eax_416.b = 1
        return eax_416
    case 0x11a
        sub_4f5050(*arg2, arg2[1])
        char* eax_417
        eax_417.b = 1
        return eax_417
    case 0x11b
        sub_4f5100(*arg2, arg2[1])
        void* eax_418
        eax_418.b = 1
        return eax_418
    case 0x11c
        sub_4f5140(*arg2, arg2[1])
        char* eax_419
        eax_419.b = 1
        return eax_419
    case 0x11d
        *arg3 = sub_4f5190(*arg2)
        uint32_t eax_420
        eax_420.b = 1
        return eax_420
    case 0x11e
        sub_4f51c0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_421
        eax_421.b = 1
        return eax_421
    case 0x11f
        *arg3 = sub_4f5220(*arg2)
        uint32_t eax_422
        eax_422.b = 1
        return eax_422
    case 0x120
        *arg3 = sub_4f5250(*arg2)
        uint32_t eax_423
        eax_423.b = 1
        return eax_423
    case 0x121
        *arg3 = sub_4f5280(*arg2)
        uint32_t eax_424
        eax_424.b = 1
        return eax_424
    case 0x122
        sub_4f52b0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_425
        eax_425.b = 1
        return eax_425
    case 0x123
        *arg3 = sub_4f5310(*arg2)
        uint32_t eax_426
        eax_426.b = 1
        return eax_426
    case 0x124
        *arg3 = sub_4f5340(*arg2)
        uint32_t eax_427
        eax_427.b = 1
        return eax_427
    case 0x125
        *arg3 = sub_4f5370(*arg2)
        uint32_t eax_428
        eax_428.b = 1
        return eax_428
    case 0x126
        sub_4f53a0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_429
        eax_429.b = 1
        return eax_429
    case 0x127
        *arg3 = sub_4f5400(*arg2)
        uint32_t eax_430
        eax_430.b = 1
        return eax_430
    case 0x128
        *arg3 = sub_4f5430(*arg2)
        uint32_t eax_431
        eax_431.b = 1
        return eax_431
    case 0x129
        *arg3 = sub_4f5460(*arg2)
        uint32_t eax_432
        eax_432.b = 1
        return eax_432
    case 0x12a
        sub_4f5490(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_433
        eax_433.b = 1
        return eax_433
    case 0x12b
        *arg3 = sub_4f54f0(*arg2)
        uint32_t eax_434
        eax_434.b = 1
        return eax_434
    case 0x12c
        *arg3 = sub_4f5520(*arg2)
        uint32_t eax_435
        eax_435.b = 1
        return eax_435
    case 0x12d
        *arg3 = sub_4f5550(*arg2)
        uint32_t eax_436
        eax_436.b = 1
        return eax_436
    case 0x12e
        sub_4f5580(*arg2, arg2[1])
        int32_t* eax_437
        eax_437.b = 1
        return eax_437
    case 0x12f
        sub_4f5630(*arg2, arg2[1])
        void* eax_438
        eax_438.b = 1
        return eax_438
    case 0x130
        sub_4f5670(*arg2, arg2[1])
        void* eax_439
        eax_439.b = 1
        return eax_439
    case 0x131
        *arg3 = sub_4f56b0(*arg2)
        uint32_t eax_440
        eax_440.b = 1
        return eax_440
    case 0x132
        sub_4f56e0(*arg2, arg2[1] != 0)
        void* eax_441
        eax_441.b = 1
        return eax_441
    case 0x133
        *arg3 = zx.d(sub_4f5720(*arg2))
        uint32_t* eax_443
        eax_443.b = 1
        return eax_443
    case 0x134
        eax = sub_4a8940(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4e0470(eax)
        int32_t* eax_445
        eax_445.b = 1
        return eax_445
    case 0x135
        sub_4f5750(arg1, arg2[1], *arg2, arg2[2])
        void* eax_446
        eax_446.b = 1
        return eax_446
    case 0x136
        sub_4f57b0(*arg2, arg2[1])
        void* eax_447
        eax_447.b = 1
        return eax_447
    case 0x137
        *arg3 = sub_4f5810(*arg2)
        uint32_t eax_448
        eax_448.b = 1
        return eax_448
    case 0x138
        sub_4f5840(arg1, arg2[1], *arg2, arg2[2])
        void* eax_449
        eax_449.b = 1
        return eax_449
    case 0x139
        *arg3 = sub_4f5890(*arg2)
        uint32_t eax_450
        eax_450.b = 1
        return eax_450
    case 0x13a
        *arg3 = sub_4f58c0(*arg2)
        uint32_t eax_451
        eax_451.b = 1
        return eax_451
    case 0x13b
        sub_4f58f0(*arg2, arg2[1])
        int32_t* eax_452
        eax_452.b = 1
        return eax_452
    case 0x13c
        sub_4f59a0(*arg2, arg2[1])
        void* eax_453
        eax_453.b = 1
        return eax_453
    case 0x13d
        sub_4f59e0(*arg2, arg2[1])
        int32_t* eax_454
        eax_454.b = 1
        return eax_454
    case 0x13e
        *arg3 = sub_4f5a40(*arg2)
        uint32_t eax_455
        eax_455.b = 1
        return eax_455
    case 0x13f
        sub_4f5a70(*arg2, arg2[1])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_456
        eax_456.b = 1
        return eax_456
    case 0x140
        sub_4f5b20(arg1, arg2[1], *arg2, arg2[2])
        int32_t* eax_457
        eax_457.b = 1
        return eax_457
    case 0x141
        sub_4f5bd0(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_458
        eax_458.b = 1
        return eax_458
    case 0x142
        *arg3 = sub_4f5c80(*arg2)
        int32_t eax_459
        eax_459.b = 1
        return eax_459
    case 0x143
        sub_4f5cc0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_460
        eax_460.b = 1
        return eax_460
    case 0x144
        sub_4f5d30(*arg2, arg2[1])
        int32_t eax_461
        eax_461.b = 1
        return eax_461
    case 0x145
        sub_4f5d60(*arg2)
        void* eax_462
        eax_462.b = 1
        return eax_462
    case 0x146
        *arg3 = sub_4f5db0(*arg2)
        uint32_t eax_463
        eax_463.b = 1
        return eax_463
    case 0x147
        sub_4f5de0(*arg2, arg2[1])
        void* eax_464
        eax_464.b = 1
        return eax_464
    case 0x148
        int32_t var_2c_119 = ecx
        int32_t* var_3c_13 = arg2
        sub_4f5e50(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_465
        eax_465.b = 1
        return eax_465
    case 0x149
        int32_t var_2c_121 = arg2[0xa]
        sub_4f5f00(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_466
        eax_466.b = 1
        return eax_466
    case 0x14a
        arg2[1]
        sub_4f5ff0(*arg2)
        void* eax_467
        eax_467.b = 1
        return eax_467
    case 0x14b
        *arg3 = sub_4f6040(*arg2)
        uint32_t eax_468
        eax_468.b = 1
        return eax_468
    case 0x14c
        sub_4f6070(*arg2, arg2[1])
        void* eax_469
        eax_469.b = 1
        return eax_469
    case 0x14d
        *arg3 = sub_4f60b0(*arg2)
        uint32_t eax_470
        eax_470.b = 1
        return eax_470
    case 0x14e
        sub_4f60e0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_471
        eax_471.b = 1
        return eax_471
    case 0x14f
        sub_4f6130(arg1, arg2[1], *arg2, arg2[2])
        void* eax_472
        eax_472.b = 1
        return eax_472
    case 0x150
        *arg3 = sub_4f6180(*arg2)
        uint32_t eax_473
        eax_473.b = 1
        return eax_473
    case 0x151
        *arg3 = sub_4f61b0(*arg2)
        uint32_t eax_474
        eax_474.b = 1
        return eax_474
    case 0x152
        sub_4f61e0(*arg2, arg2[1])
        int32_t* eax_475
        eax_475.b = 1
        return eax_475
    case 0x153
        sub_4f6290(*arg2, arg2[1])
        void* eax_476
        eax_476.b = 1
        return eax_476
    case 0x154
        sub_4f62d0(*arg2, arg2[1])
        int32_t* eax_477
        eax_477.b = 1
        return eax_477
    case 0x155
        sub_4f6380(*arg2, arg2[1])
        void* eax_478
        eax_478.b = 1
        return eax_478
    case 0x156
        int32_t var_2c_124 = ecx
        int32_t* var_3c_16 = arg2
        sub_4f63c0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_479
        eax_479.b = 1
        return eax_479
    case 0x157
        int32_t var_2c_126 = arg2[0xa]
        sub_4f6470(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_480
        eax_480.b = 1
        return eax_480
    case 0x158
        sub_4f6560(*arg2, arg2[1])
        void* eax_481
        eax_481.b = 1
        return eax_481
    case 0x159
        *arg3 = sub_4f65a0(*arg2)
        uint32_t eax_482
        eax_482.b = 1
        return eax_482
    case 0x15a
        sub_4f65d0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_483
        eax_483.b = 1
        return eax_483
    case 0x15b
        int32_t var_2c_128 = ecx
        int32_t* var_3c_19 = arg2
        sub_4f6620(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        void* eax_484
        eax_484.b = 1
        return eax_484
    case 0x15c
        int32_t var_2c_130 = arg2[0xa]
        sub_4f66d0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t eax_485
        eax_485.b = 1
        return eax_485
    case 0x15d
        sub_4f67c0(*arg2, arg2[1] != 0)
        void* eax_486
        eax_486.b = 1
        return eax_486
    case 0x15e
        *arg3 = zx.d(sub_4f6800(*arg2))
        uint32_t* eax_488
        eax_488.b = 1
        return eax_488
    case 0x15f
        sub_4f6830(*arg2, arg2[1])
        char* eax_489
        eax_489.b = 1
        return eax_489
    case 0x160
        sub_4f68e0(*arg2, arg2[1])
        void* eax_490
        eax_490.b = 1
        return eax_490
    case 0x161
        sub_4f6920(*arg2, arg2[1])
        char* eax_491
        eax_491.b = 1
        return eax_491
    case 0x162
        *arg3 = sub_4f6970(*arg2)
        uint32_t eax_492
        eax_492.b = 1
        return eax_492
    case 0x163
        sub_4f69a0(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_493
        eax_493.b = 1
        return eax_493
    case 0x164
        *arg3 = sub_4f6a00(*arg2)
        uint32_t eax_494
        eax_494.b = 1
        return eax_494
    case 0x165
        *arg3 = sub_4f6a30(*arg2)
        uint32_t eax_495
        eax_495.b = 1
        return eax_495
    case 0x166
        *arg3 = sub_4f6a60(*arg2)
        uint32_t eax_496
        eax_496.b = 1
        return eax_496
    case 0x167
        sub_4f6a90(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_497
        eax_497.b = 1
        return eax_497
    case 0x168
        *arg3 = sub_4f6af0(*arg2)
        uint32_t eax_498
        eax_498.b = 1
        return eax_498
    case 0x169
        *arg3 = sub_4f6b20(*arg2)
        uint32_t eax_499
        eax_499.b = 1
        return eax_499
    case 0x16a
        *arg3 = sub_4f6b50(*arg2)
        uint32_t eax_500
        eax_500.b = 1
        return eax_500
    case 0x16b
        sub_4f6b80(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_501
        eax_501.b = 1
        return eax_501
    case 0x16c
        *arg3 = sub_4f6be0(*arg2)
        uint32_t eax_502
        eax_502.b = 1
        return eax_502
    case 0x16d
        *arg3 = sub_4f6c10(*arg2)
        uint32_t eax_503
        eax_503.b = 1
        return eax_503
    case 0x16e
        *arg3 = sub_4f6c40(*arg2)
        uint32_t eax_504
        eax_504.b = 1
        return eax_504
    case 0x16f
        sub_4f6c70(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_505
        eax_505.b = 1
        return eax_505
    case 0x170
        *arg3 = sub_4f6cd0(*arg2)
        uint32_t eax_506
        eax_506.b = 1
        return eax_506
    case 0x171
        *arg3 = sub_4f6d00(*arg2)
        uint32_t eax_507
        eax_507.b = 1
        return eax_507
    case 0x172
        *arg3 = sub_4f6d30(*arg2)
        uint32_t eax_508
        eax_508.b = 1
        return eax_508
    case 0x173
        sub_4f6d60(*arg2, arg2[1])
        int32_t* eax_509
        eax_509.b = 1
        return eax_509
    case 0x174
        sub_4f6e10(*arg2, arg2[1])
        void* eax_510
        eax_510.b = 1
        return eax_510
    case 0x175
        sub_4f6e50(*arg2, arg2[1])
        void* eax_511
        eax_511.b = 1
        return eax_511
    case 0x176
        *arg3 = sub_4f6e90(*arg2)
        uint32_t eax_512
        eax_512.b = 1
        return eax_512
    case 0x177
        sub_4f6ec0(*arg2, arg2[1])
        void* eax_513
        eax_513.b = 1
        return eax_513
    case 0x178
        *arg3 = sub_4f6f00(*arg2)
        uint32_t eax_514
        eax_514.b = 1
        return eax_514
    case 0x179
        sub_4f6f30(*arg2, arg2[1])
        void* eax_515
        eax_515.b = 1
        return eax_515
    case 0x17a
        void* eax_517 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_517 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_517 + 0x38)
        uint32_t* eax_518
        eax_518.b = 1
        return eax_518
    case 0x17b
        sub_4f6f60(*arg2, arg2[1] != 0, arg2[2])
        void* eax_519
        eax_519.b = 1
        return eax_519
    case 0x17c
        eax = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            goto label_4e8935
        
        eax.b = eax[0xf].b
        *arg3 = zx.d(eax.b)
        uint32_t* eax_521
        eax_521.b = 1
        return eax_521
    case 0x17d
        void* eax_523 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_523 != 0)
            *arg3 = *(eax_523 + 0x40)
            uint32_t* eax_525
            eax_525.b = 1
            return eax_525
        
        *arg3 = 0
        uint32_t* eax_524
        eax_524.b = 1
        return eax_524
    case 0x17e
        sub_4f6fc0(*arg2, arg2[1] != 0)
        void* eax_526
        eax_526.b = 1
        return eax_526
    case 0x17f
        eax = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            goto label_4e8935
        
        eax.b = eax[0x11].b
        *arg3 = zx.d(eax.b)
        uint32_t* eax_528
        eax_528.b = 1
        return eax_528
    case 0x180
        sub_4f6ff0(*arg2, arg2[1])
        void* eax_529
        eax_529.b = 1
        return eax_529
    case 0x181
        *arg3 = sub_4f7020(*arg2)
        uint32_t eax_530
        eax_530.b = 1
        return eax_530
    case 0x182
        sub_4f7050(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4])
        void* eax_531
        eax_531.b = 1
        return eax_531
    case 0x183
        void* eax_533 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_533 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_533 + 0x4c)
        uint32_t* eax_534
        eax_534.b = 1
        return eax_534
    case 0x184
        void* eax_536 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_536 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_536 + 0x50)
        uint32_t* eax_537
        eax_537.b = 1
        return eax_537
    case 0x185
        void* eax_539 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_539 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_539 + 0x54)
        uint32_t* eax_540
        eax_540.b = 1
        return eax_540
    case 0x186
        void* eax_542 = sub_4a8ac0(data_75d4fc + 0x174, *arg2)
        
        if (eax_542 == 0)
            goto label_4e8851
        
        *arg3 = *(eax_542 + 0x58)
        uint32_t* eax_543
        eax_543.b = 1
        return eax_543
    case 0x187
        *arg3 = zx.d(sub_4f70b0(*arg2, arg2[1]))
        uint32_t* eax_545
        eax_545.b = 1
        return eax_545
    case 0x188
        eax = sub_4a8b20(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4d5260(eax)
        int32_t eax_547
        eax_547.b = 1
        return eax_547
    case 0x189
        int32_t esi_414 = arg2[1]
        eax = sub_4a8b20(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4d5400(eax, esi_414)
        int32_t* eax_549
        eax_549.b = 1
        return eax_549
    case 0x18a
        int32_t esi_416 = arg2[1]
        eax = sub_4a8b20(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        sub_4d54c0(eax, esi_416)
        int32_t* eax_551
        eax_551.b = 1
        return eax_551
    case 0x18b
        *arg3 = sub_4f70f0(*arg2)
        int32_t eax_552
        eax_552.b = 1
        return eax_552
    case 0x18c
        *arg3 = sub_4f7120(*arg2, arg2[1])
        uint32_t eax_553
        eax_553.b = 1
        return eax_553
    case 0x18d
        *arg3 = zx.d(sub_4f7160(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_555
        eax_555.b = 1
        return eax_555
    case 0x18e
        sub_4f7230(arg1, arg2[1], *arg2, arg2[2])
        void* eax_556
        eax_556.b = 1
        return eax_556
    case 0x18f
        *arg3 = sub_4f72e0(*arg2, arg2[1])
        uint32_t eax_557
        eax_557.b = 1
        return eax_557
    case 0x190
        *arg3 = zx.d(sub_4f7320(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_559
        eax_559.b = 1
        return eax_559
    case 0x191
        sub_4f7390(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_560
        eax_560.b = 1
        return eax_560
    case 0x192
        *arg3 = zx.d(sub_4f73f0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_562
        eax_562.b = 1
        return eax_562
    case 0x193
        *arg3 = zx.d(sub_4f74b0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_564
        eax_564.b = 1
        return eax_564
    case 0x194
        sub_4f7520(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_565
        eax_565.b = 1
        return eax_565
    case 0x195
        sub_4f7570(arg1, arg2[1], *arg2, arg2[2])
        void* eax_566
        eax_566.b = 1
        return eax_566
    case 0x196
        *arg3 = sub_4f75b0(*arg2, arg2[1])
        uint32_t eax_567
        eax_567.b = 1
        return eax_567
    case 0x197
        *arg3 = sub_4f75e0(*arg2, arg2[1])
        uint32_t eax_568
        eax_568.b = 1
        return eax_568
    case 0x198
        *arg3 = sub_4f7610(*arg2, arg2[1])
        uint32_t eax_569
        eax_569.b = 1
        return eax_569
    case 0x199
        *arg3 = zx.d(sub_4f7640(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_571
        eax_571.b = 1
        return eax_571
    case 0x19a
        sub_4f7700(arg1, arg2[1], *arg2, arg2[2])
        void* eax_572
        eax_572.b = 1
        return eax_572
    case 0x19b
        *arg3 = zx.d(sub_4f7750(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_574
        eax_574.b = 1
        return eax_574
    case 0x19c
        *arg3 = zx.d(sub_4f7810(*arg2, arg2[1]))
        uint32_t* eax_576
        eax_576.b = 1
        return eax_576
    case 0x19d
        *arg3 = zx.d(sub_4f7850(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_578
        eax_578.b = 1
        return eax_578
    case 0x19e
        sub_4f78a0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_579
        eax_579.b = 1
        return eax_579
    case 0x19f
        sub_4f7900(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6])
        void* eax_580
        eax_580.b = 1
        return eax_580
    case 0x1a0
        sub_4f7950(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6])
        void* eax_581
        eax_581.b = 1
        return eax_581
    case 0x1a1
        sub_4f79a0(*arg2, arg2[1])
        void* eax_582
        eax_582.b = 1
        return eax_582
    case 0x1a2
        sub_4f79d0(arg1, arg2[1] != 0, *arg2, arg2[2])
        void* eax_583
        eax_583.b = 1
        return eax_583
    case 0x1a3
        *arg3 = zx.d(sub_4f7a20(*arg2, arg2[1]))
        uint32_t* eax_585
        eax_585.b = 1
        return eax_585
    case 0x1a4
        sub_4f7a50(arg1, arg2[1], *arg2, arg2[2])
        void* eax_586
        eax_586.b = 1
        return eax_586
    case 0x1a5
        *arg3 = sub_4f7a90(*arg2, arg2[1])
        uint32_t eax_587
        eax_587.b = 1
        return eax_587
    case 0x1a6
        sub_4f7ac0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_588
        eax_588.b = 1
        return eax_588
    case 0x1a7
        *arg3 = sub_4f7b10(*arg2, arg2[1])
        uint32_t eax_589
        eax_589.b = 1
        return eax_589
    case 0x1a8
        sub_4f7b40(arg1, arg2[1] != 0, *arg2, arg2[2])
        void* eax_590
        eax_590.b = 1
        return eax_590
    case 0x1a9
        *arg3 = zx.d(sub_4f7b90(*arg2, arg2[1]))
        uint32_t* eax_592
        eax_592.b = 1
        return eax_592
    case 0x1aa
        int32_t* var_30_59 = arg2
        int32_t* var_40_15 = arg2
        char eax_593 = sub_4f7bc0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        *arg3 = zx.d(eax_593)
        uint32_t* eax_594
        eax_594.b = 1
        return eax_594
    case 0x1ab
        sub_4f7c80(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        int32_t* eax_595
        eax_595.b = 1
        return eax_595
    case 0x1ac
        *arg3 = zx.d(sub_4f7dd0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_597
        eax_597.b = 1
        return eax_597
    case 0x1ad
        *arg3 = zx.d(sub_4f7e10(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_599
        eax_599.b = 1
        return eax_599
    case 0x1ae
        *arg3 = zx.d(sub_4f7e50(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_601
        eax_601.b = 1
        return eax_601
    case 0x1af
        *arg3 = zx.d(sub_4f7e90(*arg2, arg2[2], arg2[1]))
        uint32_t* eax_603
        eax_603.b = 1
        return eax_603
    case 0x1b0
        *arg3 = zx.d(sub_4f7ee0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4]))
        uint32_t* eax_605
        eax_605.b = 1
        return eax_605
    case 0x1b1
        *arg3 = zx.d(sub_4f7f20(*arg2, arg2[2], arg2[1]))
        uint32_t* eax_607
        eax_607.b = 1
        return eax_607
    case 0x1b2
        *arg3 = zx.d(sub_4f7f70(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_609
        eax_609.b = 1
        return eax_609
    case 0x1b3
        *arg3 = zx.d(sub_4f7fc0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_611
        eax_611.b = 1
        return eax_611
    case 0x1b4
        *arg3 = sub_4f8010(*arg2, arg2[1])
        uint32_t eax_612
        eax_612.b = 1
        return eax_612
    case 0x1b5
        *arg3 = sub_4f8040(*arg2, arg2[1])
        uint32_t eax_613
        eax_613.b = 1
        return eax_613
    case 0x1b6
        int32_t* var_30_64 = arg2
        int32_t* var_40_18 = arg2
        sub_4f8070(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        void* eax_614
        eax_614.b = 1
        return eax_614
    case 0x1b7
        int32_t var_2c_177 = arg2[0xb]
        sub_4f8120(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_615
        eax_615.b = 1
        return eax_615
    case 0x1b8
        sub_4f8260(arg1, arg2[1], *arg2, arg2[2])
        void* eax_616
        eax_616.b = 1
        return eax_616
    case 0x1b9
        *arg3 = sub_4f82a0(*arg2, arg2[1])
        uint32_t eax_617
        eax_617.b = 1
        return eax_617
    case 0x1ba
        *arg3 = zx.d(sub_4f82d0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_619
        eax_619.b = 1
        return eax_619
    case 0x1bb
        sub_4f8390(arg1, arg2[1], *arg2, arg2[2])
        void* eax_620
        eax_620.b = 1
        return eax_620
    case 0x1bc
        *arg3 = zx.d(sub_4f8440(*arg2, arg2[3], arg2[1], arg2[2]))
        uint32_t* eax_622
        eax_622.b = 1
        return eax_622
    case 0x1bd
        *arg3 = sub_4f84c0(*arg2, arg2[1])
        uint32_t* eax_623
        eax_623.b = 1
        return eax_623
    case 0x1be
        *arg3 = sub_4f84f0(*arg2, arg2[1])
        uint32_t* eax_624
        eax_624.b = 1
        return eax_624
    case 0x1bf
        *arg3 = zx.d(sub_4f8520(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_626
        eax_626.b = 1
        return eax_626
    case 0x1c0
        sub_4f8590(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_627
        eax_627.b = 1
        return eax_627
    case 0x1c1
        *arg3 = zx.d(sub_4f85e0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_629
        eax_629.b = 1
        return eax_629
    case 0x1c2
        sub_4f86a0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_630
        eax_630.b = 1
        return eax_630
    case 0x1c3
        *arg3 = zx.d(sub_4f8750(*arg2, arg2[3], arg2[1], arg2[2]))
        uint32_t* eax_632
        eax_632.b = 1
        return eax_632
    case 0x1c4
        *arg3 = sub_4f87d0(*arg2, arg2[1])
        uint32_t* eax_633
        eax_633.b = 1
        return eax_633
    case 0x1c5
        *arg3 = sub_4f8800(*arg2, arg2[1])
        uint32_t* eax_634
        eax_634.b = 1
        return eax_634
    case 0x1c6
        *arg3 = zx.d(sub_4f8830(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_636
        eax_636.b = 1
        return eax_636
    case 0x1c7
        sub_4f88a0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_637
        eax_637.b = 1
        return eax_637
    case 0x1c8
        *arg3 = zx.d(sub_4f88f0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_639
        eax_639.b = 1
        return eax_639
    case 0x1c9
        sub_4f89b0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_640
        eax_640.b = 1
        return eax_640
    case 0x1ca
        int32_t var_2c_189 = arg2[0xe]
        int32_t var_30_71 = arg2[0xd]
        int32_t var_34_49 = arg2[0xc]
        int32_t var_38_38 = arg2[0xb]
        int32_t var_3c_28 = arg2[0xa]
        int32_t var_40_21 = arg2[9]
        int32_t var_44_19 = arg2[8]
        int32_t var_48_19 = arg2[7]
        int32_t var_4c_16 = arg2[6]
        int32_t var_50_4 = arg2[5]
        int32_t var_54 = arg2[4]
        int32_t var_58 = arg2[3]
        *arg3 = zx.d(sub_4f8a60(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_642
        eax_642.b = 1
        return eax_642
    case 0x1cb
        sub_4f8c20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa], arg2[0xb], arg2[0xc], arg2[0xd])
        void* eax_643
        eax_643.b = 1
        return eax_643
    case 0x1cc
        int32_t* var_30_73 = arg2
        int32_t* var_40_23 = arg2
        sub_4f8d20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        void* eax_644
        eax_644.b = 1
        return eax_644
    case 0x1cd
        sub_4f8de0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        int32_t* eax_645
        eax_645.b = 1
        return eax_645
    case 0x1ce
        sub_4f8ee0(arg1, arg2[1] != 0, *arg2, arg2[2])
        void* eax_646
        eax_646.b = 1
        return eax_646
    case 0x1cf
        *arg3 = zx.d(sub_4f8f20(*arg2, arg2[1]))
        uint32_t* eax_648
        eax_648.b = 1
        return eax_648
    case 0x1d0
        *arg3 = zx.d(sub_4f8f50(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_650
        eax_650.b = 1
        return eax_650
    case 0x1d1
        *arg3 = sub_4f8f90(*arg2, arg2[1])
        uint32_t eax_651
        eax_651.b = 1
        return eax_651
    case 0x1d2
        *arg3 = zx.d(sub_4f8fc0(arg1, arg2[1] != 0, *arg2, arg2[2]))
        uint32_t* eax_653
        eax_653.b = 1
        return eax_653
    case 0x1d3
        *arg3 = zx.d(sub_4f9010(*arg2, arg2[1]))
        uint32_t* eax_655
        eax_655.b = 1
        return eax_655
    case 0x1d4
        *arg3 = zx.d(sub_4f9040(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_657
        eax_657.b = 1
        return eax_657
    case 0x1d5
        *arg3 = sub_4f9090(*arg2, arg2[1])
        uint32_t eax_658
        eax_658.b = 1
        return eax_658
    case 0x1d6
        *arg3 = zx.d(sub_4f90c0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_660
        eax_660.b = 1
        return eax_660
    case 0x1d7
        *arg3 = sub_4f9130(*arg2, arg2[1])
        uint32_t eax_661
        eax_661.b = 1
        return eax_661
    case 0x1d8
        *arg3 = zx.d(sub_4f9160(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_663
        eax_663.b = 1
        return eax_663
    case 0x1d9
        sub_4f91a0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_664
        eax_664.b = 1
        return eax_664
    case 0x1da
        sub_4f9200(arg1, arg2[1], *arg2, arg2[2])
        void* eax_665
        eax_665.b = 1
        return eax_665
    case 0x1db
        *arg3 = sub_4f9240(*arg2, arg2[1])
        uint32_t eax_666
        eax_666.b = 1
        return eax_666
    case 0x1dc
        sub_4f9270(arg1, arg2[1] != 0, *arg2, arg2[2])
        void* eax_667
        eax_667.b = 1
        return eax_667
    case 0x1dd
        *arg3 = zx.d(sub_4f92b0(*arg2, arg2[1]))
        uint32_t* eax_669
        eax_669.b = 1
        return eax_669
    case 0x1de
        *arg3 = zx.d(sub_4f92e0(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_671
        eax_671.b = 1
        return eax_671
    case 0x1df
        sub_4f9360(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        void* eax_672
        eax_672.b = 1
        return eax_672
    case 0x1e0
        sub_4f9400(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], 
            arg2[8], arg2[9])
        int32_t* eax_673
        eax_673.b = 1
        return eax_673
    case 0x1e1
        *arg3 = zx.d(sub_4f9450(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_675
        eax_675.b = 1
        return eax_675
    case 0x1e2
        sub_4f94a0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_676
        eax_676.b = 1
        return eax_676
    case 0x1e3
        *arg3 = zx.d(sub_4f94f0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_678
        eax_678.b = 1
        return eax_678
    case 0x1e4
        sub_4f95b0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_679
        eax_679.b = 1
        return eax_679
    case 0x1e5
        *arg3 = zx.d(sub_4f9660(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_681
        eax_681.b = 1
        return eax_681
    case 0x1e6
        sub_4f96d0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_682
        eax_682.b = 1
        return eax_682
    case 0x1e7
        *arg3 = zx.d(sub_4f9720(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_684
        eax_684.b = 1
        return eax_684
    case 0x1e8
        *arg3 = zx.d(sub_4f97e0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_686
        eax_686.b = 1
        return eax_686
    case 0x1e9
        sub_4f98b0(arg1, arg2[1], *arg2, arg2[2])
        void* eax_687
        eax_687.b = 1
        return eax_687
    case 0x1ea
        *arg3 = zx.d(sub_4f9960(*arg2, arg2[1]))
        uint32_t* eax_689
        eax_689.b = 1
        return eax_689
    case 0x1eb
        *arg3 = zx.d(sub_4f99a0(*arg2, arg2[1]))
        uint32_t* eax_691
        eax_691.b = 1
        return eax_691
    case 0x1ec
        *arg3 = zx.d(sub_4f99e0(*arg2, arg2[1]))
        uint32_t* eax_693
        eax_693.b = 1
        return eax_693
    case 0x1ed
        *arg3 = zx.d(sub_4f9a40(*arg2, arg2[1]))
        uint32_t* eax_695
        eax_695.b = 1
        return eax_695
    case 0x1ee
        *arg3 = sub_4f9a80(*arg2, arg2[1])
        uint32_t eax_696
        eax_696.b = 1
        return eax_696
    case 0x1ef
        *arg3 = zx.d(sub_4f9ac0(*arg2, arg2[1]))
        uint32_t* eax_698
        eax_698.b = 1
        return eax_698
    case 0x1f0
        *arg3 = zx.d(sub_4f9af0(*arg2, arg2[1]))
        uint32_t* eax_700
        eax_700.b = 1
        return eax_700
    case 0x1f1
        *arg3 = zx.d(sub_4f9bc0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_702
        eax_702.b = 1
        return eax_702
    case 0x1f2
        *arg3 = sub_4f9c00(*arg2, arg2[1])
        uint32_t eax_703
        eax_703.b = 1
        return eax_703
    case 0x1f3
        sub_4f9c50(arg1, arg2[1], *arg2, arg2[2])
        void* eax_704
        eax_704.b = 1
        return eax_704
    case 0x1f4
        *arg3 = zx.d(sub_4f9b20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_706
        eax_706.b = 1
        return eax_706
    case 0x1f5
        sub_4f9b70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_707
        eax_707.b = 1
        return eax_707
    case 0x1f6
        *arg3 = sub_4f9d10(*arg2, arg2[1])
        uint32_t eax_708
        eax_708.b = 1
        return eax_708
    case 0x1f7
        sub_4f9d50(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_709
        eax_709.b = 1
        return eax_709
    case 0x1f8
        sub_4f9e40(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        int32_t eax_710
        eax_710.b = 1
        return eax_710
    case 0x1f9
        sub_4f9f30(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_711
        eax_711.b = 1
        return eax_711
    case 0x1fa
        sub_4fa000(arg1, arg2[1], *arg2, arg2[2])
        int32_t eax_712
        eax_712.b = 1
        return eax_712
    case 0x1fb
        sub_4fa0b0(*arg2, arg2[1])
        void* eax_713
        eax_713.b = 1
        return eax_713
    case 0x1fc
        *arg3 = sub_4fa0e0(*arg2, arg2[1])
        uint32_t eax_714
        eax_714.b = 1
        return eax_714
    case 0x1fd
        sub_4fa120(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_715
        eax_715.b = 1
        return eax_715
    case 0x1fe
        sub_4fa210(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_716
        eax_716.b = 1
        return eax_716
    case 0x1ff
        sub_4fa320(arg1, arg2[1], *arg2, arg2[2], arg2[3])
        void* eax_717
        eax_717.b = 1
        return eax_717
    case 0x200
        sub_4fa410(arg1, arg2[1], *arg2, arg2[2])
        void* eax_718
        eax_718.b = 1
        return eax_718
    case 0x201
        sub_4fa4e0(*arg2, arg2[1])
        void* eax_719
        eax_719.b = 1
        return eax_719
    case 0x202
        int32_t xmm0_42 = arg2[1]
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** esi_537 = arg2[2]
        eax = sub_4a8b80(data_75d4fc + 0x174, *arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        *(sub_510680(eax[0xd], esi_537) + 0x68) = xmm0_42
        void* eax_721
        eax_721.b = 1
        return eax_721
    case 0x203
        *arg3 = sub_4fa510(*arg2, arg2[1])
        uint32_t* eax_722
        eax_722.b = 1
        return eax_722
    case 0x204
        *arg3 = sub_4fa550(*arg2, arg2[1])
        uint32_t eax_723
        eax_723.b = 1
        return eax_723
    case 0x205
        sub_4fa590(arg1, arg2[1], *arg2, arg2[2])
        void* eax_724
        eax_724.b = 1
        return eax_724
    case 0x206
        *arg3 = zx.d(sub_4fa640(*arg2))
        uint32_t* eax_726
        eax_726.b = 1
        return eax_726
    case 0x207
        *arg3 = zx.d(sub_4fa710(*arg2, arg2[1]))
        uint32_t* eax_728
        eax_728.b = 1
        return eax_728
    case 0x208
        *arg3 = zx.d(sub_4fa740(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_730
        eax_730.b = 1
        return eax_730
    case 0x209
        *arg3 = zx.d(sub_4fa780(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_732
        eax_732.b = 1
        return eax_732
    case 0x20a
        *arg3 = zx.d(sub_4fa7c0(arg1, arg2[1], *arg2, arg2[2]))
        uint32_t* eax_734
        eax_734.b = 1
        return eax_734
    case 0x20b
        *arg3 = zx.d(sub_4fa880(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7], arg2[8]))
        uint32_t* eax_736
        eax_736.b = 1
        return eax_736
    case 0x20c
        *arg3 = zx.d(sub_4fa8d0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7], arg2[8], arg2[9]))
        uint32_t* eax_738
        eax_738.b = 1
        return eax_738
    case 0x20d
        *arg3 = zx.d(sub_4fa980(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6]))
        uint32_t* eax_740
        eax_740.b = 1
        return eax_740
    case 0x20e
        *arg3 = zx.d(sub_4fa9d0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7], arg2[8], arg2[9]))
        uint32_t* eax_742
        eax_742.b = 1
        return eax_742
    case 0x20f
        char eax_743 = sub_4fa920(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        *arg3 = zx.d(eax_743)
        uint32_t* eax_744
        eax_744.b = 1
        return eax_744
    case 0x210
        *arg3 = zx.d(sub_4faa20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7], arg2[8]))
        uint32_t* eax_746
        eax_746.b = 1
        return eax_746
    case 0x211
        char eax_747 = sub_4faa70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        *arg3 = zx.d(eax_747)
        uint32_t* eax_748
        eax_748.b = 1
        return eax_748
    case 0x212
        char eax_749 = sub_4fab50(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb])
        *arg3 = zx.d(eax_749)
        uint32_t* eax_750
        eax_750.b = 1
        return eax_750
    case 0x213
        eax.b = arg2[5] != 0
        uint32_t eax_751 = zx.d(eax.b)
        *arg3 =
            zx.d(sub_4fac30(eax_751, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], eax_751.b, arg2[6]))
        uint32_t* eax_753
        eax_753.b = 1
        return eax_753
    case 0x214
        eax.b = arg2[8] != 0
        uint32_t eax_754 = zx.d(eax.b)
        *arg3 = zx.d(sub_4fac80(eax_754, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], eax_754.b, arg2[9]))
        uint32_t* eax_756
        eax_756.b = 1
        return eax_756
    case 0x215
        eax.b = arg2[8] != 0
        uint32_t eax_757 = zx.d(eax.b)
        *arg3 = zx.d(sub_4facd0(eax_757, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], eax_757.b, arg2[9]))
        uint32_t* eax_759
        eax_759.b = 1
        return eax_759
    case 0x216
        *arg3 = zx.d(sub_4fad20(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7], arg2[8], arg2[9]))
        uint32_t* eax_761
        eax_761.b = 1
        return eax_761
    case 0x217
        *arg3 = zx.d(sub_4fad70(*arg2, arg2[1]))
        uint32_t* eax_763
        eax_763.b = 1
        return eax_763
    case 0x218
        int32_t* var_38_64 = arg2
        int32_t* var_48_33 = arg2
        char eax_764 = sub_4fada0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb], arg2[0xc], arg2[0xd], 
            arg2[0xe], arg2[0xf], arg2[0x10])
        *arg3 = zx.d(eax_764)
        uint32_t* eax_765
        eax_765.b = 1
        return eax_765
    case 0x219
        int32_t* var_38_66 = arg2
        int32_t* var_48_35 = arg2
        char eax_766 = sub_4faf50(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], 
            arg2[6], arg2[7], arg2[8], arg2[9], arg2[0xa], arg2[0xb], arg2[0xc], arg2[0xd], 
            arg2[0xe], arg2[0xf], arg2[0x10])
        *arg3 = zx.d(eax_766)
        uint32_t* eax_767
        eax_767.b = 1
        return eax_767
    case 0x21a
        *arg3 = zx.d(sub_4fb100(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5]))
        uint32_t* eax_769
        eax_769.b = 1
        return eax_769
    case 0x21b
        sub_4fb160(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5])
        int32_t* eax_770
        eax_770.b = 1
        return eax_770
    case 0x21c
        *arg3 = sub_4fb1b0(*arg2, arg2[1])
        int32_t eax_771
        eax_771.b = 1
        return eax_771
    case 0x21d
        sub_4fb1f0(arg1, arg2[1], *arg2, arg2[2])
        int32_t* eax_772
        eax_772.b = 1
        return eax_772
    case 0x21e
        sub_4fb660(arg1, arg2[1], *arg2, arg2[2])
        struct _EXCEPTION_REGISTRATION_RECORD** eax_773
        eax_773.b = 1
        return eax_773
    case 0x21f
        *arg3 = zx.d(sub_4fb9e0(*arg2, arg2[1]))
        uint32_t* eax_775
        eax_775.b = 1
        return eax_775
    case 0x220
        *arg3 = sub_4fba10(*arg2, arg2[1])
        uint32_t eax_776
        eax_776.b = 1
        return eax_776
    case 0x221
        *arg3 = zx.d(sub_4fba40(*arg2, arg2[1]))
        uint32_t* eax_778
        eax_778.b = 1
        return eax_778
    case 0x222
        *arg3 = zx.d(sub_4fba70(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], 
            arg2[7]))
        uint32_t* eax_780
        eax_780.b = 1
        return eax_780
    case 0x223
        *arg3 = zx.d(sub_4fbb40(*arg2, arg2[1]))
        uint32_t* eax_782
        eax_782.b = 1
        return eax_782
    case 0x224
        *arg3 = zx.d(sub_4fbb70(*arg2, arg2[1]))
        uint32_t* eax_784
        eax_784.b = 1
        return eax_784
    case 0x225
        *arg3 = zx.d(sub_4fbbb0(*arg2, arg2[1]))
        uint32_t* eax_786
        eax_786.b = 1
        return eax_786
    case 0x226
        sub_4fbbf0(*arg2, arg2[1])
        void* eax_787
        eax_787.b = 1
        return eax_787
    case 0x227
        *arg3 = zx.d(sub_4fbc30(arg1, arg2[1], *arg2, arg2[2], arg2[3]))
        uint32_t* eax_789
        eax_789.b = 1
        return eax_789
    case 0x228
        sub_4a9e70()
        struct partsengine::CGUIScene::VTable** eax_790
        eax_790.b = 1
        return eax_790
    case 0x229
        sub_4fbca0(arg1, arg2[1], *arg2, arg2[2], arg2[3], arg2[4])
        struct IInterface::VTable** eax_791
        eax_791.b = 1
        return eax_791
    case 0x22a
        int32_t esi_578 = arg2[3]
        int32_t edi_562 = arg2[2]
        int32_t ebx_12 = arg2[1]
        eax = sub_4a9f10(*arg2)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        int32_t var_2c_254 = esi_578
        int32_t var_30_114 = edi_562
        sub_4b7a20(&eax[0x1b], ebx_12)
        int32_t eax_793
        eax_793.b = 1
        return eax_793
    case 0x22b
        sub_4fbd60(*arg2, arg2[1])
        struct IInterface::VTable** eax_794
        eax_794.b = 1
        return eax_794
    case 0x22c
        ebx.b = arg2[1] != 0
        eax = sub_4a9f10(*arg2)
        
        if (eax == 0 || eax[0x23].b == ebx.b)
            eax.b = 1
            return eax
        
        eax[0x23].b = ebx.b
        eax[0x1c].b = 1
        eax.b = 1
        return eax
    case 0x22d
        *arg3 = zx.d(sub_4a9f80(*arg2))
        uint32_t* eax_798
        eax_798.b = 1
        return eax_798
    case 0x22e
        *arg3 = zx.d(sub_4aa080(*arg2))
        uint32_t* eax_801
        eax_801.b = 1
        return eax_801
    case 0x22f
        *arg3 = zx.d(sub_4aa180(*arg2))
        uint32_t* eax_804
        eax_804.b = 1
        return eax_804
    case 0x230
        *arg3 = zx.d(sub_4aa270(*arg2))
        uint32_t* eax_807
        eax_807.b = 1
        return eax_807
    case 0x231
        *arg3 = zx.d(sub_4aa370(*arg2, arg2[1]))
        uint32_t* eax_810
        eax_810.b = 1
        return eax_810
    case 0x232
        *arg3 = zx.d(sub_4aa470(*arg2, arg2[1]))
        eax.b = 1
        return eax
