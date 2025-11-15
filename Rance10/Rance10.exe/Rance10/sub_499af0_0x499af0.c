// 函数: sub_499af0
// 地址: 0x499af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73038a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable** 
    var_90 = arg1
int32_t ecx_1 = arg1[2] - arg1[1]
void** esi = arg2
void** var_94 = arg4
int32_t ecx_2 = arg1[4]
char* result
char var_74
char var_5c

if (ecx_2 s< ecx_1 s/ 0x30)
    arg1[4] = ecx_2 + 1
    struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable*** 
        edi_4 = ecx_2 * 0x30 + var_90[1]
    struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable** 
        var_44
    void var_3c
    char* eax_20
    
    if (sub_407560(esi, "DPAnalysis") != 0)
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_16 = data_7fcb34
        
        if (eax_16 == 0)
            struct 
                common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable*
                * eax_17 = sub_6e810c(0x54)
            var_90 = eax_17
            eax_16 = sub_418120(eax_17, arg3, var_94)
            data_7fcb34 = eax_16
        
        (*eax_16)->vFunc_0(eax_2)
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_18 = data_7fcb34
        *edi_4 = eax_18
        
        if (eax_18 == 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_90 = esi
            sub_403360(&var_5c, 0x760c10)
            int32_t var_8_2 = 2
            eax_20 = sub_409240(&var_90, &var_5c, &var_74, &var_90)
            var_8_2.b = 3
            goto label_499fee
        
        var_44 = eax_18
        var_90 = &var_3c
        int32_t* var_18_1 = nullptr
        int32_t var_8_3 = 4
        int32_t* ecx_11 = edi_4[0xb]
        
        if (ecx_11 != 0)
            var_18_1 = (**ecx_11)(&var_3c)
        
        int32_t var_8_4 = 5
        sub_49a720(&edi_4[2], &var_44)
        int32_t var_8_5 = 6
        
        if (var_18_1 != 0)
            (*(*var_18_1 + 0x10))(var_18_1 != &var_3c)
        
        int32_t var_8_6 = 0xffffffff
        goto label_499f4f
    
    if (sub_407560(esi, "DPVariable") != 0)
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_26 = sub_423200(arg3, var_94)
        *edi_4 = eax_26
        
        if (eax_26 == 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_90 = esi
            sub_403360(&var_5c, 0x760c44)
            int32_t var_8_7 = 7
            eax_20 = sub_409240(&var_90, &var_5c, &var_74, &var_90)
            var_8_7.b = 8
            goto label_499fee
        
        var_44 = eax_26
        var_90 = &var_3c
        int32_t var_18_2 = 0
        int32_t var_8_8 = 9
        int32_t* ecx_18 = edi_4[0xb]
        
        if (ecx_18 != 0)
            int32_t var_18_3 = (**ecx_18)(&var_3c)
        
        int32_t var_8_9 = 0xa
        sub_49a7f0(&edi_4[2], &var_44)
        int32_t var_8_10 = 0xffffffff
        Concurrency::message<uint32_t>::`scalar deleting destructor'(&var_44)
        goto label_499f4f
    
    if (sub_407560(esi, "DPParts") != 0)
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_31 = sub_6e810c(0x10)
        var_90 = eax_31
        var_44 = eax_31
        int32_t var_18_4 = 0
        eax_31[1] = 1
        *eax_31 =
            &dpparts::CDPParts::`vftable'{for `common::SuicideRefCounter<class IJaffaDebugPlugin>'}
        eax_31[2] = arg3
        eax_31[3] = 0
        *edi_4 = eax_31
        var_90 = &var_3c
        int32_t var_8_11 = 0xb
        int32_t* ecx_22 = edi_4[0xb]
        
        if (ecx_22 != 0)
            int32_t var_18_5 = (**ecx_22)(&var_3c)
        
        int32_t var_8_12 = 0xc
        sub_49a8c0(&edi_4[2], &var_44)
        int32_t var_8_13 = 0xffffffff
        Concurrency::message<uint32_t>::`scalar deleting destructor'(&var_44)
        goto label_499f4f
    
    if (sub_407560(esi, "DPLogViewer") != 0)
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dplogviewer::CDPLogViewer::VTable
            ** eax_35 = sub_6e810c(0x14)
        var_90 = eax_35
        int32_t var_8_14 = 0xd
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_36 = sub_41b5a0(eax_35, arg3)
        *edi_4 = eax_36
        var_44 = eax_36
        var_90 = &var_3c
        int32_t var_18_6 = 0
        int32_t var_8_15 = 0xe
        int32_t* ecx_27 = edi_4[0xb]
        
        if (ecx_27 != 0)
            int32_t var_18_7 = (**ecx_27)(&var_3c)
        
        int32_t var_8_16 = 0xf
        sub_49a990(&edi_4[2], &var_44)
        int32_t var_8_17 = 0xffffffff
        Concurrency::message<uint32_t>::`scalar deleting destructor'(&var_44)
        goto label_499f4f
    
    if (sub_407560(esi, "DPSound") == 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        var_90 = esi
        sub_403360(&var_5c, 0x760cc8)
        int32_t var_8_22 = 0x12
        eax_20 = sub_409240(&var_90, &var_5c, &var_74, &var_90)
        var_8_22.b = 0x13
    label_499fee:
        sub_6c52e0(eax_20)
        sub_403320(&var_74)
        sub_403320(&var_5c)
        result.b = 0
    else
        struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable**
             eax_40 = sub_6e810c(0x10)
        var_90 = eax_40
        var_44 = eax_40
        int32_t var_18_8 = 0
        eax_40[1] = 1
        *eax_40 =
            &dpsound::CDPSound::`vftable'{for `common::SuicideRefCounter<class IJaffaDebugPlugin>'}
        eax_40[2] = arg3
        eax_40[3] = 0
        *edi_4 = eax_40
        var_90 = &var_3c
        int32_t var_8_18 = 0x10
        int32_t* ecx_31 = edi_4[0xb]
        
        if (ecx_31 != 0)
            int32_t var_18_9 = (**ecx_31)(&var_3c)
        
        int32_t var_8_19 = 0x11
        sub_49aa60(&edi_4[2], &var_44)
        int32_t var_8_20 = 0xffffffff
        Concurrency::message<uint32_t>::`scalar deleting destructor'(&var_44)
    label_499f4f:
        
        if ((**edi_4)->vFunc_2(eax_2).b != 0)
            result.b = 1
        else
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_94 = esi
            void var_8c
            sub_403360(&var_8c, 0x760cf0)
            int32_t var_8_21 = 0x14
            var_8_21.b = 0x15
            void var_2c
            sub_6c52e0(sub_409240(&var_94, &var_8c, &var_2c, &var_94))
            sub_403320(&var_2c)
            sub_403320(&var_8c)
            result.b = 0
else
    char* var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_8_1 = 0
    var_8_1.b = 1
    sub_6c52e0(sub_409350(sub_403490(&var_74, 0x760bd0, 0x32), &var_74, &var_5c, &arg1[4]))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_60_1 u>= 0x10)
        sub_403160(var_74.d, &var_60_1[1], 1)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
