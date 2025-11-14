// 函数: sub_65cd40
// 地址: 0x65cd40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg5

if (ebp == 0 || arg6 == 0)
    return 

if (arg6 + ebp == 2)
    arg1 = arg2[5] * arg2[4]
    int32_t ecx_1 = arg3[5] * arg3[4]
    
    if (arg1 s< ecx_1)
        return sub_65ba00(arg3, arg2) __tailcall
    
    if (arg1 s<= ecx_1 && *arg2 s< *arg3)
        return sub_65ba00(arg3, arg2) __tailcall
    
    return 

int32_t* var_44
void var_14

if (ebp s<= arg6 && ebp s<= sub_65baa0(arg7))
    int32_t* ecx_5 = *(arg7 + 0x10)
    ecx_5[1] = *ecx_5
    sub_65e0c0(sub_5349d0(&var_44, arg7), arg3, &var_14, arg2, var_44)
    int32_t* eax_6 = sub_65afa0(&var_14)
    int32_t* var_34_1 = arg8
    int32_t** ecx_9 = *(arg7 + 0x10)
    sub_65fed0(eax_6, ecx_9[1], *ecx_9, arg2, arg4, arg3)
    return 

int32_t eax_8
int32_t ecx_12
eax_8, ecx_12 = sub_65baa0(arg7)

if (arg6 s<= eax_8)
    int32_t* ecx_13 = *(arg7 + 0x10)
    ecx_13[1] = *ecx_13
    sub_65e0c0(sub_5349d0(&var_44, arg7), arg2, &var_14, arg4, var_44)
    sub_65afa0(&var_14)
    int32_t* var_34_2 = arg8
    int32_t* eax_11 = *(arg7 + 0x10)
    sub_65ff70(eax_11, arg2, arg3, *eax_11, eax_11[1], arg4)
    return 

int32_t var_34_3 = ecx_12
int32_t* var_38_3 = arg8
void* var_20_1
int32_t var_1c_1
void* var_18_1
int32_t eax_22
int32_t esi_5

if (arg6 s>= ebp)
    int32_t eax_24
    int32_t edx_9
    edx_9:eax_24 = sx.q(arg6)
    esi_5 = (eax_24 - edx_9) s>> 1
    var_1c_1 = esi_5
    void* eax_28 = &arg2[esi_5 * 0x30]
    var_18_1 = eax_28
    void* eax_29 = sub_6622b0(eax_28, arg2, arg3, eax_28)
    var_20_1 = eax_29
    eax_22 = (eax_29 - arg3) s/ 0xc0
    arg5 = eax_22
else
    int32_t eax_14
    int32_t edx_5
    edx_5:eax_14 = sx.q(ebp)
    int32_t eax_16 = (eax_14 - edx_5) s>> 1
    arg5 = eax_16
    void* eax_19 = &arg3[eax_16 * 0x30]
    var_20_1 = eax_19
    void* eax_20 = sub_662240(eax_19, arg4, arg2, eax_19)
    var_18_1 = eax_20
    eax_22 = arg5
    esi_5 = (eax_20 - arg2) s/ 0xc0
    var_1c_1 = esi_5

int32_t ebp_3 = ebp - eax_22
void* eax_33 = sub_65e260(eax_22, arg2, var_20_1, var_18_1, ebp_3, esi_5, arg7)
var_44 = arg8
sub_65cd40(eax_33, arg5, var_1c_1, arg7, var_44)
var_44 = arg4
sub_65cd40(var_44, ebp_3, arg6 - var_1c_1, arg7, arg8)
