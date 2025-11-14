// 函数: sub_6774f0
// 地址: 0x6774f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d04d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x701d88, 0x16)
int32_t var_4 = 0
sub_412d60(arg4, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0
sub_402110(&var_40, 0x702210, 1)
int32_t var_4_2 = 1
sub_412d60(arg4, &var_40)

if (var_2c_1 u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_2 = 0xf
int32_t var_30_2 = 0
var_40 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4_3 = 2
int32_t* var_50 = nullptr
int32_t var_4c = 0
int32_t var_48 = 0
var_4_3.b = 3

if (arg2 s> 0)
    void* edi_1 = data_75d4fc
    int32_t var_98_4 = arg2
    
    if (sub_4a55e0(edi_1 + 0x178) != 0)
        int32_t var_98_5 = arg2
        struct partsengine::CPartsList::VTable** eax_6 = sub_4a52a0(edi_1 + 0x178)
        
        if (eax_6 != 0)
            int32_t eax_7 = eax_6[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg2 s< eax_7 || eax_6[1] + eax_7 s<= arg2)
                vFunc_0 = nullptr
            label_677695:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &var_50, arg3)
            else
                vFunc_0 = eax_6[3][arg2 - eax_7].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_6, arg2)
                    goto label_677695
                
                sub_4a4f00(vFunc_0, &var_50, arg3)

int32_t var_7c
int32_t var_78
int32_t var_74
int32_t var_70
int32_t var_6c
int32_t var_68
int32_t var_64
int32_t var_60
int32_t var_5c
int32_t var_58
int32_t var_54
sub_673f60(arg2, arg3, &var_64, &var_6c, &var_74, &var_7c, &var_80, &var_5c, &var_68, &var_54, 
    &var_70, &var_58, &var_78, &var_60)
int32_t var_2c_3 = 0xf
int32_t var_30_3 = 0
var_40 = 0
sub_402110(&var_40, "----- ", 0x19)
var_4_3.b = 4
sub_412d60(arg4, &var_40)
var_4_3.b = 3

if (var_2c_3 u>= 0x10)
    j__free(var_40.d)

sub_677bc0(arg4, var_64, var_6c, var_74, var_7c, var_80, var_5c, var_68, var_54, var_70, var_58, 
    var_78, var_60)
int32_t var_2c_4 = 0xf
int32_t var_30_4 = 0
var_40 = 0
sub_402110(&var_40, 0x702230, 1)
var_4_3.b = 5
sub_412d60(arg4, &var_40)
var_4_3.b = 3

if (var_2c_4 u>= 0x10)
    j__free(var_40.d)

int32_t edi_2 = 0

if (sub_674110(arg2, arg3, 0, &var_64, &var_6c, &var_74, &var_7c, &var_80, &var_5c, &var_68, 
        &var_54, &var_70, &var_58, &var_78, &var_60, &var_28) != 0)
    char i
    
    do
        edi_2 += 1
        int32_t var_98_15 = edi_2
        var_4_3.b = 6
        sub_412d60(arg4, sub_4691f0(&var_40, "----- "))
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            j__free(var_40.d)
        
        char* eax_11 = &var_28
        
        if (var_14 u>= 0x10)
            eax_11 = var_28.d
        
        char* var_98_18 = eax_11
        var_4_3.b = 7
        sub_412d60(arg4, sub_4691f0(&var_40, 0x702238))
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            j__free(var_40.d)
        
        sub_677bc0(arg4, var_64, var_6c, var_74, var_7c, var_80, var_5c, var_68, var_54, var_70, 
            var_58, var_78, var_60)
        var_2c_4 = 0xf
        int32_t var_30_5 = 0
        var_40 = 0
        sub_402110(&var_40, 0x702234, 1)
        var_4_3.b = 8
        sub_412d60(arg4, &var_40)
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            j__free(var_40.d)
        
        i = sub_674110(arg2, arg3, edi_2, &var_64, &var_6c, &var_74, &var_7c, &var_80, &var_5c, 
            &var_68, &var_54, &var_70, &var_58, &var_78, &var_60, &var_28)
    while (i != 0)

int32_t* ecx_20 = var_50
int32_t ebp_3 = (var_4c - ecx_20) s>> 2
*(arg1 + 0x38) = ebp_3
int32_t result

if (ecx_20 != var_4c)
    result = *ecx_20
else
    result = 0

int32_t edi_3 = 0
*(arg1 + 0x1d0) = result

if (ebp_3 s> 0)
    do
        var_4_3.b = 9
        sub_412d60(arg4, sub_4691f0(&var_40, 0x702264))
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_98_27 = edi_3 + 1
        var_4_3.b = 0xa
        sub_412d60(arg4, sub_4691f0(&var_40, "----- %3d "))
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_98_30 = var_50[edi_3]
        var_4_3.b = 0xb
        result = sub_412d60(arg4, sub_4691f0(&var_40, 0x702184))
        var_4_3.b = 3
        
        if (var_2c_4 u>= 0x10)
            result = j__free(var_40.d)
        
        edi_3 += 1
    while (edi_3 s< ebp_3)
    
    ecx_20 = var_50

if (ecx_20 != 0)
    result = j__free(ecx_20)
    var_50 = nullptr
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
