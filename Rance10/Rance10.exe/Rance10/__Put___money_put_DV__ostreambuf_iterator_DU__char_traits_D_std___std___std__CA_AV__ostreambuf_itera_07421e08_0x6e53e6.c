// 函数: ?_Put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@2@I@Z
// 地址: 0x6e53e6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg4
int32_t arg_8

if (i_1 != 0)
    char* eax_1 = arg3
    int32_t i
    
    do
        std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(&arg_8, *eax_1)
        eax_1 = &arg3[1]
        arg3 = eax_1
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg1 = arg_8
arg1[1] = arg2
return arg1
