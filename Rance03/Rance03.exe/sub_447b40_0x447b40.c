// 函数: sub_447b40
// 地址: 0x447b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x20000000) == 0)
    if ((arg2 & 0x10000000) == 0)
        if ((arg2 & 0x8000000) == 0)
            int32_t edx_6 = arg2 & 0x4000000
            int32_t edx_7 = neg.d(edx_6)
            *arg1 = (sbb.d(edx_7, edx_7, edx_6 != 0) & 0x15) + 3
            return 6
        
        int32_t edx_1 = arg2 & 0x4000000
        int32_t edx_2 = neg.d(edx_1)
        *arg1 = (sbb.d(edx_2, edx_2, edx_1 != 0) & 0x1b) + 0x24
        return 6
    
    if ((arg2 & 0x8000000) == 0)
        if ((arg2 & 0x4000000) == 0)
            int32_t edx_37 = arg2 & 0x2000000
            int32_t edx_38 = neg.d(edx_37)
            *arg1 = neg.d(sbb.d(edx_38, edx_38, edx_37 != 0)) + 5
            return 7
        
        int32_t edx_32 = arg2 & 0x2000000
        int32_t edx_33 = neg.d(edx_32)
        *arg1 = neg.d(sbb.d(edx_33, edx_33, edx_32 != 0)) + 9
        return 7
    
    if ((arg2 & 0x4000000) == 0)
        int32_t edx_27 = arg2 & 0x2000000
        int32_t edx_28 = neg.d(edx_27)
        *arg1 = neg.d(sbb.d(edx_28, edx_28, edx_27 != 0)) + 0x11
        return 7
    
    int32_t edx_22 = arg2 & 0x2000000
    int32_t edx_23 = neg.d(edx_22)
    *arg1 = neg.d(sbb.d(edx_23, edx_23, edx_22 != 0)) + 0x21
    return 7

if ((arg2 & 0x10000000) == 0)
    if ((arg2 & 0x8000000) != 0)
        if ((arg2 & 0x4000000) == 0)
            if ((arg2 & 0x2000000) == 0)
                int32_t edx_57 = arg2 & 0x1000000
                int32_t edx_58 = neg.d(edx_57)
                *arg1 = (sbb.d(edx_58, edx_58, edx_57 != 0) & 2) + 0x17
                return 8
            
            int32_t edx_52 = arg2 & 0x1000000
            int32_t edx_53 = neg.d(edx_52)
            *arg1 = (sbb.d(edx_53, edx_53, edx_52 != 0) & 3) + 0x1a
            return 8
        
        if ((arg2 & 0x2000000) == 0)
            int32_t edx_47 = arg2 & 0x1000000
            int32_t edx_48 = neg.d(edx_47)
            *arg1 = (sbb.d(edx_48, edx_48, edx_47 != 0) & 5) + 0x1e
            return 8
        
        int32_t edx_42 = arg2 & 0x1000000
        int32_t edx_43 = neg.d(edx_42)
        *arg1 = neg.d(sbb.d(edx_43, edx_43, edx_42 != 0)) + 0x25
        return 8
    
    return sub_447f20(arg1, arg2) __tailcall

if ((arg2 & 0x8000000) == 0)
    return sub_447e20(arg1, arg2) __tailcall

if ((arg2 & 0x4000000) == 0)
    if ((arg2 & 0x2000000) == 0)
        int32_t edx_16 = arg2 & 0x1000000
        int32_t edx_17 = neg.d(edx_16)
        *arg1 = neg.d(sbb.d(edx_17, edx_17, edx_16 != 0)) + 0x35
        return 8
    
    int32_t edx_11 = arg2 & 0x1000000
    int32_t edx_12 = neg.d(edx_11)
    *arg1 = neg.d(sbb.d(edx_12, edx_12, edx_11 != 0)) + 0x39
    return 8

if ((arg2 & 0x2000000) == 0)
    if ((arg2 & 0x1000000) == 0)
        *arg1 = ((arg2 & 0x800000) | 0x3600000) u>> 0x15
        return 9
    
    *arg1 = ((arg2 & 0x800000) | 0x2700000) u>> 0x14
    return 9

if ((arg2 & 0x1000000) != 0)
    *arg1 = 0xffffffff
    return 8

int32_t edx_62 = arg2 & 0x800000
int32_t edx_63 = neg.d(edx_62)
*arg1 = (sbb.d(edx_63, edx_63, edx_62 != 0) & 4) + 0x37
return 9
