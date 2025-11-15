// 函数: sub_598190
// 地址: 0x598190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf2c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg1 + 0x7c)
int32_t* esi = nullptr
int32_t* edi = nullptr
void* var_20 = nullptr
int32_t* var_1c = nullptr
void* var_28 = nullptr
int32_t* var_24 = nullptr

if (edx s>= 0 && edx s< (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3)
    sub_57f5d0(&var_20, *(arg1 + 0x64) + (edx << 3))
    esi = var_1c

int32_t ecx_1 = *(arg2 + 0x7c)

if (ecx_1 s>= 0 && ecx_1 s< (*(arg2 + 0x68) - *(arg2 + 0x64)) s>> 3)
    sub_57f5d0(&var_28, *(arg2 + 0x64) + (ecx_1 << 3))
    edi = var_24

void* ecx_3 = var_20
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = ecx_3 != 0
int32_t edx_1

if (eax_3.b == 0)
    edx_1 = 0
else
    edx_1 = *(ecx_3 + 0x28)

void* ecx_4 = var_28
eax_3.b = ecx_4 != 0
int32_t eax_12

if (eax_3.b == 0)
    eax_12 = 0
else
    eax_12 = *(ecx_4 + 0x28)

void* ebx

if (edx_1 != eax_12 || *(arg1 + 8) != *(arg2 + 8))
    ebx.b = 0
else
    *(arg1 + 0xc) f- *(arg2 + 0xc)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        ebx.b = 0
    else
        *(arg1 + 0x10) f- *(arg2 + 0x10)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            ebx.b = 0
        else
            *(arg1 + 0x14) f- *(arg2 + 0x14)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                ebx.b = 0
            else
                *(arg1 + 0x18) f- *(arg2 + 0x18)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    ebx.b = 0
                else
                    ebx.b = 1

int32_t var_8_1 = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1] -= 1
    
    if (not(cond:0_1))
        (**edi)(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 4))()

int32_t var_8_2 = 1

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (**esi)(eax_2)
        int32_t ecx_9 = esi[2]
        esi[2] -= 1
        
        if (ecx_9 == 1)
            (*(*esi + 4))()

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
