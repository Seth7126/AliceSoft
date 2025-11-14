// 函数: sub_10003690
// 地址: 0x10003690
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x1001e3d8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e3d8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_1000369c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_10007437(0xe)
int32_t var_8_1 = 0
int32_t ecx = *(arg1 + 4)

if (ecx != 0)
    void* eax = data_10022084
    void* edx_1 = &data_10022080
    
    while (true)
        void* var_20_1 = eax
        
        if (eax == 0)
            break
        
        if (*eax == ecx)
            *(edx_1 + 4) = *(eax + 4)
            sub_10003602(eax)
            break
        
        edx_1 = eax
    
    sub_10003602(*(arg1 + 4))
    *(arg1 + 4) = 0

int32_t var_8_2 = 0xfffffffe
int32_t result = sub_100036f7()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_100036f2
return result
