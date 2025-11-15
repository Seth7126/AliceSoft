// 函数: ?_StaticAlloc@@YAPAXI@Z
// 地址: 0x6d5474
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
var_8 = 0x7fbb74 - data_7e1004
int32_t result = std::align(8, arg4, &var_8, &data_7e1004)

if (result == 0)
    _terminate()
    noreturn

data_7e1004 -= arg4
return result
