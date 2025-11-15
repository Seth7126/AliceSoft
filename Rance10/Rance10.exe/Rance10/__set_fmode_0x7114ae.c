// 函数: __set_fmode
// 地址: 0x7114ae
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0x4000 || arg1 == 0x8000 || arg1 == 0x10000)
    data_7fcb24 = arg1
    return 0

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
