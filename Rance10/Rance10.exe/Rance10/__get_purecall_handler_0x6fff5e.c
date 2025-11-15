// 函数: __get_purecall_handler
// 地址: 0x6fff5e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = 0

if (0 == data_7fc408)
    data_7fc408 = 0
else
    eax = data_7fc408

return ror.d(eax ^ __security_cookie, (__security_cookie).b & 0x1f)
