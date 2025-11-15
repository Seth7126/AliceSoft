// 函数: ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AAVios_base@2@G_K@Z
// 地址: 0x6d3f0c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_60 = arg8
int32_t var_64 = arg7
int32_t var_68 = *(arg5 + 0x14)
char var_50[0x40]
void var_10
std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Iput(
    arg1, arg2, arg3, arg4, arg5, arg6, &var_50, 
    sub_406aa0(&var_50, 0x40, 
        std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Ifmt(
            arg1, &var_10, 0x74eddc)))
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return arg2
