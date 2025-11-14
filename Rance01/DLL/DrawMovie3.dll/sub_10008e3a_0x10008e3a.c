// 函数: sub_10008e3a
// 地址: 0x10008e3a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e6b8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e6b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_5 = &data_10008e46
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t temp0_1

if (arg1 u> 0)
    int32_t var_34 = 0xffffffe0
    temp0_1 = divu.dp.d(0:0xffffffe0, arg1)

void* result

if (arg1 u<= 0 || sbb.d(temp0_1, temp0_1, temp0_1 u< arg2) != 0xffffffff)
    uint32_t dwBytes = arg1 * arg2
    arg1 = dwBytes
    
    if (dwBytes == 0)
        dwBytes = 1
    
    while (true)
        void* result_1 = nullptr
        int32_t var_20_1 = 0
        
        if (dwBytes u> 0xffffffe0)
            goto label_10008f00
        
        if (data_10023520 == 3)
            dwBytes = (dwBytes + 0xf) & 0xfffffff0
            arg2 = dwBytes
            
            if (arg1 u<= data_10023510)
                sub_10007437(4)
                int32_t var_8_1 = 0
                void* result_2 = sub_100086f0(arg1)
                int32_t var_8_2 = 0xfffffffe
                sub_10008f36()
                result_1 = result_2
                
                if (result_1 == 0)
                    goto label_10008efe
                
                sub_10003d40(result_1, 0, arg1)
        
        if (result_1 == 0)
        label_10008efe:
            result_1 = HeapAlloc(data_100221d4, HEAP_ZERO_MEMORY, dwBytes)
        label_10008f00:
            
            if (result_1 == 0)
                if (data_100223d8 != 0)
                    if (sub_100038b0(dwBytes) != 0)
                        continue
                    
                    if (arg3 != 0)
                        *arg3 = 0xc
                    
                    goto label_10008e76
                else if (result_1 == 0 && arg3 != 0)
                    *arg3 = 0xc
        
        result = result_1
        break
else
    *__errno() = 0xc
    sub_100020e4(0, 0, 0, 0, 0)
label_10008e76:
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10008f57
return result
