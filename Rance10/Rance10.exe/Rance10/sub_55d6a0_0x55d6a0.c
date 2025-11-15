// 函数: sub_55d6a0
// 地址: 0x55d6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b571
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_38 = 0
int32_t* var_3c = arg2
void* esi

if (arg3[5] u< 0x10)
    esi = arg3
else
    esi = *arg3

while (true)
    int32_t edi_1 = arg3[5]
    int32_t* eax_4
    
    if (edi_1 u< 0x10)
        eax_4 = arg3
    else
        eax_4 = *arg3
    
    if (esi == eax_4 + arg3[4])
        break
    
    int32_t ecx
    ecx.b = *esi
    
    if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && ecx.b + 0x20 u> 0xf)
        int32_t* eax_7
        
        if (edi_1 u< 0x10)
            eax_7 = arg3
        else
            eax_7 = *arg3
        
        int32_t edx
        edx.b = esi == eax_7
        
        if (ecx.b == 0xa)
            if (edx.b != 0)
                esi += 1
            
            break
        
        if (ecx.b == 0x24 && *(arg1 + 0xf0) != 0)
            int32_t* eax_9
            
            if (edi_1 u< 0x10)
                eax_9 = arg3
            else
                eax_9 = *arg3
            
            if (esi + 1 != eax_9 + arg3[4] && *(esi + 1) == 0x7b)
                if (edx.b == 0)
                    break
                
                edx = arg3[5]
                void* edi_2 = esi
                void* ecx_1
                ecx_1.b = 0
                char* esi_2 = esi + 2
                
                while (true)
                    int32_t* eax_11
                    
                    if (edx u< 0x10)
                        eax_11 = arg3
                    else
                        eax_11 = *arg3
                    
                    edx = arg3[5]
                    
                    if (esi_2 == eax_11 + arg3[4])
                        void var_2c
                        sub_403360(&var_2c, 0x76783c)
                        int32_t var_8_2 = 1
                        sub_45aae0(&var_2c)
                        var_8_2.b = 0
                        sub_403320(&var_2c)
                        esi = edi_2
                        goto label_55d7e0
                    
                    void* eax_12
                    eax_12.b = *esi_2
                    
                    if (eax_12.b == 0x7d && ecx_1.b == 0)
                        break
                    
                    if (eax_12.b == 0x22)
                        ecx_1.b = ecx_1.b == 0
                    
                    esi_2 = &esi_2[1]
                
                esi = &esi_2[1]
                
                if (esi != edi_2)
                    break
                
                esi += 1
                continue
        
    label_55d7e0:
        esi += 1
        continue
    
    esi += 2

char* ecx_5

if (arg3[5] u< 0x10)
    ecx_5 = arg3
else
    ecx_5 = *arg3

arg2[4] = 0
arg2[5] = 0
arg2[5] = 0xf
bool cond:1 = arg2[5] u< 0x10
arg2[4] = 0
int32_t* eax_13

if (cond:1)
    eax_13 = arg2
else
    eax_13 = *arg2

*eax_13 = 0

if (ecx_5 != esi)
    sub_403490(arg2, ecx_5, esi - ecx_5)

int32_t var_8_3 = 0
int32_t ecx_7 = arg3[5]
int32_t var_38_1 = 1
int32_t* eax_16

if (ecx_7 u< 0x10)
    eax_16 = arg3
else
    eax_16 = *arg3

int32_t* ecx_8

if (ecx_7 u< 0x10)
    ecx_8 = arg3
else
    ecx_8 = *arg3

sub_403750(arg3, eax_16 - ecx_8, esi - eax_16)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
