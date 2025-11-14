// 函数: sub_498a70
// 地址: 0x498a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg7 == 0)
    return 

int32_t ebp_1 = arg3

if (ebp_1 s<= 0 || arg4 s<= 0)
    return 

arg3 = 0
int32_t var_8 = 0
sub_4986a0(arg1, ebp_1, arg4, arg2, arg5, &arg3, &var_8)
int32_t ebx_2
int32_t edi_2

if (arg8 != 3 || arg6 == 0)
    edi_2 = arg3
    ebx_2 = var_8
else
    edi_2 = arg3 + 1
    ebx_2 = var_8 + 1

void* eax_1 = sub_4a4020(*(arg1 + 0x88))
sub_4d2240(eax_1, arg8)
sub_502e30(sub_510540(*(eax_1 + 0x34), arg8), ebp_1, arg4)
(**arg7)(*(eax_1 + 0x34), ebp_1, arg4, arg8)
void*** ebp_2 = arg8
sub_4d2310(eax_1, edi_2, ebx_2, arg2, arg5, *(arg1 + 0x1e8), *(arg1 + 0x1ec), ebp_2)
sub_503c60(sub_510540(*(eax_1 + 0x34), ebp_2))
