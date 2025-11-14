// 函数: sub_534770
// 地址: 0x534770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg5

if (ebp == 0 || arg6 == 0)
    return 

long double x87_r0
long double x87_r1

if (arg6 + ebp != 2)
    int32_t* var_44
    int32_t var_40
    int32_t var_14
    
    if (ebp s<= arg6 && ebp s<= sub_534650(arg7))
        int32_t* ecx_3 = *(arg7 + 0x10)
        ecx_3[1] = *ecx_3
        sub_534c90(sub_5349d0(&var_44, arg7), arg3, &var_14, arg2, var_44, var_40)
        int32_t eax_5 = var_14
        
        if (eax_5 != 0)
            eax_5 = j__free(eax_5)
        
        int32_t* var_34_3 = arg8
        int32_t** ecx_6 = *(arg7 + 0x10)
        sub_534cf0(eax_5, ecx_6[1], *ecx_6, arg2, arg4, arg3)
        return 
    
    if (arg6 s<= sub_534650(arg7))
        int32_t* ecx_10 = *(arg7 + 0x10)
        ecx_10[1] = *ecx_10
        sub_534c90(sub_5349d0(&var_44, arg7), arg2, &var_14, arg4, var_44, var_40)
        int32_t eax_10 = var_14
        
        if (eax_10 != 0)
            j__free(eax_10)
        
        int32_t* var_34_5 = arg8
        int32_t** eax_11 = *(arg7 + 0x10)
        sub_534d80(eax_11, arg2, arg3, *eax_11, eax_11[1], arg4)
        return 
    
    int32_t var_34_6 = arg6
    int32_t* var_38_4 = arg8
    int32_t var_20_1
    void* var_1c_1
    void* var_18_1
    int32_t eax_20
    
    if (arg6 s>= ebp)
        int32_t eax_22
        int32_t edx_6
        edx_6:eax_22 = sx.q(arg6)
        int32_t eax_24 = (eax_22 - edx_6) s>> 1
        arg5 = eax_24
        void* eax_25 = &arg2[eax_24]
        var_18_1 = eax_25
        void* eax_26 = sub_5352d0(eax_25, arg2, arg3, eax_25)
        var_1c_1 = eax_26
        var_20_1 = (eax_26 - arg3) s>> 2
        eax_20 = arg5
    else
        int32_t eax_14
        int32_t edx_4
        edx_4:eax_14 = sx.q(ebp)
        int32_t eax_16 = (eax_14 - edx_4) s>> 1
        var_20_1 = eax_16
        void* eax_17 = &arg3[eax_16]
        var_1c_1 = eax_17
        void* eax_18 = sub_5351d0(eax_17, arg4, arg2, eax_17)
        var_18_1 = eax_18
        eax_20 = (eax_18 - arg2) s>> 2
        arg5 = eax_20
    
    int32_t ebp_2 = ebp - var_20_1
    void* eax_29 = sub_534e10(eax_20, arg2, var_1c_1, var_18_1, ebp_2, eax_20, arg7)
    var_44 = arg8
    sub_534770(eax_29, var_20_1, arg5, arg7, var_44)
    var_44 = arg4
    sub_534770(var_44, ebp_2, arg6 - arg5, arg7, arg8)
else if (sub_535480(x87_r0, x87_r1, *arg2, *arg3) != 0)
    int32_t ecx_1 = *arg3
    *arg3 = *arg2
    *arg2 = ecx_1
