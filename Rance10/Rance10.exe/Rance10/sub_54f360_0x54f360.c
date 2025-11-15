// 函数: sub_54f360
// 地址: 0x54f360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1

if (*esi != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    sub_54ee10(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    int32_t var_1c_2 = arg_10
    
    if (sub_54ed10(esi, arg_4, arg_8, arg_c) == 0)
        int32_t eax_1 = arg_8
        int32_t eax_2 = arg_4
        int32_t* result = sub_54e9a0(esi)
        int32_t* ecx_2 = esi[4]
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x30))(result, eax_2, eax_1, arg_c, arg_10, arg2)
        
        result.b = 1
        return result

return 0
