// 函数: sub_610e90
// 地址: 0x610e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "0()", 3)
void* var_64
sub_60c2a0(&arg1[0x3e], &var_64, &var_2c)
void* eax_3 = var_64
int32_t var_60
int32_t ebx
int32_t edi

if (eax_3 != arg1[0x3f])
    edi = *(eax_3 + 0x20)
    ebx.b = 1
    var_60 = edi
else
    edi = var_60
    ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)
    edi = var_60

struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebx.b != 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
    int32_t edx_2 = edx_1 s>> 5
    int32_t edi_1
    int32_t edi_2
    
    if (edi u< (edx_2 u>> 0x1f) + edx_2)
        edi_1 = edi * 0x6c
        edi_2 = edi_1 + arg1[0x1e]
    
    if (edi u>= (edx_2 u>> 0x1f) + edx_2 || edi_1 == neg.d(arg1[0x1e]))
        void* var_44
        sub_403360(&var_44, 0x76b548)
        int32_t var_8_2 = 0
        var_8_2.b = 1
        ebx.b = sub_612320(arg1, sub_4351a0(&var_60, &var_44, &var_2c, &var_60))
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = ebx.b
    else
        int32_t eax_9 = sub_621850(&arg1[0x52], edi_2)
        
        if (eax_9 s>= 0)
            if (sub_6106a0(arg1, eax_9).b == 0)
                result.b = 0
            else
                sub_611e10(arg1, 0, 0xfffffffe, *edi_2)
                result.b = 1
        else
            void var_5c
            sub_403360(&var_5c, 0x76b57c)
            int32_t var_8_1 = 2
            ebx.b = sub_612230(arg1, "CreateGlobalConstructor", &var_5c)
            sub_403320(&var_5c)
            result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
