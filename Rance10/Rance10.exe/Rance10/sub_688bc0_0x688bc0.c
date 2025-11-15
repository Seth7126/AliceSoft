// 函数: sub_688bc0
// 地址: 0x688bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_28
int32_t eax_1 = __security_cookie ^ &var_28
(*(*arg1 + 0x10))()
void* eax_3 = arg1[2]
int128_t var_1c = zx.o(0)
int32_t ebx
ebx.b = arg3 != 0
var_1c:4.d = 1
int64_t var_c = 0
var_1c:8.d = 2
var_1c:0xc.d = 0
var_28 = arg4
int32_t ebx_2 = ((ebx << 1) + 2) * arg2
int32_t var_24 = 0
int32_t var_20 = 0
var_1c.d = ebx_2
int32_t* ecx = *(eax_3 + 0x34)

if ((*(*ecx + 0xc))(ecx, &var_1c, &var_28, &arg1[3]) s< 0)
    int32_t eax_5
    eax_5.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return eax_5

sub_405950(&arg1[4], ebx_2)
sub_700660(arg1[4], arg4, arg1[5] - arg1[4])
arg1[7] = arg2
int32_t eax_8
eax_8.b = arg3
arg1[8].b = eax_8.b
eax_8.b = 1
*(arg1 + 0x21) = 1
@__security_check_cookie@4(eax_1 ^ &var_28)
return eax_8
