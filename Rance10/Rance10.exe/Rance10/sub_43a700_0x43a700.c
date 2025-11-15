// 函数: sub_43a700
// 地址: 0x43a700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t ebx = arg2
int32_t esi = arg5
void* var_4 = arg1
int32_t ebp = ebx * 2
arg5 = 8
int32_t i

do
    int16_t* edi_1 = *(arg1 + 8)
    int32_t edx_1 = ebx + esi
    int32_t eax_3 = *(arg4 + 8)
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(sx.d(*(eax_3 + (edx_1 << 1))) + sx.d(*(eax_3 + (edx_1 << 1) + 2)) + 1)
    int32_t edx_3 = esi + ebx
    *(edi_1 + ebp) += ((eax_6 - edx_2) s>> 1).w
    int32_t edi_2 = *(var_4 + 8)
    int32_t eax_11 = *(arg4 + 8)
    int32_t eax_14
    int32_t edx_4
    edx_4:eax_14 = sx.q(sx.d(*(eax_11 + (edx_3 << 1) + 2)) + sx.d(*(eax_11 + (edx_3 << 1) + 4)) + 1)
    *(edi_2 + ebp + 2) += ((eax_14 - edx_4) s>> 1).w
    int32_t edi_3 = *(var_4 + 8)
    int16_t* eax_20 = *(arg4 + 8) + ((esi + 2 + ebx) << 1)
    int32_t eax_23
    int32_t edx_5
    edx_5:eax_23 = sx.q(sx.d(*eax_20) + sx.d(eax_20[1]) + 1)
    *(edi_3 + ebp + 4) += ((eax_23 - edx_5) s>> 1).w
    int32_t edi_4 = *(var_4 + 8)
    int16_t* eax_29 = *(arg4 + 8) + ((esi + 3 + ebx) << 1)
    int32_t eax_32
    int32_t edx_6
    edx_6:eax_32 = sx.q(sx.d(*eax_29) + sx.d(eax_29[1]) + 1)
    *(edi_4 + ebp + 6) += ((eax_32 - edx_6) s>> 1).w
    int32_t edi_5 = *(var_4 + 8)
    int16_t* eax_38 = *(arg4 + 8) + ((esi + 4 + ebx) << 1)
    int32_t eax_41
    int32_t edx_7
    edx_7:eax_41 = sx.q(sx.d(*eax_38) + sx.d(eax_38[1]) + 1)
    *(edi_5 + ebp + 8) += ((eax_41 - edx_7) s>> 1).w
    int32_t edi_6 = *(var_4 + 8)
    int16_t* eax_47 = *(arg4 + 8) + ((esi + 5 + ebx) << 1)
    int32_t eax_50
    int32_t edx_8
    edx_8:eax_50 = sx.q(sx.d(*eax_47) + sx.d(eax_47[1]) + 1)
    *(edi_6 + ebp + 0xa) += ((eax_50 - edx_8) s>> 1).w
    int32_t edi_7 = *(var_4 + 8)
    int16_t* eax_56 = *(arg4 + 8) + ((esi + 6 + ebx) << 1)
    int32_t eax_59
    int32_t edx_9
    edx_9:eax_59 = sx.q(sx.d(*eax_56) + sx.d(eax_56[1]) + 1)
    *(edi_7 + ebp + 0xc) += ((eax_59 - edx_9) s>> 1).w
    int32_t edi_8 = *(var_4 + 8)
    int16_t* eax_65 = *(arg4 + 8) + ((esi + 7 + ebx) << 1)
    int32_t eax_68
    int32_t edx_10
    edx_10:eax_68 = sx.q(sx.d(*eax_65) + sx.d(eax_65[1]) + 1)
    ebx = ebx + 8 + arg3 - 8
    arg1 = var_4
    *(edi_8 + ebp + 0xe) += ((eax_68 - edx_10) s>> 1).w
    ebp = ebp + 0x10 + arg3 * 2 - 0x10
    i = arg5
    arg5 -= 1
while (i != 1)
return arg3 * 2 - 0x10
