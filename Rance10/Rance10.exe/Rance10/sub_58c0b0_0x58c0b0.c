// 函数: sub_58c0b0
// 地址: 0x58c0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t* edi = *(esi + 0x30)
*(esi + 0x30) = 0
*(esi + 0x2c) = 0
int32_t var_8_1 = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        arg1 = (**edi)(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            arg1 = (*(*edi + 4))()

int32_t* edi_1 = *(esi + 0x28)
*(esi + 0x28) = 0
*(esi + 0x24) = 0
int32_t var_8_2 = 1

if (edi_1 != 0)
    bool cond:1_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:1_1))
        arg1 = (**edi_1)(eax_2)
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            arg1 = (*(*edi_1 + 4))()

void* var_28 = var_14
void* var_2c = arg1
Concurrency::details::Etw::Etw(*(esi + 0x18), *(esi + 0x1c))
int32_t result = *(esi + 0x18)
*(esi + 0x1c) = result
*(esi + 0xc) = 0
*(esi + 0x10) = 0
*(esi + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
