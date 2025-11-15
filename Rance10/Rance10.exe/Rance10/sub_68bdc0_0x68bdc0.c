// 函数: sub_68bdc0
// 地址: 0x68bdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7473f2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_2 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0x4c) = 0

int32_t* ecx_1 = *(arg1 + 0x48)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x48) = 0

sub_683600(arg1 + 0x50)
int32_t* ecx_3 = *(arg1 + 0x164)

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    *(arg1 + 0x164) = 0

*(arg1 + 0x16c) = *(arg1 + 0x168)
int32_t* ecx_4 = *(arg1 + 0x150)

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    *(arg1 + 0x150) = 0

*(arg1 + 0x158) = *(arg1 + 0x154)
int32_t* ecx_5 = *(arg1 + 0x13c)

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0x13c) = 0

*(arg1 + 0x144) = *(arg1 + 0x140)
int32_t* ecx_6 = *(arg1 + 0x128)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0x128) = 0

*(arg1 + 0x130) = *(arg1 + 0x12c)
int32_t* ecx_7 = *(arg1 + 0x114)

if (ecx_7 != 0)
    (*(*ecx_7 + 8))(ecx_7)
    *(arg1 + 0x114) = 0

*(arg1 + 0x11c) = *(arg1 + 0x118)
int32_t* ecx_8 = *(arg1 + 0x100)

if (ecx_8 != 0)
    (*(*ecx_8 + 8))(ecx_8)
    *(arg1 + 0x100) = 0

*(arg1 + 0x108) = *(arg1 + 0x104)
int32_t* ecx_9 = *(arg1 + 0xec)

if (ecx_9 != 0)
    (*(*ecx_9 + 8))(ecx_9)
    *(arg1 + 0xec) = 0

*(arg1 + 0xf4) = *(arg1 + 0xf0)

if (arg1 + 0x98 != arg1 + 0xe8)
    void* ebx_1 = arg1 + 0x9c
    
    do
        int32_t* ecx_10 = *ebx_1
        
        if (ecx_10 != 0)
            (*(*ecx_10 + 8))(ecx_10)
            *ebx_1 = 0
        
        *(ebx_1 + 8) = *(ebx_1 + 4)
        ebx_1 += 0x14
    while (ebx_1 - 4 != arg1 + 0xe8)

int32_t* esi_1 = *(arg1 + 0x90)
void* i = *esi_1
i_2 = i

for (; i != esi_1; i = i_2)
    (*(**(i + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x90) + 4))
void* eax_24 = *(arg1 + 0x90)
*(eax_24 + 4) = eax_24
int32_t* eax_25 = *(arg1 + 0x90)
*eax_25 = eax_25
void* eax_26 = *(arg1 + 0x90)
int32_t var_8_2 = 0xffffffff
*(eax_26 + 8) = eax_26
*(arg1 + 0x94) = 0
void** esi_2 = *(arg1 + 0x88)
void* i_1 = *esi_2
i_2 = i_1

for (; i_1 != esi_2; i_1 = i_2)
    (*(**(i_1 + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_3 = 1
sub_42e7b0(*(*(arg1 + 0x88) + 4))
void* eax_29 = *(arg1 + 0x88)
*(eax_29 + 4) = eax_29
int32_t* eax_30 = *(arg1 + 0x88)
*eax_30 = eax_30
void* eax_31 = *(arg1 + 0x88)
*(eax_31 + 8) = eax_31
*(arg1 + 0x8c) = 0
*(arg1 + 0x34) = *(arg1 + 0x30)
void* eax_33 = arg1 + 0x18
bool cond:0 = *(eax_33 + 0x14) u< 0x10
*(eax_33 + 0x10) = 0

if (not(cond:0))
    eax_33 = *eax_33

*eax_33 = 0
int32_t var_8_4 = 2
sub_6826a0(*(*(arg1 + 0x3c) + 4))
void* eax_35 = *(arg1 + 0x3c)
*(eax_35 + 4) = eax_35
int32_t* eax_36 = *(arg1 + 0x3c)
*eax_36 = eax_36
void* result = *(arg1 + 0x3c)
int32_t var_8_5 = 0xffffffff
*(result + 8) = result
*(arg1 + 0x40) = 0
int32_t* ecx_18 = *(arg1 + 0x44)

if (ecx_18 != 0)
    result = (*(*ecx_18 + 4))(eax_2)
    *(arg1 + 0x44) = 0

*(arg1 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
