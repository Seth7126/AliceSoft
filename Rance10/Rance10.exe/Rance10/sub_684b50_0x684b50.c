// 函数: sub_684b50
// 地址: 0x684b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t* edx = *(arg1 + 4)

if (edx != 0)
    (*(*edx + 8))(edx)
    *(arg1 + 4) = 0

*(arg1 + 0xc) = *(arg1 + 8)
int32_t eax_4 = *arg3
int128_t var_20 = zx.o(0)
int64_t var_10 = 0
var_20:4.d = 0
var_20.d = arg2
var_20:8.d = 4
var_20:0xc.d = 0

if ((*(eax_4 + 0xc))(arg3, &var_20, 0, arg1 + 4) s< 0)
    int32_t eax_5
    eax_5.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_24)
    return eax_5

char var_21 = 0
sub_4a88f0(arg1 + 8, arg2, &var_21)
int32_t eax_6
eax_6.b = 1
@__security_check_cookie@4(eax_1 ^ &var_24)
return eax_6
