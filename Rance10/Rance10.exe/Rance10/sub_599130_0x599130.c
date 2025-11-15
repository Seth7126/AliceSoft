// 函数: sub_599130
// 地址: 0x599130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg5
char* esi = arg2
void* var_24 = arg3

if (edi == 0)
    return 

int32_t i = arg6

while (i != 0)
    if (edi + i == 2)
        if (sub_597ff0(*esi, *arg3).b != 0)
            int32_t** edx_10 = var_24
            int32_t* ecx_18 = *edx_10
            *edx_10 = *esi
            *esi = ecx_18
        
        break
    
    char* var_4c
    int32_t* var_48
    int32_t var_14
    
    if (edi s<= i && edi s<= sub_576930(arg7))
        int32_t* ecx_8 = *(arg7 + 0x10)
        ecx_8[1] = *ecx_8
        int32_t* ebx_1 = var_24
        sub_5772b0(sub_5770d0(&var_4c, arg7), ebx_1, &var_14, esi, var_4c, var_48)
        int32_t eax_22 = var_14
        
        if (eax_22 != 0)
            eax_22 = _free(eax_22)
        
        int32_t** ecx_11 = *(arg7 + 0x10)
        int32_t var_3c_5 = 1
        char var_40_4 = ecx_11.b
        int32_t edx_7 = ecx_11[1]
        int32_t* ecx_12 = *ecx_11
        var_4c = esi
        sub_5994d0(eax_22, edx_7, ecx_12, var_4c, arg4, ebx_1, var_40_4)
        return 
    
    int32_t eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_576930(arg7)
    
    if (i s<= eax_2)
        int32_t* ecx_13 = *(arg7 + 0x10)
        ecx_13[1] = *ecx_13
        sub_5772b0(sub_5770d0(&var_4c, arg7), esi, &var_14, arg4, var_4c, var_48)
        int32_t eax_26 = var_14
        
        if (eax_26 != 0)
            _free(eax_26)
        
        char** eax_27 = *(arg7 + 0x10)
        void* var_48_2 = eax_27[1]
        var_4c = *eax_27
        sub_599570(eax_27, esi, var_24, var_4c, var_48_2, arg4)
        return 
    
    int32_t var_20_1
    int32_t* var_1c_1
    int32_t* var_18_1
    int32_t eax_10
    
    if (i s>= edi)
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = sx.q(i)
        int32_t eax_14 = (eax_12 - edx_2) s>> 1
        arg5 = eax_14
        int32_t var_3c_2 = ecx_2
        int32_t* eax_15 = &esi[eax_14 << 2]
        var_18_1 = eax_15
        int32_t* eax_16 = sub_599640(eax_15, esi, var_24, eax_15)
        var_1c_1 = eax_16
        var_20_1 = (eax_16 - var_24) s>> 2
        eax_10 = arg5
    else
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(edi)
        int32_t eax_6 = (eax_4 - edx) s>> 1
        var_20_1 = eax_6
        void* var_3c_1 = var_24
        void* eax_7 = var_24 + (eax_6 << 2)
        var_1c_1 = eax_7
        int32_t* eax_8 = sub_5995f0(eax_7, arg4, esi, eax_7)
        var_18_1 = eax_8
        eax_10 = (eax_8 - esi) s>> 2
        arg5 = eax_10
    
    edi -= var_20_1
    var_48 = var_18_1
    void* eax_19 = sub_5774f0(eax_10, esi, var_1c_1, var_48, edi, eax_10, arg7)
    var_4c = arg8
    sub_599130(eax_19, var_20_1, arg5, arg7, var_4c)
    i -= arg5
    arg3 = eax_19
    arg5 = var_18_1
    var_24 = eax_19
    
    if (edi == 0)
        break
    
    esi = var_18_1
