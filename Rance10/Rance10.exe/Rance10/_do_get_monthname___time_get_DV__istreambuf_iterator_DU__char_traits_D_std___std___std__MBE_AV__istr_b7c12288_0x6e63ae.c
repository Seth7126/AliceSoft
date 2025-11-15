// 函数: ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@@Z
// 地址: 0x6e63ae
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t arg_8
int32_t arg_10
int32_t eax =
    std::_Getloctxt<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >(
    &arg_8, &arg_10, nullptr, *(arg1 + 0xc))

if (eax s>= 0)
    *(arg5 + 0x10) = eax s>> 1
else
    *arg4 |= 2

*arg2 = arg_8
arg2[1] = arg3
return arg2
