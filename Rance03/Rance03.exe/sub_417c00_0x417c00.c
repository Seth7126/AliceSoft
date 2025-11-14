// 函数: sub_417c00
// 地址: 0x417c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
GetClientRect(*(arg1 + 0xc), &rect)
LRESULT result = SendMessageA(*(arg1 + 0xc), 5, 0, 
    zx.d((rect.bottom).w - (rect.top).w) << 0x10 | zx.d((rect.right).w - (rect.left).w))
sub_69a5bc(eax_1 ^ &rect)
return result
