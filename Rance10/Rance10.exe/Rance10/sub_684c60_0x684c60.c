// 函数: sub_684c60
// 地址: 0x684c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
void* result = *(arg1 + 4)

if (result == 0)
    result.b = 0
    return result

result_1 = result

if (*(arg2 + 0x154) != result)
    int32_t* eax = *(arg2 + 0x38)
    (*(*eax + 0x40))(eax, 0, 1, &result_1)
    *(arg2 + 0x154) = result_1

result.b = 1
return result
