// 函数: sub_62d4f0
// 地址: 0x62d4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7450d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg2
char* ebx = nullptr
int32_t var_2c = 0
char* esi = nullptr
char* var_38 = nullptr
char* var_34 = nullptr
int32_t var_30 = 0
int32_t var_8_1 = 0
int32_t eax_3 = *(arg2 + 0x10)

if (eax_3 != 0)
    sub_405a80(&var_38, eax_3)
    esi = var_34
    ebx = var_38

void* eax_4 = var_1c

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4
    var_1c = eax_4

void* edx = *(arg2 + 0x10)
int32_t ecx_1 = 0
void* var_24 = edx
int32_t var_18 = 0
char var_11

if (edx s> 0)
    void* edi_1 = eax_4
    
    do
        edx.b = *edi_1
        
        if (edx.b u>= 0x81 && edx.b u<= 0x9f)
            goto label_62d58d
        
        if ((edx + 0x20).b u> 0xf)
            goto label_62d637
        
        eax_4 = var_1c
    label_62d58d:
        
        if (edx.b == 0x82)
            eax_4.b = *(ecx_1 + eax_4 + 1)
        
        if (edx.b != 0x82 || eax_4.b u< 0x4f || eax_4.b u> 0x58)
            if (edx.b == 0x81 && *(ecx_1 + var_1c + 1) == 0x44)
                var_11 = 0x2e
                goto label_62d5a7
            
            if (edi_1 u>= esi || ebx u> edi_1)
                if (esi == var_30)
                    eax_4, edx = sub_405a20(&var_38, 1)
                    esi = var_34
                    ebx = var_38
                    ecx_1 = var_18
                
                if (esi != 0)
                    eax_4.b = *edi_1
                    *esi = eax_4.b
            else
                eax_4 = edi_1 - ebx
                
                if (esi == var_30)
                    sub_405a20(&var_38, 1)
                    esi = var_34
                    ebx = var_38
                    ecx_1 = var_18
                
                if (esi != 0)
                    eax_4.b = *(ebx + eax_4)
                    *esi = eax_4.b
            
            esi = &esi[1]
            ecx_1 += 1
            var_34 = esi
            edi_1 += 1
            var_18 = ecx_1
        label_62d637:
            
            if (edi_1 u>= esi || ebx u> edi_1)
                if (esi == var_30)
                    eax_4, edx = sub_405a20(&var_38, 1)
                    esi = var_34
                    ecx_1 = var_18
                    ebx = var_38
                
                if (esi != 0)
                    eax_4.b = *edi_1
                    *esi = eax_4.b
            else
                eax_4 = edi_1 - ebx
                
                if (esi == var_30)
                    sub_405a20(&var_38, 1)
                    esi = var_34
                    ebx = var_38
                    ecx_1 = var_18
                
                if (esi != 0)
                    eax_4.b = *(ebx + eax_4)
                    *esi = eax_4.b
            
            esi = &esi[1]
            ecx_1 += 1
            var_34 = esi
            edi_1 += 1
        else
            eax_4.b -= 0x1f
            var_11 = eax_4.b
        label_62d5a7:
            sub_4263a0(&var_38, &var_11)
            esi = var_34
            ecx_1 = var_18 + 2
            ebx = var_38
            edi_1 += 2
        
        eax_4 = var_1c
        var_18 = ecx_1
    while (ecx_1 s< var_24)

var_11 = 0

if (&var_11 u>= esi || ebx u> &var_11)
    if (esi == var_30)
        sub_405a20(&var_38, 1)
        esi = var_34
        ebx = var_38
    
    if (esi != 0)
        *esi = 0
else
    int32_t edi_2 = &var_11 - ebx
    
    if (esi == var_30)
        sub_405a20(&var_38, 1)
        esi = var_34
        ebx = var_38
    
    if (esi != 0)
        *esi = ebx[edi_2]

void* var_34_1 = &esi[1]
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
void* ecx_10

if (*ebx != 0)
    char* ecx_11 = ebx
    char i
    
    do
        i = *ecx_11
        ecx_11 = &ecx_11[1]
    while (i != 0)
    ecx_10 = ecx_11 - &ecx_11[1]
else
    ecx_10 = nullptr

sub_403490(arg1, ebx, ecx_10)
sub_403160(ebx, var_30 - ebx, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
