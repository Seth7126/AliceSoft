// 函数: sub_10008f58
// 地址: 0x10008f58
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x1001e6d8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e6d8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_15 = &data_10008f64
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 != 0)
    uint32_t dwBytes = arg2
    
    if (dwBytes != 0)
        void* eax_10
        void* result_1
        void* eax_7
        
        if (data_10023520 != 3)
            while (true)
                if (dwBytes u> 0xffffffe0)
                label_10009132:
                    sub_100038b0(dwBytes)
                    eax_7 = __errno()
                label_1000913d:
                    *eax_7 = 0xc
                    goto label_10009143
                
                if (dwBytes == 0)
                    dwBytes += 1
                
                void* result_3 = HeapReAlloc(data_100221d4, HEAP_NONE, arg1, dwBytes)
                result_1 = result_3
                
                if (result_1 != 0)
                    goto label_1000916f
                
                if (data_100223d8 == result_3)
                    if (result_1 != 0)
                        goto label_1000916f
                    
                    eax_10 = __errno()
                    break
                
                if (sub_100038b0(dwBytes) == 0)
                    eax_7 = __errno()
                label_100090e0:
                    *eax_7 = sub_10003c45(GetLastError())
                    goto label_10009143
        else
            while (true)
                void* result_2 = nullptr
                
                if (dwBytes u> 0xffffffe0)
                    goto label_10009132
                
                sub_10007437(4)
                int32_t var_8_1 = 0
                void* eax = sub_10007f11(arg1)
                void* var_24_1 = eax
                
                if (eax != 0)
                    if (dwBytes u<= data_10023510)
                        if (sub_1000840f(eax, arg1, dwBytes) == 0)
                            void* result_4 = sub_100086f0(dwBytes)
                            result_2 = result_4
                            
                            if (result_4 != 0)
                                uint32_t dwBytes_1 = *(arg1 - 4) - 1
                                
                                if (dwBytes_1 u>= dwBytes)
                                    dwBytes_1 = dwBytes
                                
                                sub_10003dc0(result_2, arg1, dwBytes_1)
                                void* eax_3 = sub_10007f11(arg1)
                                var_24_1 = eax_3
                                sub_10007f41(eax_3, arg1)
                        else
                            result_2 = arg1
                    
                    if (result_2 == 0)
                        if (dwBytes == 0)
                            dwBytes = 1
                            arg2 = 1
                        
                        dwBytes = (dwBytes + 0xf) & 0xfffffff0
                        arg2 = dwBytes
                        void* result_5 = HeapAlloc(data_100221d4, HEAP_NONE, dwBytes)
                        result_2 = result_5
                        
                        if (result_5 != 0)
                            uint32_t dwBytes_2 = *(arg1 - 4) - 1
                            
                            if (dwBytes_2 u>= dwBytes)
                                dwBytes_2 = dwBytes
                            
                            sub_10003dc0(result_2, arg1, dwBytes_2)
                            sub_10007f41(var_24_1, arg1)
                
                int32_t var_8_2 = 0xfffffffe
                sub_1000909c()
                
                if (var_24_1 != 0)
                    result_1 = result_2
                else
                    if (dwBytes == 0)
                        dwBytes += 1
                    
                    dwBytes = (dwBytes + 0xf) & 0xfffffff0
                    arg2 = dwBytes
                    result_1 = HeapReAlloc(data_100221d4, HEAP_NONE, arg1, dwBytes)
                
                if (result_1 != 0)
                    goto label_1000916f
                
                if (data_100223d8 == result_1)
                    if (result_1 != 0)
                        goto label_1000916f
                    
                    eax_10 = __errno()
                    
                    if (var_24_1 == result_1)
                        break
                    
                    *eax_10 = 0xc
                    goto label_1000916f
                
                if (sub_100038b0(dwBytes) == 0)
                    eax_7 = __errno()
                    
                    if (var_24_1 != result_1)
                        goto label_1000913d
                    
                    goto label_100090e0
        *eax_10 = sub_10003c45(GetLastError())
    label_1000916f:
        result = result_1
    else
        sub_10003602(arg1)
    label_10009143:
        result = nullptr
else
    result = sub_100037d7(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000914a
return result
