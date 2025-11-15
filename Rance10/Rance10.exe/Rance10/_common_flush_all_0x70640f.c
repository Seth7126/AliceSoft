// 函数: _common_flush_all
// 地址: 0x70640f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x1c
int32_t var_8 = 0x7de430
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x7de430 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_40
void* const var_44_3 = &data_70641b
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t result_1 = 0
___acrt_lock(8)
int32_t var_8_1 = 0
int32_t* esi = data_7fc478
void* eax_1 = &esi[data_7fc474]
void* var_30 = eax_1

while (true)
    int32_t* var_24_1 = esi
    
    if (esi == eax_1)
        break
    
    int32_t* edi_1 = *esi
    int32_t* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        __lock_file(edi_1)
        int32_t var_8_2 = 1
        
        if (((edi_1[3] u>> 0xd).b & 1) != 0)
            if (arg1 == 1)
                if (__fflush_nolock(edi_1) != 0xffffffff)
                    result_2 += 1
            else if (arg1 == 0 && ((edi_1[3] u>> 1).b & 1) != 0)
                int32_t eax_7 = __fflush_nolock(edi_1)
                
                if (eax_7 == 0xffffffff)
                    result_1 |= eax_7
        
        int32_t var_8_3 = 0
        $LN24(&__saved_ebp)
        eax_1 = var_30
    
    esi = &esi[1]

int32_t var_8_4 = 0xfffffffe
$LN20()
int32_t result = result_2

if (arg1 != 1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7064da
return result
