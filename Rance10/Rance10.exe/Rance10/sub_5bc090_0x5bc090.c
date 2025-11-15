// 函数: sub_5bc090
// 地址: 0x5bc090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i

for (i = *(arg1 + 0x60); i != *(arg1 + 0x64); i = &i[1])
    void* ecx
    ecx.b = *(*i + 0x6c)
    
    if (ecx.b != 0)
        void* var_1c = nullptr
        int32_t var_18 = 0
        int32_t var_14 = 0
        int32_t var_8_1 = 0
        var_8_1.b = 1
        var_8_1.b = 0
        void* var_28
        int32_t ebx
        ebx.b = sub_5bc1a0(arg1, &var_1c, sub_5bc410(arg1, &var_28, sub_5c33a0))
        void* edx_1 = var_28
        int32_t var_20
        
        if (edx_1 != 0)
            sub_403160(edx_1, (var_20 - edx_1) s>> 2, 4)
        
        if (ebx.b != 0)
            sub_580170(arg1 + 0xb0, &var_1c)
            ebx.b = 1
        
        void* esi_1 = var_1c
        
        if (esi_1 != 0)
            sub_403160(esi_1, (var_14 - esi_1) s/ 0x24, 0x24)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx.b

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return i
