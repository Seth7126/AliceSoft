// 函数: sub_624810
// 地址: 0x624810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
var_c = arg1

if (sub_6249e0(arg1, arg2) == 0)
    return sub_563cf0(arg2)

void** result = sub_432330(arg1 + 0x1c, arg2)
void** result_2 = *(arg1 + 0x1c)
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(arg2, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 != *(var_c + 0x1c))
    sub_624a80(var_c + 0x1c, &var_c, result_1)

result.b = 1
return result
