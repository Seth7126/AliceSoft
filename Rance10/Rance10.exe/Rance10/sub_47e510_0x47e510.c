// 函数: sub_47e510
// 地址: 0x47e510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
RECT var_14

if (GetClientRect(arg3, &var_14) != 0)
    POINT point
    point.y = arg4
    point.x = arg2
    
    if (ScreenToClient(arg3, &point) != 0)
        int32_t y = point.y
        int32_t eax_4 = PtInRect(&var_14, point.x) - 1
        int32_t eax_5 = neg.d(eax_4)
        @__security_check_cookie@4(eax_1 ^ &var_20)
        return sbb.d(eax_5, eax_5, eax_4 != 0) + 1

BOOL result
result.b = 0
@__security_check_cookie@4(eax_1 ^ &var_20)
return result
