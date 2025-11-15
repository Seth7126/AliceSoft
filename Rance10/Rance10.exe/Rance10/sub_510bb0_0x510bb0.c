// 函数: sub_510bb0
// 地址: 0x510bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg2
void** result = sub_432330(arg1, ebp)
void** result_2 = *arg1
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(ebp, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 != result_2)
    int32_t ecx_1 = sub_4575f0(arg1, &arg2, result_1)
    int32_t* var_1c_3 = arg2
    int32_t* var_20_3 = ebp
    void* var_8
    sub_44e4f0(&arg1[6], &var_8, ecx_1)

result.b = 1
return result
