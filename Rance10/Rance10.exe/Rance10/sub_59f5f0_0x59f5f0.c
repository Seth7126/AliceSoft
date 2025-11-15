// 函数: sub_59f5f0
// 地址: 0x59f5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e63b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3b0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_39c = esi
int32_t edx_2
void* edi_1

if (arg2 s>= 0)
    edi_1 = &esi[1]
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x4da637d, esi[2] - *edi_1)
    edx_2 = edx_1 s>> 4

struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0 || arg2 s> (edx_2 u>> 0x1f) + edx_2)
    result.b = 0
else
    int32_t var_398
    sub_578410(&var_398)
    int32_t var_8_1 = 0
    int32_t edx_3 = 0
    int32_t ecx_3 = *(edi_1 + 4)
    int32_t* eax_6 = *edi_1
    
    if (eax_6 != ecx_3)
        do
            if (edx_3 s< *eax_6)
                edx_3 = *eax_6
            
            eax_6 = &eax_6[0xd3]
        while (eax_6 != ecx_3)
        
        esi = var_39c
    
    int32_t ecx_4 = ecx_3 - *edi_1
    var_398 = edx_3 + 1
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x4da637d, ecx_4)
    int32_t edx_6 = edx_5 s>> 4
    var_39c = (edx_6 u>> 0x1f) + edx_6 + 1
    void* var_48
    sub_403360(&var_48, "Object%03d")
    var_8_1.b = 1
    char var_30
    char* eax_12 = sub_409350(&var_39c, &var_48, &var_30, &var_39c)
    var_8_1.b = 2
    void var_390
    
    if (&var_390 != eax_12)
        sub_403590(&var_390, eax_12, 0, 0xffffffff)
    
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    var_8_1.b = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    int32_t* var_3b4_2 = &var_398
    sub_5a4580(edi_1, &var_39c, arg2 * 0x34c + *edi_1, &var_398)
    *esi += 1
    sub_59b2c0(&var_398)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
