// 函数: sub_4026d0
// 地址: 0x4026d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg2[4]
int32_t edi = 0xffffffff
int32_t eax_5 = 0
int32_t var_2c = 0

if (ebp s> 0)
    int32_t ecx = arg2[5]
    
    do
        char* esi_1
        
        if (ecx u< 0x10)
            esi_1 = arg2
        else
            esi_1 = *arg2
        
        char* esi_2
        
        if (esi_1[eax_5] u>= 0x81)
            if (ecx u< 0x10)
                esi_2 = arg2
            else
                esi_2 = *arg2
        
        char* esi_3
        char* esi_4
        
        if (esi_1[eax_5] u< 0x81 || esi_2[eax_5] u> 0x9f)
            if (ecx u< 0x10)
                esi_3 = arg2
            else
                esi_3 = *arg2
            
            if (esi_3[eax_5] u>= 0xe0)
                if (ecx u< 0x10)
                    esi_4 = arg2
                else
                    esi_4 = *arg2
        
        if ((esi_1[eax_5] u< 0x81 || esi_2[eax_5] u> 0x9f)
                && (esi_3[eax_5] u< 0xe0 || esi_4[eax_5] u> 0xef))
            int32_t* esi_5
            
            if (ecx u< 0x10)
                esi_5 = arg2
            else
                esi_5 = *arg2
            
            if (*(esi_5 + eax_5) == 0x2e)
                edi = eax_5
            
            int32_t* esi_6
            
            if (ecx u< 0x10)
                esi_6 = arg2
            else
                esi_6 = *arg2
            
            if (*(esi_6 + eax_5) == 0x5c)
                edi = 0xffffffff
            
            eax_5 += 1
        else
            eax_5 += 2
    while (eax_5 s< ebp)

if (ebp s<= 0 || edi == 0xffffffff)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
else
    int32_t var_4 = 0
    int32_t var_28
    sub_402d30(arg1, sub_403070(arg2, &var_28, edi + 1, ebp))
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg1
