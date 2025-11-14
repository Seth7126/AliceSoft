// 函数: sub_68dcb0
// 地址: 0x68dcb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg5
void* var_18 = arg2

if (edi == 0 || arg6 == 0)
    return 

if (edi + arg6 != 2)
    int32_t* var_4c
    int32_t var_48
    int32_t var_44
    void var_14
    
    if (edi s<= arg6 && edi s<= sub_68d5c0(arg7))
        int32_t* ecx_2 = *(arg7 + 0x10)
        ecx_2[1] = *ecx_2
        sub_68f150(sub_5349d0(&var_4c, arg7), arg3, &var_14, arg2, var_4c, var_48, var_44)
        int32_t eax_5 = sub_68cfa0(&var_14)
        int32_t* var_3c_1 = arg8
        void** ecx_6 = *(arg7 + 0x10)
        sub_6903c0(eax_5, ecx_6[1], *ecx_6, arg2, arg4, arg3)
        return 
    
    if (arg6 s<= sub_68d5c0(arg7))
        int32_t* ecx_9 = *(arg7 + 0x10)
        ecx_9[1] = *ecx_9
        sub_68f150(sub_5349d0(&var_4c, arg7), var_18, &var_14, arg4, var_4c, var_48, var_44)
        sub_68cfa0(&var_14)
        int32_t* var_3c_2 = arg8
        int32_t* eax_10 = *(arg7 + 0x10)
        sub_690500(eax_10, var_18, arg3, *eax_10, eax_10[1], arg4)
        return 
    
    int32_t var_20_1
    void* var_1c_1
    int32_t* var_18_1
    int32_t eax_22
    
    if (arg6 s>= edi)
        int32_t eax_24
        int32_t edx_9
        edx_9:eax_24 = sx.q(arg6)
        int32_t eax_26 = (eax_24 - edx_9) s>> 1
        arg5 = eax_26
        int32_t ecx_22 = eax_26 * 0x11
        int32_t var_3c_4 = ecx_22
        int32_t* var_40_4 = arg8
        void* eax_27 = &arg2[ecx_22]
        var_18_1 = eax_27
        void* eax_28 = sub_692e20(eax_27, arg2, arg3, eax_27)
        var_1c_1 = eax_28
        var_20_1 = (eax_28 - arg3) s/ 0x44
        eax_22 = arg5
    else
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = sx.q(edi)
        int32_t eax_15 = (eax_13 - edx_5) s>> 1
        var_20_1 = eax_15
        int32_t ecx_16 = eax_15 * 0x11
        int32_t var_3c_3 = ecx_16
        int32_t* var_40_3 = arg8
        void* eax_17 = arg3 + (ecx_16 << 2)
        var_1c_1 = eax_17
        int32_t* eax_18 = sub_692dc0(eax_17, arg4, arg2, eax_17)
        var_18_1 = eax_18
        eax_22 = (eax_18 - arg2) s/ 0x44
        arg5 = eax_22
    
    int32_t edi_2 = edi - var_20_1
    void* eax_33 = sub_68f480(eax_22, arg2, var_1c_1, var_18_1, edi_2, eax_22, arg7)
    var_4c = arg8
    sub_68dcb0(eax_33, var_20_1, arg5, arg7, var_4c)
    var_4c = arg4
    sub_68dcb0(var_4c, edi_2, arg6 - arg5, arg7, arg8)
else if (arg2[9] s< *(arg3 + 0x24))
    return sub_68ea50(arg3, arg2) __tailcall
