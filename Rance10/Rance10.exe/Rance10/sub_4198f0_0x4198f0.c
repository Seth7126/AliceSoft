// 函数: sub_4198f0
// 地址: 0x4198f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7285c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
*arg1 = (**arg2)(__security_cookie ^ &__saved_ebp)
char* edx = (*(*arg2 + 4))()
void* ecx_2

if (*edx != 0)
    char* ecx_3 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_6.b != 0)
    ecx_2 = ecx_3 - &ecx_3[1]
else
    ecx_2 = nullptr

sub_403490(&arg1[1], edx, ecx_2)
void* i = arg1[7]

for (int32_t ebx_1 = arg1[8]; i != ebx_1; i += 0x28)
    sub_40ae10(i)

arg1[8] = arg1[7]
int32_t eax_8 = *arg1

if (eax_8 == 0x4f || eax_8 == 0x50 || eax_8 == 0x52)
    void* eax_10 = (*(*arg2 + 0xc))(0)
    int32_t ecx_7 = arg1[8]
    
    if (ecx_7 == arg1[9])
        int32_t var_28_1 = ecx_7
        sub_41a390(&arg1[7])
    
    int32_t* ecx_9 = arg1[8]
    arg2 = ecx_9
    int32_t* var_14_2 = ecx_9
    int32_t var_8_1 = 0
    
    if (ecx_9 != 0)
        sub_4197e0(ecx_9, eax_10)
    
    arg1[8] += 0x28

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
