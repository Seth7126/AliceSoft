// 函数: sub_648a10
// 地址: 0x648a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
int32_t* ecx = *(arg1 + 0x18)
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    result_1 = result
    
    if (result != 0)
        sub_6491b0(result, *(arg1 + 4), &result_1, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x10), 
            0xffffffff)
        int32_t* ecx_2 = *(arg1 + 0x18)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0 && sub_6487a0(arg1, arg5).b != 0)
            int32_t* var_10_3
            
            if (*(arg1 + 0x44) == 0)
                if (sub_647550(arg1, arg2, arg4) != 0)
                    var_10_3 = arg3
                label_648aa2:
                    
                    if (sub_648ac0(arg1, arg2, var_10_3) != 0)
                        return 1
            else if (sub_647550(arg1, arg2, arg3) != 0)
                var_10_3 = arg4
                goto label_648aa2
            return 0

result.b = 0
return result
