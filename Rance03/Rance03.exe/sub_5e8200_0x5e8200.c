// 函数: sub_5e8200
// 地址: 0x5e8200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10
int32_t var_c

if ((**(arg1 + 0x34))().b != 0 && sub_5ea350(arg1 + 0x9c, arg2, arg3, &var_10, &var_c).b != 0)
    POINT point
    point.x = var_10
    point.y = var_c
    
    if (ClientToScreen(**(arg1 + 0xc), &point) != 0)
        return sub_5e8280(arg1, point.x, point.y) != 0

int32_t result
result.b = 0
return result
