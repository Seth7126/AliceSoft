// 函数: sub_65d8f0
// 地址: 0x65d8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg5

if (edi == 0 || arg6 == 0)
    return 

if (edi + arg6 != 2)
    int32_t* var_4c
    void var_14
    
    if (edi s<= arg6 && edi s<= sub_65baa0(arg7))
        int32_t* ecx_3 = *(arg7 + 0x10)
        ecx_3[1] = *ecx_3
        sub_65e0c0(sub_5349d0(&var_4c, arg7), arg3, &var_14, arg2, var_4c)
        int32_t* eax_5 = sub_65afa0(&var_14)
        int32_t* var_3c_2 = arg8
        int32_t** ecx_7 = *(arg7 + 0x10)
        sub_661290(eax_5, ecx_7[1], *ecx_7, arg2, arg4, arg3)
        return 
    
    int32_t eax_7
    int32_t ecx_10
    eax_7, ecx_10 = sub_65baa0(arg7)
    
    if (arg6 s<= eax_7)
        int32_t* ecx_11 = *(arg7 + 0x10)
        ecx_11[1] = *ecx_11
        sub_65e0c0(sub_5349d0(&var_4c, arg7), arg2, &var_14, arg4, var_4c)
        sub_65afa0(&var_14)
        int32_t* var_3c_3 = arg8
        int32_t* eax_10 = *(arg7 + 0x10)
        sub_661340(eax_10, arg2, arg3, *eax_10, eax_10[1], arg4)
        return 
    
    int32_t var_3c_4 = ecx_10
    int32_t* var_40_4 = arg8
    int32_t var_20_1
    void* var_1c_1
    void* var_18_1
    int32_t eax_23
    
    if (arg6 s>= edi)
        int32_t eax_25
        int32_t edx_10
        edx_10:eax_25 = sx.q(arg6)
        int32_t eax_27 = (eax_25 - edx_10) s>> 1
        arg5 = eax_27
        void* eax_30 = &arg2[eax_27 * 0x30]
        var_18_1 = eax_30
        void* eax_31 = sub_662b90(eax_30, arg2, arg3, eax_30)
        var_1c_1 = eax_31
        var_20_1 = (eax_31 - arg3) s/ 0xc0
        eax_23 = arg5
    else
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = sx.q(edi)
        int32_t eax_15 = (eax_13 - edx_6) s>> 1
        var_20_1 = eax_15
        void* eax_18 = &arg3[eax_15 * 0x30]
        var_1c_1 = eax_18
        void* eax_19 = sub_662b00(eax_18, arg4, arg2, eax_18)
        var_18_1 = eax_19
        eax_23 = (eax_19 - arg2) s/ 0xc0
        arg5 = eax_23
    
    int32_t edi_1 = edi - var_20_1
    void* eax_36 = sub_65e260(eax_23, arg2, var_1c_1, var_18_1, edi_1, eax_23, arg7)
    var_4c = arg8
    sub_65d8f0(eax_36, var_20_1, arg5, arg7, var_4c)
    var_4c = arg4
    sub_65d8f0(var_4c, edi_1, arg6 - arg5, arg7, arg8)
else if (sub_656310(arg2, arg3) != 0)
    return sub_65ba00(arg3, arg2) __tailcall
