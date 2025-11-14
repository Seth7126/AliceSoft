// 函数: sub_100067a0
// 地址: 0x100067a0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_8 = arg3
int32_t var_c = arg3
int32_t* esi = arg4

if (*esi == 0x80000003)
    return 

int32_t edi
int32_t var_14_1 = edi

if (*(__getptd() + 0x80) != 0)
    void* edi_1 = __getptd() + 0x80
    int32_t eax_2 = sub_1000305a()
    
    if (*edi_1 == eax_2 || *esi == 0xe0434f4d)
        goto label_10006808
    
    int32_t* __saved_ebx_1 = arg11
    
    if (sub_1000286d(esi, arg5, arg6, arg7, arg8, arg10) == 0)
        goto label_10006808
    
    return 

label_10006808:

if (*(arg8 + 0xc) == 0)
    sub_10006d2a()
    noreturn

int32_t esi_1 = arg9
int32_t* edi_3 = sub_100029e3(arg8, arg10, esi_1, &var_8, &var_c)

while (var_8 u< var_c)
    if (esi_1 s>= *edi_3 && esi_1 s<= edi_3[1])
        void* eax_6 = (edi_3[3] << 4) + edi_3[4]
        void* ecx_1 = *(eax_6 - 0xc)
        
        if ((ecx_1 == 0 || *(ecx_1 + 8) == 0) && (*(eax_6 - 0x10) & 0x40) == 0)
            sub_10006732(arg5, edi_3, arg4, arg6, arg7, arg8, nullptr, arg10, arg11)
            esi_1 = arg9
    
    var_8 += 1
    edi_3 = &edi_3[5]
