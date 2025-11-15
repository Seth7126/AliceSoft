// 函数: ?SendCoreNotification@SchedulerProxy@details@Concurrency@@QAEXPAUSchedulerCore@23@_N@Z
// 地址: 0x6f6bd5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x34
int32_t (* var_c)(void* arg1) = sub_74ad19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_6
void* const var_58_4 = &data_6f6be1
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1 + 0x20
CRITICAL_SECTION* var_44 = esi
sub_6eaa5e(esi)
int32_t var_8 = 0
int32_t edx = 0
int32_t eax = *(arg2 + 0xc)
int32_t var_38 = 0
void* result_1
void var_34
void* result_3

if (eax s<= 8)
    result_3 = &var_34
    result_1 = &var_34
else
    int32_t var_58 = 4
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(eax, 4) u>> 0x20 != 0
    int32_t var_58_1 = neg.d(ecx_1) | (eax * 4)
    void* result_2 = sub_6e8787()
    edx = 0
    result_3 = result_2
    result_1 = result_2

void* eax_2 = *(arg2 + 0x10)
void* const i_1

if (eax_2 == 0)
    i_1 = nullptr
else
    i_1 = *(eax_2 + 0x38)

if (i_1 != 0)
    void* const i
    
    do
        if (i_1 == *(arg2 + 0x10))
            i = nullptr
        else
            i = *(i_1 + 0x38)
        
        void* edx_1 = *(i_1 + 0x1c)
        
        if (edx_1 != 0)
            i_1.b = *(edx_1 + 0x44)
        
        if (edx_1 == 0 || i_1.b != 0)
            edx = var_38
        else
            *(result_3 + (var_38 << 2)) = edx_1
            edx = var_38 + 1
            var_38 = edx
        
        i_1 = i
    while (i != 0)

void* eax_4 = **(arg1 + 8)
int32_t edi_1

if (arg3 == 0)
    edi_1 = *(eax_4 + 0x14)
else
    edi_1 = *(eax_4 + 0x18)

j_sub_4033e0()
edi_1(result_3, edx)
int32_t var_8_1 = 1
sub_6eabaa(esi)
void* result = result_1

if (result != &var_34)
    result = _free(result)

@__security_check_cookie@4(eax_6 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f6cb6
return result
