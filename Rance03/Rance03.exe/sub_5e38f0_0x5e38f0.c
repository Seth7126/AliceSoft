// 函数: sub_5e38f0
// 地址: 0x5e38f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t i_2
int32_t eax_2 = __security_cookie ^ &i_2
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys40::CCmdLineCutter::VTable* const var_40 = &sys40::CCmdLineCutter::`vftable'
void* var_3c = nullptr
int32_t result_1 = 0
int32_t var_34 = 0
int32_t var_4 = 0
bool cond:0 = *arg2 != 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg2
    void* esi_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - esi_1
else
    ecx = nullptr

sub_402110(&var_2c, arg2, ecx)
var_4.b = 1
char eax_5
char* ecx_4
eax_5, ecx_4 = sub_5df330(&var_40, &var_2c)
var_4.b = 0
int32_t ebx
ebx.b = eax_5 == 0

if (var_18 u>= 0x10)
    ecx_4 = j__free(var_2c.d)

int32_t result = result_1
void* ebx_1 = var_3c
uint32_t var_44

if (ebx.b == 0)
    ecx_4 = result - ebx_1
    int32_t i_3 = ecx_4 s/ 0x30
    i_2 = i_3
    
    if (i_3 s> 0)
        int32_t* esi_2 = ebx_1 + 0x10
        int32_t i_1
        
        do
            int32_t ebp_1 = esi_2[1]
            int32_t edi_1 = *esi_2
            int32_t* ecx_7
            
            if (ebp_1 u< 0x10)
                ecx_7 = &esi_2[-4]
            else
                ecx_7 = esi_2[-4]
            
            int32_t eax_9 = 1
            
            if (edi_1 u< 1)
                eax_9 = edi_1
            
            if (sub_405190(eax_9, 0x6eb1c0, ecx_7, eax_9) != 0 || edi_1 u< 1)
            label_5e3a55:
                int32_t* ecx_9
                
                if (ebp_1 u< 0x10)
                    ecx_9 = &esi_2[-4]
                else
                    ecx_9 = esi_2[-4]
                
                int32_t eax_12 = 1
                
                if (edi_1 u< 1)
                    eax_12 = edi_1
                
                if (sub_405190(eax_12, 0x6eb1bc, ecx_9, eax_12) != 0 || edi_1 u< 1)
                label_5e3ad4:
                    char eax_17
                    eax_17, ecx_4 = sub_40c250(&esi_2[-4], 0x6eb190)
                    
                    if (eax_17 != 0)
                        char* eax_18
                        
                        if (esi_2[7] u< 0x10)
                            eax_18 = &esi_2[2]
                        else
                            eax_18 = esi_2[2]
                        
                        uint32_t* var_64_6 = &var_44
                        int32_t eax_19
                        eax_19, ecx_4 = sub_69b31c(eax_18, 0x6dcf40)
                        
                        if (eax_19 == 1)
                            ecx_4 = sub_5f42d0(var_44)
                else
                    int32_t eax_13
                    eax_13.b = edi_1 != 1
                    
                    if (eax_13 != 0)
                        goto label_5e3ad4
                    
                    void* eax_14
                    
                    if (esi_2[7] u< 0x10)
                        eax_14 = &esi_2[2]
                    else
                        eax_14 = esi_2[2]
                    
                    int32_t var_30
                    int32_t* var_64_5 = &var_30
                    
                    if (sub_69b31c(eax_14, 0x6dcf34) != 1)
                        ecx_4 = sub_64b530(0x6eb194)
                    else
                        ecx_4 = arg1
                        *(ecx_4 + 0x418) = var_30
            else
                int32_t eax_10
                eax_10.b = edi_1 != 1
                
                if (eax_10 != 0)
                    goto label_5e3a55
                
                ecx_4 = &arg1[0x42c]
                
                if (ecx_4 != &esi_2[2])
                    ecx_4 = sub_401ff0(ecx_4, &esi_2[2], 0, 0xffffffff)
            
            esi_2 = &esi_2[0xc]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        ebx_1 = var_3c
    
    result = result_1

if (ebx_1 != 0)
    uint32_t var_64_7 = var_44
    char* var_68_1 = ecx_4
    sub_415640(ebx_1, result)
    result = j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &i_2)
return result
