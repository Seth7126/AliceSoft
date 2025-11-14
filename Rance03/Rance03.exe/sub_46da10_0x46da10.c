// 函数: sub_46da10
// 地址: 0x46da10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
int32_t eax_1 = __security_cookie ^ &point
RECT var_14

if (GetClientRect(arg1, &var_14) != 0)
    point.x = arg2
    point.y = arg3
    
    if (ScreenToClient(arg1, &point) != 0)
        int32_t y = point.y
        int32_t eax_5 = PtInRect(&var_14, point.x) - 1
        int32_t eax_6 = neg.d(eax_5)
        sub_69a5bc(eax_1 ^ &point)
        return sbb.d(eax_6, eax_6, eax_5 != 0) + 1

BOOL result
result.b = 0
sub_69a5bc(eax_1 ^ &point)
return result
