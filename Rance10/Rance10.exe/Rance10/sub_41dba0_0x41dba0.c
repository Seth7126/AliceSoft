// 函数: sub_41dba0
// 地址: 0x41dba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
void* var_40 = edi
int32_t eax_6 = (***(*(arg1 + 4) + 8))(eax_2)
void* result = sub_6ca100(edi, eax_6)
int32_t esi = 0

if (eax_6 s> 0)
    do
        sub_6ca100(edi, (*(**(*(arg1 + 4) + 8) + 0x10))(esi))
        void* result_1 = 0xf
        void* var_20_1 = nullptr
        char var_30 = 0
        int32_t var_8_1 = 0
        sub_41f9a0(*(arg1 + 4), esi, &var_30)
        char* edi_1 = &var_30
        char* edx_1 = &var_30
        
        if (result_1 u>= 0x10)
            edi_1 = var_30.d
        
        if (result_1 u>= 0x10)
            edx_1 = var_30.d
        
        edi = var_40
        int32_t var_54_4 = 0.d
        sub_6ca200(edi + 4, *(edi + 8), edx_1, var_20_1 + edi_1)
        char var_31 = 0
        sub_4263a0(edi + 4, &var_31)
        sub_6ca100(edi, (*(**(*(arg1 + 4) + 8) + 0x34))(esi))
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_30.d, result + 1, 1)
        
        esi += 1
    while (esi s< eax_6)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
