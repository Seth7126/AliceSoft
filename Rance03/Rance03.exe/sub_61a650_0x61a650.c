// 函数: sub_61a650
// 地址: 0x61a650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cde58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_44
int32_t eax_2 = __security_cookie ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
var_44 = esi
int32_t __saved_edi
(*(*arg1 + 0x10))(__security_cookie ^ &__saved_edi)
int32_t eax_6 = 0
int32_t* ecx = nullptr
int32_t edx = 0
int32_t var_3c = 0
int32_t* var_38 = nullptr
int32_t var_34 = 0
int32_t i_1 = arg4
int32_t var_4 = 0

if (i_1 s> 0)
    int32_t i_2 = i_1
    int32_t i
    
    do
        if (esi u>= ecx || eax_6 u> esi)
            if (ecx == edx)
                int32_t* var_54_2 = ecx
                sub_412f20(&var_3c)
                edx = var_34
                ecx = var_38
            
            if (ecx != 0)
                *ecx = *esi
        else
            int32_t edi_2 = (esi - eax_6) s>> 2
            
            if (ecx == edx)
                int32_t* var_54_1 = ecx
                sub_412f20(&var_3c)
                edx = var_34
                ecx = var_38
                eax_6 = var_3c
            
            if (ecx != 0)
                *ecx = *(eax_6 + (edi_2 << 2))
            
            i_1 = i_2
        
        eax_6 = var_3c
        ecx = &ecx[1]
        esi = &esi[1]
        var_38 = ecx
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    i_1 = arg4
    esi = var_44

int32_t eax_9 = sub_61ad40(esi, i_1)
int128_t var_28 = zx.o(0)
var_28:4.d = 2
int32_t edi_4 = eax_9 * arg2
int64_t var_18 = 0
var_28:8.d = 1
var_28:0xc.d = 0x10000
var_28.d = edi_4
int32_t* ecx_4 = *(arg1[2] + 0x34)
int32_t result

if ((*(*ecx_4 + 0xc))(ecx_4, &var_28, 0, &arg1[3]) s>= 0)
    sub_4a6db0(&arg1[4], &var_3c)
    arg1[0xa] = edi_4
    arg1[0xb] = arg2
    int32_t eax_17
    int32_t edx_4
    edx_4:eax_17 = sx.q(arg2)
    arg1[0xc] = arg2 s/ 3
    arg1[0xe] = (eax_17 - edx_4) s>> 1
    result.b = arg5
    arg1[0xf].b = result.b
    result.b = 1
    arg1[0xd] = arg2 - 2
else
    result.b = 0

int32_t ecx_11 = var_3c
char var_29 = result.b

if (ecx_11 != 0)
    j__free(ecx_11)
    result.b = var_29

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
