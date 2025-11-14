// 函数: sub_65be90
// 地址: 0x65be90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg5
int32_t* var_24 = arg3

if (edi == 0 || arg6 == 0)
    return 

if (edi + arg6 == 2)
    arg1 = arg2[1]
    int32_t edx = arg3[1]
    
    if (arg1 s< edx)
        return sub_65ba00(arg3, arg2) __tailcall
    
    if (arg1 s<= edx && *arg2 s< *arg3)
        return sub_65ba00(arg3, arg2) __tailcall
    
    return 

int32_t* var_4c
void var_14

if (edi s<= arg6 && edi s<= sub_65baa0(arg7))
    int32_t* ecx_2 = *(arg7 + 0x10)
    ecx_2[1] = *ecx_2
    sub_65e0c0(sub_5349d0(&var_4c, arg7), var_24, &var_14, arg2, var_4c)
    int32_t* eax_5 = sub_65afa0(&var_14)
    int32_t* var_3c_1 = arg8
    int32_t** ecx_6 = *(arg7 + 0x10)
    sub_65e740(eax_5, ecx_6[1], *ecx_6, arg2, arg4, var_24)
    return 

int32_t eax_7
int32_t ecx_9
eax_7, ecx_9 = sub_65baa0(arg7)

if (arg6 s<= eax_7)
    int32_t* ecx_10 = *(arg7 + 0x10)
    ecx_10[1] = *ecx_10
    sub_65e0c0(sub_5349d0(&var_4c, arg7), arg2, &var_14, arg4, var_4c)
    sub_65afa0(&var_14)
    int32_t* var_3c_2 = arg8
    int32_t* eax_10 = *(arg7 + 0x10)
    sub_65e7d0(eax_10, arg2, var_24, *eax_10, eax_10[1], arg4)
    return 

int32_t var_3c_3 = ecx_9
int32_t* var_40_3 = arg8
int32_t var_20_1
void* var_1c_1
int32_t* var_18_1
int32_t eax_23

if (arg6 s>= edi)
    int32_t eax_25
    int32_t edx_11
    edx_11:eax_25 = sx.q(arg6)
    int32_t eax_27 = (eax_25 - edx_11) s>> 1
    arg5 = eax_27
    int32_t* eax_30 = &arg2[eax_27 * 0x30]
    var_18_1 = eax_30
    void* eax_31 = sub_661860(eax_30, arg2, var_24, eax_30)
    var_1c_1 = eax_31
    var_20_1 = (eax_31 - var_24) s/ 0xc0
    eax_23 = arg5
else
    int32_t eax_13
    int32_t edx_7
    edx_7:eax_13 = sx.q(edi)
    int32_t eax_15 = (eax_13 - edx_7) s>> 1
    var_20_1 = eax_15
    void* eax_18 = &var_24[eax_15 * 0x30]
    var_1c_1 = eax_18
    int32_t* eax_19 = sub_6617f0(eax_18, arg4, arg2, eax_18)
    var_18_1 = eax_19
    eax_23 = (eax_19 - arg2) s/ 0xc0
    arg5 = eax_23

int32_t edi_1 = edi - var_20_1
void* eax_36 = sub_65e260(eax_23, arg2, var_1c_1, var_18_1, edi_1, eax_23, arg7)
var_4c = arg8
sub_65be90(eax_36, var_20_1, arg5, arg7, var_4c)
var_4c = arg4
sub_65be90(var_4c, edi_1, arg6 - arg5, arg7, arg8)
