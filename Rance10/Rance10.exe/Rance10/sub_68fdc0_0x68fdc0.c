// 函数: sub_68fdc0
// 地址: 0x68fdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (* ebp)[0x1401]
int32_t (* var_4)[0x1401] = ebp
void* ecx = __alloca_probe(0x506c)
int32_t var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t* esi = arg2
int32_t* arg_c = arg1
int32_t* arg_14 = esi
int32_t eax_5 = (*(*esi + 0xd8))()

if (eax_5 s<= 0)
    eax_5.b = 1
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return eax_5

int32_t arg_5c[0x1401]
__builtin_memset(&arg_5c, 0, 0x5000)
int32_t edi = 0
var_8 = 0

if (eax_5 s> 0)
    var_4 = &arg_5c
    
    do
        void* eax_7 = (*(*esi + 0xdc))(edi)
        void arg_20
        void* edx_1 = &arg_20
        int32_t* ecx_5 = eax_7 + 8
        int32_t eax_8 = neg.d(eax_7)
        int32_t* eax_9 = eax_8 + &arg_20
        int32_t i_1 = 4
        arg1 = eax_9
        void arg_1c
        int32_t eax_13
        int32_t i
        
        do
            edx_1 += 0x10
            *(edx_1 - 0x14) = ecx_5[-2]
            *(edx_1 - 0x10) = ecx_5[-1]
            *(&arg_1c + eax_8 + ecx_5) = *ecx_5
            eax_13 = ecx_5[1]
            *(eax_9 + ecx_5) = eax_13
            ecx_5 = &ecx_5[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t* var_18_2 = arg_c
        int32_t edi_2 = var_8
        
        if (sub_68f9a0(eax_13, &arg_1c, var_4, arg_c, ecx_5) == 0)
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return 0
        
        esi = arg_14
        edi = edi_2 + 1
        var_8 = edi
        var_4 = &(*var_4)[0x50]
    while (edi s< eax_5)

bool eax_16 = sub_684cb0(ecx + 0xd4, &arg_5c, *(*(ecx + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_8)
return eax_16
