// 函数: ___scrt_unhandled_exception_filter@4
// 地址: 0x6e9275
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = *arg1

if (*eax_1 == 0xe06d7363 && eax_1[4] == 3)
    int32_t eax_2 = eax_1[5]
    
    if (eax_2 == 0x19930520 || eax_2 == 0x19930521 || eax_2 == 0x19930522 || eax_2 == 0x1994000)
        _terminate()
        noreturn

return 0
