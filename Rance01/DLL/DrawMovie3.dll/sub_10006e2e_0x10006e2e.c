// 函数: sub_10006e2e
// 地址: 0x10006e2e
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x20
int32_t var_8 = 0x1001e5f8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e5f8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_44 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48_4 = &data_10006e3a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp = &var_44
void* edi_1 = nullptr
int32_t var_20 = 0
int32_t var_2c = 0
int32_t result
int32_t eax_6
int32_t eax_8
void* esi_1

if (arg1 s<= 0xb)
    if (arg1 != 0xb)
        int32_t var_48 = 2
        esp = &var_44
        
        if (arg1 == 2)
            esi_1 = &data_100221dc
            eax_6 = data_100221dc
            goto label_10006ee3
        
        if (arg1 == 4)
            goto label_10006e61
        
        if (arg1 == 6)
            goto label_10006ec1
        
        if (arg1 != 8)
            goto label_10006eaa
        
        goto label_10006e61
    
label_10006e61:
    void* eax_5
    void* ecx_1
    eax_5, ecx_1 = sub_10003236()
    edi_1 = eax_5
    void* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_48_1 = *(edi_1 + 0x5c)
        esi_1 = sub_10006dea(eax_5, arg1, ecx_1) + 8
        eax_8 = *esi_1
        goto label_10006ef3
    
    result = 0xffffffff
else if (arg1 == 0xf)
    esi_1 = &data_100221e8
    eax_6 = data_100221e8
label_10006ee3:
    var_20 = 1
    eax_8 = sub_10003063(eax_6)
label_10006ef3:
    esp = &var_44
    result = 0
    
    if (eax_8 != 1)
        if (eax_8 == 0)
            _quick_exit(3)
            noreturn
        
        if (var_20 != 0)
            sub_10007437(0)
        
        int32_t var_8_1 = 0
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_10006f47
        
        int32_t var_30 = *(edi_1 + 0x60)
        *(edi_1 + 0x60) = 0
        int32_t var_34
        
        if (arg1 != 8)
            *esi_1 = sub_1000305a()
        else
            var_34 = *(edi_1 + 0x64)
            *(edi_1 + 0x64) = 0x8c
        label_10006f47:
            
            if (arg1 != 8)
                *esi_1 = sub_1000305a()
            else
                for (int32_t i = data_100202f4; i s< data_100202f8 + data_100202f4; i += 1)
                    *(i * 0xc + *(edi_1 + 0x5c) + 8) = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_10006fa2(&__saved_ebp)
        
        if (arg1 != 8)
            eax_8(arg1)
        else
            int32_t var_48_2 = *(edi_1 + 0x64)
            eax_8(arg1)
        
        esp = &var_40
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            *(edi_1 + 0x60) = var_30
            
            if (arg1 == 8)
                *(edi_1 + 0x64) = var_34
        
        result = 0
else
    if (arg1 == 0x15)
        esi_1 = &data_100221e0
        eax_6 = data_100221e0
        goto label_10006ee3
    
    if (arg1 == 0x16)
    label_10006ec1:
        esi_1 = &data_100221e4
        eax_6 = data_100221e4
        goto label_10006ee3
    
label_10006eaa:
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    esp = &var_44
    result = 0xffffffff
*(esp - 4) = &data_10006fdd
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
