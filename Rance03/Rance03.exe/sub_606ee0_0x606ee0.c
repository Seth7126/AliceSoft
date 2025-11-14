// 函数: sub_606ee0
// 地址: 0x606ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20 = arg5
int32_t eax_3 = (arg4 - arg3) s/ 0x18

if (eax_3 s<= 0x28)
    return sub_6075f0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
int32_t edi_2 = eax_7 * 0x18
void* ebp_1 = &arg3[eax_7 * 6]
void* eax_8 = &arg3[eax_7 * 0xc]
sub_6075f0(eax_8, ebp_1, arg3, eax_8)
int32_t var_28 = arg5
void* eax_9 = &arg2[eax_7 * 6]
sub_6075f0(eax_9, arg2, arg2 - edi_2, eax_9)
int32_t var_30 = arg5
void* esi_3 = arg4 - edi_2
void* eax_11 = arg4 - eax_7 * 0x30
int32_t var_38 = arg5
return sub_6075f0(sub_6075f0(eax_11, esi_3, eax_11, arg4), arg2, ebp_1, esi_3)
