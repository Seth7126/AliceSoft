// 函数: sub_448e40
// 地址: 0x448e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg2 & 0x40000000) == 0)
    if ((arg2 & 0x20000000) == 0)
        *arg1 = 0x101
        return 3
    
    int32_t edx = arg2 & 0x10000000
    int32_t edx_1 = neg.d(edx)
    *arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 0x1ff) + 2
    return 4

if ((arg2 & 0x20000000) == 0)
    if ((arg2 & 0x10000000) == 0)
        int32_t edx_10 = arg2 & 0x8000000
        int32_t edx_11 = neg.d(edx_10)
        *arg1 = (sbb.d(edx_11, edx_11, edx_10 != 0) & 0x2fe) + 3
        return 5
    
    if ((arg2 & 0x8000000) == 0)
        *arg1 = 0x401
        return 5
    
    int32_t edx_5 = arg2 & 0x4000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = (sbb.d(edx_6, edx_6, edx_5 != 0) & 0x104) - 2
    return 6

if ((arg2 & 0x10000000) == 0)
    if ((arg2 & 0x8000000) == 0)
        int32_t edx_20 = arg2 & 0x4000000
        int32_t edx_21 = neg.d(edx_20)
        *arg1 = (sbb.d(edx_21, edx_21, edx_20 != 0) & 0x100) + 0x501
        return 6
    
    if ((arg2 & 0x4000000) == 0)
        *arg1 = 0x701
        return 6
    
    int32_t edx_15 = arg2 & 0x2000000
    int32_t edx_16 = neg.d(edx_15)
    *arg1 = (sbb.d(edx_16, edx_16, edx_15 != 0) & 0x1fe) + 4
    return 7

if ((arg2 & 0x8000000) == 0)
    if ((arg2 & 0x4000000) == 0)
        *arg1 = ((arg2 & 0x2000000) | 0x10020000) u>> 0x11
        return 7
    
    if ((arg2 & 0x2000000) == 0)
        int32_t edx_36 = arg2 & 0x1000000
        int32_t edx_37 = neg.d(edx_36)
        *arg1 = neg.d(sbb.d(edx_37, edx_37, edx_36 != 0)) + 5
        return 8
    
    int32_t edx_31 = arg2 & 0x1000000
    int32_t edx_32 = neg.d(edx_31)
    *arg1 = (sbb.d(edx_32, edx_32, edx_31 != 0) & 0x1ff) + 0x103
    return 8

if ((arg2 & 0x4000000) == 0)
    if ((arg2 & 0x2000000) == 0)
        *arg1 = ((arg2 & 0x1000000) | 0xa010000) u>> 0x10
        return 8
    
    *arg1 = ((arg2 & 0x1000000) | 0xc010000) u>> 0x10
    return 8

if ((arg2 & 0x2000000) == 0)
    if ((arg2 & 0x1000000) == 0)
        if ((arg2 & 0x800000) == 0)
            void* edx_59 = arg2 & &__dos_header
            int32_t edx_60 = neg.d(edx_59)
            *arg1 = (sbb.d(edx_60, edx_60, edx_59 != 0) & 0xfd) + 7
            return 0xa
        
        void* edx_54 = arg2 & &__dos_header
        int32_t edx_55 = neg.d(edx_54)
        *arg1 = (sbb.d(edx_55, edx_55, edx_54 != 0) & 0x1ff) + 0x203
        return 0xa
    
    if ((arg2 & 0x800000) == 0)
        void* edx_49 = arg2 & &__dos_header
        int32_t edx_50 = neg.d(edx_49)
        *arg1 = (sbb.d(edx_50, edx_50, edx_49 != 0) & 0x8ff) + 0x502
        return 0xa
    
    void* edx_44 = arg2 & &__dos_header
    int32_t edx_45 = neg.d(edx_44)
    *arg1 = (sbb.d(edx_45, edx_45, edx_44 != 0) & 0x100) + 0xf01
    return 0xa

