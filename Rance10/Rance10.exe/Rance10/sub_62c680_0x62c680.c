// 函数: sub_62c680
// 地址: 0x62c680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = arg2
*arg1 = &std::codecvt<wchar_t, char, struct _Mbstatet>::`vftable'{for `std::codecvt_base'}
void var_2c
int32_t* eax = __Getcvt(&var_2c)
*(arg1 + 8) = *eax
*(arg1 + 0x18) = *(eax + 0x10)
*(arg1 + 0x28) = *(eax + 0x20)
arg1[0xc] = eax[0xa]
return arg1
