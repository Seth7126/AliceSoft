// 函数: sub_5bf240
// 地址: 0x5bf240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg5
void* var_28 = arg3
void* edi = arg2
void* var_24 = edi

if (esi == 0)
    return 

int32_t i = arg6

while (i != 0)
    if (esi + i == 2)
        if (sub_5b7d00(edi, arg3).b != 0)
            int32_t ecx_19 = *var_28
            *var_28 = *edi
            *edi = ecx_19
        
        break
    
    void* var_4c
    void var_14
    
    if (esi s<= i && esi s<= sub_576930(arg7))
        int32_t* ecx_8 = *(arg7 + 0x10)
        ecx_8[1] = *ecx_8
        void** ebx_1 = var_28
        sub_5bf9e0(sub_5770d0(&var_4c, arg7), ebx_1, &var_14, edi, var_4c)
        void** eax_20 = sub_5bed30(&var_14)
        int32_t** ecx_12 = *(arg7 + 0x10)
        int32_t var_3c_4 = 1
        char var_40_4 = ecx_12.b
        int32_t edx_7 = ecx_12[1]
        int32_t* ecx_13 = *ecx_12
        var_4c = edi
        sub_5bfa30(eax_20, edx_7, ecx_13, var_4c, arg4, ebx_1, var_40_4)
        return 
    
    if (i s<= sub_576930(arg7))
        int32_t* ecx_14 = *(arg7 + 0x10)
        ecx_14[1] = *ecx_14
        sub_5bf9e0(sub_5770d0(&var_4c, arg7), edi, &var_14, arg4, var_4c)
        sub_5bed30(&var_14)
        void** eax_24 = *(arg7 + 0x10)
        int32_t* var_48_3 = eax_24[1]
        var_4c = *eax_24
        sub_5bfb40(eax_24, edi, var_28, var_4c, var_48_3, arg4)
        return 
    
    int32_t* var_20_1
    int32_t var_1c_1
    void* var_18_1
    int32_t eax_9
    int32_t* edx_2
    int32_t edi_3
    
    if (i s>= esi)
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(i)
        edi_3 = (eax_11 - edx_3) s>> 1
        var_1c_1 = edi_3
        void* ecx_4 = var_24 + (edi_3 << 2)
        void* var_3c_2 = ecx_4
        var_18_1 = ecx_4
        int32_t* eax_14 = sub_5bfcd0(var_24, var_24, var_28, ecx_4)
        edx_2 = var_24
        var_20_1 = eax_14
        eax_9 = (eax_14 - var_28) s>> 2
        arg5 = eax_9
    else
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(esi)
        int32_t eax_6 = (eax_4 - edx) s>> 1
        arg5 = eax_6
        void* var_3c_1 = var_28
        int32_t* eax_7 = var_28 + (eax_6 << 2)
        var_20_1 = eax_7
        void* eax_8 = sub_5bfc40(eax_7, arg4, edi, eax_7)
        edx_2 = var_24
        var_18_1 = eax_8
        eax_9 = arg5
        edi_3 = (eax_8 - edx_2) s>> 2
        var_1c_1 = edi_3
    
    esi -= eax_9
    void* eax_16 = sub_5bfd70(eax_9, edx_2, var_20_1, var_18_1, esi, edi_3, arg7)
    var_4c = arg8
    sub_5bf240(eax_16, arg5, var_1c_1, arg7, var_4c)
    i -= var_1c_1
    arg3 = eax_16
    var_24 = var_18_1
    var_28 = eax_16
    
    if (esi == 0)
        break
    
    edi = var_18_1
