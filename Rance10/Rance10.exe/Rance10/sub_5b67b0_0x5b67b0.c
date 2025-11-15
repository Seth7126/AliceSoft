// 函数: sub_5b67b0
// 地址: 0x5b67b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg5
char* esi = arg2
void* edx = arg3
void* var_24 = edx

if (edi == 0)
    return 

int32_t i = arg6

while (i != 0)
    if (edi + i == 2)
        if (not(*(esi + 4) f<= *(edx + 4)))
            int64_t xmm1_1 = *edx
            int32_t ecx_21 = *(edx + 8)
            *edx = *esi
            *(edx + 8) = *(esi + 8)
            *esi = xmm1_1
            *(esi + 8) = ecx_21
        
        break
    
    char* var_4c
    int64_t* var_48
    int32_t var_14
    
    if (edi s<= i && edi s<= sub_5b65d0(arg7))
        int32_t* ecx_12 = *(arg7 + 0x10)
        ecx_12[1] = *ecx_12
        sub_5b6c50(sub_5770d0(&var_4c, arg7), var_24, &var_14, esi, var_4c, var_48)
        int32_t eax_26 = var_14
        
        if (eax_26 != 0)
            eax_26 = _free(eax_26)
        
        char** ecx_15 = *(arg7 + 0x10)
        int32_t var_3c_5 = 1
        char var_40_4 = ecx_15.b
        int32_t edx_12 = ecx_15[1]
        char* ecx_16 = *ecx_15
        var_4c = esi
        sub_5b6cb0(eax_26, edx_12, ecx_16, var_4c, arg4, var_24, var_40_4)
        return 
    
    if (i s<= sub_5b65d0(arg7))
        int32_t* ecx_17 = *(arg7 + 0x10)
        ecx_17[1] = *ecx_17
        sub_5b6c50(sub_5770d0(&var_4c, arg7), esi, &var_14, arg4, var_4c, var_48)
        int32_t eax_30 = var_14
        
        if (eax_30 != 0)
            _free(eax_30)
        
        char** eax_31 = *(arg7 + 0x10)
        void* var_48_2 = eax_31[1]
        var_4c = *eax_31
        sub_5b6d40(eax_31, esi, var_24, var_4c, var_48_2, arg4)
        return 
    
    int32_t var_20_1
    int64_t* var_1c_1
    int64_t* var_18_1
    int32_t eax_12
    
    if (i s>= edi)
        int32_t eax_14
        int32_t edx_5
        edx_5:eax_14 = sx.q(i)
        int32_t eax_16 = (eax_14 - edx_5) s>> 1
        arg5 = eax_16
        int32_t ecx_6 = eax_16 * 3
        int64_t* eax_17 = &esi[ecx_6 << 2]
        int32_t var_3c_2 = ecx_6
        var_18_1 = eax_17
        int64_t* eax_18 = sub_5b6e20(eax_17, esi, var_24, eax_17)
        var_1c_1 = eax_18
        var_20_1 = (eax_18 - var_24) s/ 0xc
        eax_12 = arg5
    else
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(edi)
        int32_t eax_5 = (eax_3 - edx_1) s>> 1
        var_20_1 = eax_5
        int32_t ecx_2 = eax_5 * 3
        int32_t var_3c_1 = ecx_2
        void* eax_7 = var_24 + (ecx_2 << 2)
        var_1c_1 = eax_7
        int64_t* eax_8 = sub_5b6dc0(eax_7, arg4, esi, eax_7)
        var_18_1 = eax_8
        eax_12 = (eax_8 - esi) s/ 0xc
        arg5 = eax_12
    
    edi -= var_20_1
    var_48 = var_18_1
    void* eax_23 = sub_5b6e80(eax_12, esi, var_1c_1, var_48, edi, eax_12, arg7)
    var_4c = arg8
    sub_5b67b0(eax_23, var_20_1, arg5, arg7, var_4c)
    i -= arg5
    edx = eax_23
    arg5 = var_18_1
    var_24 = eax_23
    
    if (edi == 0)
        break
    
    esi = var_18_1
