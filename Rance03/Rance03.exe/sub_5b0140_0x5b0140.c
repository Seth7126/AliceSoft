// 函数: sub_5b0140
// 地址: 0x5b0140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x1c

if (eax_3 s<= 0x28)
    int32_t __saved_ebx = arg5
    return sub_5b05c0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
int32_t var_1c = arg5
int32_t edi_3 = eax_7 * 0x1c
void* ebp_1 = &arg3[eax_7 * 7]
int32_t* eax_8 = &arg3[eax_7 * 0xe]
sub_5b05c0(eax_8, ebp_1, arg3, eax_8)
int32_t var_24 = arg5
int32_t* eax_9 = &arg2[eax_7 * 7]
sub_5b05c0(eax_9, arg2, arg2 - edi_3, eax_9)
int32_t var_2c = arg5
int32_t* esi_3 = arg4 - edi_3
void* eax_11 = arg4 - eax_7 * 0x38
int32_t var_34 = arg5
return sub_5b05c0(sub_5b05c0(eax_11, esi_3, eax_11, arg4), arg2, ebp_1, esi_3)
