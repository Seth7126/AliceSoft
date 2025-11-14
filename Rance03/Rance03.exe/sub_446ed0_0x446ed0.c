// 函数: sub_446ed0
// 地址: 0x446ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x40000000) == 0)
    if ((arg2 & 0x20000000) == 0)
        *arg1 = 0x101
        return 3
    
    int32_t edx_3 = arg2 & 0x10000000
    int32_t edx_4 = neg.d(edx_3)
    *arg1 = (sbb.d(edx_4, edx_4, edx_3 != 0) & 0x1ff) + 2
    return 4

if ((arg2 & 0x20000000) == 0)
    return sub_447000(arg1, arg2) __tailcall

if ((arg2 & 0x10000000) == 0)
    return sub_447060(arg1, arg2) __tailcall

if ((arg2 & 0x8000000) == 0)
    return sub_447130(arg1, arg2) __tailcall

if ((arg2 & 0x4000000) == 0)
    if ((arg2 & 0x2000000) == 0)
        *arg1 = ((arg2 & 0x1000000) | 0xa010000) u>> 0x10
        return 8
    
    *arg1 = ((arg2 & 0x1000000) | 0xc010000) u>> 0x10
    return 8

if ((arg2 & 0x2000000) == 0)
    return sub_447190(arg1, arg2) __tailcall

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
        
        int32_t edx_26 = arg2 & 0x100000
        int32_t edx_27 = neg.d(edx_26)
        *arg1 = (sbb.d(edx_27, edx_27, edx_26 != 0) & 0x8ff) + 0x802
        return 0xc
    
    return sub_447300(arg1, arg2) __tailcall

if ((arg2 & 0x800000) == 0)
    if ((arg2 & &__dos_header) == 0)
        return sub_447420(arg1, arg2) __tailcall
    
    if ((arg2 & 0x200000) == 0)
        if ((arg2 & 0x100000) == 0)
            int32_t edx_49 = arg2 & 0x80000
            int32_t edx_50 = neg.d(edx_49)
            *arg1 = (sbb.d(edx_50, edx_50, edx_49 != 0) & 0x3ff) + 0x503
            return 0xd
        
        int32_t edx_44 = arg2 & 0x80000
        int32_t edx_45 = neg.d(edx_44)
        *arg1 = (sbb.d(edx_45, edx_45, edx_44 != 0) & 0xbff) + 0xa02
        return 0xd
    
    if ((arg2 & 0x100000) == 0)
        int32_t edx_39 = arg2 & 0x80000
        int32_t edx_40 = neg.d(edx_39)
        *arg1 = (sbb.d(edx_40, edx_40, edx_39 != 0) & 0x100) + 0x1701
        return 0xd
    
    int32_t edx_34 = arg2 & 0x80000
    int32_t edx_35 = neg.d(edx_34)
    *arg1 = (sbb.d(edx_35, edx_35, edx_34 != 0) & 0x100) + 0x1901
    return 0xd

if ((arg2 & &__dos_header) == 0)
    if ((arg2 & 0x200000) == 0)
        return sub_447520(arg1, arg2) __tailcall
    
    if ((arg2 & 0x100000) == 0)
        if ((arg2 & 0x80000) == 0)
            *arg1 = ((arg2 & 0x40000) | 0x600000) u>> 0x12
            return 0xe
        
        *arg1 = ((arg2 & 0x40000) | 0x680000) u>> 0x12
        return 0xe
    
    if ((arg2 & 0x80000) == 0)
        *arg1 = ((arg2 & 0x40000) | &data_700000) u>> 0x12
        return 0xe
    
    *arg1 = ((arg2 & 0x40000) | &data_766970[0x19690]) u>> 0x12
    return 0xe

if ((arg2 & 0x200000) != 0)
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
        
        int32_t edx_72 = arg2 & 0x20000
        int32_t edx_73 = neg.d(edx_72)
        *arg1 = (sbb.d(edx_73, edx_73, edx_72 != 0) & 0xaff) + 0x1002
        return 0xf
    
    return sub_447620(arg1, arg2) __tailcall

if ((arg2 & 0x100000) == 0)
    return sub_447740(arg1, arg2) __tailcall

if ((arg2 & 0x80000) == 0)
    if ((arg2 & 0x40000) == 0)
        int32_t edx_95 = arg2 & 0x20000
        int32_t edx_96 = neg.d(edx_95)
        *arg1 = (sbb.d(edx_96, edx_96, edx_95 != 0) & 0xe0) + 0x28
        return 0xf
    
    int32_t edx_90 = arg2 & 0x20000
    int32_t edx_91 = neg.d(edx_90)
    *arg1 = neg.d(sbb.d(edx_91, edx_91, edx_90 != 0)) + 0x109
    return 0xf

if ((arg2 & 0x40000) == 0)
    int32_t edx_85 = arg2 & 0x20000
    int32_t edx_86 = neg.d(edx_85)
    *arg1 = neg.d(sbb.d(edx_86, edx_86, edx_85 != 0)) + 0x10b
    return 0xf

int32_t edx_80 = arg2 & 0x20000
int32_t edx_81 = neg.d(edx_80)
*arg1 = neg.d(sbb.d(edx_81, edx_81, edx_80 != 0)) + 0x10d
return 0xf
