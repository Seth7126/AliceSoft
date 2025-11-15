// 函数: sub_643be0
// 地址: 0x643be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7464e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0

if (arg2 == 0)
    *arg3
    void* var_2c
    char* eax_3 = sub_603290(&var_2c)
    int32_t var_8_1 = 0
    void* esi_1 = *arg3
    void* var_30_1 = esi_1 + 0xb0
    void* var_34_1 = esi_1 + 0xa0
    void* var_38_1 = esi_1 + 0x90
    void* var_3c_1 = esi_1 + 0x80
    void* var_40_1 = esi_1 + 0x70
    void* var_44_1 = esi_1 + 0x60
    void* var_48_1 = esi_1 + 0x50
    void* var_4c_1 = esi_1 + 0x40
    void* var_50_1 = esi_1 + 0x30
    void* var_54_1 = esi_1 + 0x20
    int32_t eax_14 = *(esi_1 + 0x10)
    int32_t* esi_2
    
    if (eax_14 == 0x12 || eax_14 == 0x33 || eax_14 == 0x5d)
        void* ecx_2 = data_7fcbb4
        
        if (ecx_2 != 0)
            void* eax_15 = sub_621720(ecx_2, *(esi_1 + 0x18))
            
            if (eax_15 != 0)
                int32_t edx_1 = *(esi_1 + 0x1c)
                
                if (edx_1 u< *(eax_15 + 0x14) u>> 2)
                    esi_2 = *(eax_15 + 0x10) + (edx_1 << 2)
                else
                    esi_2 = nullptr
            else
                esi_2 = nullptr
        else
            esi_2 = nullptr
    else
        esi_2 = nullptr
    
    int32_t eax_19 = sub_602ff0()
    int32_t eax_20 = sub_602ff0()
    int32_t eax_21 = sub_602ff0()
    int32_t ecx_8
    int32_t xmm0_1
    ecx_8, xmm0_1 = sub_603140()
    int32_t var_78_1 = ecx_8
    int32_t ecx_10
    int32_t xmm0_2
    ecx_10, xmm0_2 = sub_603140()
    int32_t var_7c_1 = ecx_10
    int32_t eax_22 = sub_602ff0()
    int32_t eax_23 = sub_602ff0()
    int32_t eax_24 = sub_602ff0()
    int32_t eax_25 = sub_602ff0()
    int32_t eax_26 = sub_602ff0()
    char eax_27 = sub_643fa0(eax_26, esi_2, eax_3, eax_26, eax_25, eax_24, eax_23, eax_22, xmm0_2, 
        xmm0_1, eax_21, eax_20, eax_19)
    *arg1 = 0x2f
    int32_t ecx_17
    ecx_17.b = eax_27 != 0
    arg1[1] = ecx_17
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
else
    sub_602420(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
