// 函数: sub_55a220
// 地址: 0x55a220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg5

if (ebx == 0 || arg6 == 0)
    return 

if (ebx + arg6 == 2)
    void* ebx_1 = *arg3
    void* ecx = *arg2
    
    if (sub_5594e0(ecx, ebx_1) != 0)
        *arg3 = ecx
        *arg2 = ebx_1
    
    return 

void** var_4c
int32_t var_48
int32_t var_14

if (ebx s<= arg6 && ebx s<= sub_534650(arg7))
    int32_t* ecx_2 = *(arg7 + 0x10)
    ecx_2[1] = *ecx_2
    sub_534c90(sub_5349d0(&var_4c, arg7), arg3, &var_14, arg2, var_4c, var_48)
    int32_t eax_4 = var_14
    
    if (eax_4 != 0)
        eax_4 = j__free(eax_4)
    
    void** var_3c_3 = arg8
    int32_t** ecx_5 = *(arg7 + 0x10)
    sub_55a6a0(eax_4, ecx_5[1], *ecx_5, arg2, arg4, arg3)
    return 

int32_t eax_6
int32_t ecx_8
eax_6, ecx_8 = sub_534650(arg7)

if (arg6 s<= eax_6)
    int32_t* ecx_9 = *(arg7 + 0x10)
    ecx_9[1] = *ecx_9
    sub_534c90(sub_5349d0(&var_4c, arg7), arg2, &var_14, arg4, var_4c, var_48)
    int32_t eax_9 = var_14
    
    if (eax_9 != 0)
        j__free(eax_9)
    
    void** var_3c_5 = arg8
    int32_t** eax_10 = *(arg7 + 0x10)
    sub_55a730(eax_10, arg2, arg3, *eax_10, eax_10[1], arg4)
    return 

int32_t var_20_1
void* var_1c_1
void* var_18_1
int32_t eax_19

if (arg6 s>= ebx)
    int32_t eax_21
    int32_t edx_6
    edx_6:eax_21 = sx.q(arg6)
    int32_t eax_23 = (eax_21 - edx_6) s>> 1
    int32_t var_3c_7 = ecx_8
    void** var_40_4 = arg8
    arg5 = eax_23
    void* eax_24 = &arg2[eax_23]
    var_18_1 = eax_24
    void* eax_25 = sub_55a990(eax_24, arg2, arg3, eax_24)
    var_1c_1 = eax_25
    var_20_1 = (eax_25 - arg3) s>> 2
    eax_19 = arg5
else
    int32_t eax_13
    int32_t edx_4
    edx_4:eax_13 = sx.q(ebx)
    int32_t eax_15 = (eax_13 - edx_4) s>> 1
    int32_t* var_3c_6 = arg3
    void** var_40_3 = arg8
    var_20_1 = eax_15
    void* eax_16 = &arg3[eax_15]
    var_1c_1 = eax_16
    void* eax_17 = sub_55a930(eax_16, arg4, arg2, eax_16)
    var_18_1 = eax_17
    eax_19 = (eax_17 - arg2) s>> 2
    arg5 = eax_19

int32_t ebx_4 = ebx - var_20_1
void* eax_28 = sub_534e10(eax_19, arg2, var_1c_1, var_18_1, ebx_4, eax_19, arg7)
var_4c = arg8
sub_55a220(eax_28, var_20_1, arg5, arg7, var_4c)
var_4c = arg4
sub_55a220(var_4c, ebx_4, arg6 - arg5, arg7, arg8)
