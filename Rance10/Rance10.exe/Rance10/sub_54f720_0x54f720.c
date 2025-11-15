// 函数: sub_54f720
// 地址: 0x54f720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1

if (*esi != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t arg_18
    int32_t arg_1c
    sub_54ee10(arg1, &arg_4, &arg_8, &arg_18, &arg_1c)
    int32_t var_1c_2 = arg_1c
    
    if (sub_54ed10(esi, arg_4, arg_8, arg_18) == 0)
        int32_t eax_1 = arg_8
        int32_t eax_2 = arg_4
        int32_t* result = sub_54e9a0(esi)
        int32_t* ecx_2 = esi[4]
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x24))(result, eax_2, eax_1, arg2, 0, 0, arg_18, arg_1c)
        
        result.b = 1
        return result

return 0
