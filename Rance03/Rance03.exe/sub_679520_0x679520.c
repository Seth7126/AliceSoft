// 函数: sub_679520
// 地址: 0x679520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_4 = 0

if (arg2 s> 0)
    void* ebp_1 = data_75d4fc
    int32_t var_70_1 = arg2
    
    if (sub_4a55e0(ebp_1 + 0x178) != 0)
        int32_t var_70_2 = arg2
        struct partsengine::CPartsList::VTable** eax_6 = sub_4a52a0(ebp_1 + 0x178)
        
        if (eax_6 != 0)
            int32_t eax_7 = eax_6[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg2 s< eax_7 || eax_6[1] + eax_7 s<= arg2)
                vFunc_0 = nullptr
            label_6795d8:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &result_1, arg3)
            else
                vFunc_0 = eax_6[3][arg2 - eax_7].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_6, arg2)
                    goto label_6795d8
                
                sub_4a4f00(vFunc_0, &result_1, arg3)

int32_t* var_28
sub_674b90(&var_28, arg2, arg3)
var_4.b = 1
char var_56

if (arg2 s<= 0)
    var_56 = 0
else
    void* ebp_2 = data_75d4fc
    int32_t var_70_6 = arg2
    
    if (sub_4a55e0(ebp_2 + 0x178) == 0)
        var_56 = 0
    else
        int32_t var_70_7 = arg2
        
        if (sub_4a55e0(ebp_2 + 0x178) == 0)
            var_56 = 0
        else
            int32_t eax_11
            eax_11.b = sub_4f0040(arg2, arg3) == 0x14
            
            if (eax_11.b == 0)
                var_56 = 0
            else
                var_56 = sub_4f99e0(arg2, arg3)

char eax_13 = sub_674d70(arg2, arg3)
void* eax_14 = sub_674cb0(arg2, arg3)
int32_t eax_15 = sub_674d10(arg2, arg3)
int32_t ebp_5 = (var_50 - result_1) s>> 2
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x702780, 0x1c)
var_4.b = 2
sub_412d60(arg4, &var_40)
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_16 = &var_28
int32_t var_14

if (var_14 u>= 0x10)
    eax_16 = var_28

int32_t* var_70_13 = eax_16
var_4.b = 3
sub_412d60(arg4, sub_4691f0(&var_40, 0x702768))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t eax_18 = 0x702674

if (var_56 == 0)
    eax_18 = 0x70266c

int32_t var_70_16 = eax_18
var_4.b = 4
sub_412d60(arg4, sub_4691f0(&var_40, 0x702684))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t eax_20 = 0x70267c

if (eax_13 == 0)
    eax_20 = 0x7026b4

int32_t var_70_19 = eax_20
var_4.b = 5
sub_412d60(arg4, sub_4691f0(&var_40, 0x70269c))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

void* var_70_22 = eax_14
var_4.b = 6
sub_412d60(arg4, sub_4691f0(&var_40, 0x7026d4))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_70_25 = eax_15
var_4.b = 7
sub_412d60(arg4, sub_4691f0(&var_40, 0x7026bc))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_70_28 = eax_15
var_4.b = 8
sub_412d60(arg4, sub_4691f0(&var_40, 0x7025ec))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_70_31 = ebp_5
var_4.b = 9
sub_412d60(arg4, sub_4691f0(&var_40, 0x7025d4))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* result = result_1
*(arg1 + 0x38) = ebp_5
int32_t ecx_21

if (result != var_50)
    ecx_21 = *result
else
    ecx_21 = 0

int32_t esi_2 = 0
*(arg1 + 0x1d0) = ecx_21

if (ebp_5 s> 0)
    do
        var_4.b = 0xa
        sub_412d60(arg4, sub_4691f0(&var_40, 0x70261c))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_70_36 = esi_2 + 1
        var_4.b = 0xb
        sub_412d60(arg4, sub_4691f0(&var_40, "----- %3d "))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_70_39 = result_1[esi_2]
        var_4.b = 0xc
        sub_412d60(arg4, sub_4691f0(&var_40, 0x702634))
        var_4.b = 1
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        esi_2 += 1
    while (esi_2 s< ebp_5)
    
    result = result_1

if (var_14 u>= 0x10)
    j__free(var_28)
    result = result_1

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28.b = 0

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
