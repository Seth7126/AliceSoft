// 函数: sub_48bf20
// 地址: 0x48bf20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t* ecx = __alloca_probe(0x3038)
void var_40
int32_t eax_1 = __security_cookie ^ &var_40
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_4c = 0x3000
int32_t var_50 = 0
char var_10
char* var_54 = &var_10
int32_t var_14 = 0
_memset()
void** ecx_1 = arg2

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int64_t* eax_3 = *ecx
var_50.q = _mm_cvtps_pd(*ecx[1])
int64_t var_58_1 = _mm_cvtps_pd(*eax_3)
int32_t var_60 = 0x3000
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
