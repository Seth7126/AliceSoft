// 函数: sub_52c960
// 地址: 0x52c960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2fa0be83, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_4 = edx_3 s>> 5
    
    if (arg3 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t ecx = *(arg1 + 4)
        int32_t edx_5 = arg3 * 0xac
        *arg2 = &sealengine::CDualQuaternion::`vftable'
        *(arg2 + 4) = *(edx_5 + ecx + 0x30)
        *(arg2 + 0x14) = *(edx_5 + ecx + 0x40)
        return arg2

*arg2 = &sealengine::CDualQuaternion::`vftable'
arg2[1] = 0
arg2[2] = 0
arg2[3] = 0
arg2[4] = 0x3f800000
arg2[5] = 0
arg2[6] = 0
arg2[7] = 0
arg2[8] = 0
return arg2
