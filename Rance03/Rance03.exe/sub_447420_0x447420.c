// 函数: sub_447420
// 地址: 0x447420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x200000) == 0)
    if ((arg2 & 0x100000) == 0)
        *arg1 = ((arg2 & 0x80000) | 0x600000) u>> 0x13
        return 0xd
    
    *arg1 = ((arg2 & 0x80000) | &data_700000) u>> 0x13
    return 0xd

if ((arg2 & 0x100000) == 0)
    *arg1 = ((arg2 & 0x80000) | 0x8300000) u>> 0x13
    return 0xd

int32_t edx = arg2 & 0x80000
int32_t edx_1 = neg.d(edx)
*arg1 = zx.d((sbb.d(edx_1, edx_1, edx != 0)).b) + 0x205
return 0xd
