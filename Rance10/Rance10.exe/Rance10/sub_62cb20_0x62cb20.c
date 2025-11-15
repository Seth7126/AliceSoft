// 函数: sub_62cb20
// 地址: 0x62cb20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = arg2
*arg1 = &std::ctype<wchar_t>::`vftable'{for `std::ctype_base'}
void var_3c
*(arg1 + 8) = *__Getctype(&var_3c)
void var_2c
int32_t* eax_1 = __Getcvt(&var_2c)
*(arg1 + 0x18) = *eax_1
*(arg1 + 0x28) = *(eax_1 + 0x10)
*(arg1 + 0x38) = *(eax_1 + 0x20)
arg1[0x10] = eax_1[0xa]
return arg1
