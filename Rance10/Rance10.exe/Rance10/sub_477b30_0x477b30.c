// 函数: sub_477b30
// 地址: 0x477b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e250
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_84 = 0
void* var_5c
char var_2c
char eax_22

if (arg2 == 0)
    *arg3
    char* eax_31 = sub_603290(&var_5c)
    int32_t var_8_3 = 0
    *arg3
    char* eax_32 = sub_603290(&var_2c)
    var_8_3.b = 1
    int32_t* eax_33 = data_7fcbb4
    int32_t* ecx_24
    int32_t* ebx_6
    
    if (eax_33 != 0)
        void* esi_2 = *arg3
        int32_t eax_34 = sub_622840(eax_33, *(esi_2 + 0x48))
        int32_t ebx_8 = neg.d(eax_34)
        ebx_6 = sbb.d(ebx_8, ebx_8, eax_34 != 0) & (eax_34 + 0x20)
        int32_t eax_35 = sub_622840(data_7fcbb4, *(esi_2 + 0x38))
        int32_t eax_36 = neg.d(eax_35)
        int32_t eax_39 = sub_6227b0(data_7fcbb4, *(esi_2 + 8))
        int32_t ecx_30 = neg.d(eax_39)
        ecx_24 = sbb.d(ecx_30, ecx_30, eax_39 != 0) & (eax_39 + 0x20)
        eax_33 = sbb.d(eax_36, eax_36, eax_35 != 0) & (eax_35 + 0x20)
    else
        ebx_6 = nullptr
        ecx_24 = nullptr
    
    eax_22 = sub_477df0(eax_33, eax_32, ecx_24, eax_31, eax_33, ebx_6)
label_477d7a:
    *arg1 = 0x2f
    int32_t ecx_32
    ecx_32.b = eax_22 != 0
    arg1[1] = ecx_32
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    var_2c = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0xf
    int32_t var_48
    
    if (var_48 u>= 0x10)
        int32_t var_98_18 = 1
        sub_403160(var_5c, var_48 + 1, 1)
else
    if (arg2 == 1)
        *arg3
        char* eax_19 = sub_603290(&var_5c)
        int32_t var_8_2 = 2
        *arg3
        char* eax_20 = sub_603290(&var_2c)
        var_8_2.b = 3
        int32_t* eax_21 = data_7fcbb4
        
        if (eax_21 != 0)
            void* esi_1 = *arg3
            int32_t eax_23 = sub_622840(eax_21, *(esi_1 + 0x48))
            int32_t ebx_3 = neg.d(eax_23)
            int32_t eax_24 = sub_622840(data_7fcbb4, *(esi_1 + 0x38))
            int32_t eax_25 = neg.d(eax_24)
            int32_t* eax_27 = sbb.d(eax_25, eax_25, eax_24 != 0) & (eax_24 + 0x20)
            int32_t eax_28 = sub_6227b0(data_7fcbb4, *(esi_1 + 8))
            int32_t ecx_17 = neg.d(eax_28)
            eax_22 = sub_478090(eax_27, eax_20, 
                sbb.d(ecx_17, ecx_17, eax_28 != 0) & (eax_28 + 0x20), eax_19, eax_27, 
                sbb.d(ebx_3, ebx_3, eax_23 != 0) & (eax_23 + 0x20))
        else
            eax_22 = sub_478090(eax_21, eax_20, nullptr, eax_19, eax_21, nullptr)
        
        goto label_477d7a
    
    if (arg2 == 2)
        *arg3
        void* var_74
        char* eax_7 = sub_603290(&var_74)
        int32_t var_8_1 = 4
        *arg3
        char var_44
        char* eax_8 = sub_603290(&var_44)
        var_8_1.b = 5
        void* ecx_4 = data_7fcbb4
        int32_t* eax_9
        
        if (ecx_4 != 0)
            int32_t eax_11 = sub_6227b0(ecx_4, *(*arg3 + 0x28))
            int32_t eax_12 = neg.d(eax_11)
            eax_9 = sbb.d(eax_12, eax_12, eax_11 != 0) & (eax_11 + 0x20)
        else
            eax_9 = nullptr
        
        char eax_14 = sub_478330(eax_9, eax_7, eax_8, eax_9)
        *arg1 = 0x2f
        int32_t ecx_7
        ecx_7.b = eax_14 != 0
        arg1[1] = ecx_7
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            int32_t var_98_5 = 1
            sub_403160(var_74, var_60 + 1, 1)
    else
        sub_602420(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
