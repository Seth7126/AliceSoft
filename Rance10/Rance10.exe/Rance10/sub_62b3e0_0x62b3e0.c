// 函数: sub_62b3e0
// 地址: 0x62b3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744dbc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
int32_t* result_2 = result
int32_t var_54 = 0
int32_t* result_1 = result
int32_t var_50 = 0x12
int32_t* var_40 = arg2
void* eax_3
int32_t edi_1

if (arg2 != 0)
    edi_1 = *arg2
    int32_t* var_70_1 = arg3
    arg3 = &var_50
    eax_3 = sub_601bb0(arg3, 0xa, 1)

if (arg2 == 0 || eax_3 == 0)
    var_50 = 0xffffffff
else
    int32_t var_44_1 = 0
    
    if ((*(eax_3 + 0x14) & 0xfffffffc) u> 0)
        **(eax_3 + 0x10) = edi_1

int32_t var_8_1 = 1
int32_t var_3c = 0x12
int32_t* var_2c = arg4

if (arg4 == 0)
    var_3c = 0xffffffff
else
    int32_t edi_2 = *arg4
    int32_t* var_70_2 = arg3
    arg3 = &var_3c
    void* eax_6 = sub_601bb0(arg3, 0xa, 1)
    
    if (eax_6 == 0)
        var_3c = 0xffffffff
    else
        int32_t var_30_1 = 0
        
        if ((*(eax_6 + 0x14) & 0xfffffffc) u> 0)
            **(eax_6 + 0x10) = edi_2

var_8_1.b = 2
int32_t var_28 = 0x12
int32_t* var_18 = arg5

if (arg5 == 0)
    var_28 = 0xffffffff
else
    int32_t edi_3 = *arg5
    int32_t* var_70_3 = arg3
    void* eax_9 = sub_601bb0(&var_28, 0xa, 1)
    
    if (eax_9 == 0)
        var_28 = 0xffffffff
    else
        int32_t var_1c_1 = 0
        
        if ((*(eax_9 + 0x14) & 0xfffffffc) u> 0)
            **(eax_9 + 0x10) = edi_3

int32_t var_8_2 = 3
sub_6146e0(result, 2, &var_50, &var_14)
int32_t var_54_1 = 1
var_8_2.b = 0
`eh vector vbase constructor iterator'(&var_50, 0x14, 3, sub_601b50)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
