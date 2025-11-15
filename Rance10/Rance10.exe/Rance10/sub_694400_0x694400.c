// 函数: sub_694400
// 地址: 0x694400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
(*(*arg1 + 0x10))()
int32_t eax_3 = sub_694930(arg3, arg4)
char* var_28 = arg5
int32_t ebx_2 = eax_3 * arg2
void* eax_4 = arg1[2]
int128_t var_1c = zx.o(0)
var_1c:4.d = 1
int64_t var_c = 0
var_1c.d = ebx_2
var_1c:8.d = 1
var_1c:0xc.d = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t* ecx_1 = *(eax_4 + 0x34)

if ((*(*ecx_1 + 0xc))(ecx_1, &var_1c, &var_28, &arg1[3]) s< 0)
    int32_t eax_6
    eax_6.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_30)
    return eax_6

sub_405950(&arg1[7], ebx_2)
sub_700660(arg1[7], arg5, arg1[8] - arg1[7])
sub_42c9c0(&arg1[4], arg4)
sub_700660(arg1[4], arg3, arg4 << 2)
arg1[0xa] = ebx_2
arg1[0xb] = arg2
int32_t eax_10
eax_10.b = 1
arg1[0xc].w = 0x100
@__security_check_cookie@4(eax_1 ^ &var_30)
return eax_10
