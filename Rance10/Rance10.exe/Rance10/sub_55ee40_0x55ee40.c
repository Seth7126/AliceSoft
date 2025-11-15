// 函数: sub_55ee40
// 地址: 0x55ee40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b760
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg2
int32_t* i_1 = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_8_1 = 0
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
var_8_1.b = 1
char var_31 = 0x20
sub_4263a0(&var_40, &var_31)
int32_t edx = arg1[5]
int32_t* ecx_1

if (edx u< 0x10)
    ecx_1 = arg1
else
    ecx_1 = *arg1

void* eax_6 = arg1[4] - 1 + ecx_1
int32_t* ecx_2

if (edx u< 0x10)
    ecx_2 = arg1
else
    ecx_2 = *arg1

int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0

if (ecx_2 + 2 != eax_6)
    sub_403490(&var_30, ecx_2 + 2, eax_6 - (ecx_2 + 2))

var_8_1.b = 2
sub_55f0d0(&i_1, &var_30, &var_40)
var_8_1.b = 1

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* var_3c_1 = var_40
var_31 = 0x3d
sub_4263a0(&var_40, &var_31)

for (int32_t* i = i_1; i != var_48; i = &i[6])
    struct _EXCEPTION_REGISTRATION_RECORD** var_24 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    var_8_1.b = 3
    sub_55f0d0(&var_24, i, &var_40)
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = var_24
    
    if ((var_20_1 - ebx_1) s/ 0x18 == 2)
        void* eax_15 = &ebx_1[6]
        void* eax_16 = &ebx_1[4]
        
        if (ebx_1[5] u>= 0x10)
            ebx_1 = *ebx_1
        
        int32_t ecx_8 = *eax_16
        int32_t eax_17 = 4
        
        if (ecx_8 u< 4)
            eax_17 = ecx_8
        
        if (sub_406ac0(eax_17, "text", ebx_1, eax_17) == 0)
            int32_t eax_19 = *eax_16
            
            if (eax_19 u>= 4 && eax_19 u<= 4 && edi != eax_15)
                sub_403590(edi, eax_15, 0, 0xffffffff)
    
    var_8_1.b = 1
    sub_417070(&var_24)

if (*(edi + 0x10) != 0)
    int32_t ecx_13 = *(edi + 0x14)
    char* eax_21
    
    if (ecx_13 u< 0x10)
        eax_21 = edi
    else
        eax_21 = *edi
    
    if (*eax_21 == 0x22)
        char* eax_22
        
        if (ecx_13 u< 0x10)
            eax_22 = edi
        else
            eax_22 = *edi
        
        char* ecx_14
        
        if (ecx_13 u< 0x10)
            ecx_14 = edi
        else
            ecx_14 = *edi
        
        sub_403750(edi, eax_22 - ecx_14, 1)

void* eax_24 = *(edi + 0x10)

if (eax_24 != 0)
    char* ecx_16
    
    if (*(edi + 0x14) u< 0x10)
        ecx_16 = edi
    else
        ecx_16 = *edi
    
    if (*(eax_24 + ecx_16 - 1) == 0x22)
        if (eax_24 u< eax_24 - 1)
            sub_6d0947("invalid string position")
            noreturn
        
        *(edi + 0x10) = eax_24 - 1
        
        if (*(edi + 0x14) u>= 0x10)
            edi = *edi
        
        *(eax_24 - 1 + edi) = 0

sub_55e890(arg1, arg3)
void* ecx_18 = var_40

if (ecx_18 != 0)
    sub_403160(ecx_18, var_38 - ecx_18, 1)

int32_t result = sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
