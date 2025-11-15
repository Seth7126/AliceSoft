// 函数: sub_4127b0
// 地址: 0x4127b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_104 = 0xffffffff
int32_t (* var_108)(void* arg1) = sub_727e32
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_110 = arg1
void var_100
int32_t eax_2 = __security_cookie ^ &var_100
int32_t var_11c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_110_1 = 0
int32_t eax_3 = *(arg1 + 4)
void var_84
int32_t* eax_4
int32_t ebx

if (eax_3 == 0xb || eax_3 == 3 || eax_3 == 0x13)
    char* eax_5
    float xmm0_1
    eax_5, xmm0_1 = sub_41a970(arg1)
    xmm0_1 - 0f
    eax_5:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    char ecx = 0
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        ecx = 1
    
    sub_414470(&var_84, ecx)
    eax_4 = &var_84
    int32_t var_104_2 = 0
    ebx = 1
else
    eax_4 = sub_413a90(arg1, &var_100)
    int32_t var_104_1 = 1
    ebx = 2

int32_t var_110_2 = ebx
sub_414740(arg2, eax_4)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    sub_40ad50(&var_100)

if ((ebx_1.b & 1) != 0)
    sub_40ad50(&var_84)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_100)
return arg2
