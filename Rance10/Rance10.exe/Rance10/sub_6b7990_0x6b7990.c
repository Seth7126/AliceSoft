// 函数: sub_6b7990
// 地址: 0x6b7990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0)
    _memset(arg1, 0, 0x168)
    int32_t var_18_1 = 0x4000
    arg1[1] = 0x4000
    arg1[6] = 0x400
    *arg1 = sub_705e22()
    int32_t var_1c_1 = arg1[6] << 2
    arg1[4] = sub_705e22()
    int32_t var_20_1 = arg1[6] << 3
    int32_t eax_7 = sub_705e22()
    arg1[5] = eax_7
    
    if (*arg1 != 0 && arg1[4] != 0 && eax_7 != 0)
        arg1[0x54] = arg2
        return 0
    
    sub_6b7a10(arg1)

return 0xffffffff
