// 函数: sub_4f03f0
// 地址: 0x4f03f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_528110(*(arg1 + 0x258))
int32_t* ecx_2 = *(arg1 + 0x70) + 0xc0
int32_t* var_18 = ecx_2
int32_t var_1c = *(arg1 + 0x6c)
int32_t i_1 = 0
int32_t ebx_2 = (ecx_2[1] - *ecx_2) s>> 2
int32_t var_14 = ebx_2
void* var_c = nullptr
int32_t result = sub_4a9fd0(&var_1c)

for (int32_t i = i_1; i != ebx_2; i += 1)
    sub_428f00(arg2, var_c + 0x258)
    sub_4f03f0(arg2)
    result = sub_4a9fd0(&var_1c)

return result
