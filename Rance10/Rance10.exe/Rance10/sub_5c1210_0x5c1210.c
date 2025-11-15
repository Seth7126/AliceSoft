// 函数: sub_5c1210
// 地址: 0x5c1210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fe69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
int32_t* var_9c = arg2
arg2[4] = 0
arg2[5] = 0
arg2[5] = 0xf
bool cond:0 = arg2[5] u< 0x10
arg2[4] = 0
char* eax_4

if (cond:0)
    eax_4 = arg2
else
    eax_4 = *arg2

*eax_4 = 0
int32_t var_8_1 = 0
int32_t var_98_1 = 1
int32_t* eax_5

if (arg1[5] u< 0x10)
    eax_5 = arg1
else
    eax_5 = *arg1

int32_t* var_7c = eax_5
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "%s\n", 3)
int32_t var_8_2 = 1
char var_2c[0x10]
char* eax_7 = sub_409240(&var_7c, &var_44, &var_2c, &var_7c)
var_8_2.b = 2
char var_5c
char* eax_8 = sub_5c11d0(&var_5c, arg3)
var_8_2.b = 3
char var_74[0x10]
char* eax_9 = sub_4177a0(eax_8, eax_8, &var_74, eax_7)

if (arg2 != eax_9)
    if (arg2[5] u>= 0x10)
        sub_403160(*arg2, arg2[5] + 1, 1)
    
    arg2[5] = 0xf
    bool cond:2_1 = arg2[5] u< 0x10
    arg2[4] = 0
    char* eax_12
    
    if (cond:2_1)
        eax_12 = arg2
    else
        eax_12 = *arg2
    
    *eax_12 = 0
    sub_4056a0(arg2, eax_9)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c[0].d, var_18 + 1, 1)

var_8_2.b = 0
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c[0] = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t* eax_21 = arg1[0xa]
int32_t ecx_4 = arg1[0xb]
void* var_88
void* var_84
int32_t* var_80

if (eax_21 == ecx_4)
label_5c1405:
    sub_407430(arg2, "\n\n\n\n", 4)
else
    while (*eax_21 == 0)
        eax_21 = &eax_21[2]
        
        if (eax_21 == ecx_4)
            goto label_5c1405
    
    int32_t* var_8c
    sub_57e3e0(&arg1[0xa], &var_8c, 0)
    int32_t var_8_3 = 5
    int32_t* esi_4 = var_8c
    
    if (esi_4 == 0)
        sub_407430(arg2, "\n\n\n\n", 4)
    else
        var_7c = sub_57dce0(esi_4)
        var_84 = sub_57dd30(esi_4)
        char eax_28 = sub_57dc30(esi_4)
        sub_403360(&var_5c, "%d\n")
        var_8_3.b = 6
        var_8_3.b = 7
        sub_4055a0(arg2, sub_409350(&var_7c, &var_5c, &var_2c, &var_7c), 0, 0xffffffff)
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c[0].d, var_18_1 + 1, 1)
        
        var_8_3.b = 5
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c[0] = 0
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
        
        sub_403360(&var_5c, "%d\n")
        var_8_3.b = 8
        var_8_3.b = 9
        sub_4055a0(arg2, sub_409350(&var_84, &var_5c, &var_2c, &var_84), 0, 0xffffffff)
        
        if (var_18_2 u>= 0x10)
            sub_403160(var_2c[0].d, var_18_2 + 1, 1)
        
        var_8_3.b = 5
        int32_t var_18_3 = 0xf
        int32_t var_1c_2 = 0
        var_2c[0] = 0
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
        
        int32_t* eax_41
        eax_41.b = eax_28 != 0
        var_80 = eax_41
        sub_403360(&var_5c, "%d\n")
        var_8_3.b = 0xa
        var_8_3.b = 0xb
        sub_4055a0(arg2, sub_409350(&var_80, &var_5c, &var_2c, &var_80), 0, 0xffffffff)
        
        if (var_18_3 u>= 0x10)
            sub_403160(var_2c[0].d, var_18_3 + 1, 1)
        
        var_8_3.b = 5
        int32_t var_18_4 = 0xf
        int32_t var_1c_3 = 0
        var_2c[0] = 0
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
        
        char* eax_48 = sub_405130(&var_5c, &esi_4[4])
        var_8_3.b = 0xc
        var_8_3.b = 0xd
        sub_4055a0(arg2, sub_4176f0(eax_48.b, eax_48, &var_2c, U"\n"), 0, 0xffffffff)
        
        if (var_18_4 u>= 0x10)
            sub_403160(var_2c[0].d, var_18_4 + 1, 1)
        
        var_18_1 = 0xf
        int32_t var_1c_4 = 0
        var_2c[0] = 0
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
    
    int32_t var_8_4 = 0xe
    void* esi_5 = var_88
    
    if (esi_5 != 0)
        bool cond:3_1 = *(esi_5 + 4) != 1
        *(esi_5 + 4)
        *(esi_5 + 4) -= 1
        
        if (not(cond:3_1))
            (**esi_5)(eax_2)
            bool cond:4_1 = *(esi_5 + 8) != 1
            *(esi_5 + 8)
            *(esi_5 + 8) -= 1
            
            if (not(cond:4_1))
                (*(*esi_5 + 4))()
    
    var_8_4.b = 0

