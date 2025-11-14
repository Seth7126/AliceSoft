// 函数: sub_1000f5f0
// 地址: 0x1000f5f0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp
int32_t var_c = ebp
int32_t edi
int32_t var_10 = edi
int32_t* arg_c
int32_t* edi_1 = arg_c
int32_t ecx
int32_t var_4 = ecx
int32_t eax_1 = (*(*edi_1 + 0x14))(edi_1)
int32_t* esp = &var_10

if (eax_1 s< 0)
label_1000f6da:
    *esp
    esp[1]
    return eax_1

int32_t edx_2 = *(*edi_1 + 0xc)
int32_t ebx
int32_t var_14_1 = ebx
int32_t esi
int32_t var_18_1 = esi
arg_c = nullptr
int32_t var_8 = 0
int32_t ebx_1 = 0

if (edx_2(edi_1, 1, &arg_c, &var_8) == 0)
    while (true)
        int32_t* arg_14
        int32_t* ecx_2 = arg_14
        int32_t esi_1
        
        if (ecx_2 == 0)
            esi_1 = 0x80040207
        else if (arg2 == 0)
        label_1000f659:
            int32_t* var_14_3 = arg_14
            esi_1 = sub_1000f530(arg1, arg_c)
            
            if (esi_1 s< 0 && ebx_1 s>= 0 && esi_1 != 0x80004005 && esi_1 != 0x80070057
                    && esi_1 != 0x8004022a)
                ebx_1 = esi_1
        else
            if (sub_100128a0(ecx_2, arg2) != 0)
                goto label_1000f659
            
            esi_1 = 0x80040207
        
        int32_t* eax_7 = arg_14
        
        if (eax_7 != 0)
            sub_10012ab0(eax_7)
            arg_14 = nullptr
        
        if (esi_1 == 0)
            eax_1 = 0
            esp = &var_8
            goto label_1000f6da
        
        if ((*(*edi_1 + 0xc))(edi_1, 1, &arg_14, &__return_addr) != 0)
            if (ebx_1 != 0)
                return ebx_1
            
            break

return 0x80040207
