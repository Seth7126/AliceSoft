// 函数: __Init_thread_notify
// 地址: 0x6e8667
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hEvent = data_7fbf30

if (hEvent != 0)
    SetEvent(hEvent)
    return ResetEvent(data_7fbf30)

uint32_t __security_cookie_1 = __security_cookie
int32_t esi_1 = ror.d(__security_cookie_1 ^ data_7fbf38, __security_cookie_1.b & 0x1f)
j_sub_4033e0()
return esi_1(0x7fbf2c)
