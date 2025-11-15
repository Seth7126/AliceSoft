// 函数: sub_54f3f0
// 地址: 0x54f3f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1

if (*esi != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    sub_54ee10(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    int32_t var_24_2 = arg_10
    
    if (sub_54ed10(esi, arg_4, arg_8, arg_c) == 0)
        int32_t eax_1 = arg2
        int32_t ecx_1 = arg3
        int32_t edi = arg4
        
        if (eax_1 s> 0xff)
            eax_1 = 0xff
        
        if (ecx_1 s> 0xff)
            ecx_1 = 0xff
        
        if (edi s> 0xff)
            edi = 0xff
        
        if (eax_1 s< 0)
            eax_1 = 0
        
        if (ecx_1 s< 0)
            ecx_1 = 0
        
        int32_t eax_2 = arg_8
        int32_t eax_3 = arg_4
        int32_t* result = sub_54e9a0(esi)
        int32_t* ecx_3 = esi[4]
        
        if (ecx_3 != 0)
            if (edi s< 0)
                edi = 0
            
            (*(*ecx_3 + 0x34))(result, eax_3, eax_2, arg_c, arg_10, eax_1, ecx_1, edi, arg5)
        
        result.b = 1
        return result

return 0
