// 函数: sub_4197e0
// 地址: 0x4197e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728587
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t* ebx = arg2
int32_t __saved_ebp
*arg1 = (**ebx)(__security_cookie ^ &__saved_ebp)
char* eax_6 = (*(*ebx + 4))()
arg1[6] = 0xf
arg1[5] = 0
char* ecx_2

if (arg1[6] u< 0x10)
    ecx_2 = &arg1[1]
else
    ecx_2 = arg1[1]

*ecx_2 = 0
void* ecx_3

if (*eax_6 != 0)
    char* ecx_4 = eax_6
    void* eax_7
    
    do
        eax_7.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_7.b != 0)
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_403490(&arg1[1], eax_6, ecx_3)
int32_t var_8_1 = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
var_8_1.b = 1
int32_t eax_8 = *arg1

if (eax_8 == 0x4f || eax_8 == 0x50 || eax_8 == 0x52)
    int32_t eax_10 = (*(*ebx + 0xc))(0)
    int32_t ecx_7 = arg1[8]
    
    if (ecx_7 == arg1[9])
        int32_t var_2c_1 = ecx_7
        sub_41a390(&arg1[7])
    
    void* ecx_9 = arg1[8]
    arg2 = ecx_9
    void* var_18_1 = ecx_9
    var_8_1.b = 2
    
    if (ecx_9 != 0)
        sub_4197e0(eax_10)
    
    arg1[8] += 0x28

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
