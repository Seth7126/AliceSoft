// 函数: sub_62fcd0
// 地址: 0x62fcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745529
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t var_14 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
void* edi = (**arg2)(eax_2)
char* ecx_2 = (**arg2)()

if (ecx_2 != 0)
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_2 -= &ecx_2[1]

char* eax_7 = edi + ecx_2
char* var_1c = eax_7

if (edi != eax_7)
    do
        int32_t* ebx
        ebx.b = *edi
        void* edx_2
        
        if (ebx.b == 0x82)
            eax_7.b = *(edi + 1)
            edx_2 = edi + 1
        
        if (ebx.b != 0x82 || eax_7.b u< 0x60 || eax_7.b u> 0x79)
            if (ebx.b u< 0x81)
                if (ebx.b + 0x20 u> 0xf)
                    goto label_62febc
                
                goto label_62fe01
            
            if (ebx.b u<= 0x9f || ebx.b + 0x20 u<= 0xf)
            label_62fe01:
                int32_t eax_14 = arg1[4]
                int32_t ecx_6 = arg1[5]
                
                if (eax_14 == ecx_6)
                    if (eax_14 + 1 u> 0xfffffffe)
                        sub_6d0927("string too long")
                        noreturn
                    
                    if (ecx_6 u< eax_14 + 1)
                        sub_403830(arg1, eax_14 + 1, arg1[4])
                    else if (eax_14 == 0xffffffff)
                        bool cond:1_1 = arg1[5] u< 0x10
                        arg1[4] = eax_14 + 1
                        int32_t* eax_16
                        
                        if (cond:1_1)
                            eax_16 = arg1
                        else
                            eax_16 = *arg1
                        
                        *eax_16 = 0
                
                char* ecx_8
                
                if (arg1[5] u< 0x10)
                    ecx_8 = arg1
                else
                    ecx_8 = *arg1
                
                ecx_8[arg1[4]] = ebx.b
                arg1[4] += 1
                edi += 1
                ecx_8[arg1[4]] = 0
                ebx.b = *edi
                goto label_62fe5b
            
        label_62febc:
            
            if (ebx.b s>= 0x41 && ebx.b s<= 0x5a)
                ebx.b += 0x20
            
            int32_t eax_23 = arg1[4]
            int32_t ecx_12 = arg1[5]
            
            if (eax_23 == ecx_12)
                if (eax_23 + 1 u> 0xfffffffe)
                    sub_6d0927("string too long")
                    noreturn
                
                if (ecx_12 u< eax_23 + 1)
                    sub_403830(arg1, eax_23 + 1, arg1[4])
                else if (eax_23 == 0xffffffff)
                    arg1[4] = eax_23 + 1
                    int32_t* eax_25
                    
                    if (arg1[5] u< 0x10)
                        eax_25 = arg1
                    else
                        eax_25 = *arg1
                    
                    *eax_25 = 0
            
            char* ecx_14
            
            if (arg1[5] u< 0x10)
                ecx_14 = arg1
            else
                ecx_14 = *arg1
            
            ecx_14[arg1[4]] = ebx.b
            arg1[4] += 1
            ecx_14[arg1[4]] = 0
        else
            int32_t eax_8 = arg1[4]
            int32_t ecx_3 = arg1[5]
            
            if (eax_8 == ecx_3)
                if (eax_8 + 1 u> 0xfffffffe)
                    sub_6d0927("string too long")
                    noreturn
                
                if (ecx_3 u< eax_8 + 1)
                    sub_403830(arg1, eax_8 + 1, arg1[4])
                else if (eax_8 == 0xffffffff)
                    bool cond:2_1 = arg1[5] u< 0x10
                    arg1[4] = eax_8 + 1
                    char* eax_10
                    
                    if (cond:2_1)
                        eax_10 = arg1
                    else
                        eax_10 = *arg1
                    
                    *eax_10 = 0
            
            char* ecx_5
            
            if (arg1[5] u< 0x10)
                ecx_5 = arg1
            else
                ecx_5 = *arg1
            
            edi = edx_2
            ecx_5[arg1[4]] = 0x82
            arg1[4] += 1
            ecx_5[arg1[4]] = 0
            ebx.b = *edi
            ebx.b += 0x21
        label_62fe5b:
            int32_t eax_19 = arg1[4]
            int32_t ecx_9 = arg1[5]
            
            if (eax_19 == ecx_9)
                if (eax_19 + 1 u> 0xfffffffe)
                    sub_6d0927("string too long")
                    noreturn
                
                if (ecx_9 u< eax_19 + 1)
                    sub_403830(arg1, eax_19 + 1, arg1[4])
                else if (eax_19 == 0xffffffff)
                    arg1[4] = eax_19 + 1
                    int32_t* eax_21
                    
                    if (arg1[5] u< 0x10)
                        eax_21 = arg1
                    else
                        eax_21 = *arg1
                    
                    *eax_21 = 0
            
            char* ecx_11
            
            if (arg1[5] u< 0x10)
                ecx_11 = arg1
            else
                ecx_11 = *arg1
            
            ecx_11[arg1[4]] = ebx.b
            arg1[4] += 1
            ecx_11[arg1[4]] = 0
        
        edi += 1
    while (edi != var_1c)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
