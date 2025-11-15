// 函数: sub_68cdf0
// 地址: 0x68cdf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_50
int32_t var_c = __security_cookie ^ &var_50

if (arg2 == 0)
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_c ^ &var_50)
    return eax_1

void var_4c
void* ecx_2 = &var_4c
void* edx_1 = arg2 + 0x20
int32_t i_1 = 4
int32_t i

do
    int32_t eax_2 = *(edx_1 - 0x20)
    edx_1 += 4
    *(ecx_2 - 4) = eax_2
    ecx_2 += 0x10
    *(ecx_2 - 0x10) = *(edx_1 - 0x14)
    *(ecx_2 - 0xc) = *(edx_1 - 4)
    *(ecx_2 - 8) = *(edx_1 + 0xc)
    i = i_1
    i_1 -= 1
while (i != 1)
bool cond:0 = sub_684cb0(arg1 + 0xfc, &var_50, *(*(arg1 + 4) + 0x38)) != 0
@__security_check_cookie@4(var_c ^ &var_50)
return cond:0
