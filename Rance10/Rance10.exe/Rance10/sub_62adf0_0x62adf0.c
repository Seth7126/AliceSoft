// 函数: sub_62adf0
// 地址: 0x62adf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0

if (arg2 == 0)
    void* edi_1 = *arg3
    int128_t* edi_2
    
    if (*edi_1 == 0x13)
        void* ecx_2 = data_7fcbb4
        
        if (ecx_2 != 0)
            void* eax_3 = sub_621720(ecx_2, *(edi_1 + 8))
            
            if (eax_3 != 0)
                int32_t edx_1 = *(edi_1 + 0xc)
                
                if (edx_1 u< *(eax_3 + 0x14) u>> 2)
                    edi_2 = *(eax_3 + 0x10) + (edx_1 << 2)
                else
                    edi_2 = nullptr
            else
                edi_2 = nullptr
        else
            edi_2 = nullptr
    else
        edi_2 = nullptr
    
    int32_t var_44_2 = sub_602ff0()
    void* var_2c
    char* eax_8 = sub_62af00(&var_2c, edi_2)
    int32_t var_8_1 = 0
    void* ecx_6 = data_7fcbb0
    *arg1 = 0xc
    arg1[2] = 0xffffffff
    
    if (ecx_6 != 0)
        char* var_44_3 = eax_8
        arg1[2] = sub_621930(ecx_6)
    
    if (arg1[2] s< 0)
        *arg1 = 0xffffffff
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
else
    sub_602420(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
