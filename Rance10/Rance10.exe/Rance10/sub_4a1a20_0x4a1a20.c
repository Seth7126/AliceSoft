// 函数: sub_4a1a20
// 地址: 0x4a1a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
HWND* eax_2 = *(arg1 + 0xc)
__builtin_memset(&rect, 0, 0x10)
BOOL eax_3 = GetWindowRect(*eax_2, &rect)
int32_t eax_4 = neg.d(eax_3)
int32_t result = sbb.d(eax_4, eax_4, eax_3 != 0) & rect.top
@__security_check_cookie@4(eax_1 ^ &rect)
return result
