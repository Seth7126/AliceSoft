// 函数: sub_5197c0
// 地址: 0x5197c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c27a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14
int32_t eax_2 = __security_cookie ^ &var_14
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
var_14 = 0
int32_t edx = arg3[5]
char* esi

if (edx u< 0x10)
    esi = arg3
else
    esi = *arg3

int32_t ebp = arg3[4]

while (true)
    int32_t* eax_5
    
    if (edx u< 0x10)
        eax_5 = arg3
    else
        eax_5 = *arg3
    
    if (esi == eax_5 + ebp)
        break
    
    void* eax_6
    eax_6.b = *esi
    
    if (eax_6.b u>= 0x81 && eax_6.b u<= 0x9f)
        esi = &esi[2]
        continue
    else if (eax_6.b u>= 0xe0 && eax_6.b u<= 0xef)
        esi = &esi[2]
        continue
    
    int32_t* ecx
    
    if (edx u< 0x10)
        ecx = arg3
    else
        ecx = *arg3
    
    ecx.b = esi == ecx
    
    if (eax_6.b == 0xa)
        if (ecx.b != 0)
            esi = &esi[1]
        
        break
    
    if (eax_6.b == 0x40 && *(arg1 + 0xf4) != 0)
        if (ecx.b != 0)
            ecx.b = 0
            esi = &esi[1]
            char* ebx_1 = esi
            
            while (true)
                int32_t* eax_7
                
                if (edx u< 0x10)
                    eax_7 = arg3
                else
                    eax_7 = *arg3
                
                if (esi == eax_7 + ebp)
                    break
                
                void* eax_8
                eax_8.b = *esi
                
                if (eax_8.b == 0x40 && ecx.b == 0)
                    esi = &esi[1]
                    break
                
                if (eax_8.b == 0x22)
                    ecx.b = ecx.b == 0
                
                esi = &esi[1]
            
            if (edx u< 0x10)
                if (esi == arg3 + ebp)
                    esi = ebx_1
            else if (esi == *arg3 + ebp)
                esi = ebx_1
        
        break
    
    esi = &esi[1]

int32_t* ecx_1

if (edx u< 0x10)
    ecx_1 = arg3
else
    ecx_1 = *arg3

sub_403070(arg3, arg2, 0, esi - ecx_1)
int32_t var_4_1 = 0
int32_t ecx_3 = arg3[5]
var_14 = 1
int32_t* eax_15

if (ecx_3 u< 0x10)
    eax_15 = arg3
else
    eax_15 = *arg3

int32_t* edx_1

if (ecx_3 u< 0x10)
    edx_1 = arg3
else
    edx_1 = *arg3

void* ecx_4

if (eax_15 != 0)
    ecx_4 = eax_15 - edx_1
else
    ecx_4 = nullptr

if (esi != 0)
    esi -= eax_15

sub_402210(arg3, ecx_4, esi)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_14)
return arg2
