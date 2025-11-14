// 函数: sub_61a810
// 地址: 0x61a810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cde88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_54
int32_t eax_2 = __security_cookie ^ &var_54
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_48 = esi
int32_t __saved_edi
(*(*esi + 0x10))(__security_cookie ^ &__saved_edi)
int32_t eax_8 = 0
int32_t* ecx = nullptr
int32_t edx = 0
int32_t var_38 = 0
int32_t* var_34 = nullptr
int32_t var_30 = 0
int32_t i_1 = arg4
int32_t var_4 = 0

if (i_1 s> 0)
    int32_t* esi_1 = arg3
    int32_t i_2 = i_1
    int32_t i
    
    do
        if (esi_1 u>= ecx || eax_8 u> esi_1)
            if (ecx == edx)
                int32_t* var_64_2 = ecx
                sub_412f20(&var_38)
                edx = var_30
                ecx = var_34
            
            if (ecx != 0)
                *ecx = *esi_1
        else
            int32_t edi_2 = (esi_1 - eax_8) s>> 2
            
            if (ecx == edx)
                int32_t* var_64_1 = ecx
                sub_412f20(&var_38)
                edx = var_30
                ecx = var_34
                eax_8 = var_38
            
            if (ecx != 0)
                *ecx = *(eax_8 + (edi_2 << 2))
            
            i_1 = i_2
        
        eax_8 = var_38
        ecx = &ecx[1]
        esi_1 = &esi_1[1]
        var_34 = ecx
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    esi = var_48
    i_1 = arg4

int32_t var_50 = 0
int32_t edi_4 = sub_61ad40(arg3, i_1) * arg2
var_54 = arg5
void* eax_13 = esi[2]
int128_t var_28 = zx.o(0)
var_28:4.d = 1
int64_t var_18 = 0
var_28.d = edi_4
var_28:8.d = 1
var_28:0xc.d = 0
int32_t var_4c = 0
int32_t* ecx_4 = *(eax_13 + 0x34)
int32_t result

if ((*(*ecx_4 + 0xc))(ecx_4, &var_28, &var_54, &esi[3]) s>= 0)
    sub_403540(&esi[7], edi_4)
    sub_69d850(esi[7], arg5, esi[8] - esi[7])
    sub_4a6db0(&var_48[4], &var_38)
    var_48[0xa] = edi_4
    var_48[0xb] = arg2
    var_48[0xf].w = 0x100
    int32_t eax_19
    int32_t edx_4
    edx_4:eax_19 = sx.q(arg2)
    var_48[0xc] = arg2 s/ 3
    var_48[0xe] = (eax_19 - edx_4) s>> 1
    result.b = 1
    var_48[0xd] = arg2 - 2
else
    result.b = 0

int32_t ecx_11 = var_38
char var_29 = result.b

if (ecx_11 != 0)
    j__free(ecx_11)
    result.b = var_29

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
