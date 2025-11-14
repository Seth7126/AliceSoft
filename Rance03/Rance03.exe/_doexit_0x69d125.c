// 函数: _doexit
// 地址: 0x69d125
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_2 = 0x1c
int32_t var_8 = 0x747e30
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* edi
int32_t* var_3c = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747e30 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_40
void* const var_44_6 = &data_69d131
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
__lock(8)
int32_t var_8_1 = 0

if (data_75c918 != 1)
    data_75c940 = 1
    data_75c93c = arg3.b
    
    if (arg2 == 0)
        int32_t ebx_1 = DecodePointer(data_75df54)
        int32_t var_30_1 = ebx_1
        
        if (ebx_1 == 0)
        label_69d1fb:
            sub_69d0bb(edi, &data_6d45b8, 0x6d45c8)
        else
            edi = DecodePointer(data_75df50)
            int32_t var_20_1 = ebx_1
            int32_t* var_24_1 = edi
            
            while (true)
                int32_t* var_28_1 = edi
                
                while (true)
                    edi -= 4
                    int32_t* var_28_2 = edi
                    
                    if (edi u< ebx_1)
                        goto label_69d1fb
                    
                    int32_t eax_3 = EncodePointer(nullptr)
                    
                    if (*edi != eax_3)
                        if (edi u< ebx_1)
                            goto label_69d1fb
                        
                        int32_t eax_4 = DecodePointer(*edi)
                        *edi = EncodePointer(nullptr)
                        eax_4()
                        int32_t eax_6 = DecodePointer(data_75df54)
                        int32_t* eax_7 = DecodePointer(data_75df50)
                        
                        if (var_20_1 == eax_6 && var_24_1 == eax_7)
                            continue
                        
                        var_20_1 = eax_6
                        ebx_1 = eax_6
                        int32_t var_30_2 = ebx_1
                        var_24_1 = eax_7
                        edi = eax_7
                        break
    
    sub_69d0bb(edi, &data_6d45cc, 0x6d45d0)

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN17(&__saved_ebp)

if (arg3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_69d253
    return result

data_75c918 = 1
__unlock(8)
___crtExitProcess(arg1)
noreturn
