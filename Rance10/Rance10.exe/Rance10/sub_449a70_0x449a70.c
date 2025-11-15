// 函数: sub_449a70
// 地址: 0x449a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0)
    *arg1 = 0
    return 1

if ((arg2 & 0x40000000) == 0)
    int32_t edx_10 = arg2 & 0x20000000
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = neg.d(sbb.d(edx_11, edx_11, edx_10 != 0)) + 1
    return 3

if ((arg2 & 0x20000000) == 0)
    int32_t edx_5 = arg2 & 0x10000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = neg.d(sbb.d(edx_6, edx_6, edx_5 != 0)) + 3
    return 4

if ((arg2 & 0x10000000) == 0)
    int32_t edx = arg2 & 0x8000000
    int32_t edx_1 = neg.d(edx)
    *arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 5
    return 5

if ((arg2 & 0x8000000) == 0)
    return sub_449ee0(arg1, arg2) __tailcall

if ((arg2 & 0x4000000) != 0)
    if ((arg2 & 0x2000000) != 0)
        if ((arg2 & 0x1000000) != 0)
            *arg1 = 0xffffffff
            return 8
        
        if ((arg2 & 0x800000) == 0)
            void* edx_27 = arg2 & &__dos_header
            int32_t edx_28 = neg.d(edx_27)
            *arg1 = neg.d(sbb.d(edx_28, edx_28, edx_27 != 0)) + 0x1f
            return 0xa
        
        void* edx_22 = arg2 & &__dos_header
        int32_t edx_23 = neg.d(edx_22)
        *arg1 = neg.d(sbb.d(edx_23, edx_23, edx_22 != 0)) + 0x21
        return 0xa
    
    return sub_44a1f0(arg1, arg2) __tailcall

if ((arg2 & 0x2000000) == 0)
    int32_t edx_16 = arg2 & 0x1000000
    int32_t edx_17 = neg.d(edx_16)
    *arg1 = neg.d(sbb.d(edx_17, edx_17, edx_16 != 0)) + 0xd
    return 8

if ((arg2 & 0x1000000) == 0)
    if ((arg2 & 0x800000) == 0)
        void* edx_47 = arg2 & &__dos_header
        int32_t edx_48 = neg.d(edx_47)
        *arg1 = neg.d(sbb.d(edx_48, edx_48, edx_47 != 0)) + 0xf
        return 0xa
    
    void* edx_42 = arg2 & &__dos_header
    int32_t edx_43 = neg.d(edx_42)
    *arg1 = neg.d(sbb.d(edx_43, edx_43, edx_42 != 0)) + 0x11
    return 0xa

if ((arg2 & 0x800000) == 0)
    void* edx_37 = arg2 & &__dos_header
    int32_t edx_38 = neg.d(edx_37)
    *arg1 = neg.d(sbb.d(edx_38, edx_38, edx_37 != 0)) + 0x13
    return 0xa

void* edx_32 = arg2 & &__dos_header
int32_t edx_33 = neg.d(edx_32)
*arg1 = neg.d(sbb.d(edx_33, edx_33, edx_32 != 0)) + 0x15
return 0xa
