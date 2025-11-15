// 函数: sub_42b840
// 地址: 0x42b840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729d56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &advengine::CTokenAnalyser::`vftable'
arg1[1] = arg2
arg1[2] = arg2
arg1[3] = arg2
arg1[4] = arg3
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
int32_t var_8_1 = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
var_8_1.b = 1
int32_t eax_4 = arg3 - arg2
sub_42c9c0(&arg1[9], eax_4)
char* eax_5 = nullptr
int32_t edi = 1
int32_t esi_1 = eax_4

if (arg2 u> arg3)
    esi_1 = 0

if (esi_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

do
    int32_t edx_1 = edi + 1
    arg1[9][eax_5].vFunc_0 = edi
    int32_t ecx_3
    ecx_3.b = eax_5[arg2]
    eax_5 = &eax_5[1]
    
    if (ecx_3.b != 0xa)
        edx_1 = edi
    
    edi = edx_1
while (eax_5 != esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
