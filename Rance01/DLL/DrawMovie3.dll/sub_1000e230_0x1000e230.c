// 函数: sub_1000e230
// 地址: 0x1000e230
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019243
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1 + 0xc4
EnterCriticalSection(arg1 + 0xc4)
int32_t var_4 = 0
int32_t arg_4

if (arg_4 == 0)
    if (*(arg1 + 0x78) != 0)
    label_1000e2eb:
        int32_t result = *(arg1 + 0x78)
        LeaveCriticalSection(arg1 + 0xc4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    arg_4 = 0
    void* eax_3 = sub_10001dc9(0xe0)
    void* var_10_1 = eax_3
    var_4.b = 1
    struct CBaseInputPin::CRendererInputPin::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_1000cb50(eax_3, arg1, &arg_4, &data_1001bea0)
    
    var_4.b = 0
    *(arg1 + 0x78) = eax_4
    
    if (eax_4 != 0)
        if (arg_4 s>= 0)
            goto label_1000e2eb
        
        (*eax_4)->vFunc_3(1)
        *(arg1 + 0x78) = 0

LeaveCriticalSection(arg1 + 0xc4)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
