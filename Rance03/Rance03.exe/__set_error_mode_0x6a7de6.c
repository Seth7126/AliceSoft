// 函数: __set_error_mode
// 地址: 0x6a7de6
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    if (arg1 s<= 2)
        int32_t result = data_75d418
        data_75d418 = arg1
        return result
    
    if (arg1 == 3)
        return data_75d418

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
