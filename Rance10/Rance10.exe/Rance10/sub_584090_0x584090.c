// 函数: sub_584090
// 地址: 0x584090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_164 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_48 = arg1
int32_t ecx = arg1[0x93]
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    int32_t eax_3 = *arg1
    char var_4c_1
    
    if (eax_3 != 0xa)
        var_4c_1 = 1
    
    if (eax_3 == 0xa || eax_3 == 0xb)
        var_4c_1 = 0
    
    int32_t var_168_1 = var_4c_1.d
    void* ebx_1 = &arg1[1]
    var_4c_1.d = &arg1[0x7f]
    int32_t* var_54
    sub_5688b0(&arg1[0x7f], sub_5cc120(ecx, &var_54, ebx_1))
    SRWLOCK var_50
    __seterrormode(&var_50)
    int32_t var_8_1 = 0
    int32_t* ecx_2 = var_54
    
    if (ecx_2 != 0)
        var_54 = nullptr
        int32_t edx_1 = ecx_2[1]
        ecx_2[1] -= 1
        (**ecx_2)(edx_1 - 1)
    
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(&var_50)
    __Smtx_lock_shared(&arg1[0x80])
    int32_t esi_2 = arg1[0x7f]
    __Smtx_unlock_shared(&arg1[0x80])
    void* var_44
    char var_2c
    
    if (esi_2 != 0)
        int32_t* edi_2 = var_4c_1.d
        __Smtx_lock_shared(&edi_2[1])
        void* edi_3 = *edi_2
        __Smtx_unlock_shared(&edi_2[1])
        void* esi_4 = var_48
        char* eax_14
        
        if (sub_5d8f00(esi_4 + 0x120, edi_3, *(esi_4 + 0x24c)) == 0)
            if (*(ebx_1 + 0x14) u>= 0x10)
                ebx_1 = *ebx_1
            
            var_48 = ebx_1
            sub_403360(&var_44, 0x7681b4)
            int32_t var_8_4 = 3
            eax_14 = sub_409240(&var_48, &var_44, &var_2c, &var_48)
            var_8_4.b = 4
            goto label_584258
        
        sub_581f00(esi_4)
        int32_t* esi_5 = var_4c_1.d
        __Smtx_lock_shared(&esi_5[1])
        void* esi_6 = *esi_5
        __Smtx_unlock_shared(&esi_5[1])
        char eax_15 = sub_5bc580(esi_6)
        char eax_16
        
        if (eax_15 != 0)
            void* ecx_14 = var_48
            void* var_168_15 = ecx_14
            eax_16 = sub_563ed0(*(ecx_14 + 0x210))
        
        if (eax_15 == 0 || eax_16 != 0)
            int32_t* ebx_2 = var_4c_1.d
            __Smtx_lock_shared(&ebx_2[1])
            void* esi_7 = *ebx_2
            __Smtx_unlock_shared(&ebx_2[1])
            int32_t var_16c_5 = *(esi_7 + 0x2c)
            int32_t var_170_4 = *(esi_7 + 0x28)
            int32_t var_174_1 = *(esi_7 + 0x24)
            void var_94
            sub_561770(&var_94)
            __Smtx_lock_shared(&ebx_2[1])
            void* esi_8 = *ebx_2
            __Smtx_unlock_shared(&ebx_2[1])
            int32_t xmm1_1 = *(esi_8 + 0x30)
            void var_d4
            void* ecx_19 = &var_d4
            int32_t var_17c_1 = xmm1_1
            int32_t var_190_1 = xmm1_1
            sub_5868a0(ecx_19, xmm1_1)
            void var_154
            void var_114
            int32_t* eax_19 = sub_4ba000(sub_586bc0(ecx_19, &var_154, &var_94), &var_114)
            void* ebx_3 = var_48
            *(ebx_3 + 0x1c) = *eax_19
            *(ebx_3 + 0x2c) = *(eax_19 + 0x10)
            *(ebx_3 + 0x3c) = *(eax_19 + 0x20)
            *(ebx_3 + 0x4c) = *(eax_19 + 0x30)
            __Smtx_lock_shared(ebx_3 + 0x200)
            void* esi_9 = *(ebx_3 + 0x1fc)
            __Smtx_unlock_shared(ebx_3 + 0x200)
            *(ebx_3 + 0x23c) = *(esi_9 + 0x34)
            int32_t ecx_21
            ecx_21.b = 0
            char temp0_2 = *(ebx_3 + 0x204)
            *(ebx_3 + 0x204) = nullptr
            ecx_21.b = temp0_2
            result.b = 1
        else
            if (*(ebx_1 + 0x14) u>= 0x10)
                ebx_1 = *ebx_1
            
            var_48 = ebx_1
            sub_403360(&var_44, 0x7682d0)
            int32_t var_8_5 = 5
            eax_14 = sub_409240(&var_48, &var_44, &var_2c, &var_48)
            var_8_5.b = 6
        label_584258:
            sub_5e01e0(eax_14)
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result.b = 0
    else
        if (*(ebx_1 + 0x14) u>= 0x10)
            ebx_1 = *ebx_1
        
        var_48 = ebx_1
        sub_403360(&var_44, 0x768184)
        int32_t var_8_3 = 1
        var_8_3.b = 2
        sub_5e01e0(sub_409240(&var_48, &var_44, &var_2c, &var_48))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
