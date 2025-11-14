// 函数: sub_66bd30
// 地址: 0x66bd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg5 == 0 || arg6 == 0)
    return arg6 * 0x28 + arg3

int32_t var_38
int32_t var_14

if (arg5 s<= arg6 && arg5 s<= sub_669a20(arg7))
    int32_t* ecx_1 = *(arg7 + 0x10)
    ecx_1[1] = *ecx_1
    int32_t var_34
    sub_66bb90(sub_5349d0(&var_38, arg7), arg3, &var_14, arg2, var_38, var_34)
    int32_t eax_3 = var_14
    
    if (eax_3 != 0)
        eax_3 = j__free(eax_3)
    
    int32_t var_28_2 = arg5
    sub_66f9b0(eax_3, arg4, arg2, arg3)
    int32_t* eax_4 = *(arg7 + 0x10)
    int32_t var_30_1 = arg5
    return sub_66f970(eax_4, eax_4[1], *eax_4, arg4)

int32_t eax_6 = sub_669a20(arg7)

if (arg6 s> eax_6)
    if (arg3 != arg2 && arg2 != arg4)
        sub_66f9f0(eax_6, arg2, arg3, arg4)
    
    return (arg4 - arg2) s/ 0x28 * 0x28 + arg3

int32_t* ecx_7 = *(arg7 + 0x10)
ecx_7[1] = *ecx_7
var_38 = 0
int32_t var_30_2 = 0
int32_t var_2c_1 = 0
int32_t eax_8 = *(arg7 + 0x10)
int32_t var_28_3 = eax_8
sub_66bb90(eax_8, arg2, &var_14, arg4, var_38, 0)
int32_t eax_9 = var_14

if (eax_9 != 0)
    eax_9 = j__free(eax_9)

int32_t var_28_5 = arg5
sub_66f970(eax_9, arg2, arg3, arg4)
int128_t** eax_10 = *(arg7 + 0x10)
int32_t var_30_3 = arg5
return sub_66f9b0(eax_10, eax_10[1], *eax_10, arg3)
