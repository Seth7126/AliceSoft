// 函数: sub_5235f0
// 地址: 0x5235f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73941a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_4c

if (arg2[5] u< 0x10)
    var_4c = arg2
else
    var_4c = *arg2

int32_t* var_48

if (esi[0x24] u< 0x10)
    var_48 = &esi[0x1f]
else
    var_48 = esi[0x1f]

int32_t ecx = arg2[4]
int32_t eax_5 = ecx

if (esi[0x23] u< ecx)
    eax_5 = esi[0x23]

void* result

if (sub_406ac0(eax_5, var_4c, var_48, eax_5) != 0)
label_523684:
    int32_t* ecx_4 = esi[0x25]
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    struct apeg::CApegPlayer::VTable** eax_9 = sub_6e810c(0x9ec)
    struct apeg::CApegPlayer::VTable** var_48_1 = eax_9
    int32_t var_8_1 = 0
    struct apeg::CApegPlayer::VTable** eax_10 = sub_4356c0(eax_9)
    int32_t var_8_2 = 0xffffffff
    esi[0x25] = eax_10
    void* var_44
    
    if (sub_435a70(eax_10, arg2, arg3, arg4) != 0)
        char eax_14
        void** edi_1
        eax_14, esi, edi_1 = sub_523850(esi)
        
        if (eax_14 != 0)
            if (&data_523720 != edi_1)
                sub_403590(&data_523720, edi_1, 0, 0xffffffff)
            
            goto label_52378f
        
        sub_403360(&var_44, 0x766d38)
        int32_t var_8_5 = 2
        sub_45aae0(&var_44)
        int32_t var_8_6 = 0xffffffff
        sub_403320(&var_44)
        sub_5238f0(esi)
        result.b = 0
    else
        sub_403360(&var_44, 0x766d04)
        int32_t var_8_3 = 1
        sub_45aae0(&var_44)
        int32_t var_8_4 = 0xffffffff
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        sub_5238f0(esi)
        result.b = 0
else
    int32_t eax_7 = arg2[4]
    int32_t ecx_2 = esi[0x23]
    
    if (ecx_2 u< eax_7 || ecx_2 u> eax_7)
        goto label_523684
    
    int32_t* ecx_3 = esi[0x25]
    
    if (ecx_3 == 0)
        goto label_523684
    
    sub_435f60(ecx_3, 0)
label_52378f:
    
    if (sub_54f290(&esi[4], 0, 0, (*(*esi + 0x28))((*(*esi + 0x2c))(arg5, arg6, arg7, eax_2))) != 0)
        void* eax_22 = esi[4]
        
        if (eax_22 != 0)
            *(eax_22 + 0x114) = 1
        
        esi[0x26] = arg3
        esi[0x27] = arg4
        esi[0x28] = arg5
        result.b = 1
        esi[0x29] = arg6
        esi[0x2a] = arg7
    else
        char var_2c
        sub_403360(&var_2c, 0x766cb8)
        int32_t var_8_7 = 3
        sub_45aae0(&var_2c)
        int32_t var_8_8 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_5238f0(esi)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
