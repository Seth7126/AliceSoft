// 函数: sub_6c6cd0
// 地址: 0x6c6cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7450d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* var_20 = ebx
void** eax_3 = arg1
int32_t* var_2c = eax_3
bool cond:0 = eax_3[5] u< 0x10
eax_3[4] = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = nullptr
int32_t eax_4 = ebx[4]

if (eax_4 == 0)
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

char* esi = nullptr
char var_12 = 1
char* edi = nullptr
char* var_34 = nullptr
char* var_38 = nullptr
int32_t var_30 = 0
int32_t var_8_1 = 0
uint32_t eax_6 = (eax_4 * 3) u>> 1

if (eax_6 != 0)
    sub_405a80(&var_38, eax_6)
    esi = var_34
    edi = var_38

int32_t eax_7 = ebx[4]
int32_t edx = 0
int32_t var_18 = 0
char var_11

if (eax_7 s> 0)
    do
        int32_t ecx_5 = ebx[5]
        char* eax_8
        
        if (ecx_5 u< 0x10)
            eax_8 = ebx
        else
            eax_8 = *ebx
        
        ebx.b = eax_8[edx]
        var_11 = ebx.b
        
        if (ebx.b u>= 0x20)
            int32_t eax_13
            
            if (ebx.b u> 0x7e && ebx.b + 0x5f u> 0x3e)
                if (edx + 1 s>= eax_7)
                    goto label_6c6ee3
                
                int32_t* eax_12 = var_20
                var_18 = edx + 1
                
                if (ecx_5 u>= 0x10)
                    eax_12 = *eax_12
                
                int32_t edx_1
                edx_1.b = *(eax_12 + edx + 1)
                ecx_5.b = ebx.b
                eax_13 = sub_6c6c60(ecx_5.b, edx_1.b)
                goto label_6c6e57
            
            uint32_t eax_14 = zx.d(ebx.b)
            
            if (eax_14 u< 0x20)
            label_6c6ee3:
                var_12 = 0x2a
                sub_4263a0(&var_38, &var_12)
                esi = var_34
                edi = var_38
                var_12 = 0
            else
                if (eax_14 u> 0x7e)
                    if (eax_14.w u< 0xa1 || eax_14.w u> 0xdf)
                        goto label_6c6ee3
                    
                    eax_13 = zx.d(ebx.b) - 0x42
                    goto label_6c6e57
                
                eax_13 = zx.d(ebx.b) - 0x20
            label_6c6e57:
                
                if (eax_13 == 0xffffffff)
                    goto label_6c6ee3
                
                int32_t i = 0
                char* eax_18 = eax_13 * 3 + &data_78e198
                int32_t i_2 = 0
                char* var_28_1 = eax_18
                
                do
                    ebx.b = eax_18[i]
                    var_11 = ebx.b
                    
                    if (ebx.b == 0)
                        break
                    
                    if (&var_11 u>= esi || edi u> &var_11)
                        if (esi == var_30)
                            sub_405a20(&var_38, 1)
                            esi = var_34
                            edi = var_38
                            i = i_2
                        
                        if (esi != 0)
                            *esi = ebx.b
                    else
                        ebx = &var_11 - edi
                        
                        if (esi == var_30)
                            sub_405a20(&var_38, 1)
                            esi = var_34
                            edi = var_38
                            i = i_2
                        
                        if (esi != 0)
                            *esi = *(edi + ebx)
                    
                    eax_18 = var_28_1
                    i += 1
                    esi = &esi[1]
                    i_2 = i
                    var_34 = esi
                while (i s< 3)
            
            edx = var_18
        else if (&var_11 u>= esi || edi u> &var_11)
            if (esi == var_30)
                sub_405a20(&var_38, 1)
                esi = var_34
                edi = var_38
                edx = var_18
            
            if (esi != 0)
                *esi = ebx.b
            
            esi = &esi[1]
            var_34 = esi
        else
            int32_t ebx_1 = &var_11 - edi
            
            if (esi == var_30)
                sub_405a20(&var_38, 1)
                esi = var_34
                edi = var_38
                edx = var_18
            
            if (esi != 0)
                *esi = edi[ebx_1]
            
            esi = &esi[1]
            var_34 = esi
        
        ebx = var_20
        edx += 1
        var_18 = edx
    while (edx s< eax_7)

var_11 = 0

if (&var_11 u>= esi || edi u> &var_11)
    if (esi == var_30)
        sub_405a20(&var_38, 1)
        esi = var_34
        edi = var_38
    
    if (esi != 0)
        *esi = 0
else
    int32_t ebx_2 = &var_11 - edi
    
    if (esi == var_30)
        sub_405a20(&var_38, 1)
        esi = var_34
        edi = var_38
    
    if (esi != 0)
        *esi = edi[ebx_2]

void* var_34_1 = &esi[1]
void* ecx_11

if (*edi != 0)
    char* ecx_12 = edi
    char i_1
    
    do
        i_1 = *ecx_12
        ecx_12 = &ecx_12[1]
    while (i_1 != 0)
    ecx_11 = ecx_12 - &ecx_12[1]
else
    ecx_11 = nullptr

sub_403490(var_2c, edi, ecx_11)
sub_403160(edi, var_30 - edi, 1)
int32_t eax_20
eax_20.b = var_12
fsbase->NtTib.ExceptionList = ExceptionList
return eax_20
