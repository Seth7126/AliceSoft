// 函数: sub_5e7a80
// 地址: 0x5e7a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_5665c0(data_7fd4cc, arg1, arg2)

if (result != 0)
    void* edi_1 = *(result + 0x220)
    
    if (edi_1 != 0)
        uint8_t* var_1c = nullptr
        int32_t var_18 = 0
        int32_t var_14 = 0
        int32_t var_8_1 = 0
        char eax_3 = sub_5a0020(edi_1, &var_1c)
        uint8_t* esi = var_1c
        int32_t ebx
        
        if (eax_3 == 0)
            ebx.b = 0
        else
            uint8_t* edx = nullptr
            
            if (esi != var_18)
                edx = esi
            
            BOOL eax_5 = var_18 - esi
            
            if (sub_67efe0(eax_5, edx, edi_1 + 0x38, eax_5) == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        if (esi != 0)
            sub_403160(esi, var_14 - esi, 1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx.b

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
