// 函数: ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IAEX_WABV_Locinfo@1@@Z
// 地址: 0x6d6798
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_30
__builtin_memcpy(arg1 + 0x18, __Getcvt(&var_30), 0x2c)
*(arg1 + 8) = std::_Maklocwcs(std::_Locinfo::_W_Getdays(arg2))
*(arg1 + 0xc) = std::_Maklocwcs(std::_Locinfo::_W_Getmonths(arg2))
char* result = std::_Maklocwcs(u":AM:am:PM:pm")
*(arg1 + 0x10) = result
return result
