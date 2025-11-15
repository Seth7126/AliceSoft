// 函数: sub_430d00
// 地址: 0x430d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a3a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2[4]
int32_t var_1c = 0
char* var_28
int32_t* eax_4
void* ecx_1
eax_4, ecx_1 = sub_431b80(&var_28, esi + 1)
int32_t edx = 0
int32_t var_8_1 = 0
char* esi_1 = var_28

if (esi != 0)
    do
        int32_t ebx_1 = arg2[5]
        char* eax_5
        
        if (ebx_1 u< 0x10)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        ecx_1.b = eax_5[edx]
        
        if ((ecx_1 - 0x20).b u<= 0x20)
            eax_4.b = 0x60
            eax_4.b = 0x60 - ecx_1.b
        else if ((ecx_1 - 0x41).b u<= 0x19)
            eax_4.b = 0x9b
            eax_4.b = 0x9b - ecx_1.b
        else if ((ecx_1 - 0x5b).b u<= 5)
            eax_4.b = 0xbb
            eax_4.b = 0xbb - ecx_1.b
        else if ((ecx_1 - 0x61).b u<= 0x19)
            eax_4.b = 0xdb
            eax_4.b = 0xdb - ecx_1.b
        else if ((ecx_1 - 0x7b).b u<= 3)
            eax_4.b = 0xf9
            eax_4.b = 0xf9 - ecx_1.b
        else if ((ecx_1 + 0x7f).b u<= 0x1e)
            eax_4.b = 0x20
            eax_4.b = 0x20 - ecx_1.b
        else if ((ecx_1 + 0x20).b u> 0x1c)
            if (ebx_1 u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            eax_4.b = *(eax_4 + edx)
        else
            eax_4.b = 0xdc
            eax_4.b = 0xdc - ecx_1.b
        
        esi_1[edx] = eax_4.b
        edx += 1
    while (edx u< esi)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_2

if (*esi_1 != 0)
    char* ecx_3 = esi_1
    
    do
        eax_4.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_4.b != 0)
    
    ecx_2 = ecx_3 - &ecx_3[1]
else
    ecx_2 = nullptr

sub_403490(arg1, esi_1, ecx_2)
int32_t var_20
sub_403160(esi_1, var_20 - esi_1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
