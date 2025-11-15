// 函数: __onexit
// 地址: 0x6e838d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t __security_cookie_1 = __security_cookie
void* ecx_1 = __security_cookie_1 & 0x1f
int32_t eax_2

if (ror.d(__security_cookie_1 ^ data_7fbef8, ecx_1.b) != 0xffffffff)
    eax_2 = __register_onexit_function(ecx_1)
else
    eax_2 = __crt_atexit(arg1)

int32_t eax_3 = neg.d(eax_2)
return not.d(sbb.d(eax_3, eax_3, eax_2 != 0)) & arg1
