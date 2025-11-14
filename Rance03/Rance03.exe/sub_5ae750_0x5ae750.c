// 函数: sub_5ae750
// 地址: 0x5ae750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi_1 = arg3 - *arg1

if (arg1[1] == arg1[2])
    int32_t* var_10_1 = arg1
    sub_5699c0(arg1)

int32_t* edx_3 = arg1[1]

if (edx_3 != 0)
    *edx_3 = *arg4
    edx_3[1] = arg4[1]
    edx_3[2] = &sealengine::CEmitterRotate::`vftable'
    edx_3[3] = arg4[3]
    edx_3[4] = arg4[4]
    edx_3[5] = arg4[5]
    edx_3[6] = arg4[6]

arg1[1] += 0x1c
int32_t eax_8 = arg1[1]
int32_t esi_4 = esi_1 s/ 0x1c * 0x1c
int32_t ecx_2 = *arg1 + esi_4

if (ecx_2 != eax_8 - 0x1c && eax_8 - 0x1c != eax_8)
    sub_5af9b0(eax_8, eax_8 - 0x1c, ecx_2, eax_8)

*arg2 = *arg1 + esi_4
return arg2
