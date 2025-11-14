// 函数: sub_581fd0
// 地址: 0x581fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_15 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7309
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
char* var_5c = arg2
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_4 = 0
int32_t* eax_5 = arg1 + 4
int32_t var_60_1 = 1

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

int32_t* var_88 = eax_5
int32_t var_58
int32_t* eax_6 = sub_4691f0(&var_58, 0x6e5468)
int32_t var_4_1 = 1
char var_40
char* eax_7 = sub_581f40(&var_40, arg3)
var_4_1.b = 2
char var_28
char* eax_8 = sub_410a20(eax_7, eax_7, &var_28, eax_6)

if (arg2 != eax_8)
    if (*(arg2 + 0x14) u>= 0x10)
        j__free(*arg2)
    
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_4030b0(arg2, eax_8)

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

var_4_1.b = 0
int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58)

int32_t* eax_9 = *(arg1 + 0x30)

if (eax_9 == *(arg1 + 0x34))
label_582142:
    int32_t var_88_8 = 4
    sub_4057c0(arg2, "\n\n\n\n", 4)
else
    while (*eax_9 == 0)
        eax_9 = &eax_9[1]
        
        if (eax_9 == *(arg1 + 0x34))
            goto label_582142
    
    void** eax_13 = *(arg1 + 0x30)
    void* esi_2
    
    if (((*(arg1 + 0x34) - *(arg1 + 0x30)) & 0xfffffffc) s> 0 || eax_13 != *(arg1 + 0x34))
        esi_2 = *eax_13
    
    if ((((*(arg1 + 0x34) - *(arg1 + 0x30)) & 0xfffffffc) s<= 0 && eax_13 == *(arg1 + 0x34))
            || esi_2 == 0)
        int32_t var_88_17 = 4
        sub_4057c0(arg2, "\n\n\n\n", 4)
    else
        int32_t* ecx_5 = *(esi_2 + 0x10)
        int32_t ebp_2
        
        if (ecx_5 != 0)
            ebp_2 = (*(*ecx_5 + 0x10))(eax_4)
        else
            ebp_2 = 0
        
        int32_t* ecx_6 = *(esi_2 + 0x10)
        int32_t* var_68_2
        
        if (ecx_6 != 0)
            var_68_2 = (*(*ecx_6 + 0x14))(eax_4)
        else
            var_68_2 = ecx_6
        
        int32_t* ecx_7 = *(esi_2 + 0x10)
        char var_69_1
        
        if (ecx_7 != 0)
            var_69_1 = (*(*ecx_7 + 0x28))(eax_4)
        else
            var_69_1 = ecx_7.b
        
        int32_t var_88_9 = ebp_2
        int32_t var_4_2 = 3
        sub_403110(arg2, sub_4691f0(&var_58, 0x6e5568), nullptr, 0xffffffff)
        var_4_2.b = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)
        
        int32_t* var_88_11 = var_68_2
        int32_t var_4_3 = 4
        sub_403110(arg2, sub_4691f0(&var_58, 0x6e5564), nullptr, 0xffffffff)
        var_4_3.b = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)
        
        int32_t eax_23
        eax_23.b = var_69_1 != 0
        int32_t var_88_13 = eax_23
        int32_t var_4_4 = 5
        sub_403110(arg2, sub_4691f0(&var_58, 0x6e5560), nullptr, 0xffffffff)
        var_4_4.b = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)
        
        int32_t* eax_25 = sub_402bc0(&var_58, esi_2 + 0x18)
        int32_t var_4_5 = 6
        var_4_5.b = 7
        sub_403110(arg2, sub_410a80(eax_25.b, eax_25, &var_40, U"\n"), nullptr, 0xffffffff)
        
        if (var_2c_1 u>= 0x10)
            j__free(var_40.d)
        
        var_4_5.b = 0
        var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_40 = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)

void* eax_10 = *(arg1 + 0x3c)

if (eax_10 == 0)
    sub_4057c0(arg2, "\n\n\n\n", 4)
