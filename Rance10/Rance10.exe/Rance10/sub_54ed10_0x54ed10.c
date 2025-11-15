// 函数: sub_54ed10
// 地址: 0x54ed10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg1
int32_t* result

if (edx != 0)
    int32_t eax_1 = arg3 + arg2
    int32_t var_20 = eax_1
    int32_t* var_18_1
    int32_t* eax_2
    
    if (eax_1 s>= arg2)
        var_18_1 = &arg2
        eax_2 = &var_20
    else
        var_18_1 = &var_20
        eax_2 = &arg2
    
    int32_t* ecx_1 = *var_18_1
    int32_t eax_4 = *eax_2
    int32_t arg_8
    int32_t eax_6 = arg4 + arg_8
    var_20 = eax_6
    int32_t* var_10_1
    int32_t* eax_7
    
    if (eax_6 s>= arg_8)
        var_10_1 = &arg_8
        eax_7 = &var_20
    else
        var_10_1 = &var_20
        eax_7 = &arg_8
    
    int32_t edi_1 = *var_10_1
    int32_t ebx_1 = *eax_7
    
    if (ecx_1 s>= 0 && edi_1 s>= 0)
        if (*(arg1 + 0x16) == 0)
            int32_t* ecx_3 = *(edx + 0x118)
            
            if (ecx_3 != 0)
                result = (*(*ecx_3 + 0x10))()
            else
                result = nullptr
        else
            result = arg1[0xb]
        
        if (eax_4 s<= result && ebx_1 s<= sub_5512e0(arg1) && ecx_1 != eax_4)
            result.b = edi_1 == ebx_1
            return result

result.b = 1
return result
