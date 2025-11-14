// 函数: sub_100032c9
// 地址: 0x100032c9
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 8
int32_t var_8 = 0x1001e390
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x1001e390 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_13 = &data_100032d5
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* eax = *(arg1 + 0x24)
    
    if (eax != 0)
        sub_10003602(eax)
    
    void* eax_1 = *(arg1 + 0x2c)
    
    if (eax_1 != 0)
        sub_10003602(eax_1)
    
    void* eax_2 = *(arg1 + 0x34)
    
    if (eax_2 != 0)
        sub_10003602(eax_2)
    
    void* eax_3 = *(arg1 + 0x3c)
    
    if (eax_3 != 0)
        sub_10003602(eax_3)
    
    void* eax_4 = *(arg1 + 0x40)
    
    if (eax_4 != 0)
        sub_10003602(eax_4)
    
    void* eax_5 = *(arg1 + 0x44)
    
    if (eax_5 != 0)
        sub_10003602(eax_5)
    
    void* eax_6 = *(arg1 + 0x48)
    
    if (eax_6 != 0)
        sub_10003602(eax_6)
    
    void* eax_7 = *(arg1 + 0x5c)
    
    if (eax_7 != 0x1001a9c8)
        sub_10003602(eax_7)
    
    sub_10007437(0xd)
    int32_t var_8_1 = 0
    void* edi_1 = *(arg1 + 0x68)
    
    if (edi_1 != 0 && InterlockedDecrement(edi_1) == 0 && edi_1 != 0x10020548)
        sub_10003602(edi_1)
    
    int32_t var_8_2 = 0xfffffffe
    sub_100033e3()
    sub_10007437(0xc)
    int32_t var_8_3 = 1
    int32_t* edi_2 = *(arg1 + 0x6c)
    
    if (edi_2 != 0)
        sub_10007642(edi_2)
        
        if (edi_2 != data_10020538 && edi_2 != 0x10020460 && *edi_2 == 0)
            sub_1000746a(edi_2)
    
    int32_t var_8_4 = 0xfffffffe
    sub_100033ef()
    result = sub_10003602(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_100033dd
return result
