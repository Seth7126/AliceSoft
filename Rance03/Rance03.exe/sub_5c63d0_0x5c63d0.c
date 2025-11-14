// 函数: sub_5c63d0
// 地址: 0x5c63d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9c1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_23c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
float result_2[0x2] = **(arg1 + 0x234)
result_1 = result_2
void* const var_248

if (ecx != 0xffffffff)
    int32_t var_240_1 = ecx
    char const* const var_244_1 = "%%.%df"
    void var_110
    __swprintf_c(&var_110, 0x100, "%%.%df")
    var_244_1.q = _mm_cvtps_pd(result_1)
    var_248 = &var_110
else
    int32_t var_244
    var_244.q = _mm_cvtps_pd(result_2)
    var_248 = &data_6e70d0

char var_210
__swprintf_c(&var_210, 0x100, var_248)
int32_t var_214 = 0xf
bool cond:0 = var_210 != 0
int32_t var_218 = 0
char var_228 = 0
void* ecx_1

if (cond:0)
    char* ecx_2 = &var_210
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    void var_20f
    ecx_1 = ecx_2 - &var_20f
else
    ecx_1 = nullptr

sub_402110(&var_228, &var_210, ecx_1)
int32_t var_4 = 0
int32_t* eax_7
int32_t ecx_5
int32_t edx
eax_7, ecx_5, edx = sub_5d62c0(arg1 + 0x16c, &var_228, &result_1)
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = eax_7.b == 0

if (var_214 u>= 0x10)
    eax_7, ecx_5, edx = j__free(var_228.d)

int32_t var_214_1 = 0xf
int32_t var_218_1 = 0
var_228 = 0
int32_t result

if (ebx.b == 0)
    int32_t ecx_6 = *(arg1 + 0x22c)
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx_6)
        sub_64ad90(arg1 + 0x224, ecx_6 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    result = result_1
    **(arg1 + 0x234) = result
    *(arg1 + 0x234) += 4
else
    int32_t var_240_5 = 0x6e70dc
    result = sub_5c2400(eax_7, edx, ecx_5, arg1, "FTOS")

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
