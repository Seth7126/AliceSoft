// 函数: sub_417c30
// 地址: 0x417c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = __alloca_probe(0x3038)
void var_40
int32_t eax_1 = __security_cookie ^ &var_40
int32_t var_50 = 0
int32_t var_14 = 0
char var_10
_memset(&var_10, 0, 0x3000)
void** ecx_1 = arg2

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

var_50.q = _mm_cvtps_pd(**ecx)
sub_406aa0(&var_10, 0x3000, ecx_1)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_2

if (var_10 != 0)
    char* ecx_3 = &var_10
    char i
    
    do
        i = *ecx_3
        ecx_3 = &ecx_3[1]
    while (i != 0)
    void var_f
    ecx_2 = ecx_3 - &var_f
else
    ecx_2 = nullptr

sub_403490(arg1, &var_10, ecx_2)
@__security_check_cookie@4(eax_1 ^ &var_40)
return arg1
