// 函数: _iswctype
// 地址: 0x7177f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t charType = arg3
int32_t srcStr = arg3

if (arg4 != 0xffff)
    if (arg4 u< 0x100)
        return zx.d((*data_7e1554)[zx.d(arg4)]) & zx.d(arg5)
    
    srcStr.w = arg4
    charType.w = 0
    
    if (GetStringTypeW(1, &srcStr, 1, &charType) != 0)
        return zx.d(charType.w) & zx.d(arg5)

return 0
