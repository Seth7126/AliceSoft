// 函数: sub_62b000
// 地址: 0x62b000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0

if (arg2 == 0)
    int32_t* edi_1 = *arg3
    int32_t eax_3 = *edi_1
    int32_t* edx_1
    
    if (eax_3 == 0x12 || eax_3 == 0x33 || eax_3 == 0x5d)
        void* ecx_2 = data_7fcbb4
        
        if (ecx_2 != 0)
            void* eax_4 = sub_621720(ecx_2, edi_1[2])
            
            if (eax_4 != 0)
                int32_t edx_2 = edi_1[3]
                
                if (edx_2 u< *(eax_4 + 0x14) u>> 2)
                    edx_1 = *(eax_4 + 0x10) + (edx_2 << 2)
                else
                    edx_1 = nullptr
            else
                edx_1 = nullptr
        else
            edx_1 = nullptr
    else
        edx_1 = nullptr
    
    void* var_2c
    char* eax_8 = sub_62b110(&var_2c, edx_1)
    int32_t var_8_1 = 0
    void* ecx_5 = data_7fcbb0
    *arg1 = 0xc
    arg1[2] = 0xffffffff
    
    if (ecx_5 != 0)
        char* var_40_2 = eax_8
        arg1[2] = sub_621930(ecx_5)
    
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
