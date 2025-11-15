// 函数: sub_6495d0
// 地址: 0x6495d0
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
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0 && sub_6493d0(arg1, arg5).b != 0
                && sub_647550(arg1, arg2, arg3).b != 0)
            return sub_649660(arg1, arg2, arg4) != 0

result.b = 0
return result
