// 函数: sub_60a7a0
// 地址: 0x60a7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result_1 = arg1
void* result = *(arg1 + 4)

if (result == 0)
    result.b = 0
    return result

result_1 = result

if (*(arg2 + 0x144) != result)
    int32_t* eax = *(arg2 + 0x38)
    (*(*eax + 0x1c))(eax, 0, 1, &result_1)
    *(arg2 + 0x144) = result_1

result.b = 1
return result
