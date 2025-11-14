// 函数: sub_51b860
// 地址: 0x51b860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = nullptr
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
int32_t var_4 = 0
char* esi

if (arg2[5] u< 0x10)
    esi = arg2
else
    esi = *arg2

struct _EXCEPTION_REGISTRATION_RECORD** result

while (true)
    int32_t* ecx_1
    
    if (arg2[5] u< 0x10)
        ecx_1 = arg2
    else
        ecx_1 = *arg2
    
    result = arg2[4] + ecx_1
    
    if (esi == result)
        break
    
    ecx_1.b = *esi
    
    if (ecx_1.b != 0x22)
        int32_t* eax_12 = arg3
        void* edi_2 = eax_12[1]
        char* edx_1 = *eax_12
        
        if (ecx_1.b s>= 0x80 && ecx_1.b s<= 0x7f)
            void* eax_16 = _memchr(edx_1, ecx_1.b, edi_2 - edx_1)
            
            if (eax_16 != 0)
                edi_2 = eax_16
            
            eax_12 = arg3
        
        if (edi_2 == eax_12[1])
            sub_4031c0(&var_2c, 1, *esi)
            ebx = var_1c
        else if (ebx != 0)
            sub_421cd0(arg1, &var_2c)
            char* eax_17 = &var_2c
            var_1c = nullptr
            
            if (var_18 u>= 0x10)
                eax_17 = var_2c.d
            
            esi = &esi[1]
            *eax_17 = 0
            ebx = var_1c
            continue
    else
        sub_4031c0(&var_2c, 1, 0x22)
        ebx = var_1c
        
        do
            esi = &esi[1]
            int32_t* ecx_3
            
            if (arg2[5] u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
            
            if (esi == arg2[4] + ecx_3)
                break
            
            ecx_3.b = *esi
            char var_31_1 = ecx_3.b
            void* edi_1
            
            if (0xffffffff - ebx u> 1)
                edi_1 = ebx + 1
            
            if (0xffffffff - ebx u<= 1 || edi_1 u> 0xfffffffe)
                sub_69a551("string too long")
                noreturn
            
            if (var_18 u< edi_1)
                sub_4023a0(&var_2c, edi_1, ebx)
                ebx = var_1c
                ecx_3.b = var_31_1
                
                if (edi_1 != 0)
                    goto label_51b954
            else if (edi_1 != 0)
            label_51b954:
                char* eax_9 = &var_2c
                
                if (var_18 u>= 0x10)
                    eax_9 = var_2c.d
                
                *(eax_9 + ebx) = ecx_3.b
                char* eax_10 = &var_2c
                var_1c = edi_1
                
                if (var_18 u>= 0x10)
                    eax_10 = var_2c.d
                
                *(eax_10 + edi_1) = 0
                ebx = var_1c
            else
                char* eax_11 = &var_2c
                var_1c = edi_1
                
                if (var_18 u>= 0x10)
                    eax_11 = var_2c.d
                
                *eax_11 = 0
                ebx = var_1c
        while (*esi != 0x22)
    
    esi = &esi[1]

if (ebx != 0)
    result = sub_421cd0(arg1, &var_2c)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
