// 函数: sub_4ed930
// 地址: 0x4ed930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = sub_4ed8c0(arg1)
int32_t* ecx_1 = *(arg1 + 0x70) + 0xc0
int32_t* var_18 = ecx_1
int32_t var_1c = *(arg1 + 0x6c)
int32_t i_1 = 0
int32_t ebx_2 = (ecx_1[1] - *ecx_1) s>> 2
int32_t var_14 = ebx_2
int32_t var_c = 0
sub_4a9fd0(&var_1c)

for (int32_t i = i_1; i != ebx_2; i += 1)
    int32_t result_1 = sub_4ed930()
    
    if (result s< result_1)
        result = result_1
    
    sub_4a9fd0(&var_1c)

return result
