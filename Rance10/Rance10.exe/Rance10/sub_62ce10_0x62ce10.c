// 函数: sub_62ce10
// 地址: 0x62ce10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg2 = arg2
int64_t var_8 = 0
int16_t var_c
int32_t result = __Mbrtowc(&var_c, &arg2, 1, &var_8, arg1 + 0x18)
int16_t ecx = var_c

if (result s< 0)
    ecx = -1

result.w = ecx
return result
