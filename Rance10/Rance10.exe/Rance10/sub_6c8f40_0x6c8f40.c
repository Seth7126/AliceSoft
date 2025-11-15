// 函数: sub_6c8f40
// 地址: 0x6c8f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7469b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_30 = ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg1
int32_t* var_20 = eax_3
bool cond:0 = eax_3[5] u< 0x10
eax_3[4] = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = nullptr
int32_t ecx = arg2[4]

if (ecx == 0)
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* esi = nullptr
char* var_2c = nullptr
char* var_28 = nullptr
int32_t var_24 = 0
int32_t var_8_1 = 0
uint32_t edx_1 = ecx * 2 u/ 3

if (edx_1 != 0)
    sub_405a80(&var_2c, edx_1)
    esi = var_28

void** ecx_5 = arg2
int32_t edi = 0
char var_12 = 1
int32_t eax_5 = ecx_5[4]
uint8_t var_11

if (eax_5 s> 0)
    do
        int32_t edx_2 = ecx_5[5]
        char* eax_6
        
        if (edx_2 u< 0x10)
            eax_6 = ecx_5
        else
            eax_6 = *ecx_5
        
        ebx.b = eax_6[edi]
        var_11 = ebx.b
        
        if (ebx.b u>= 0x20)
            if (ebx.b u> 0x7e)
                int16_t eax_12
                
                if (ebx.b != 0xc2 && ebx.b != 0xc3 && ebx.b != 0xce && ebx.b != 0xcf
                        && ebx.b != 0xd0 && ebx.b != 0xd1)
                    if (edi + 2 s>= eax_5)
                        goto label_6c9124
                    
                    void** eax_10
                    
                    if (edx_2 u< 0x10)
                        eax_10 = ecx_5
                    else
                        eax_10 = *ecx_5
                    
                    ebx:1.b = *(eax_10 + edi + 1)
                    edi += 2
                    
                    if (edx_2 u>= 0x10)
                        ecx_5 = *ecx_5
                    
                    uint32_t eax_11 = zx.d(*(ecx_5 + edi))
                    edx_2.b = ebx:1.b
                    ecx_5.b = ebx.b
                    eax_12 = sub_6c7050(eax_11, edx_2.b, ecx_5.b, eax_11.b)
                    goto label_6c90dc
                
                if (edi + 1 s>= eax_5)
                label_6c9124:
                    var_12 = 0x2a
                    sub_4263a0(&var_2c, &var_12)
                    var_12 = 0
                else
                    edi += 1
                    
                    if (edx_2 u>= 0x10)
                        ecx_5 = *ecx_5
                    
                    edx_2.b = *(ecx_5 + edi)
                    ecx_5.b = ebx.b
                    eax_12 = sub_6c6fb0(ecx_5.b, edx_2.b)
                label_6c90dc:
                    ebx = zx.d(eax_12)
                    
                    if (ebx.w == 0)
                        goto label_6c9124
                    
                    int32_t* ecx_9 = &var_2c
                    
                    if (ebx.w u> 0xff)
                        var_11 = (ebx u>> 8).b
                        sub_4263a0(ecx_9, &var_11)
                        var_11 = ebx.b
                        sub_4263a0(&var_2c, &var_11)
                    else
                        var_11 = ebx.b
                        sub_4263a0(ecx_9, &var_11)
            else
                sub_4263a0(&var_2c, &var_11)
            
            esi = var_28
        else
            char* eax_7
            
            if (&var_11 u< esi)
                eax_7 = var_2c
            
            if (&var_11 u>= esi || eax_7 u> &var_11)
                if (esi == var_24)
                    sub_405a20(&var_2c, 1)
                    esi = var_28
                
                if (esi != 0)
                    *esi = ebx.b
                
                esi = &esi[1]
                var_28 = esi
            else
                if (esi == var_24)
                    sub_405a20(&var_2c, 1)
                    esi = var_28
                
                if (esi != 0)
                    char* eax_8
                    eax_8.b = *(var_2c + &var_11 - eax_7)
                    *esi = eax_8.b
                
                esi = &esi[1]
                var_28 = esi
        
        ecx_5 = arg2
        edi += 1
    while (edi s< eax_5)

var_11 = 0
char* edi_1

if (&var_11 u< esi)
    edi_1 = var_2c

if (&var_11 u>= esi || edi_1 u> &var_11)
    if (esi == var_24)
        sub_405a20(&var_2c, 1)
        esi = var_28
    
    if (esi != 0)
        *esi = 0
else
    if (esi == var_24)
        sub_405a20(&var_2c, 1)
        esi = var_28
    
    if (esi != 0)
        char* eax_16
        eax_16.b = *(var_2c + &var_11 - edi_1)
        *esi = eax_16.b

void* var_28_1 = &esi[1]
void* ecx_14

if (*var_2c != 0)
    char* ecx_15 = var_2c
    char* eax_17
    
    do
        eax_17.b = *ecx_15
        ecx_15 = &ecx_15[1]
    while (eax_17.b != 0)
    ecx_14 = ecx_15 - &ecx_15[1]
else
    ecx_14 = nullptr

char* edi_2 = var_2c
sub_403490(var_20, edi_2, ecx_14)
sub_403160(edi_2, var_24 - edi_2, 1)
int32_t eax_18
eax_18.b = var_12
fsbase->NtTib.ExceptionList = ExceptionList
return eax_18
