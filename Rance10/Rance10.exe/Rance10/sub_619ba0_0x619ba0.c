// 函数: sub_619ba0
// 地址: 0x619ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744407
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x4bda12f7, arg1[0x22] - arg1[0x21])
int32_t var_468 = edi
int32_t edx_1 = edx s>> 5
int32_t ebx_1
void* ebx_2

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    ebx_1 = edi * 0x6c
    ebx_2 = ebx_1 + arg1[0x21]

uint32_t result
char var_444
uint32_t result_1
char var_42c

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || ebx_1 == neg.d(arg1[0x21]))
    uint32_t result_2 = 0xf
    int32_t var_41c_2 = 0
    var_42c = 0
    sub_403490(&var_42c, "delegate", 0x2c)
    int32_t var_8_3 = 0
    var_8_3.b = 1
    sub_612230(arg1, "DG_CALLBEGIN", sub_409350(&var_468, &var_42c, &var_444, &var_468))
    
    if (result_1 u>= 0x10)
        sub_403160(var_444.d, result_1 + 1, 1)
    
    result = result_2
    int32_t var_430 = 0xf
    int32_t var_434_1 = 0
    var_444 = 0
    
    if (result u>= 0x10)
        int32_t var_480_10 = 1
        result = sub_403160(var_42c.d, result + 1, 1)
else
    int32_t edi_1 = *(ebx_2 + 0x4c)
    int32_t* edx_2 = arg1[0x7e] + ((arg1[0x7f] - 1) << 2)
    int32_t ecx_4 = 0
    int32_t var_414[0x100]
    
    if (edi_1 s> 0)
        do
            int32_t eax_10 = *edx_2
            edx_2 = &edx_2[-1]
            var_414[ecx_4] = eax_10
            ecx_4 += 1
        while (ecx_4 s< edi_1)
    
    int32_t eax_12 = arg1[0x7f] - edi_1
    arg1[0x7f] = eax_12
    int32_t edx_3 = *(arg1[0x7e] + (eax_12 << 2) - 4)
    int32_t var_460 = edx_3
    arg1[0x7f] = eax_12 - 1
    void* eax_15 = sub_622960(&arg1[0x52], edx_3)
    
    if (eax_15 != 0)
        *(eax_15 + 0x2c) = 0
        *(eax_15 + 0x30) = (*(*(eax_15 + 0x20) + 0x10))(eax_2)
        sub_629050(&arg1[0x7d], &var_414, *(ebx_2 + 0x4c))
        sub_405d30(&arg1[0x7d], var_460)
        result = sub_61ad00(arg1, ebx_2 + 0x34, *(ebx_2 + 0x3c))
        
        if (result.b == 0)
            void var_45c
            sub_403360(&var_45c, 0x76cfe0)
            int32_t var_8_2 = 4
            sub_612230(arg1, "DG_CALLBEGIN", &var_45c)
            result = sub_403320(&var_45c)
    else
        sub_403360(&var_444, 0x76d1b4)
        int32_t var_8_1 = 2
        var_8_1.b = 3
        sub_612230(arg1, "DG_CALLBEGIN", sub_409350(&var_460, &var_444, &var_42c, &var_460))
        int32_t var_418
        
        if (var_418 u>= 0x10)
            sub_403160(var_42c.d, var_418 + 1, 1)
        
        result = result_1
        int32_t var_418_1 = 0xf
        int32_t var_41c_1 = 0
        var_42c = 0
        
        if (result u>= 0x10)
            int32_t var_480_3 = 1
            result = sub_403160(var_444.d, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
