// 函数: sub_4d1ab0
// 地址: 0x4d1ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bf3b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
char* eax_5 = sub_4a3390(*(arg1 + 0x40), &var_34, 1)
int32_t var_c_1 = 0
sub_511050(*(arg1 + 0x34), eax_5, 1)
int32_t var_c_2 = 0xffffffff
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

char* eax_6 = sub_4a3390(*(arg1 + 0x40), &var_34, 2)
int32_t var_c_3 = 1
sub_511050(*(arg1 + 0x34), eax_6, 2)
int32_t var_c_4 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34)

char* eax_7 = sub_4a3390(*(arg1 + 0x40), &var_34, 3)
int32_t var_c_5 = 2
sub_511050(*(arg1 + 0x34), eax_7, 3)
int32_t var_c_6 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34)

void* edx = *(arg1 + 0x40)
int32_t eax_8 = *(edx + 0x2c)
void* esi = *(edx + 0x60)
var_44 = eax_8

if (eax_8 s> 0)
    int32_t* var_38
    int32_t** eax_9 = sub_42f3d0(esi + 0x14, &var_38, &var_44)
    edx = *(arg1 + 0x40)
    var_44.b = *eax_9 != *(esi + 0x14)
else
    var_44.b = 0

int32_t ebx = arg2
void* ecx_7 = *(arg1 + 0x34)

if (arg3 != 0)
    ebx *= *(edx + 0xf8)

for (int32_t* i = *(ecx_7 + 0x28) + 4; i != *(ecx_7 + 0x2c); i = &i[1])
    (*(**i + 0x5c))(ebx)

int32_t result = sub_511420(*(arg1 + 0x34), arg4, var_44.b, *(arg1 + 0x40))
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
