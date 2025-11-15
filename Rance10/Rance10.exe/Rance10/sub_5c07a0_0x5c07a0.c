// 函数: sub_5c07a0
// 地址: 0x5c07a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t* esi = *(edi + 0x40)
*(edi + 0x40) = 0
*(edi + 0x3c) = 0
int32_t var_8_1 = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        arg1 = (**esi)(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            arg1 = (*(*esi + 4))()

int32_t* esi_1 = *(edi + 0x38)
*(edi + 0x38) = 0
*(edi + 0x34) = 0
int32_t var_8_2 = 1

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        arg1 = (**esi_1)(eax_2)
        int32_t ebx_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (ebx_1 == 1)
            arg1 = (*(*esi_1 + 4))()

void* var_28 = var_14
void* var_2c = arg1
Concurrency::details::Etw::Etw(*(edi + 0x28), *(edi + 0x2c))
int32_t result = *(edi + 0x28)
*(edi + 0x2c) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
