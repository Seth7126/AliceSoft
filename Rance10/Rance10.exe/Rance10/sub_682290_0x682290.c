// 函数: sub_682290
// 地址: 0x682290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result_1 = arg1
void arg_4
sub_4cedf0(&arg1[0xb], &result_1, &arg_4)
void** result = result_1

if (result != arg1[0xb] && result[7] != 0)
    void* ecx_2 = result[5]
    
    if (ecx_2 == 0)
        int32_t ecx_12 = arg1[1]
        
        if (ecx_12 == 1)
            return sub_682330(arg1, &result[5], arg2)
        
        if (ecx_12 == 2)
            return sub_682550(arg1, &result[5], arg2)
    else if (ecx_2 == 1)
        int32_t ecx_5 = arg1[1]
        
        if (ecx_5 == 1)
            return sub_682420(arg1, &result[5], arg2)
        
        if (ecx_5 == 2)
            return sub_6825b0(arg1, &result[5], arg2)

result.b = 0
return result
