// 函数: sub_697450
// 地址: 0x697450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = nullptr
int32_t* result = *arg1

if (result == 0)
    return result

while (*result != arg2)
    result_1 = result
    result = result[1]
    
    if (result == 0)
        return result

int32_t ecx = result[1]

if (result_1 != 0)
    result_1[1] = ecx
else
    *arg1 = ecx

if (result[1] == 0)
    arg1[1] = result_1

int32_t var_c_1 = 8
return operator new(result)
