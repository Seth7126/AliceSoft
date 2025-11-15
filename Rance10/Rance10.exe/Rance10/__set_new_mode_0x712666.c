// 函数: __set_new_mode
// 地址: 0x712666
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && arg1 != 1)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

int32_t result = data_7fc708
data_7fc708 = arg1
return result
