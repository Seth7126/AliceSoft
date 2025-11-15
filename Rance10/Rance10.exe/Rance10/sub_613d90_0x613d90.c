// 函数: sub_613d90
// 地址: 0x613d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743961
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_474 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
int32_t var_464 = edi
int32_t edx_1 = edx s>> 5
int32_t ebx_1
int32_t ebx_2

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    ebx_1 = edi * 0x6c
    ebx_2 = ebx_1 + arg1[0x1e]

struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || ebx_1 == neg.d(arg1[0x1e]))
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = 0xf
    int32_t var_41c_1 = 0
    char var_42c = 0
    sub_403490(&var_42c, 0x76ba78, 0x2e)
    int32_t var_8_2 = 0
    var_8_2.b = 1
    char var_444
    sub_612320(arg1, sub_409350(&var_464, &var_42c, &var_444, &var_464))
    int32_t var_430
    
    if (var_430 u>= 0x10)
        sub_403160(var_444.d, var_430 + 1, 1)
    
    result = result_2
    int32_t var_430_1 = 0xf
    int32_t var_434_1 = 0
    var_444 = 0
    
    if (result u>= 0x10)
        int32_t var_478_5 = 1
        result = sub_403160(var_42c.d, result + 1, 1)
else
    int32_t edi_1 = *(ebx_2 + 0x4c)
    int32_t* edx_2 = arg1[0x7e] + ((arg1[0x7f] - 1) << 2)
    int32_t ecx_4 = 0
    uint32_t var_414[0x100]
    
    if (edi_1 s> 0)
        do
            int32_t eax_10 = *edx_2
            edx_2 = &edx_2[-1]
            var_414[ecx_4] = eax_10
            ecx_4 += 1
        while (ecx_4 s< edi_1)
    
    arg1[0x7f] -= edi_1
    result = sub_616a80(arg1, ebx_2, &var_414, *(arg1[0x284] - 4))
    
    if (result.b == 0)
        void* var_45c
        sub_403360(&var_45c, 0x76baa8)
        int32_t var_8_1 = 2
        sub_612230(arg1, "CALLFUNC", &var_45c)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        result = result_1
        
        if (result u>= 0x10)
            int32_t var_478_2 = 1
            result = sub_403160(var_45c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
