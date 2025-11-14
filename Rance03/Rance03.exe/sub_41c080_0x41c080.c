// 函数: sub_41c080
// 地址: 0x41c080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

LRESULT lParam_3
int32_t eax_1 = __security_cookie ^ &lParam_3
LRESULT lParam_2 = SendMessageA(arg1, 0x110a, 9, 0)
lParam_3 = SendMessageA(arg1, 0x110a, 3, lParam_2)
LRESULT lParam = lParam_2
LRESULT result

if (SendMessageA(arg1, 0x1104, 1, &lParam) != 0)
    int32_t ebp_1 = sx.d(arg2.w)
    int32_t esi_1 = sx.d((arg2 u>> 0x10).w)
    LRESULT lParam_1 = lParam_3
    SendMessageA(arg1, 0x1104, 1, &lParam_1)
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    
    if (ebp_1 s< lParam_1 || ebp_1 s>= var_1c || esi_1 s< var_20 || esi_1 s>= var_18)
        result.b = 0
        sub_69a5bc(eax_1 ^ &lParam_3)
        return result

result.b = 1
sub_69a5bc(eax_1 ^ &lParam_3)
return result
