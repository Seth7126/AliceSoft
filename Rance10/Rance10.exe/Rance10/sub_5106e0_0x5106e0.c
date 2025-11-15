// 函数: sub_5106e0
// 地址: 0x5106e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0xa]

if (ecx != 0xffffffff)
    sub_492c40(ecx)
    arg1[0xa] = 0xffffffff

bool cond:0 = arg1[0x10] u< 0x10
void* esi = &arg1[0xb]
*(esi + 0x10) = 0
char* eax_3

if (cond:0)
    eax_3 = esi
else
    eax_3 = *esi

void* edi = &arg1[0x11]
*eax_3 = 0
int32_t eax_4 = *(edi + 0x14)

if (eax_4 u>= 0x10)
    sub_403160(*edi, eax_4 + 1, 1)

*(edi + 0x14) = 0xf
bool cond:1 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:1))
    edi = *edi

*edi = 0
int32_t eax_6 = *(esi + 0x14)

if (eax_6 u>= 0x10)
    sub_403160(*esi, eax_6 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:2 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:2))
    esi = *esi

*esi = 0
int32_t* eax_8 = arg1[8]
int32_t* var_28 = eax_8
sub_513f00(&arg1[8], &var_14, *eax_8)
sub_403160(arg1[8], 1, 0x14)
int32_t* eax_9 = arg1[6]
int32_t* var_28_1 = eax_9
sub_44dce0(&arg1[6], &var_14, *eax_9)
sub_403160(arg1[6], 1, 0x28)
int32_t* eax_10 = arg1[4]
int32_t* var_28_2 = eax_10
sub_44dce0(&arg1[4], &var_14, *eax_10)
sub_403160(arg1[4], 1, 0x28)
int32_t* eax_11 = arg1[2]
int32_t* var_28_3 = eax_11
sub_44dce0(&arg1[2], &var_14, *eax_11)
sub_403160(arg1[2], 1, 0x28)
int32_t* eax_12 = *arg1
int32_t* var_28_4 = eax_12
sub_456ff0(arg1, &var_14, *eax_12)
int32_t result = sub_403160(*arg1, 1, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