int32_t* esi_2 = arg1[0xd]
var_80 = esi_2
int32_t var_90

if (esi_2 == 0)
    sub_407430(arg2, "\n\n\n\n", 4)
else
    var_88 = &esi_2[4]
    var_7c = &esi_2[1]
    __Smtx_lock_shared(&esi_2[1])
    int32_t esi_3 = *esi_2
    __Smtx_unlock_shared(var_7c)
    void* eax_24
    
    if (esi_3 != 0)
        __Smtx_lock_shared(var_7c)
        int32_t* esi_7 = *var_80
        __Smtx_unlock_shared(var_7c)
        eax_24 = (*(*esi_7 + 0x10))(eax_2)
    else
        eax_24 = nullptr
    
    int32_t* esi_8 = arg1[0xd]
    var_84 = eax_24
    var_7c = esi_8
    __Smtx_lock_shared(&esi_8[1])
    int32_t esi_9 = *esi_8
    __Smtx_unlock_shared(&var_7c[1])
    int32_t eax_62
    
    if (esi_9 != 0)
        __Smtx_lock_shared(&var_7c[1])
        int32_t* ecx_26 = var_7c
        int32_t* esi_10 = *ecx_26
        __Smtx_unlock_shared(&ecx_26[1])
        eax_62 = (*(*esi_10 + 0x14))(eax_2)
    else
        eax_62 = 0
    
    int32_t* esi_11 = arg1[0xd]
    var_90 = eax_62
    var_7c = esi_11
    __Smtx_lock_shared(&esi_11[1])
    int32_t esi_12 = *esi_11
    __Smtx_unlock_shared(&var_7c[1])
    char var_75_2
    
    if (esi_12 != 0)
        __Smtx_lock_shared(&var_7c[1])
        int32_t* ecx_28 = var_7c
        int32_t* esi_13 = *ecx_28
        __Smtx_unlock_shared(&ecx_28[1])
        var_75_2 = (*(*esi_13 + 0x28))(eax_2)
    else
        var_75_2 = 0
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_5 = 0xf
    var_8_5.b = 0x10
    sub_4055a0(arg2, sub_409350(&var_84, &var_44, &var_2c, &var_84), 0, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_1 + 1, 1)
    
    var_8_5.b = 0
    int32_t var_18_5 = 0xf
    int32_t var_1c_5 = 0
    var_2c[0] = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_6 = 0x11
    var_8_6.b = 0x12
    sub_4055a0(arg2, sub_409350(&var_90, &var_44, &var_2c, &var_90), 0, 0xffffffff)
    
    if (var_18_5 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_5 + 1, 1)
    
    var_8_6.b = 0
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c[0] = 0
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    int32_t var_30_3 = 0xf
    int32_t* eax_88
    eax_88.b = var_75_2 != 0
    int32_t var_34_3 = 0
    var_80 = eax_88
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_7 = 0x13
    var_8_7.b = 0x14
    sub_4055a0(arg2, sub_409350(&var_80, &var_44, &var_2c, &var_80), 0, 0xffffffff)
    
    if (var_18_6 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_6 + 1, 1)
    
    var_8_7.b = 0
    int32_t var_18_7 = 0xf
    int32_t var_1c_7 = 0
    var_2c[0] = 0
    
    if (var_30_3 u>= 0x10)
        sub_403160(var_44.d, var_30_3 + 1, 1)
    
    char* eax_95 = sub_405130(&var_5c, var_88)
    int32_t var_8_8 = 0x15
    var_8_8.b = 0x16
    sub_4055a0(arg2, sub_4176f0(eax_95.b, eax_95, &var_2c, U"\n"), 0, 0xffffffff)
    
    if (var_18_7 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_7 + 1, 1)
    
    var_8_8.b = 0
    var_18_1 = 0xf
    int32_t var_1c_8 = 0
    var_2c[0] = 0
    
    if (var_48_1 u>= 0x10)
        sub_403160(var_5c.d, var_48_1 + 1, 1)

void* esi_14 = arg1[0xf]
var_88 = esi_14

if (esi_14 == 0)
    sub_407430(arg2, "\n\n\n\n", 4)