if ((arg2 & 0x1000000) == 0)
    if ((arg2 & 0x800000) != 0)
        if ((arg2 & &__dos_header) != 0)
            if ((arg2 & 0x200000) == 0)
                *arg1 = ((arg2 & 0x100000) | 0x1201000) u>> 0xc
                return 0xc
            
            *arg1 = ((arg2 & 0x100000) | 0x1401000) u>> 0xc
            return 0xc
        
        if ((arg2 & 0x200000) == 0)
            *arg1 = ((arg2 & 0x100000) | 0x602000) u>> 0xc
            return 0xc
        
        int32_t edx_70 = arg2 & 0x100000
        int32_t edx_71 = neg.d(edx_70)
        *arg1 = (sbb.d(edx_71, edx_71, edx_70 != 0) & 0x8ff) + 0x802
        return 0xc
    
    if ((arg2 & &__dos_header) == 0)
        if ((arg2 & 0x200000) == 0)
            *arg1 = ((arg2 & 0x100000) | 0x800000) u>> 0x14
            return 0xc
        
        *arg1 = ((arg2 & 0x100000) | 0xa00000) u>> 0x14
        return 0xc
    
    if ((arg2 & 0x200000) == 0)
        int32_t edx_83 = arg2 & 0x100000
        int32_t edx_84 = neg.d(edx_83)
        *arg1 = zx.d((sbb.d(edx_84, edx_84, edx_83 != 0)).b) + 0x105
        return 0xc
    
    int32_t edx_78 = arg2 & 0x100000
    int32_t edx_79 = neg.d(edx_78)
    *arg1 = (sbb.d(edx_79, edx_79, edx_78 != 0) & 0x100) + 0x303
    return 0xc

if ((arg2 & 0x800000) == 0)
    if ((arg2 & &__dos_header) == 0)
        if ((arg2 & 0x200000) == 0)
            if ((arg2 & 0x100000) == 0)
                *arg1 = ((arg2 & 0x80000) | 0x600000) u>> 0x13
                return 0xd
            
            *arg1 = ((arg2 & 0x80000) | 0x700000) u>> 0x13
            return 0xd
        
        if ((arg2 & 0x100000) == 0)
            *arg1 = ((arg2 & 0x80000) | 0x8300000) u>> 0x13
            return 0xd
        
        int32_t edx_114 = arg2 & 0x80000
        int32_t edx_115 = neg.d(edx_114)
        *arg1 = zx.d((sbb.d(edx_115, edx_115, edx_114 != 0)).b) + 0x205
        return 0xd
    
    if ((arg2 & 0x200000) == 0)
        if ((arg2 & 0x100000) == 0)
            int32_t edx_109 = arg2 & 0x80000
            int32_t edx_110 = neg.d(edx_109)
            *arg1 = (sbb.d(edx_110, edx_110, edx_109 != 0) & 0x3ff) + 0x503
            return 0xd
        
        int32_t edx_104 = arg2 & 0x80000
        int32_t edx_105 = neg.d(edx_104)
        *arg1 = (sbb.d(edx_105, edx_105, edx_104 != 0) & 0xbff) + 0xa02
        return 0xd
    
    if ((arg2 & 0x100000) == 0)
        int32_t edx_99 = arg2 & 0x80000
        int32_t edx_100 = neg.d(edx_99)
        *arg1 = (sbb.d(edx_100, edx_100, edx_99 != 0) & 0x100) + 0x1701
        return 0xd
    
    int32_t edx_94 = arg2 & 0x80000
    int32_t edx_95 = neg.d(edx_94)
    *arg1 = (sbb.d(edx_95, edx_95, edx_94 != 0) & 0x100) + 0x1901
    return 0xd

if ((arg2 & &__dos_header) == 0)
    if ((arg2 & 0x200000) != 0)
        if ((arg2 & 0x100000) == 0)
            if ((arg2 & 0x80000) == 0)
                *arg1 = ((arg2 & 0x40000) | 0x600000) u>> 0x12
                return 0xe
            
            *arg1 = ((arg2 & 0x40000) | 0x680000) u>> 0x12
            return 0xe
        
        if ((arg2 & 0x80000) == 0)
            *arg1 = ((arg2 & 0x40000) | 0x700000) u>> 0x12
            return 0xe
        
        *arg1 = ((arg2 & 0x40000) | 0x780000) u>> 0x12
        return 0xe
    
    if ((arg2 & 0x100000) == 0)
        if ((arg2 & 0x80000) == 0)
            *arg1 = ((arg2 & 0x40000) | &__dos_header) u>> 0x12
            return 0xe
        
        *arg1 = ((arg2 & 0x40000) | 0x480000) u>> 0x12
        return 0xe
    
    if ((arg2 & 0x80000) == 0)
        *arg1 = ((arg2 & 0x40000) | 0x500000) u>> 0x12
        return 0xe
    
    *arg1 = ((arg2 & 0x40000) | 0x580000) u>> 0x12
    return 0xe

