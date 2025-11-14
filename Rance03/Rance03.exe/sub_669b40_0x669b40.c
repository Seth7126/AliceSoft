// 函数: sub_669b40
// 地址: 0x669b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg5
int32_t* esi = arg2

if (ebx == 0 || arg6 == 0)
    return 

if (ebx + arg6 != 2)
    int128_t* var_4c
    int32_t var_48
    int32_t var_14
    
    if (ebx s<= arg6 && ebx s<= sub_669a20(arg7))
        int32_t* ecx_1 = *(arg7 + 0x10)
        ecx_1[1] = *ecx_1
        sub_66bb90(sub_5349d0(&var_4c, arg7), arg3, &var_14, esi, var_4c, var_48)
        int32_t eax_4 = var_14
        
        if (eax_4 != 0)
            eax_4 = j__free(eax_4)
        
        int128_t* var_3c_2 = arg8
        int32_t** ecx_4 = *(arg7 + 0x10)
        sub_66bbf0(eax_4, ecx_4[1], *ecx_4, esi, arg4, arg3)
        return 
    
    if (arg6 s<= sub_669a20(arg7))
        int32_t* ecx_7 = *(arg7 + 0x10)
        ecx_7[1] = *ecx_7
        sub_66bb90(sub_5349d0(&var_4c, arg7), esi, &var_14, arg4, var_4c, var_48)
        int32_t eax_9 = var_14
        
        if (eax_9 != 0)
            j__free(eax_9)
        
        int128_t* var_3c_4 = arg8
        int32_t* eax_10 = *(arg7 + 0x10)
        sub_66bc90(eax_10, esi, arg3, *eax_10, eax_10[1], arg4)
        return 
    
    int32_t var_20_1
    void* var_1c_1
    int128_t* var_18_1
    int32_t eax_22
    
    if (arg6 s>= ebx)
        int32_t eax_24
        int32_t edx_8
        edx_8:eax_24 = sx.q(arg6)
        int32_t eax_26 = (eax_24 - edx_8) s>> 1
        arg5 = eax_26
        int32_t ecx_15 = eax_26 * 5
        int32_t var_3c_6 = ecx_15
        int128_t* var_40_4 = arg8
        void* eax_27 = &esi[ecx_15 * 2]
        var_18_1 = eax_27
        void* eax_28 = sub_66e860(eax_27, esi, arg3, eax_27)
        var_1c_1 = eax_28
        var_20_1 = (eax_28 - arg3) s/ 0x28
        eax_22 = arg5
    else
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(ebx)
        int32_t eax_15 = (eax_13 - edx_4) s>> 1
        var_20_1 = eax_15
        int32_t ecx_11 = eax_15 * 5
        int32_t var_3c_5 = ecx_11
        int128_t* var_40_3 = arg8
        void* eax_17 = &arg3[ecx_11 * 2]
        var_1c_1 = eax_17
        int128_t* eax_18 = sub_66e810(eax_17, arg4, esi, eax_17)
        var_18_1 = eax_18
        eax_22 = (eax_18 - esi) s/ 0x28
        arg5 = eax_22
    
    int32_t ebx_3 = ebx - var_20_1
    void* eax_33 = sub_66bd30(eax_22, esi, var_1c_1, var_18_1, ebx_3, eax_22, arg7)
    var_4c = arg8
    sub_669b40(eax_33, var_20_1, arg5, arg7, var_4c)
    var_4c = arg4
    sub_669b40(var_4c, ebx_3, arg6 - arg5, arg7, arg8)
else if (*esi s< *arg3)
    return sub_6699e0(arg3, arg2) __tailcall
