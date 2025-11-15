// 函数: __set_errno_from_matherr
// 地址: 0x718a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1

if (arg1 == 1)
    eax_1 = __errno()
    *eax_1 = 0x21
else
    eax_1 = arg1 - 2
    
    if (eax_1 u<= 1)
        int32_t* eax_2 = __errno()
        *eax_2 = 0x22
        return eax_2

return eax_1
