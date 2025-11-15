// 函数: sub_613f70
// 地址: 0x613f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7439bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_474 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t ecx = 0
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t ebx = arg1[0x7f]
int32_t* edx_1 = arg1[0x7e] + ((ebx - 1) << 2)
uint32_t var_414[0x100]

if (edi s> 0)
    do
        int32_t eax_6 = *edx_1
        edx_1 = &edx_1[-1]
        var_414[ecx] = eax_6
        ecx += 1
    while (ecx s< edi)

int32_t ebx_1 = ebx - edi
arg1[0x7f] = ebx_1
int32_t edi_1 = *(arg1[0x7e] + (ebx_1 << 2) - 4)
arg1[0x7f] = ebx_1 - 1
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
int32_t var_460 = edi_1
int32_t edx_3 = edx_2 s>> 5
int32_t edx_4
int32_t edx_5

if (edi_1 u< (edx_3 u>> 0x1f) + edx_3)
    edx_4 = edi_1 * 0x6c
    edx_5 = edx_4 + arg1[0x1e]

struct _EXCEPTION_REGISTRATION_RECORD** result
char var_42c
struct _EXCEPTION_REGISTRATION_RECORD** result_2

if (edi_1 u>= (edx_3 u>> 0x1f) + edx_3 || edx_4 == neg.d(arg1[0x1e]))
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_434_1 = 0
    char var_444 = 0
    sub_403490(&var_444, 0x76ba60, 0x15)
    int32_t var_8_3 = 0
    var_8_3.b = 1
    sub_612230(arg1, "CALLMETHOD", sub_409350(&var_460, &var_444, &var_42c, &var_460))
    
    if (result_2 u>= 0x10)
        sub_403160(var_42c.d, result_2 + 1, 1)
    
    result = result_1
    int32_t var_418 = 0xf
    int32_t var_41c_1 = 0
    var_42c = 0
    
    if (result u>= 0x10)
        int32_t var_478_6 = 1
        result = sub_403160(var_444.d, result + 1, 1)
else
    int32_t ecx_4 = arg1[0x7f]
    int32_t edi_2 = *(arg1[0x7e] + (ecx_4 << 2) - 4)
    arg1[0x7f] = ecx_4 - 1
    
    if (edi_2 != 0xffffffff)
        result = sub_616b40(arg1, edx_5, edi_2, &var_414, *(arg1[0x284] - 4))
        
        if (result.b == 0)
            void var_45c
            sub_403360(&var_45c, 0x76b9f8)
            int32_t var_8_2 = 3
            sub_612230(arg1, "CALLMETHOD", &var_45c)
            result = sub_403320(&var_45c)
    else
        sub_403360(&var_42c, "NULL")
        int32_t var_8_1 = 2
        sub_612230(arg1, "CALLMETHOD", &var_42c)
        result = result_2
        
        if (result u>= 0x10)
            int32_t var_478_1 = 1
            result = sub_403160(var_42c.d, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
