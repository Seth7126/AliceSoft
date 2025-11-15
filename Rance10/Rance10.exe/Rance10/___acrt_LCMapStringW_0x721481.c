// 函数: ___acrt_LCMapStringW
// 地址: 0x721481
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg4

if (esi s> 0)
    void invalid
    int32_t eax_1 = _wcsnlen(invalid, arg3, esi)
    bool cond:0_1 = eax_1 s< esi
    esi = eax_1 + 1
    
    if (not(cond:0_1))
        esi = eax_1

return ___acrt_LCMapStringEx@36(arg1, arg2, arg3, esi, arg5, arg6, 0, 0, 0)