if ((arg2 & 0x200000) == 0)
    if ((arg2 & 0x100000) == 0)
        if ((arg2 & 0x80000) == 0)
            if ((arg2 & 0x40000) == 0)
                *arg1 = ((arg2 & 0x20000) | &__dos_header) u>> 0x11
                return 0xf
            
            *arg1 = ((arg2 & 0x20000) | 0x440000) u>> 0x11
            return 0xf
        
        if ((arg2 & 0x40000) == 0)
            *arg1 = ((arg2 & 0x20000) | 0x480000) u>> 0x11
            return 0xf
        
        *arg1 = ((arg2 & 0x20000) | 0x4c0000) u>> 0x11
        return 0xf
    
    if ((arg2 & 0x80000) == 0)
        if ((arg2 & 0x40000) == 0)
            int32_t edx_199 = arg2 & 0x20000
            int32_t edx_200 = neg.d(edx_199)
            *arg1 = (sbb.d(edx_200, edx_200, edx_199 != 0) & 0xe0) + 0x28
            return 0xf
        
        int32_t edx_194 = arg2 & 0x20000
        int32_t edx_195 = neg.d(edx_194)
        *arg1 = neg.d(sbb.d(edx_195, edx_195, edx_194 != 0)) + 0x109
        return 0xf
    
    if ((arg2 & 0x40000) == 0)
        int32_t edx_189 = arg2 & 0x20000
        int32_t edx_190 = neg.d(edx_189)
        *arg1 = neg.d(sbb.d(edx_190, edx_190, edx_189 != 0)) + 0x10b
        return 0xf
    
    int32_t edx_184 = arg2 & 0x20000
    int32_t edx_185 = neg.d(edx_184)
    *arg1 = neg.d(sbb.d(edx_185, edx_185, edx_184 != 0)) + 0x10d
    return 0xf

if ((arg2 & 0x100000) != 0)
    if ((arg2 & 0x80000) != 0)
        if ((arg2 & 0x40000) == 0)
            *arg1 = ((arg2 & 0x20000) | 0x380200) u>> 9
            return 0xf
        
        *arg1 = ((arg2 & 0x20000) | 0x3c0200) u>> 9
        return 0xf
    
    if ((arg2 & 0x40000) == 0)
        *arg1 = ((arg2 & 0x20000) | 0x1c0400) u>> 9
        return 0xf
    
    int32_t edx_158 = arg2 & 0x20000
    int32_t edx_159 = neg.d(edx_158)
    *arg1 = (sbb.d(edx_159, edx_159, edx_158 != 0) & 0xaff) + 0x1002
    return 0xf

if ((arg2 & 0x80000) != 0)
    if ((arg2 & 0x40000) == 0)
        int32_t edx_169 = arg2 & 0x20000
        int32_t edx_170 = neg.d(edx_169)
        *arg1 = (sbb.d(edx_170, edx_170, edx_169 != 0) & 0x4ff) + 0x603
        return 0xf
    
    *arg1 = ((arg2 & 0x20000) | 0x180400) u>> 9
    return 0xf

if ((arg2 & 0x40000) == 0)
    int32_t edx_179 = arg2 & 0x20000
    int32_t edx_180 = neg.d(edx_179)
    *arg1 = neg.d(sbb.d(edx_180, edx_180, edx_179 != 0)) + 0x10f
    return 0xf

int32_t edx_174 = arg2 & 0x20000
int32_t edx_175 = neg.d(edx_174)
*arg1 = neg.d(sbb.d(edx_175, edx_175, edx_174 != 0)) + 0x111
return 0xf
