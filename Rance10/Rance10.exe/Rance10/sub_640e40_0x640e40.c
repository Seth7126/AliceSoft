// 函数: sub_640e40
// 地址: 0x640e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7462d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *(arg1 + 8)

if (esi_1 != 0)
    float xmm0_2 = sub_4a78b0(*(arg3 + 0x1c))
    int32_t edx_1 = *(arg3 + 8)
    int32_t ecx = edx_1
    int32_t eax_4 = int.d(xmm0_2)
    
    if (eax_4 s< edx_1)
        ecx = eax_4
    
    int32_t ecx_1 = edx_1
    int32_t eax_5 = int.d(sub_4a78b0(*(arg3 + 0x20)))
    
    if (eax_5 s< ecx_1)
        ecx_1 = eax_5
    
    int32_t edx_2 = ecx_1
    
    if (ecx s> ecx_1)
        edx_2 = ecx
    
    SRWLOCK var_20 = edx_2
    int32_t* var_50
    void* eax_33
    void* ecx_23
    int32_t* esp_1
    int32_t* edi_6
    
    if (ecx_1 s<= 0 || ecx_1 s<= ecx)
        int32_t esi_9 = *esi_1
        var_50 = nullptr
        edi_6 = arg2
        var_50 = (*(*edi_6 + 0x14))(*(arg3 + 0xc), *(arg3 + 0x10), *(arg3 + 0x14), var_50)
        int32_t* eax_56 = (*(*edi_6 + 0x10))(var_50)
        *(arg1 + 8)
        var_50 = eax_56
        int32_t var_54_17 = 0
        int32_t var_58_12 = 0
        (*(esi_9 + 0x64))(edi_6, 0, 0, var_50)
        esp_1 = &var_4c
        eax_33 = arg1 + 0x54
        ecx_23 = arg1
        
        if (ecx s<= 0)
            eax_33 = arg1 + 0xc
        
        goto label_641175
    
    int32_t esi_2 = *esi_1
    var_50 = nullptr
    var_50 = (*(*arg2 + 0x14))(*(arg3 + 0x24), *(arg3 + 0x28), *(arg3 + 0x2c), var_50)
    int32_t* eax_10 = (*(*arg2 + 0x10))(var_50)
    *(arg1 + 8)
    var_50 = eax_10
    int32_t var_54_2 = 0
    int32_t var_58_2 = 0
    (*(esi_2 + 0x64))(arg2, 0, 0, var_50)
    int32_t* ecx_5 = *(arg1 + 4)
    var_50 = 0x20
    int32_t edi_3 = *ecx_5
    void* ebx
    
    if (ecx s<= 0)
        *(arg1 + 0x48)
        void var_1c
        int32_t* eax_41 = sub_432270(&var_1c, 
            (*(edi_3 + 8))(divs.dp.d(sx.q(*(arg1 + 0x40)), *(arg1 + 0x48)), 
                divs.dp.d(sx.q(*(arg1 + 0x44)), *(arg1 + 0x48))))
        int32_t var_24 = 0
        __builtin_memset(&var_20, 0, 4)
        sub_4323a0(&var_24, eax_41)
        int32_t var_8_3 = 1
        sub_431b10(&var_1c)
        __Smtx_lock_shared(&var_20)
        ebx.b = var_24 != 0
        int32_t ecx_27 = __Smtx_unlock_shared(&var_20)
        
        if (ebx.b == 0)
            sub_431b10(&var_24)
            int32_t eax_42
            eax_42.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_42
        
        int32_t var_58_7 = ecx_27
        sub_63e430(arg1, sub_431af0(&var_24), arg1 + 0xc)
        int32_t* eax_45 = sub_431af0(&var_24)
        int32_t* eax_46 = sub_431af0(&var_24)
        int32_t ebx_5 = **(arg1 + 8)
        int32_t eax_51
        int32_t ecx_38
        eax_51, ecx_38 =
            (*(*eax_46 + 0x10))((*(*eax_45 + 0x14))(*(arg3 + 0xc), *(arg3 + 0x10), *(arg3 + 0x14)))
        int32_t var_58_10 = 0
        int32_t var_5c_6 = 0
        int32_t var_60_2 = ecx_38
        int32_t eax_52 = sub_431af0(&var_24)
        edi_6 = arg2
        *(arg1 + 8)
        (*(ebx_5 + 0x20))(edi_6, ecx_1, ecx_1, eax_52, 0, 0, eax_51)
        esp_1 = &var_50
        int32_t var_8_4 = 0xffffffff
        sub_431b10(&var_24)
        eax_33 = arg1 + 0x9c
        ecx_23 = arg1
        goto label_641175
    
    *(arg1 + 0x48)
    void var_38
    var_50 = sub_432270(&var_38, 
        (*(edi_3 + 8))(divs.dp.d(sx.q(*(arg1 + 0x78)), *(arg1 + 0x48)), 
            divs.dp.d(sx.q(*(arg1 + 0x7c)), *(arg1 + 0x48))))
    int32_t var_30 = 0
    int32_t var_2c = 0
    sub_4323a0(&var_30, var_50)
    int32_t var_8_1 = 0
    sub_431b10(&var_38)
    var_50 = &var_2c
    __Smtx_lock_shared(var_50)
    ebx.b = var_30 != 0
    var_50 = &var_2c
    int32_t ecx_9 = __Smtx_unlock_shared(var_50)
    
    if (ebx.b != 0)
        var_50 = arg1 + 0x54
        int32_t var_54_4 = ecx_9
        sub_63e430(arg1, sub_431af0(&var_30), var_50)
        var_20 -= ecx
        int32_t* eax_23 = sub_431af0(&var_30)
        int32_t* eax_24 = sub_431af0(&var_30)
        int32_t edx_7 = *eax_23
        int32_t eax_25 = **(arg1 + 8)
        var_50 = *(arg3 + 0x14)
        var_50 = (*(edx_7 + 0x14))(*(arg3 + 0xc), *(arg3 + 0x10), var_50)
        int32_t* eax_29
        int32_t ecx_19
        eax_29, ecx_19 = (*(*eax_24 + 0x10))(var_50)
        var_50 = eax_29
        int32_t var_54_7 = 0
        int32_t var_58_5 = 0
        int32_t var_5c_3 = ecx_19
        int32_t eax_30 = sub_431af0(&var_30)
        edi_6 = arg2
        SRWLOCK eax_31 = var_20
        (*(eax_25 + 0x20))(edi_6, eax_31, eax_31, eax_30, 0, 0, var_50)
        esp_1 = &var_4c
        int32_t var_8_2 = 0xffffffff
        sub_431b10(&var_30)
        ecx_23 = arg1
        eax_33 = arg1 + 0x9c
    label_641175:
        *(esp_1 - 4) = eax_33
        *(esp_1 - 8) = edi_6
        sub_63e430(ecx_23)
        int32_t eax_57
        eax_57.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        *esp_1
        esp_1[1]
        esp_1[2]
        esp_1[3]
        return eax_57
    
    sub_431b10(&var_30)

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
