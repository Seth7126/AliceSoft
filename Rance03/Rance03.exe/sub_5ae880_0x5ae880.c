// 函数: sub_5ae880
// 地址: 0x5ae880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi_1 = arg3 - *arg1

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_54e710(arg1)

int32_t* edx = arg1[1]

if (edx != 0)
    *edx = *arg4
    edx[1] = arg4[1]
    edx[2] = &sealengine::CFrameMulColor::`vftable'
    *(edx + 0xc) = *(arg4 + 0xc)
    edx[7] = arg4[7]

int32_t edi_2 = edi_1 & 0xffffffe0
int32_t eax_5 = arg1[1] + 0x20
int32_t* ecx_2 = *arg1 + edi_2
arg1[1] = eax_5

if (ecx_2 != eax_5 - 0x20 && eax_5 - 0x20 != eax_5)
    sub_5afb30(eax_5, eax_5 - 0x20, ecx_2, eax_5)

*arg2 = *arg1 + edi_2
return arg2
