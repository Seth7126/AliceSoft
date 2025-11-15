// 函数: sub_5c8130
// 地址: 0x5c8130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *arg1
*(arg1 + 0x10) = *(eax_3 + 0x1c)
arg1[6] = *(eax_3 + 0x24)
*(arg1 + 0x1c) = *(arg1 + 0x350)
*(arg1 + 0x2c) = *(arg1 + 0x360)
*(arg1 + 0x3c) = *(arg1 + 0x370)
*(arg1 + 0x4c) = *(arg1 + 0x380)
void* eax_5 = *arg1
int32_t xmm1 = *(eax_5 + 0x11c)
arg1[0x17] = *(eax_5 + 0x118)
arg1[0x18] = xmm1
*(arg1 + 0x64) = *(arg1 + 0x390)
*(arg1 + 0x74) = *(arg1 + 0x3a0)
*(arg1 + 0x84) = *(arg1 + 0x3b0)
*(arg1 + 0x94) = *(arg1 + 0x3c0)
__Smtx_lock_shared(&arg1[0x125])
int32_t esi = arg1[0x124]
__Smtx_unlock_shared(&arg1[0x125])
arg1[0x6e] = esi
arg1[0x6f] = arg1[0x126]
arg1[0x70] = arg1[0x127]
void* eax_8 = *arg1
int32_t var_14 = 1
arg1[0x29] = *(eax_8 + 0x184)
void* eax_10 = *arg1
int32_t ecx = *(eax_10 + 0xcc)
arg1[0x7d] = *(eax_10 + 0xc8)
arg1[0x7e] = ecx
void* esi_1 = *arg1
void** var_18
sub_42eb70(esi_1 + 0x138, &var_18, &var_14)
void** eax_12 = var_18
int32_t eax_13

if (eax_12 != *(esi_1 + 0x138))
    eax_13 = eax_12[5]
else
    eax_13 = 0

arg1[0x71] = eax_13
arg1[0x72] = *(esi_1 + 0x154)
arg1[0x73] = *(esi_1 + 0x150)
arg1[0x74] = *(esi_1 + 0x158)
arg1[0x75] = *(esi_1 + 0x98)
arg1[0x77] = *(esi_1 + 0x9c)
arg1[0x78] = *(esi_1 + 0xa0)
*(arg1 + 0x1e4) = *(esi_1 + 0xa4)
int32_t eax_18

if (*(esi_1 + 0x14c) == 0)
    eax_18 = 0
else
    eax_18 = *(esi_1 + 0x7c)

arg1[0x6d] = eax_18
void var_1c
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_1c, esi_1 + 0x188)
sub_5ca3e0(&arg1[0x7f], &var_1c)
int32_t var_8_1 = 0
void** esi_2 = var_18

if (esi_2 != 0)
    bool cond:0_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:0_1))
        (**esi_2)(eax_2)
        int32_t edi_1 = esi_2[2]
        esi_2[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi_2 + 4))()

arg1[0x81].b = arg1[0x91].b
arg1[0x82] = *(*arg1 + 0x74)
int32_t result = *(*arg1 + 0x178)

if (result s>= 0)
    if (result s<= 4)
        arg1[0x83] = result
    else if (result == 5)
        arg1[0x83] = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return result
