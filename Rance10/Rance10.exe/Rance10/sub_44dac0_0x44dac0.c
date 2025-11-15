// 函数: sub_44dac0
// 地址: 0x44dac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_72af78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_68 = esi
int32_t var_6c = eax_2
int32_t* esp_1 = &var_6c
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 4) != 0
int32_t* var_4c = 0xc8
int32_t result

if (cond:0)
    int32_t* var_70 = arg2
    int32_t var_3c
    sub_44d600(arg1, &var_3c, var_70)
    esp_1 = &var_6c
    int32_t var_14_1 = 0
    int32_t var_2c
    int32_t result_1
    
    if (var_2c != 0)
        struct filesystem::CFile::VTable* const var_64 = &filesystem::CFile::`vftable'
        int32_t var_60_1 = 0xffffffff
        int32_t var_5c_1 = 0
        int32_t* var_58_1 = nullptr
        var_14_1.b = 1
        var_70 = &var_3c
        char eax_4 = sub_67ed50(&var_64, var_70)
        esp_1 = &var_6c
        int32_t* esi_1
        
        if (eax_4 != 0)
            int32_t* var_50
            int32_t** ecx_1 = &var_50
            var_50 = var_58_1
            
            if (var_58_1 u>= 0xc8)
                ecx_1 = &var_4c
            
            esi_1 = *ecx_1
        
        if (eax_4 == 0 || esi_1 == 0)
            result_1 = 0
        else
            var_70 = 0x14
            int32_t* eax_6 = sub_6e810c(var_70)
            var_4c = eax_6
            __builtin_memset(eax_6, 0, 0x14)
            void var_54
            var_70 = sub_432270(&var_54, sub_42f870(eax_6))
            int32_t var_48 = 0
            int32_t var_44 = 0
            sub_4323a0(&var_48, var_70)
            var_14_1.b = 2
            sub_431b10(&var_54)
            var_70 = &var_44
            __Smtx_lock_shared(var_70)
            bool var_3d_1 = var_48 != 0
            var_70 = &var_44
            __Smtx_unlock_shared(var_70)
            esp_1 = &var_6c
            
            if (var_3d_1 == 0)
                result_1 = 0
                sub_431b10(&var_48)
            else
                int32_t* eax_9 = sub_431af0(&var_48)
                var_70 = esi_1
                (*(*eax_9 + 8))(var_70)
                esp_1 = &var_70
                
                if (sub_67f160(&var_64, (*(*sub_431af0(&var_48) + 0x18))(esi_1)) == 0)
                    result_1 = 0
                    sub_431b10(&var_48)
                else
                    result_1 = sub_431ac0(&var_48)
                    sub_431b10(&var_48)
        
        if (var_60_1 != 0xffffffff)
            *(esp_1 - 4) = var_60_1
            CloseHandle()
    else
        result_1 = 0
    
    int32_t var_28
    
    if (var_28 u>= 0x10)
        *(esp_1 - 4) = 1
        *(esp_1 - 8) = var_28 + 1
        *(esp_1 - 0xc) = var_3c
        sub_403160()
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
