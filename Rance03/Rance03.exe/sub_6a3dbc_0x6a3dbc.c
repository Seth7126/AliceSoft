// 函数: sub_6a3dbc
// 地址: 0x6a3dbc
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_75de9c)
        int32_t* eax_5 = (&data_75ca40)[arg1 s>> 5]
        
        if ((eax_5[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0)
            return eax_5[(arg1 & 0x1f) * 0x10]
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
