// 函数: sub_66b5c0
// 地址: 0x66b5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg5
int128_t* var_24 = arg3
int128_t* esi = arg2

if (ebx == 0 || arg6 == 0)
    return 

if (ebx + arg6 == 2)
    arg1.b = *(esi + 0x25)
    arg2.b = *(arg3 + 0x25)
    
    if (arg1.b == 0)
        if (arg2.b != 0)
            return sub_6699e0(arg3, esi) __tailcall
        
        goto label_66b613
    
    if (arg2.b != 0)
    label_66b613:
        
        if (*esi s< *arg3)
            return sub_6699e0(arg3, esi) __tailcall
    
    return 

int128_t* var_4c
int32_t var_48
int32_t var_14

if (ebx s<= arg6 && ebx s<= sub_669a20(arg7))
    int32_t* ecx_1 = *(arg7 + 0x10)
    ecx_1[1] = *ecx_1
    sub_66bb90(sub_5349d0(&var_4c, arg7), var_24, &var_14, esi, var_4c, var_48)
    int32_t eax_3 = var_14
    
    if (eax_3 != 0)
        eax_3 = j__free(eax_3)
    
    int128_t* var_3c_2 = arg8
    int32_t* ecx_4 = *(arg7 + 0x10)
    sub_66e560(eax_3, ecx_4[1], *ecx_4, esi, arg4, var_24)
    return 

if (arg6 s<= sub_669a20(arg7))
    int32_t* ecx_7 = *(arg7 + 0x10)
    ecx_7[1] = *ecx_7
    sub_66bb90(sub_5349d0(&var_4c, arg7), esi, &var_14, arg4, var_4c, var_48)
    int32_t eax_8 = var_14
    
    if (eax_8 != 0)
        j__free(eax_8)
    
    int128_t* var_3c_4 = arg8
    int32_t* eax_9 = *(arg7 + 0x10)
    sub_66e610(eax_9, esi, var_24, *eax_9, eax_9[1], arg4)
    return 

int32_t var_20_1
void* var_1c_1
void* var_18_1
int32_t eax_21

if (arg6 s>= ebx)
    int32_t eax_23
    int32_t edx_10
    edx_10:eax_23 = sx.q(arg6)
    int32_t eax_25 = (eax_23 - edx_10) s>> 1
    arg5 = eax_25
    int32_t ecx_15 = eax_25 * 5
    int32_t var_3c_6 = ecx_15
    int128_t* var_40_4 = arg8
    void* eax_26 = esi + (ecx_15 << 3)
    var_18_1 = eax_26
    void* eax_27 = sub_66f870(eax_26, esi, var_24, eax_26)
    var_1c_1 = eax_27
    var_20_1 = (eax_27 - var_24) s/ 0x28
    eax_21 = arg5
else
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = sx.q(ebx)
    int32_t eax_14 = (eax_12 - edx_6) s>> 1
    var_20_1 = eax_14
    int32_t ecx_11 = eax_14 * 5
    int32_t var_3c_5 = ecx_11
    int128_t* var_40_3 = arg8
    void* eax_16 = var_24 + (ecx_11 << 3)
    var_1c_1 = eax_16
    void* eax_17 = sub_66f800(eax_16, arg4, esi, eax_16)
    var_18_1 = eax_17
    eax_21 = (eax_17 - esi) s/ 0x28
    arg5 = eax_21

int32_t ebx_3 = ebx - var_20_1
void* eax_32 = sub_66bd30(eax_21, esi, var_1c_1, var_18_1, ebx_3, eax_21, arg7)
var_4c = arg8
sub_66b5c0(eax_32, var_20_1, arg5, arg7, var_4c)
var_4c = arg4
sub_66b5c0(var_4c, ebx_3, arg6 - arg5, arg7, arg8)
