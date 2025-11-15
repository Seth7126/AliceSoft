// 函数: sub_69c760
// 地址: 0x69c760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7489b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_8_1 = 0
int32_t* arg_8
int32_t* edi = arg_8
int32_t* var_58
sub_6980b0(edi, &var_58)
var_8_1.b = 1
void* eax_4 = *sub_698090(edi, &arg_8)

if (eax_4 == 0)
    eax_4 = 2

int32_t var_54
sub_69a2e0(arg1, eax_4, var_58, var_54)
var_8_1.b = 2
int32_t* ecx_3 = arg_8

if (ecx_3 != 0)
    int32_t eax_5 = ecx_3[1]
    ecx_3[1] -= 1
    
    if (eax_5 == 1)
        (*(*ecx_3 + 4))(eax_2)

var_8_1.b = 0
int32_t* var_34
int32_t* edx
int32_t ebx

if (edi[6].b == 0)
    void var_28
    edx = sub_697c40(&var_28, __return_addr)
    int32_t var_8_2 = 4
    ebx = 2
else
    int32_t var_38 = edi[7]
    sub_4275f0(&var_34, &edi[8])
    edx = &var_38
    var_8_1.b = 3
    ebx = 1

void* ecx_6 = *arg1
int32_t var_14_1 = ebx
*(ecx_6 + 0xb8) = *edx
sub_4274a0(ecx_6 + 0xbc, &edx[1])

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t* var_24
    
    if (var_24 != 0)
        int32_t var_50_3 = 4
        var_58 = var_24
        int32_t var_1c
        sub_403160(var_58, (var_1c - var_24) s>> 2, var_50_3)
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0

int32_t var_8_3 = 0

if ((ebx.b & 1) != 0)
    int32_t* ecx_9 = var_34
    
    if (ecx_9 != 0)
        int32_t var_50_4 = 4
        var_58 = ecx_9
        int32_t var_2c
        sub_403160(var_58, (var_2c - ecx_9) s>> 2, var_50_4)

void arg_4
sub_69c960(arg1, &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
