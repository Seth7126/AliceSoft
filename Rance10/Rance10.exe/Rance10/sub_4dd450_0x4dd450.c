// 函数: sub_4dd450
// 地址: 0x4dd450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_1 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0x10)
void* i = *edi
i_1 = i

for (; i != edi; i = i_1)
    int32_t* ecx = *(*(i + 0x28) + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_2)
    
    int32_t* esi = *(i + 0x28)
    
    if (esi != 0)
        int32_t eax_5 = esi[5]
        
        if (eax_5 u>= 0x10)
            sub_403160(*esi, eax_5 + 1, 1)
        
        esi[5] = 0xf
        bool cond:0_1 = esi[5] u< 0x10
        esi[4] = 0
        char* eax_7
        
        if (cond:0_1)
            eax_7 = esi
        else
            eax_7 = *esi
        
        int32_t var_28_1 = 0x1c
        *eax_7 = 0
        operator new(esi)
    
    sub_429080(&i_1)

int32_t var_8_1 = 0
sub_432200(*(*(arg1 + 0x10) + 4))
void* eax_9 = *(arg1 + 0x10)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x10)
*eax_10 = eax_10
void* result = *(arg1 + 0x10)
*(result + 8) = result
*(arg1 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
