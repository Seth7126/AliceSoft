// 函数: ___scrt_initialize_crt
// 地址: 0x6e81ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    data_7fbf10 = 1

int64_t xcr0
sub_6e8f75(xcr0)

if (___vcrt_initialize() != 0)
    if (___acrt_initialize() != 0)
        return 1
    
    ___vcrt_uninitialize(0)

return 0
