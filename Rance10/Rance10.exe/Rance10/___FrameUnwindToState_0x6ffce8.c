// 函数: ___FrameUnwindToState
// 地址: 0x6ffce8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7de1d0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x7de1d0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_6ffcf4
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi

if (arg2[1] s> 0x80)
    esi = *(arg1 + 8)
else
    esi = sx.d(*(arg1 + 8))

int32_t var_20 = esi
void* eax_2 = sub_702f40()
*(eax_2 + 0x18) += 1
int32_t var_8_1 = 0

while (true)
    if (esi == arg3)
        int32_t var_8_4 = 0xfffffffe
        $LN16()
        
        if (esi != arg3)
            break
        
        *(arg1 + 8) = esi
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const __saved_ebp_2 = &data_6ffd98
        return arg1
    
    if (esi s<= 0xffffffff)
        break
    
    if (esi s>= arg2[1])
        break
    
    int32_t eax_3 = arg2[2]
    int32_t edx_1 = *(eax_3 + (esi << 3))
    int32_t var_8_2 = 1
    
    if (*(eax_3 + (esi << 3) + 4) != 0)
        *(arg1 + 8) = edx_1
        __CallSettingFrame@12(arg2, *(arg2[2] + (esi << 3) + 4), arg1, 0x103)
    
    int32_t var_8_3 = 0
    esi = edx_1
    int32_t var_20_1 = esi

_terminate()
noreturn
