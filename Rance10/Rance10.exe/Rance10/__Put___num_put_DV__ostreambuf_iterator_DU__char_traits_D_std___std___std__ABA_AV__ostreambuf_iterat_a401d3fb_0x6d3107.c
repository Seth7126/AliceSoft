// 函数: ?_Put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@PBDI@Z
// 地址: 0x6d3107
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg4
int32_t arg_c

if (i_1 != 0)
    char* edi_1 = arg3
    int32_t i
    
    do
        std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(&arg_c, *edi_1)
        edi_1 = &edi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg1 = arg_c
arg1[1] = arg2
return arg1
