// 函数: sub_6a6388
// 地址: 0x6a6388
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x24
int32_t var_8 = 0x748080
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int32_t edi
int32_t var_44 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x748080 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_48 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_48
void* const var_4c_5 = &data_6a6394
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp = &var_48
int32_t var_30 = 0
int32_t var_34 = 0
int32_t ebx_1 = 0
int32_t var_24 = 0
uint32_t* edi_1 = nullptr
int32_t var_2c = 0
int32_t result
void* var_20_1
int32_t eax_6
int32_t eax_9

if (arg1 s<= 0xb)
    if (arg1 != 0xb)
        int32_t var_4c = 2
        esp = &var_48
        
        if (arg1 == 2)
            var_20_1 = &data_75d198
            eax_6 = data_75d198
            goto label_6a6449
        
        if (arg1 == 4)
            goto label_6a63ca
        
        if (arg1 == 6)
            goto label_6a641f
        
        if (arg1 != 8)
            goto label_6a6412
        
        goto label_6a63ca
    
label_6a63ca:
    edi_1 = sub_69fc72()
    uint32_t* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        esp = &var_48
        void* eax_8 = sub_6a6543(arg1, edi_1[0x17]) + 8
        var_20_1 = eax_8
        eax_9 = *eax_8
        goto label_6a645a
    
    result = 0xffffffff
else if (arg1 == 0xf)
    var_20_1 = &data_75d1a4
    eax_6 = data_75d1a4
label_6a6449:
    ebx_1 = 1
    int32_t var_24_1 = 1
    eax_9 = DecodePointer(eax_6)
    esp = &var_48
label_6a645a:
    
    if (eax_9 != 1)
        if (eax_9 == 0)
            __exit(3)
            noreturn
        
        if (ebx_1 != 0)
            __lock(0)
        
        int32_t var_8_1 = 0
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_6a64a6
        
        var_30 = edi_1[0x18]
        edi_1[0x18] = 0
        
        if (arg1 != 8)
            *var_20_1 = EncodePointer(nullptr)
        else
            var_34 = edi_1[0x19]
            edi_1[0x19] = 0x8c
        label_6a64a6:
            
            if (arg1 != 8)
                *var_20_1 = EncodePointer(nullptr)
            else
                int32_t i = 3
                int32_t var_38_1 = 3
                
                while (i s< 0xc)
                    *(edi_1[0x17] + i * 0xc + 8) = 0
                    i += 1
                    int32_t i_1 = i
        
        int32_t var_8_2 = 0xfffffffe
        $LN37()
        
        if (arg1 != 8)
            eax_9(arg1)
        else
            int32_t var_4c_3 = edi_1[0x19]
            eax_9(arg1)
        
        esp = &var_44
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            edi_1[0x18] = var_30
            
            if (arg1 == 8)
                edi_1[0x19] = var_34
    
    result = 0
else
    if (arg1 == 0x15)
        var_20_1 = &data_75d19c
        eax_6 = data_75d19c
        goto label_6a6449
    
    if (arg1 == 0x16)
    label_6a641f:
        var_20_1 = &data_75d1a0
        eax_6 = data_75d1a0
        goto label_6a6449
    
label_6a6412:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
*(esp - 4) = &data_6a6542
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
