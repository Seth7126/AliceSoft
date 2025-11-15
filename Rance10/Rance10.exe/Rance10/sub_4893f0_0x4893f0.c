// 函数: sub_4893f0
// 地址: 0x4893f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm2
float var_4c = xmm2
HANDLE hHandle = arg1[0x11]

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    sub_489590(arg1)

bool cond:0 = 1f <= var_4c
float* ecx_1 = &var_4c
float var_50 = 1f
float var_54 = 0f
arg1[0xd] = arg2

if (cond:0)
    ecx_1 = &var_50

float* eax_4 = &var_54

if (*ecx_1 f> 0)
    eax_4 = ecx_1

arg1[0xe] = *eax_4
float eax_5
eax_5.b = arg3
arg1[0xc].b = eax_5.b
int32_t arg_c
int32_t eax_6 = arg_c

if (eax_6 s< 0)
    arg1[0xf] = 0
else if (eax_6 s>= 8)
    char var_30
    sub_403360(&var_30, 0x7602e8)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_48
    sub_45aae0(sub_409350(&arg_c, &var_30, &var_48, &arg_c))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    arg1[0xf] = 0
else
    arg1[0xf] = eax_6

char result

if (arg2 s> 0)
    HANDLE hEvent = arg1[0x13]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    result = (**arg1)(eax_2)
    
    if (result != 0)
        result = 1
else
    int32_t* ecx_5 = arg1[1]
    int32_t* var_64_2 = ecx_5
    (*(*ecx_5 + 0x1c))(arg1[0xe])
    
    if (arg1[0xc].b != 0)
        (*(*arg1[1] + 0x14))(eax_2)
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
