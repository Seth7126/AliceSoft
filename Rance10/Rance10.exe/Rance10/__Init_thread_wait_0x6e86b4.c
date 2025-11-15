// 函数: __Init_thread_wait
// 地址: 0x6e86b4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fbf30 != 0)
    __Init_thread_unlock()
    enum WAIT_EVENT eax_3 = WaitForSingleObjectEx(data_7fbf30, arg1, 0)
    __Init_thread_lock()
    int32_t result
    result.b = eax_3 == WAIT_OBJECT_0
    return result

uint32_t __security_cookie_1 = __security_cookie
int32_t esi_1 = ror.d(__security_cookie_1 ^ data_7fbf34, __security_cookie_1.b & 0x1f)
j_sub_4033e0()
int32_t eax = esi_1(0x7fbf2c, &data_7fbf14, arg1)
int32_t eax_1 = neg.d(eax)
return neg.d(sbb.d(eax_1, eax_1, eax != 0))
