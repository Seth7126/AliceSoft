// 函数: sub_5ae7f0
// 地址: 0x5ae7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 3

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_54e7f0(arg1)

int32_t* edx_3 = arg1[1]

if (edx_3 != 0)
    *edx_3 = *arg4
    edx_3[1] = arg4[1]
    edx_3[2] = &sealengine::CFrameMulAlpha::`vftable'
    edx_3[3] = arg4[3]
    edx_3[4] = arg4[4]

arg1[1] += 0x14
int32_t eax_6 = arg1[1]
int32_t edi_4 = ((edx_2 u>> 0x1f) + edx_2) * 0x14
int32_t* ecx_2 = *arg1 + edi_4

if (ecx_2 != eax_6 - 0x14 && eax_6 - 0x14 != eax_6)
    sub_5af440(eax_6, eax_6 - 0x14, ecx_2, eax_6)

*arg2 = *arg1 + edi_4
return arg2
