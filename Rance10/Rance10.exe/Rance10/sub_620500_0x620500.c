// 函数: sub_620500
// 地址: 0x620500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7296c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
void** var_1c = arg2
char* esi = nullptr
int32_t var_28 = 0
char* edi = nullptr
char* var_30 = nullptr
char* var_34 = nullptr
int32_t var_2c = 0
int32_t var_8_1 = 0
int32_t eax_3 = ebx[4]

if (eax_3 != neg.d(eax_3))
    sub_405a80(&var_34, eax_3 * 2)
    esi = var_30
    edi = var_34

int32_t ecx_1 = ebx[4]

if (ebx[5] u>= 0x10)
    ebx = *ebx
    var_1c = ebx

char* eax_5 = nullptr
char* var_18 = nullptr
char var_11

if (ecx_1 s> 0)
    do
        eax_5.b = *(eax_5 + ebx)
        void* var_30_1
        void* esi_1
        
        if (eax_5.b == 0x2d)
            var_11 = 0x81
            
            if (&var_11 u>= esi || edi u> &var_11)
                if (esi == var_2c)
                    sub_405a20(&var_34, 1)
                    esi = var_30
                    edi = var_34
                
                if (esi != 0)
                    *esi = 0x81
            else
                void* ebx_1 = &var_11 - edi
                
                if (esi == var_2c)
                    sub_405a20(&var_34, 1)
                    esi = var_30
                    edi = var_34
                
                if (esi != 0)
                    *esi = *(edi + ebx_1)
            
            esi_1 = &esi[1]
            var_11 = 0x7c
            var_30_1 = esi_1
            
            if (&var_11 u>= esi_1 || edi u> &var_11)
                if (esi_1 == var_2c)
                    sub_405a20(&var_34, 1)
                    esi_1 = var_30_1
                    edi = var_34
                
                if (esi_1 != 0)
                    *esi_1 = 0x7c
                
                esi = esi_1 + 1
                var_30 = esi
            else
            label_6205f0:
                int32_t ebx_2 = &var_11 - edi
                
                if (esi_1 == var_2c)
                    sub_405a20(&var_34, 1)
                    esi_1 = var_30_1
                    edi = var_34
                
                if (esi_1 != 0)
                    *esi_1 = edi[ebx_2]
                
                esi = esi_1 + 1
                var_30 = esi
        else if (eax_5.b != 0x2e)
            if (eax_5.b == 0x20)
                var_11 = 0x81
                sub_4263a0(&var_34, &var_11)
                var_11 = 0x40
                sub_4263a0(&var_34, &var_11)
            else if (eax_5.b s< 0x30 || eax_5.b s> 0x39)
                var_11 = eax_5.b
                sub_4263a0(&var_34, &var_11)
            else
                var_11 = 0x82
                sub_4263a0(&var_34, &var_11)
                var_11 = eax_5.b + 0x1f
                sub_4263a0(&var_34, &var_11)
            
            esi = var_30
            edi = var_34
        else
            var_11 = 0x81
            
            if (&var_11 u>= esi || edi u> &var_11)
                if (esi == var_2c)
                    sub_405a20(&var_34, 1)
                    esi = var_30
                    edi = var_34
                
                if (esi != 0)
                    *esi = 0x81
            else
                int32_t ebx_3 = &var_11 - edi
                
                if (esi == var_2c)
                    sub_405a20(&var_34, 1)
                    esi = var_30
                    edi = var_34
                
                if (esi != 0)
                    *esi = edi[ebx_3]
            
            esi_1 = &esi[1]
            var_11 = 0x44
            var_30_1 = esi_1
            
            if (&var_11 u< esi_1 && edi u<= &var_11)
                goto label_6205f0
            
            if (esi_1 == var_2c)
                sub_405a20(&var_34, 1)
                esi_1 = var_30_1
                edi = var_34
            
            if (esi_1 != 0)
                *esi_1 = 0x44
            
            esi = esi_1 + 1
            var_30 = esi
        ebx = var_1c
        eax_5 = &var_18[1]
        var_18 = eax_5
    while (eax_5 s< ecx_1)

var_11 = 0

if (&var_11 u>= esi || edi u> &var_11)
    if (esi == var_2c)
        sub_405a20(&var_34, 1)
        esi = var_30
        edi = var_34
    
    if (esi != 0)
        *esi = 0
else
    int32_t ebx_5 = &var_11 - edi
    
    if (esi == var_2c)
        sub_405a20(&var_34, 1)
        esi = var_30
        edi = var_34
    
    if (esi != 0)
        *esi = edi[ebx_5]

void* var_30_2 = &esi[1]
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_16

if (*edi != 0)
    char* ecx_17 = edi
    char i
    
    do
        i = *ecx_17
        ecx_17 = &ecx_17[1]
    while (i != 0)
    ecx_16 = ecx_17 - &ecx_17[1]
else
    ecx_16 = nullptr

sub_403490(arg1, edi, ecx_16)
sub_403160(edi, var_2c - edi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
