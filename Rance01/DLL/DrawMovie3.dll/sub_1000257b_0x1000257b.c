// 函数: sub_1000257b
// 地址: 0x1000257b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_3 = 0xc
int32_t var_8 = 0x1001e348
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_1 = __saved_ebp_4
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x1001e348 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_10002587
int32_t var_8_5 = 0xfffffffe
int32_t var_c_1 = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp_1 = &var_30
int32_t result

if (arg2 != 0 || data_10021a14 != arg2)
    int32_t var_8_1 = 0
    
    if (arg2 != 1 && arg2 != 2)
    label_100025df:
        *(esp_1 - 4) = arg3
        *(esp_1 - 8) = arg2
        *(esp_1 - 0xc) = arg4
        int32_t result_1 = 1
        
        if (arg2 == 0 || arg2 == 3)
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = arg2
            *(esp_1 - 0xc) = arg4
            int32_t eax_2 = sub_10002446()
            
            if (eax_2 == 0)
                result_1 &= eax_2
        
        int32_t var_8_2 = 0xfffffffe
        result = result_1
    else
        int32_t var_8_3
        
        if (1 == 0)
            var_8_3 = 0xfffffffe
            result = 0
        else
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = arg2
            *(esp_1 - 0xc) = arg4
            int32_t eax_1 = sub_10002446()
            int32_t var_20_1 = eax_1
            
            if (eax_1 != 0)
                goto label_100025df
            
            var_8_3 = 0xfffffffe
            result = 0
else
    result = 0

*(esp_1 - 4) = &data_10002670
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_2 = *(esp_1 - 4)
return result
