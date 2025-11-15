// 函数: sub_44a040
// 地址: 0x44a040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg2 & 0x4000000) == 0)
    if ((arg2 & 0x2000000) == 0)
        int32_t edx_15 = arg2 & 0x1000000
        int32_t edx_16 = neg.d(edx_15)
        *arg1 = (sbb.d(edx_16, edx_16, edx_15 != 0) & 4) + 7
        return 8
    
    int32_t edx_10 = arg2 & 0x1000000
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = neg.d(sbb.d(edx_11, edx_11, edx_10 != 0)) + 0xd
    return 8

if ((arg2 & 0x2000000) == 0)
    int32_t edx_5 = arg2 & 0x1000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = (sbb.d(edx_6, edx_6, edx_5 != 0) & 4) + 0xf
    return 8

int32_t edx = arg2 & 0x1000000
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 0x15
return 8