else
    int32_t* ecx_4 = *(eax_10 + 0x10)
    int32_t ebp_1
    
    if (ecx_4 != 0)
        ebp_1 = (*(*ecx_4 + 0x10))(eax_4)
    else
        ebp_1 = 0
    
    int32_t* ecx_14 = *(*(arg1 + 0x3c) + 0x10)
    int32_t esi_3
    
    if (ecx_14 != 0)
        esi_3 = (*(*ecx_14 + 0x14))(eax_4)
    else
        esi_3 = 0
    
    int32_t* ecx_15 = *(*(arg1 + 0x3c) + 0x10)
    char var_69_2
    
    if (ecx_15 != 0)
        var_69_2 = (*(*ecx_15 + 0x28))(eax_4)
    else
        var_69_2 = ecx_15.b
    
    int32_t var_88_18 = ebp_1
    int32_t var_4_6 = 8
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e5548), nullptr, 0xffffffff)
    var_4_6.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    int32_t var_88_20 = esi_3
    int32_t var_4_7 = 9
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e5544), nullptr, 0xffffffff)
    var_4_7.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    int32_t eax_38
    eax_38.b = var_69_2 != 0
    int32_t var_88_22 = eax_38
    int32_t var_4_8 = 0xa
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e5540), nullptr, 0xffffffff)
    var_4_8.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    char* eax_40 = sub_402bc0(&var_58, eax_10 + 0x18)
    int32_t var_4_9 = 0xb
    var_4_9.b = 0xc
    sub_403110(arg2, sub_410a80(eax_40.b, eax_40, &var_40, U"\n"), nullptr, 0xffffffff)
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    var_4_9.b = 0
    var_2c_1 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)

void* eax_42 = *(arg1 + 0x40)

if (eax_42 == 0)
    sub_4057c0(arg2, "\n\n\n\n", 4)
else
    int32_t* ecx_24 = *(eax_42 + 0x10)
    int32_t ebp_3
    
    if (ecx_24 != 0)
        ebp_3 = (*(*ecx_24 + 0x10))(eax_4)
    else
        ebp_3 = 0
    
    int32_t* ecx_25 = *(*(arg1 + 0x40) + 0x10)
    int32_t esi_4
    
    if (ecx_25 != 0)
        esi_4 = (*(*ecx_25 + 0x14))(eax_4)
    else
        esi_4 = 0
    
    int32_t* ecx_26 = *(*(arg1 + 0x40) + 0x10)
    char var_69_3
    
    if (ecx_26 != 0)
        var_69_3 = (*(*ecx_26 + 0x28))(eax_4)
    else
        var_69_3 = ecx_26.b
    
    int32_t var_88_26 = ebp_3
    int32_t var_4_10 = 0xd
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e5530), nullptr, 0xffffffff)
    var_4_10.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    int32_t var_88_28 = esi_4
    int32_t var_4_11 = 0xe
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e552c), nullptr, 0xffffffff)
    var_4_11.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    int32_t eax_54
    eax_54.b = var_69_3 != 0
    int32_t var_88_30 = eax_54
    int32_t var_4_12 = 0xf
    sub_403110(arg2, sub_4691f0(&var_58, 0x6e5528), nullptr, 0xffffffff)
    var_4_12.b = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)
    
    char* eax_56 = sub_402bc0(&var_58, eax_42 + 0x18)
    int32_t var_4_13 = 0x10
    var_4_13.b = 0x11
    sub_403110(arg2, sub_410a80(eax_56.b, eax_56, &var_40, U"\n"), nullptr, 0xffffffff)
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    var_4_13.b = 0
    int32_t var_2c_2 = 0xf
    int32_t var_30_3 = 0
    var_40 = 0
    
    if (var_44 u>= 0x10)
        j__free(var_58)

int32_t* i_1 = *(arg1 + 0x48)

if (i_1 != *(arg1 + 0x4c))
    for (int32_t* i = i_1; i != *(arg1 + 0x4c); i = &i[1])
        if (*i != 0)
            int32_t var_4_14 = 0x12
            sub_403110(arg2, sub_581fd0(&var_58, arg3 + 1), nullptr, 0xffffffff)
            var_4_14.b = 0
            
            if (var_44 u>= 0x10)
                j__free(var_58)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return arg2
