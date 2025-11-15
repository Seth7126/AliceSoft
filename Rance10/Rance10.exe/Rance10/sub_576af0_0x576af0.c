// 函数: sub_576af0
// 地址: 0x576af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg5
void* esi = arg2
void* var_24 = esi
void* var_28 = arg3

if (edi == 0)
    return 

int32_t i = arg6

while (i != 0)
    if (edi + i == 2)
        void* ebx_3 = *arg3
        void* edi_1 = *esi
        
        if (sub_58d3c0(edi_1, ebx_3).b != 0)
            *var_28 = edi_1
            *esi = ebx_3
        
        break
    
    void* var_4c
    int32_t* var_48
    int32_t var_14
    
    if (edi s<= i && edi s<= sub_576930(arg7))
        int32_t* ecx_8 = *(arg7 + 0x10)
        ecx_8[1] = *ecx_8
        void** ebx_1 = var_28
        sub_5772b0(sub_5770d0(&var_4c, arg7), ebx_1, &var_14, esi, var_4c, var_48)
        int32_t eax_20 = var_14
        
        if (eax_20 != 0)
            eax_20 = _free(eax_20)
        
        int32_t** ecx_11 = *(arg7 + 0x10)
        int32_t var_3c_5 = 1
        char var_40_4 = ecx_11.b
        int32_t edx_7 = ecx_11[1]
        int32_t* ecx_12 = *ecx_11
        var_4c = esi
        sub_577310(eax_20, edx_7, ecx_12, var_4c, arg4, ebx_1, var_40_4)
        return 
    
    if (i s<= sub_576930(arg7))
        int32_t* ecx_13 = *(arg7 + 0x10)
        ecx_13[1] = *ecx_13
        sub_5772b0(sub_5770d0(&var_4c, arg7), esi, &var_14, arg4, var_4c, var_48)
        int32_t eax_24 = var_14
        
        if (eax_24 != 0)
            _free(eax_24)
        
        void** eax_25 = *(arg7 + 0x10)
        void* var_48_2 = eax_25[1]
        var_4c = *eax_25
        sub_5773b0(eax_25, esi, var_28, var_4c, var_48_2, arg4)
        return 
    
    int32_t* var_20_1
    int32_t var_1c_1
    void* var_18_1
    int32_t eax_9
    char* edx_2
    int32_t esi_3
    
    if (i s>= edi)
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(i)
        esi_3 = (eax_11 - edx_3) s>> 1
        var_1c_1 = esi_3
        void* ecx_4 = var_24 + (esi_3 << 2)
        void* var_3c_2 = ecx_4
        var_18_1 = ecx_4
        int32_t* eax_14 = sub_577490(var_24, var_24, var_28, ecx_4)
        edx_2 = var_24
        var_20_1 = eax_14
        eax_9 = (eax_14 - var_28) s>> 2
        arg5 = eax_9
    else
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(edi)
        int32_t eax_6 = (eax_4 - edx) s>> 1
        arg5 = eax_6
        void* var_3c_1 = var_28
        int32_t* eax_7 = var_28 + (eax_6 << 2)
        var_20_1 = eax_7
        void* eax_8 = sub_577430(eax_7, arg4, esi, eax_7)
        edx_2 = var_24
        var_18_1 = eax_8
        eax_9 = arg5
        esi_3 = (eax_8 - edx_2) s>> 2
        var_1c_1 = esi_3
    
    edi -= eax_9
    var_48 = var_18_1
    void* eax_16 = sub_5774f0(eax_9, edx_2, var_20_1, var_48, edi, esi_3, arg7)
    var_4c = arg8
    sub_576af0(eax_16, arg5, var_1c_1, arg7, var_4c)
    i -= var_1c_1
    arg3 = eax_16
    var_24 = var_18_1
    var_28 = eax_16
    
    if (edi == 0)
        break
    
    esi = var_18_1
