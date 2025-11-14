// 函数: sub_1000441b
// 地址: 0x1000441b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0x18
int32_t var_8 = 0x1001e438
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e438 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_4 = &data_10004427
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = sub_10007437(8)
int32_t var_8_1 = 0

if (data_100220c0 != 1)
    data_100220bc = 1
    data_100220b8 = arg3.b
    
    if (arg2 == 0)
        int32_t eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_10003063(data_10023648)
        int32_t edi_1 = eax_1
        int32_t var_2c_1 = edi_1
        
        if (edi_1 != 0)
            int32_t* eax_2
            eax_2, edx_1 = sub_10003063(data_10023644)
            int32_t* esi_1 = eax_2
            int32_t* var_28_1 = esi_1
            int32_t var_20_1 = edi_1
            int32_t* var_24_1 = esi_1
            
            while (true)
                esi_1 -= 4
                int32_t* var_28_2 = esi_1
                
                if (esi_1 u< edi_1)
                    break
                
                int32_t eax_3
                eax_3, edx_1 = sub_1000305a()
                
                if (*esi_1 != eax_3)
                    if (esi_1 u< edi_1)
                        break
                    
                    int32_t eax_4 = sub_10003063(*esi_1)
                    *esi_1 = sub_1000305a()
                    eax_4()
                    int32_t eax_6 = sub_10003063(data_10023648)
                    int32_t* eax_7
                    eax_7, edx_1 = sub_10003063(data_10023644)
                    
                    if (var_20_1 != eax_6 || var_24_1 != eax_7)
                        var_20_1 = eax_6
                        var_2c_1 = eax_6
                        var_24_1 = eax_7
                        esi_1 = eax_7
                        int32_t* var_28_3 = esi_1
                    
                    edi_1 = var_2c_1
        
        edx = sub_10004355(0x1001a1c8, edx_1)
    
    sub_10004355(0x1001a1d8, edx)

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN17(&__saved_ebp)

if (arg3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_10004546
    return result

data_100220c0 = 1
__unlock(8)
__endthreadex(arg1)
noreturn
