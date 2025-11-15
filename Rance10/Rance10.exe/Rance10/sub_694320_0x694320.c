// 函数: sub_694320
// 地址: 0x694320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_20
int32_t eax_1 = __security_cookie ^ &var_20
var_20 = arg3
(*(*arg1 + 0x10))()
int32_t ebp_2 = sub_694930(arg3, arg4) * arg2
void* eax_4 = arg1[2]
int128_t var_1c = zx.o(0)
var_1c:4.d = 2
int64_t var_c = 0
var_1c.d = ebp_2
var_1c:8.d = 1
var_1c:0xc.d = 0x10000
int32_t* ecx_1 = *(eax_4 + 0x34)

if ((*(*ecx_1 + 0xc))(ecx_1, &var_1c, 0, &arg1[3]) s< 0)
    int32_t eax_6
    eax_6.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_20)
    return eax_6

sub_42c9c0(&arg1[4], arg4)
sub_700660(arg1[4], var_20, arg4 << 2)
arg1[0xb] = arg2
int32_t eax_8
eax_8.b = arg5
arg1[0xa] = ebp_2
arg1[0xc].b = eax_8.b
eax_8.b = 1
@__security_check_cookie@4(eax_1 ^ &var_20)
return eax_8
