// 函数: sub_6cf7a0
// 地址: 0x6cf7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_749040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t var_8_1 = 0
int32_t* ecx
ecx.b = 1
int32_t* ebx = data_7fd4c4
void** edi = ebx
char var_1c = 1
void** eax_3 = ebx[1]
int32_t* arg_c

while (*(eax_3 + 0xd) == 0)
    edi = eax_3
    ecx.b = *arg_c u< eax_3[4]
    var_1c = ecx.b
    
    if (ecx.b == 0)
        eax_3 = eax_3[2]
    else
        eax_3 = *eax_3

void** esi = edi
void** var_18 = esi

if (ecx.b != 0)
    if (edi == *ebx)
        void* var_30 = arg2
        *arg1 = *sub_6cf660(&arg_c, 1, edi, ecx)
        arg1[1].b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    sub_429da0(&var_18)
    esi = var_18

int32_t* ecx_5 = arg_c

if (esi[4] u< *ecx_5)
    void* var_30_1 = arg2
    *arg1 = *sub_6cf660(&arg_c, var_1c, edi, ecx_5)
    arg1[1].b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

sub_403160(arg2, 1, 0x18)
void*** eax_9 = arg1
*eax_9 = esi
eax_9[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
