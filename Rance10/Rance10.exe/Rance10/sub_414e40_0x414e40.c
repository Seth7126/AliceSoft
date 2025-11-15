// 函数: sub_414e40
// 地址: 0x414e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
sub_414b00(arg1)
char* edx = (*(*arg4 + 8))()
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_3
    
    do
        eax_3.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&arg1[0xb], edx, ecx_1)
*arg1 = (**arg4)()
void var_30
sub_414f70(&arg1[1], sub_4197e0(&var_30, (*(*arg4 + 4))()))
int32_t __saved_edi
int32_t* esp = &__saved_edi
void var_14
sub_40cc70(&var_14)
int32_t var_18

if (var_18 u>= 0x10)
    void* var_2c
    sub_403160(var_2c, var_18 + 1, 1)
    esp = &__saved_edi

if (arg5 == 0)
    int32_t eax_9
    eax_9.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_34)
    return eax_9

int32_t __saved_ebx

switch ((**arg4)())
    case nullptr
        sub_415180(arg1, (*(*arg4 + 0x1c))(arg5))
        esp = &__saved_edi
    case 1
        sub_4153a0(arg1, (*(*arg4 + 0x20))((*(*arg4 + 0x1c))(arg5, 0)), arg3, arg2)
        esp = &__saved_ebx
    case 2
        long double x87_r0
        sub_415040(arg1, x87_r0, arg4)
        esp = &__saved_edi
    case 3
        sub_4153a0(arg1, (*(*arg4 + 0x20))((*(*arg4 + 0x1c))(arg5, 1)), arg3, arg2)
        esp = &__saved_ebx

int32_t* eax_12
eax_12.b = arg1[0x1e].b
*esp
esp[1]
esp[2]
esp[3]
@__security_check_cookie@4(esp[0xf] ^ &esp[4])
return eax_12
