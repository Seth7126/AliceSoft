// 函数: sub_1000b45b
// 地址: 0x1000b45b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x1001e798
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e798 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_1000b467
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
sub_10007437(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t edi = 3

while (true)
    int32_t var_24_1 = edi
    
    if (edi s>= data_10023500)
        break
    
    int32_t esi_2 = edi << 2
    int32_t* eax_1 = data_100224e4 + esi_2
    
    if (*eax_1 != 0)
        int32_t* eax_2 = *eax_1
        
        if ((eax_2[3].b & 0x83) != 0 && sub_1000b94d(eax_2) != 0xffffffff)
            result += 1
        
        if (edi s>= 0x14)
            DeleteCriticalSection(*(esi_2 + data_100224e4) + 0x20)
            sub_10003602(*(esi_2 + data_100224e4))
            *(esi_2 + data_100224e4) = 0
    
    edi += 1

int32_t var_8_2 = 0xfffffffe
sub_1000b4f1()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000b4f0
return result