else
    var_84 = esi_14 + 0x10
    var_7c = esi_14 + 4
    __Smtx_lock_shared(esi_14 + 4)
    int32_t esi_15 = *esi_14
    __Smtx_unlock_shared(var_7c)
    int32_t eax_103
    
    if (esi_15 != 0)
        __Smtx_lock_shared(var_7c)
        int32_t* esi_17 = *var_88
        __Smtx_unlock_shared(var_7c)
        eax_103 = (*(*esi_17 + 0x10))(eax_2)
    else
        eax_103 = 0
    
    int32_t* esi_18 = arg1[0xf]
    var_90 = eax_103
    var_7c = esi_18
    __Smtx_lock_shared(&esi_18[1])
    int32_t esi_19 = *esi_18
    __Smtx_unlock_shared(&var_7c[1])
    int32_t* eax_108
    
    if (esi_19 != 0)
        __Smtx_lock_shared(&var_7c[1])
        int32_t* ecx_44 = var_7c
        int32_t* esi_20 = *ecx_44
        __Smtx_unlock_shared(&ecx_44[1])
        eax_108 = (*(*esi_20 + 0x14))(eax_2)
    else
        eax_108 = nullptr
    
    int32_t* esi_21 = arg1[0xf]
    var_80 = eax_108
    var_7c = esi_21
    __Smtx_lock_shared(&esi_21[1])
    int32_t esi_22 = *esi_21
    __Smtx_unlock_shared(&var_7c[1])
    char var_75_3
    
    if (esi_22 != 0)
        __Smtx_lock_shared(&var_7c[1])
        int32_t* ecx_46 = var_7c
        int32_t* esi_23 = *ecx_46
        __Smtx_unlock_shared(&ecx_46[1])
        var_75_3 = (*(*esi_23 + 0x28))(eax_2)
    else
        var_75_3 = 0
    
    int32_t var_30_4 = 0xf
    int32_t var_34_4 = 0
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_9 = 0x17
    var_8_9.b = 0x18
    sub_4055a0(arg2, sub_409350(&var_90, &var_44, &var_2c, &var_90), 0, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_1 + 1, 1)
    
    var_8_9.b = 0
    int32_t var_18_8 = 0xf
    int32_t var_1c_9 = 0
    var_2c[0] = 0
    
    if (var_30_4 u>= 0x10)
        sub_403160(var_44.d, var_30_4 + 1, 1)
    
    int32_t var_30_5 = 0xf
    int32_t var_34_5 = 0
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_10 = 0x19
    var_8_10.b = 0x1a
    sub_4055a0(arg2, sub_409350(&var_80, &var_44, &var_2c, &var_80), 0, 0xffffffff)
    
    if (var_18_8 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_8 + 1, 1)
    
    var_8_10.b = 0
    int32_t var_18_9 = 0xf
    int32_t var_1c_10 = 0
    var_2c[0] = 0
    
    if (var_30_5 u>= 0x10)
        sub_403160(var_44.d, var_30_5 + 1, 1)
    
    int32_t var_30_6 = 0xf
    void* eax_134
    eax_134.b = var_75_3 != 0
    int32_t var_34_6 = 0
    var_88 = eax_134
    var_44 = 0
    sub_403490(&var_44, "%d\n", 3)
    int32_t var_8_11 = 0x1b
    var_8_11.b = 0x1c
    sub_4055a0(arg2, sub_409350(&var_88, &var_44, &var_2c, &var_88), 0, 0xffffffff)
    
    if (var_18_9 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_9 + 1, 1)
    
    var_8_11.b = 0
    int32_t var_18_10 = 0xf
    int32_t var_1c_11 = 0
    var_2c[0] = 0
    
    if (var_30_6 u>= 0x10)
        sub_403160(var_44.d, var_30_6 + 1, 1)
    
    char* eax_141 = sub_405130(&var_5c, var_84)
    int32_t var_8_12 = 0x1d
    var_8_12.b = 0x1e
    sub_4055a0(arg2, sub_4176f0(eax_141.b, eax_141, &var_2c, U"\n"), 0, 0xffffffff)
    
    if (var_18_10 u>= 0x10)
        sub_403160(var_2c[0].d, var_18_10 + 1, 1)
    
    var_8_12.b = 0
    var_18_1 = 0xf
    int32_t var_1c_12 = 0
    var_2c[0] = 0
    
    if (var_48_1 u>= 0x10)
        sub_403160(var_5c.d, var_48_1 + 1, 1)

int32_t* i_1 = arg1[0x12]

if (i_1 != arg1[0x13])
    int32_t edi_1 = arg1[0x13]
    
    for (int32_t* i = i_1; i != edi_1; i = &i[1])
        if (*i != 0)
            int32_t var_8_13 = 0x1f
            sub_4055a0(arg2, sub_5c1210(&var_2c, arg3 + 1), 0, 0xffffffff)
            var_8_13.b = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c[0].d, var_18_1 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
