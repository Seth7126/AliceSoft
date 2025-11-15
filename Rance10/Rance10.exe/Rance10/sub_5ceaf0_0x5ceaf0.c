// 函数: sub_5ceaf0
// 地址: 0x5ceaf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740dac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_ac = ebx
int32_t esi
int32_t var_b0 = esi
int32_t edi
int32_t var_b4 = edi
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_9c = arg2
__Smtx_lock_shared(&arg1[0xd])
int32_t esi_1 = arg1[0xc]
__Smtx_unlock_shared(&arg1[0xd])
int32_t* esp_1 = &var_b8
void*** result

if (esi_1 != 0)
    int32_t var_90
    sub_404ea0(&var_90)
    int32_t var_8_1 = 0
    __Smtx_lock_shared(&arg1[0x11])
    void* esi_2 = arg1[0x10]
    __Smtx_unlock_shared(&arg1[0x11])
    int32_t esi_3 = *(esi_2 + 0x24)
    int32_t* var_bc_4 = &var_90
    void var_a4
    void*** var_c0 = &var_a4
    esp_1 = &var_b8
    int32_t* ebx_1
    
    if (*sub_5d4880(esi_2 + 0x24, var_c0, var_bc_4) == esi_3)
        char var_60
        sub_403360(&var_60, ".txt.ex")
        var_8_1.b = 1
        int32_t* esi_4 = var_9c
        void** var_48
        sub_4053d0(&var_60, esi_4, &var_48, &var_60)
        var_8_1.b = 3
        void* var_4c
        
        if (var_4c u>= 0x10)
            int32_t var_bc_7 = 1
            var_c0 = var_4c + 1
            sub_403160(var_60.d, var_c0, var_bc_7)
        
        char const* const var_bc_8 = ".txtex.ex"
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        var_60 = 0
        void* var_78
        sub_403360(&var_78, var_bc_8)
        var_8_1.b = 4
        int32_t* var_30
        sub_4053d0(&var_78, esi_4, &var_30, &var_78)
        void* var_64
        
        if (var_64 u>= 0x10)
            int32_t var_bc_10 = 1
            var_c0 = var_64 + 1
            sub_403160(var_78, var_c0, var_bc_10)
        
        int32_t* var_98 = nullptr
        SRWLOCK var_94 = 0
        var_8_1.b = 7
        __Smtx_lock_shared(&arg1[0xd])
        int32_t* edi_3 = arg1[0xc]
        __Smtx_unlock_shared(&arg1[0xd])
        void** edx_4 = &var_48
        void*** var_34
        
        if (var_34 u>= 0x10)
            edx_4 = var_48
        
        char eax_12 = (*(*edi_3 + 0x10))(edx_4)
        var_c0 = &arg1[0xd]
        int32_t var_1c
        char* eax_17
        
        if (eax_12 == 0)
            __Smtx_lock_shared(var_c0)
            int32_t* edi_5 = arg1[0xc]
            var_c0 = &arg1[0xd]
            __Smtx_unlock_shared(var_c0)
            int32_t** edx_7 = &var_30
            
            if (var_1c u>= 0x10)
                edx_7 = var_30
            
            int32_t eax_19 = *(*edi_5 + 0x10)
            var_c0 = edx_7
            
            if (eax_19(var_c0) == 0)
                ebx_1.b = 1
            else
                __Smtx_lock_shared(&arg1[0xd])
                int32_t* edi_6 = arg1[0xc]
                __Smtx_unlock_shared(&arg1[0xd])
                int32_t** edx_8 = &var_30
                
                if (var_1c u>= 0x10)
                    edx_8 = var_30
                
                sub_44cdb0(&var_98, (*(*edi_6 + 0xc))(edx_8))
                __Smtx_lock_shared(&var_94)
                ebx_1.b = var_98 != 0
                __Smtx_unlock_shared(&var_94)
                
                if (ebx_1.b != 0)
                    goto label_5cee1b
                
                int32_t* eax_23 = &var_30
                int32_t var_c4_14 = 0x76a684
                
                if (var_1c u>= 0x10)
                    eax_23 = var_30
                
                var_9c = eax_23
                sub_403360(&var_78, 0x76a684)
                var_8_1.b = 0xa
                eax_17 = sub_409240(&var_9c, &var_78, &var_60, &var_9c)
                var_8_1.b = 0xb
            label_5cedf8:
                sub_5e01e0(eax_17)
                sub_403320(&var_60)
                sub_403320(&var_78)
                ebx_1.b = 0
        else
            __Smtx_lock_shared(var_c0)
            int32_t* edi_4 = arg1[0xc]
            var_c0 = &arg1[0xd]
            __Smtx_unlock_shared(var_c0)
            int32_t eax_13 = *edi_4
            void** edx_5 = &var_48
            
            if (var_34 u>= 0x10)
                edx_5 = var_48
            
            var_c0 = edx_5
            sub_44cdb0(&var_98, (*(eax_13 + 0xc))(var_c0))
            __Smtx_lock_shared(&var_94)
            ebx_1.b = var_98 != 0
            __Smtx_unlock_shared(&var_94)
            
            if (ebx_1.b == 0)
                void*** eax_15 = &var_48
                int32_t var_c4_6 = 0x76a65c
                
                if (var_34 u>= 0x10)
                    eax_15 = var_48
                
                var_9c = eax_15
                sub_403360(&var_78, 0x76a65c)
                var_8_1.b = 8
                eax_17 = sub_409240(&var_9c, &var_78, &var_60, &var_9c)
                var_8_1.b = 9
                goto label_5cedf8
            
        label_5cee1b:
            __Smtx_lock_shared(&var_94)
            var_9c = var_98
            __Smtx_unlock_shared(&var_94)
            __Smtx_lock_shared(&var_94)
            ebx_1 = var_98
            __Smtx_unlock_shared(&var_94)
            __Smtx_lock_shared(&arg1[0x11])
            void* edi_8 = arg1[0x10]
            __Smtx_unlock_shared(&arg1[0x11])
            
            if (sub_5d4c20(edi_8, &var_90, (*(*ebx_1 + 0x18))((*(*var_9c + 0x14))())) != 0)
                ebx_1.b = 1
            else
                ebx_1.b = 0
        __seterrormode(&var_94)
        var_8_1.b = 0xc
        int32_t* ecx_22 = var_98
        
        if (ecx_22 != 0)
            var_98 = nullptr
            (*(*ecx_22 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_94)
        esp_1 = &var_c0
        
        if (var_1c u>= 0x10)
            int32_t var_c4_25 = 1
            sub_403160(var_30, var_1c + 1, 1)
            esp_1 = &var_c0
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        var_30.b = 0
        
        if (var_34 u>= 0x10)
            int32_t var_c4_26 = 1
            sub_403160(var_48, var_34 + 1, 1)
            esp_1 = &var_c0
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48.b = 0
    else
        ebx_1.b = 1
    
    int32_t var_7c
    
    if (var_7c u>= 0x10)
        *(esp_1 - 4) = 1
        *(esp_1 - 8) = var_7c + 1
        *(esp_1 - 0xc) = var_90
        sub_403160()
    
    result.b = ebx_1.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
