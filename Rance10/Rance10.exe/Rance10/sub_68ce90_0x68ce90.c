// 函数: sub_68ce90
// 地址: 0x68ce90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
void* ecx = __alloca_probe(0x3014)
int32_t* var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t* arg_4
int32_t* ebx = arg_4
int32_t* arg_c
void* eax_2 = *arg_c
var_8 = ebx

if ((*(eax_2 + 0x44))() == 0)
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return 1

__builtin_memset(&arg_4, 0, 0x3000)

if (ebx == 0 || arg1 == 0)
label_68cef7:
    int32_t eax_5
    eax_5.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return eax_5

int32_t edi_1 = 0
var_4 = 0

if ((**arg1)() s> 0)
    int32_t** ebx_1 = &arg_c
    int32_t eax_20
    
    do
        int32_t edi_2 = (*(*arg1 + 4))(edi_1)
        
        if (edi_2 s< 0)
            goto label_68cef7
        
        if (edi_2 s>= (**var_8)())
            goto label_68cef7
        
        int32_t* eax_11 = (*(*var_8 + 4))(edi_2)
        edi_1 = var_4 + 1
        var_4 = edi_1
        ebx_1[-2] = *eax_11
        ebx_1[-1] = eax_11[4]
        *ebx_1 = eax_11[8]
        ebx_1[1] = eax_11[0xc]
        ebx_1[2] = eax_11[1]
        ebx_1[3] = eax_11[5]
        ebx_1[4] = eax_11[9]
        ebx_1[5] = eax_11[0xd]
        ebx_1[6] = eax_11[2]
        ebx_1[7] = eax_11[6]
        ebx_1[8] = eax_11[0xa]
        ebx_1[9] = eax_11[0xe]
        ebx_1 = &ebx_1[0xc]
        eax_20 = (**arg1)()
    while (edi_1 s< eax_20)

bool cond:0 = sub_684cb0(ecx + 0x110, &arg_4, *(*(ecx + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_8)
return cond:0
