// 函数: sub_65e260
// 地址: 0x65e260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg5 == 0 || arg6 == 0)
    return &arg3[arg6 * 0x30]

int32_t var_38
void var_14

if (arg5 s<= arg6 && arg5 s<= sub_65baa0(arg7))
    int32_t* ecx_1 = *(arg7 + 0x10)
    ecx_1[1] = *ecx_1
    sub_65e0c0(sub_5349d0(&var_38, arg7), arg3, &var_14, arg2, var_38)
    int32_t var_28 = arg5
    sub_662e20(sub_65afa0(&var_14), arg4, arg2, arg3)
    int32_t* eax_4 = *(arg7 + 0x10)
    int32_t var_30_1 = arg5
    return sub_662cc0(eax_4, eax_4[1], *eax_4, arg4)

int32_t eax_6 = sub_65baa0(arg7)

if (arg6 s> eax_6)
    if (arg3 != arg2 && arg2 != arg4)
        sub_662f80(eax_6, arg2, arg3, arg4)
    
    return &arg3[(arg4 - arg2) s/ 0xc0 * 0x30]

int32_t* ecx_8 = *(arg7 + 0x10)
ecx_8[1] = *ecx_8
var_38 = 0
int32_t var_34_1 = 0
int32_t var_30_2 = 0
int32_t var_2c_1 = 0
int32_t eax_8 = *(arg7 + 0x10)
int32_t var_28_1 = eax_8
sub_65e0c0(eax_8, arg2, &var_14, arg4, var_38)
int32_t var_28_2 = arg5
sub_662cc0(sub_65afa0(&var_14), arg2, arg3, arg4)
void** eax_10 = *(arg7 + 0x10)
int32_t var_30_3 = arg5
return sub_662e20(eax_10, eax_10[1], *eax_10, arg3)
