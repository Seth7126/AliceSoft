// 函数: sub_678520
// 地址: 0x678520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = sub_6746e0(arg2, arg3)
int32_t ebx = sub_674760(arg2, arg3)
int32_t eax_7 = sub_6747e0(arg2, arg3)
int32_t eax_8 = sub_674860(arg2, arg3)
int32_t eax_9 = sub_6748c0(arg2, arg3)
int32_t* var_28
sub_674920(&var_28, arg2, arg3)
int32_t var_4 = 0
int32_t* var_78 = nullptr
int32_t var_74 = 0
int32_t var_70 = 0
var_4.b = 1

if (arg2 s> 0)
    void* ebx_1 = data_75d4fc
    int32_t var_98_6 = arg2
    
    if (sub_4a55e0(ebx_1 + 0x178) != 0)
        int32_t var_98_7 = arg2
        struct partsengine::CPartsList::VTable** eax_11 = sub_4a52a0(ebx_1 + 0x178)
        
        if (eax_11 != 0)
            int32_t eax_12 = eax_11[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg2 s< eax_12 || eax_11[1] + eax_12 s<= arg2)
                vFunc_0 = nullptr
            label_678634:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &var_78, arg3)
            else
                vFunc_0 = eax_11[3][arg2 - eax_12].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_11, arg2)
                    goto label_678634
                
                sub_4a4f00(vFunc_0, &var_78, arg3)

int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_402110(&var_58, 0x702520, 0x18)
var_4.b = 2
sub_412d60(arg4, &var_58)
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_98_12 = eax_5
var_4.b = 3
sub_412d60(arg4, sub_4691f0(&var_58, 0x702508))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

var_4.b = 4
sub_412d60(arg4, sub_4691f0(&var_58, 0x7023cc))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_98_17 = eax_7
var_4.b = 5
sub_412d60(arg4, sub_4691f0(&var_58, 0x7023b4))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_98_20 = eax_7
var_4.b = 6
sub_412d60(arg4, sub_4691f0(&var_58, 0x702404))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_98_23 = eax_9
int32_t var_9c_8 = eax_8
var_4.b = 7
sub_412d60(arg4, sub_4691f0(&var_58, 0x7023e8))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t* eax_19 = &var_28
int32_t var_14

if (var_14 u>= 0x10)
    eax_19 = var_28

int32_t* var_98_26 = eax_19
var_4.b = 8
sub_412d60(arg4, sub_4691f0(&var_58, 0x702438))
var_4.b = 1

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_40
int32_t var_2c

if (ebx == 0)
    var_4.b = 9
    sub_412d60(arg4, sub_4691f0(&var_58, 0x70241c))
    var_4.b = 1
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
else if (ebx == 1)
    var_4.b = 0xa
    sub_412d60(arg4, sub_4691f0(&var_58, 0x702468))
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    var_58.d = 0
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    var_4.b = 0xb
    char eax_23 = sub_674a50(&var_58, arg2, arg3)
    void* ebx_2 = var_58.d
    
    if (eax_23 != 0 && ((var_54_1 - ebx_2) & 0xfffffffc) == 0x30)
        var_4.b = 0xc
        sub_412d60(arg4, sub_4691f0(&var_40, "===== "))
        var_4.b = 0xb
        sub_401fb0(&var_40)
        
        for (int32_t i = 0; i s< 0xa; i += 1)
            int32_t var_98_35 = *(ebx_2 + (i << 2))
            int32_t i_1 = i
            var_4.b = 0xd
            sub_412d60(arg4, sub_4691f0(&var_40, "%d                : %d px1"))
            var_4.b = 0xb
            
            if (var_2c u>= 0x10)
                j__free(var_40)
        
        int32_t var_98_38 = *(ebx_2 + 0x28)
        var_4.b = 0xe
        sub_412d60(arg4, sub_4691f0(&var_40, "-                : %d px1"))
        var_4.b = 0xb
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        int32_t var_98_41 = *(ebx_2 + 0x2c)
        var_4.b = 0xf
        sub_412d60(arg4, sub_4691f0(&var_40, ",                : %d px1"))
        
        if (var_2c u>= 0x10)
            j__free(var_40)
    
    var_4.b = 1
    
    if (ebx_2 != 0)
        j__free(ebx_2)

int32_t* ecx_23 = var_78
int32_t ebp_3 = (var_74 - ecx_23) s>> 2
*(arg1 + 0x38) = ebp_3
int32_t result

if (ecx_23 != var_74)
    result = *ecx_23
else
    result = 0

int32_t esi_1 = 0
*(arg1 + 0x1d0) = result

if (ebp_3 s> 0)
    do
        var_4.b = 0x10
        sub_412d60(arg4, sub_4691f0(&var_40, 0x702338))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        int32_t var_98_46 = esi_1 + 1
        var_4.b = 0x11
        sub_412d60(arg4, sub_4691f0(&var_40, "----- %3d "))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        int32_t var_98_49 = var_78[esi_1]
        var_4.b = 0x12
        result = sub_412d60(arg4, sub_4691f0(&var_40, 0x702358))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            result = j__free(var_40)
        
        esi_1 += 1
    while (esi_1 s< ebp_3)
    
    ecx_23 = var_78

if (ecx_23 != 0)
    result = j__free(ecx_23)
    var_78 = nullptr
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
