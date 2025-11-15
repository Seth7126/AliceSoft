// 函数: _setlocale
// 地址: 0x70dad3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x1c
int32_t var_8 = 0x7de4e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de4e0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_40
void* const var_44_7 = &data_70dadf
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t edx
int16_t* eax = _call_wsetlocale(&ExceptionList, edx, ecx, arg1, arg2)

if (eax == 0)
    goto label_70daf3

void* eax_1 = sub_714cce()
void* var_30 = *(eax_1 + 0x4c)
int32_t var_2c_1 = *(eax_1 + 0x48)
int32_t var_20 = 0
int32_t eax_2 = __wcstombs_s_l(&var_20, nullptr, 0, eax, 0, &var_30)

if (eax_2 != 0)
    if (eax_2 == 0x16 || eax_2 == 0x22)
        int32_t var_54_1
        __builtin_memset(&var_54_1, 0, 0x14)
        __invoke_watson()
        noreturn
    
    if (eax_2 != 0)
        goto label_70daf3

int32_t* eax_5 = __malloc_base(var_20 + 4)

if (eax_5 == 0)
    goto label_70daf3

int32_t eax_7 = __wcstombs_s_l(nullptr, &eax_5[1], var_20, eax, 0xffffffff, &var_30)
char* result

if (eax_7 == 0)
label_70db97:
    void* edi_1 = var_30
    ___acrt_lock(4)
    int32_t var_8_1 = 0
    int32_t esi_1 = arg1 * 2
    int32_t* edx_1 = *(edi_1 + (esi_1 << 3) + 0x24)
    
    if (edx_1 != 0)
        bool cond:0_1 = *edx_1 != 1
        *edx_1
        *edx_1 -= 1
        
        if (not(cond:0_1))
            __free_base(*(edi_1 + (esi_1 << 3) + 0x24))
            *(edi_1 + (esi_1 << 3) + 0x24) = 0
    
    if ((*(eax_1 + 0x350) & 2) == 0 && (data_7e180c.b & 1) == 0)
        int32_t* eax_10 = *(edi_1 + (esi_1 << 3) + 0x24)
        
        if (eax_10 != 0)
            int32_t ecx_6 = *eax_10
            *eax_10 -= 1
            
            if (ecx_6 == 1)
                __free_base(*(edi_1 + (esi_1 << 3) + 0x24))
                *(edi_1 + (esi_1 << 3) + 0x24) = 0
    
    *eax_5 = *(edi_1 + 0xc)
    *(edi_1 + (esi_1 << 3) + 0x24) = eax_5
    *(edi_1 + (esi_1 << 3) + 0x1c) = &eax_5[1]
    int32_t var_8_2 = 0xfffffffe
    sub_70dc27()
    result = &eax_5[1]
else
    if (eax_7 == 0x16 || eax_7 == 0x22)
        int32_t var_54_3
        __builtin_memset(&var_54_3, 0, 0x14)
        __invoke_watson()
        noreturn
    
    if (eax_7 == 0)
        goto label_70db97
    
    __free_base(eax_5)
label_70daf3:
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_70dc23
return result
