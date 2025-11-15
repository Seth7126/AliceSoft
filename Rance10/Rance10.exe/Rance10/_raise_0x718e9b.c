// 函数: _raise
// 地址: 0x718e9b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x2c
int32_t var_8 = 0x7de7a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_1 = __saved_ebp_4
int32_t ebx
int32_t var_44 = ebx
int32_t esi
int32_t var_48 = esi
int32_t edi
int32_t var_4c = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de7a0 ^ __security_cookie_1
int32_t __saved_ebp
void* eax_21 = __security_cookie_1 ^ &__saved_ebp
void* var_50 = eax_21
int32_t* var_1c = &var_50
void* const var_54 = &data_718ea7
int32_t var_8_4 = 0xfffffffe
int32_t var_c_1 = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx_1 = nullptr
int32_t var_30 = 0
int32_t var_38 = 0
void* const ecx
ecx.b = 1
char var_21 = 1
var_54 = 8
void* const* esp_1 = &var_50

if (arg1 s<= 8)
    if (arg1 == 8)
        goto label_718efa
    
    if (arg1 == 2)
        goto label_718eea
    
    if (arg1 == 4)
        goto label_718efa
    
    if (arg1 != 6)
        goto label_718f25
    
    goto label_718eea

int32_t result
int32_t* eax_6

if (arg1 == 0xb)
label_718efa:
    ebx_1 = ___acrt_getptd_noexit()
    void** var_30_1 = ebx_1
    
    if (ebx_1 != 0)
        var_54 = *ebx_1
        void* eax_8 = siglookup(arg1, var_54)
        esp_1 = &var_50
        ecx.b = eax_8 != 0
        
        if (ecx == 0)
            goto label_718f25
        
        eax_6 = eax_8 + 8
        ecx.b = 0
        var_21 = 0
        goto label_718f3d
    
    result = 0xffffffff
else if (arg1 == 0xf || (arg1 s> 0x14 && arg1 s<= 0x16))
label_718eea:
    var_54 = arg1
    eax_6 = get_global_action_nolock(var_54)
    esp_1 = &var_50
label_718f3d:
    int32_t var_34_1 = 0
    
    if (ecx.b != 0)
        var_54 = 3
        ___acrt_lock(var_54)
        esp_1 = &var_50
        ecx.b = var_21
    
    int32_t var_28_1 = 0
    char var_22_1 = 0
    int32_t var_8_1 = 0
    int32_t edx_2
    
    if (ecx.b == 0)
        edx_2 = *eax_6
    else
        uint32_t __security_cookie_2 = __security_cookie
        edx_2 = ror.d(__security_cookie_2 ^ *eax_6, (__security_cookie_2 & 0x1f).b)
        ecx.b = var_21
    
    char edx_3 = (edx_2 == 1).b
    char var_22_2 = edx_3
    
    if (edx_3 == 0)
        if (edx_2 == 0)
            if (ecx.b != 0)
                var_54 = 3
                ___acrt_unlock(var_54)
            
            var_54 = 3
            esp_1 = &var_54
            sub_7069cc(var_54)
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_718fdc
        
        var_34_1 = ebx_1[1]
        ebx_1[1] = 0
        
        if (arg1 != 8)
            *(esp_1 - 4) = 0x20
            *eax_6 = __security_cookie
        else
            var_38 = *sub_718e92()
            *sub_718e92() = 0x8c
        label_718fdc:
            
            if (arg1 != 8)
                *(esp_1 - 4) = 0x20
                *eax_6 = __security_cookie
            else
                void* eax_16 = 0x24 + *ebx_1
                void* ecx_3 = 0x6c + eax_16
                
                while (true)
                    void* var_40_1 = eax_16
                    
                    if (eax_16 == ecx_3)
                        break
                    
                    *(eax_16 + 8) = 0
                    eax_16 += 0xc
    
    int32_t var_8_2 = 0xfffffffe
    $LN39(&__saved_ebp)
    
    if (edx_3 == 0)
        void* esp_6
        
        if (arg1 != 8)
            *(esp_1 - 4) = arg1
            edx_2()
            esp_6 = esp_1
        else
            *(esp_1 - 4) = *(sub_714cce() + 8)
            *(esp_1 - 8) = 8
            edx_2()
            *(esp_1 - 4)
            esp_6 = esp_1
        
        *esp_6
        esp_1 = esp_6 + 4
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            ebx_1[1] = var_34_1
            
            if (arg1 == 8)
                *(sub_714cce() + 8) = var_38
    
    result = 0
else
label_718f25:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
*(esp_1 - 4) = &data_7190a2
@__security_check_cookie@4(eax_21 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_3 = *(esp_1 - 4)
return result
