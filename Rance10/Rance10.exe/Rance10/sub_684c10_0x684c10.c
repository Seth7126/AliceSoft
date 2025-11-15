// 函数: sub_684c10
// 地址: 0x684c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
void* result = *(arg1 + 4)

if (result == 0)
    result.b = 0
    return result

result_1 = result

if (arg2 u<= 3 && *(arg3 + (arg2 << 2) + 0x164) != result)
    int32_t* eax = *(arg3 + 0x38)
    (*(*eax + 0x1c))(eax, arg2, 1, &result_1)
    *(arg3 + (arg2 << 2) + 0x164) = result_1

result.b = 1
return result
