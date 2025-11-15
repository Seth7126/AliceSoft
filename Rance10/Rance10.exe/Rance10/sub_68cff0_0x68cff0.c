// 函数: sub_68cff0
// 地址: 0x68cff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4_1 = ebp
void* ecx = __alloca_probe(0x1138)
void var_10
int32_t eax_1 = __security_cookie ^ &var_10
int32_t* esi = arg2
int32_t* arg_10 = esi
int32_t (* eax_5)[0x401] = (*(*esi + 0xd8))()

if (eax_5 s<= 0)
    eax_5.b = 1
    @__security_check_cookie@4(eax_1 ^ &var_10)
    return eax_5

int32_t arg_120[0x401]
__builtin_memset(&arg_120, 0, 0x1000)
int32_t* edi = arg1
int32_t arg_60
void arg_a0
int128_t* eax_13 = sub_6cad30(&arg_60, (*(*edi + 0xc))(sub_6cad30(&arg_a0, (*(*edi + 0x18))())))
void arg_e0
sub_6cb020(eax_13, eax_13, &arg_e0)
void* __return_addr_1 = nullptr
__return_addr = nullptr

if (eax_5 s> 0)
    int32_t (* var_4)[0x401] = &arg_120
    
    do
        void* eax_16 = (*(*esi + 0xdc))(__return_addr_1)
        void arg_a4
        void* edx_1 = &arg_a4
        void* ecx_10 = eax_16 + 8
        int32_t eax_17 = neg.d(eax_16)
        void* edi_1 = &arg_a0 + eax_17
        void* arg_c = edi_1
        int32_t i_1 = 4
        int32_t i
        
        do
            edx_1 += 0x10
            *(edx_1 - 0x14) = *(ecx_10 - 8)
            ecx_10 += 0x10
            *(edx_1 - 0x10) = *(ecx_10 - 0x14)
            *(edi_1 + ecx_10 - 0x10) = *(ecx_10 - 0x10)
            *(eax_17 + &arg_a4 + ecx_10 - 0x10) = *(ecx_10 - 0xc)
            edi_1 = arg_c
            i = i_1
            i_1 -= 1
        while (i != 1)
        sub_6cb020(&arg_e0, &arg_a0, &arg_60, &arg_e0)
        int32_t arg_1c = arg6
        int32_t arg_20 = arg10
        int32_t arg_24 = arg14
        int32_t arg_2c = arg7
        int32_t arg_30 = arg11
        int32_t arg_34 = arg15
        int32_t arg_3c = arg8
        int32_t arg_40 = arg12
        int32_t arg_44 = arg16
        int32_t arg_4c = arg9
        __return_addr_1 = __return_addr + 1
        esi = arg_10
        int32_t arg_50 = arg13
        int32_t arg_54 = arg17
        __return_addr = __return_addr_1
        *var_4 = arg_60.o
        *(var_4 + 0x10) = arg3.o
        *(var_4 + 0x20) = arg4.o
        *(var_4 + 0x30) = arg5.o
        var_4 = &(*var_4)[0x10]
    while (__return_addr_1 s< eax_5)

bool cond:0 = sub_684cb0(ecx + 0x124, &arg_120, *(*(ecx + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_10)
return cond:0
