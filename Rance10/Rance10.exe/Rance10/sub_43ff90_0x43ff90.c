// 函数: sub_43ff90
// 地址: 0x43ff90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
void* ecx = arg7
void* ebx = arg2
void* var_34 = edx
void* eax_1 = arg5
int32_t esi = ebx * 2
arg7 = 8
void* ecx_1 = ecx * 2
arg5 = ecx_1
void* eax_2 = eax_1 * 2
int16_t result
void* i

do
    int16_t* edi_1 = *(edx + 0x20)
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 =
        sx.q(sx.d(*(eax_2 + esi + *(arg4 + 0x20))) + sx.d(*(ecx_1 + esi + *(arg6 + 0x20))) + 1)
    *(edi_1 + esi) += ((eax_9 - edx_3) s>> 1).w
    int32_t edi_2 = *(var_34 + 0x20)
    int32_t eax_19
    int32_t edx_6
    edx_6:eax_19 = sx.q(sx.d(*(eax_2 + esi + *(arg4 + 0x20) + 2))
        + sx.d(*(arg5 + esi + *(arg6 + 0x20) + 2)) + 1)
    *(edi_2 + esi + 2) += ((eax_19 - edx_6) s>> 1).w
    int32_t edi_3 = *(var_34 + 0x20)
    int32_t eax_29
    int32_t edx_9
    edx_9:eax_29 = sx.q(sx.d(*((eax_1 << 1) + 4 + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 4 + esi + *(arg6 + 0x20))) + 1)
    *(esi + edi_3 + 4) += ((eax_29 - edx_9) s>> 1).w
    int32_t edi_4 = *(var_34 + 0x20)
    int32_t eax_39
    int32_t edx_12
    edx_12:eax_39 = sx.q(sx.d(*((eax_1 << 1) + 6 + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 6 + esi + *(arg6 + 0x20))) + 1)
    *(esi + edi_4 + 6) += ((eax_39 - edx_12) s>> 1).w
    int32_t edi_5 = *(var_34 + 0x20)
    int32_t eax_49
    int32_t edx_15
    edx_15:eax_49 = sx.q(sx.d(*((eax_1 << 1) + 8 + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 8 + esi + *(arg6 + 0x20))) + 1)
    *(esi + edi_5 + 8) += ((eax_49 - edx_15) s>> 1).w
    ebx += arg3
    int32_t edi_6 = *(var_34 + 0x20)
    int32_t eax_59
    int32_t edx_18
    edx_18:eax_59 = sx.q(sx.d(*((eax_1 << 1) + 0xa + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 0xa + esi + *(arg6 + 0x20))) + 1)
    *(esi + edi_6 + 0xa) += ((eax_59 - edx_18) s>> 1).w
    int32_t edi_7 = *(var_34 + 0x20)
    int32_t eax_69
    int32_t edx_21
    edx_21:eax_69 = sx.q(sx.d(*((eax_1 << 1) + 0xc + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 0xc + esi + *(arg6 + 0x20))) + 1)
    *(esi + edi_7 + 0xc) += ((eax_69 - edx_21) s>> 1).w
    int32_t edi_8 = *(var_34 + 0x20)
    ecx_1 = arg5
    int32_t eax_79
    int32_t edx_24
    edx_24:eax_79 = sx.q(sx.d(*((eax_1 << 1) + 0xe + esi + *(arg4 + 0x20)))
        + sx.d(*((ecx << 1) + 0xe + esi + *(arg6 + 0x20))) + 1)
    edx = var_34
    result = ((eax_79 - edx_24) s>> 1).w
    *(esi + edi_8 + 0xe) += result
    esi = esi + 0x10 + (arg3 << 1) - 0x10
    i = arg7
    arg7 -= 1
while (i != 1)
return result
