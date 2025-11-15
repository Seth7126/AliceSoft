// 函数: sub_5c47f0
// 地址: 0x5c47f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ffea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
void* arg_c
void* ebx = arg_c
sub_5c5c90(arg1, ebx, arg3)
int32_t var_8_1 = 0
int32_t* var_1c
int32_t* arg_8
int32_t* eax_3 = sub_44cfc0(&var_1c, arg_8)
arg1[0x6e] = 0
arg1[0x6f] = 0
sub_4323a0(&arg1[0x6e], eax_3)
SRWLOCK var_18
__seterrormode(&var_18)
var_8_1.b = 2
int32_t* ecx_2 = var_1c

if (ecx_2 != 0)
    var_1c = nullptr
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
arg1[0x70] = 0
var_8_1.b = 3
arg1[0x71].b = 1
arg1[0x72] = ebx

if (*(ebx + 0x58) == 0)
    arg_c = ebx
    int32_t** eax_5 = sub_5d26e0(&arg_8, &arg_c)
    
    if (ebx + 0x58 != eax_5)
        int32_t* ecx_4 = *eax_5
        *eax_5 = nullptr
        int32_t* eax_6 = *(ebx + 0x58)
        *(ebx + 0x58) = ecx_4
        
        if (eax_6 != 0)
            sub_5d20a0(eax_6)
    
    int32_t* eax_7 = arg_8
    
    if (eax_7 != 0)
        sub_5d20a0(eax_7)

arg1[0x73] = *(ebx + 0x58)
arg1[0x74] = arg2
arg1[0x75] = 0
arg1[0x76] = 0
arg1[0x77] = 1
arg1[0x78] = arg3
arg1[0x79].w = 1
data_7fcbac = GetCurrentThreadId()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
