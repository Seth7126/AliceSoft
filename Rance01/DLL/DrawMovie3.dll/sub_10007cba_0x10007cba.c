// 函数: sub_10007cba
// 地址: 0x10007cba
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x1001e678
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e678 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_8 = &data_10007cc6
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xffffffff
void* eax = __getptd()
sub_100079b5()
void* ebx = *(eax + 0x68)
uint32_t eax_1 = sub_10007a59(arg1)

if (eax_1 == *(ebx + 4))
    result = 0
else
    void* eax_2 = sub_10004125(0x220)
    
    if (eax_2 != 0)
        __builtin_memcpy(eax_2, *(eax + 0x68), 0x220)
        *eax_2 = 0
        int32_t result_1 = sub_10007ad5(eax_1, eax_2)
        result = result_1
        
        if (result_1 == 0)
            if (InterlockedDecrement(*(eax + 0x68)) == 0)
                void* eax_4 = *(eax + 0x68)
                
                if (eax_4 != 0x10020548)
                    sub_10003602(eax_4)
            
            *(eax + 0x68) = eax_2
            InterlockedIncrement(eax_2)
            
            if ((*(eax + 0x70) & 2) == 0 && (data_10020d10.b & 1) == 0)
                sub_10007437(0xd)
                int32_t var_8_1 = 0
                data_1002238c = *(eax_2 + 4)
                data_10022390 = *(eax_2 + 8)
                data_10022394 = *(eax_2 + 0xc)
                int32_t eax_8 = 0
                
                while (true)
                    int32_t var_20_1 = eax_8
                    
                    if (eax_8 s>= 5)
                        break
                    
                    *((eax_8 << 1) + &data_10022380) = *(eax_2 + (eax_8 << 1) + 0x10)
                    eax_8 += 1
                
                void* eax_9 = nullptr
                int16_t ecx_4
                
                while (true)
                    void* var_20_2 = eax_9
                    
                    if (eax_9 s>= 0x101)
                        break
                    
                    ecx_4.b = *(eax_9 + eax_2 + 0x1c)
                    *(eax_9 + 0x10020768) = ecx_4.b
                    eax_9 += 1
                
                void* eax_10 = nullptr
                
                while (true)
                    void* var_20_3 = eax_10
                    
                    if (eax_10 s>= 0x100)
                        break
                    
                    ecx_4.b = *(eax_10 + eax_2 + 0x11d)
                    *(eax_10 + 0x10020870) = ecx_4.b
                    eax_10 += 1
                
                if (InterlockedDecrement(data_10020970) == 0)
                    void* eax_12 = data_10020970
                    
                    if (eax_12 != 0x10020548)
                        sub_10003602(eax_12)
                
                data_10020970 = eax_2
                InterlockedIncrement(eax_2)
                int32_t var_8_2 = 0xfffffffe
                sub_10007e1b()
        else if (result_1 == 0xffffffff)
            if (eax_2 != 0x10020548)
                sub_10003602(eax_2)
            
            *__errno() = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10007e53
return result
