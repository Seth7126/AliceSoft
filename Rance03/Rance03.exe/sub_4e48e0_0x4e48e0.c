// 函数: sub_4e48e0
// 地址: 0x4e48e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c04fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t edx = arg2[4]
int32_t* var_20

if (arg2[5] u< 0x10)
    var_20 = arg2
else
    var_20 = *arg2

int32_t ecx = esi[0xf]
int32_t* var_1c

if (esi[0x10] u< 0x10)
    var_1c = &esi[0xb]
else
    var_1c = esi[0xb]

int32_t eax_5 = edx

if (ecx u< edx)
    eax_5 = ecx

int32_t eax_6 = sub_405190(eax_5, var_20, var_1c, eax_5)
bool cond:2 = eax_6 == 0

if (eax_6 == 0)
    int32_t ecx_2 = esi[0xf]
    int32_t edx_2 = arg2[4]
    
    if (ecx_2 u>= edx_2)
        eax_6.b = ecx_2 != edx_2
    else
        eax_6 = 0xffffffff
    
    cond:2 = eax_6 == 0

eax_6.b = cond:2
int32_t* ecx_3

if (eax_6.b != 0)
    ecx_3 = esi[0x11]

int32_t var_38_2

if (eax_6.b == 0 || ecx_3 == 0)
    int32_t* ecx_4 = esi[0x11]
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    struct apeg::CApegPlayer::VTable** eax_8 = sub_69adc6(0xa58)
    struct apeg::CApegPlayer::VTable** var_1c_1 = eax_8
    int32_t var_c_1 = 0
    struct apeg::CApegPlayer::VTable** eax_9
    
    if (eax_8 == 0)
        eax_9 = nullptr
    else
        eax_9 = sub_442a30(eax_8)
    
    int32_t var_c_2 = 0xffffffff
    esi[0x11] = eax_9
    
    if (sub_442d50(eax_9, arg2, arg3, arg4) != 0)
        char eax_12
        void** edi_1
        eax_12, esi, edi_1 = sub_4e4aa0(esi)
        
        if (eax_12 != 0)
            if (&data_4e4a10 != edi_1)
                sub_401ff0(&data_4e4a10, edi_1, 0, 0xffffffff)
            
            goto label_4e4a45
        
        var_38_2 = 0x6e1d70
    else
        var_38_2 = 0x6e1da4
else
    sub_443090(ecx_3, 0)
label_4e4a45:
    int32_t var_48_1 = (*(*esi + 0x54))((*(*esi + 0x58))(arg5, arg6, arg7, eax_2))
    int32_t var_4c_1 = 0
    int32_t var_50_1 = 0
    
    if (sub_506fb0(&esi[4]) != 0)
        void* eax_18 = esi[5]
        
        if (eax_18 != 0)
            *(eax_18 + 0xc0) = 1
        
        esi[0x12] = arg3
        esi[0x13] = arg4
        esi[0x14] = arg5
        int32_t eax_21
        eax_21.b = 1
        esi[0x15] = arg6
        esi[0x16] = arg7
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    var_38_2 = 0x6e1d34

sub_455870(var_38_2)
sub_4e4b30(esi)
struct _EXCEPTION_REGISTRATION_RECORD** eax_11
eax_11.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
