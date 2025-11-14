// 函数: sub_100079b5
// 地址: 0x100079b5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e658
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e658 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_100079c1
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax = __getptd()
void* result

if ((*(eax + 0x70) & data_10020d10) == 0 || *(eax + 0x6c) == 0)
    sub_10007437(0xd)
    int32_t var_8_1 = 0
    result = *(eax + 0x68)
    void* result_1 = result
    
    if (result != data_10020970)
        if (result != 0 && InterlockedDecrement(result) == 0 && result != 0x10020548)
            sub_10003602(result)
        
        *(eax + 0x68) = data_10020970
        result = data_10020970
        void* result_2 = result
        InterlockedIncrement(result)
    
    int32_t var_8_2 = 0xfffffffe
    sub_10007a50()
else
    result = *(eax + 0x68)

if (result == 0)
    sub_100042d7(0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_100079ee
return result
