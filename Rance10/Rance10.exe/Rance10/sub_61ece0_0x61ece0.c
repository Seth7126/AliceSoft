// 函数: sub_61ece0
// 地址: 0x61ece0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
char* ecx = *(arg1 + 4)

if (ecx + arg3 u> *(arg1 + 8))
    void* eax_2
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_1c)
    return eax_2

int32_t var_8 = 0xf
int32_t var_c = 0
var_1c = 0
sub_403490(&var_1c, ecx, arg3)
sub_409670(arg2, &var_1c)

if (var_8 u>= 0x10)
    sub_403160(var_1c.d, var_8 + 1, 1)

*(arg1 + 4) += arg3
int32_t eax_3
eax_3.b = 1
@__security_check_cookie@4(eax_1 ^ &var_1c)
return eax_3
